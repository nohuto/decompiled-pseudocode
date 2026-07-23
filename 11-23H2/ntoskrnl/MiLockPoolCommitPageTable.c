/*
 * XREFs of MiLockPoolCommitPageTable @ 0x1402863CC
 * Callers:
 *     MiFillPoolCommitPageTable @ 0x140285620 (MiFillPoolCommitPageTable.c)
 *     MiCommitPoolMemory @ 0x1402860C0 (MiCommitPoolMemory.c)
 * Callees:
 *     MiFastLockLeafPageTable @ 0x140237350 (MiFastLockLeafPageTable.c)
 *     MiLockLowestValidPageTable @ 0x14025A520 (MiLockLowestValidPageTable.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFillPteHierarchy @ 0x14028B180 (MiFillPteHierarchy.c)
 *     MiUnlockPageTableInternal @ 0x140319850 (MiUnlockPageTableInternal.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiLockPoolCommitPageTable(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // r15
  unsigned __int64 v5; // rbp
  int v6; // eax
  __int64 v7; // r9
  __int64 v8; // rbx
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdi
  unsigned __int64 valid; // rax
  int v14; // esi
  char v15; // al
  _OWORD v16[2]; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v17; // [rsp+80h] [rbp+8h] BYREF

  v17 = 0LL;
  v4 = *(_QWORD *)(a1 + 48);
  v5 = (__int64)(a2 << 25) >> 16;
  v6 = MiFastLockLeafPageTable(v4, v5, 0);
  v8 = v6;
  if ( v6
    && (memset(v16, 0, sizeof(v16)),
        MiFillPteHierarchy(v5, v16),
        v9 = *((_QWORD *)v16 + v8),
        v10 = *((_QWORD *)v16 + (int)v8 - 1),
        v17 = v10,
        v9) )
  {
    v11 = v9;
    if ( (_DWORD)v8 == 1 )
      goto LABEL_4;
    v14 = v8;
    if ( (_DWORD)v8 != 2 )
    {
      LODWORD(v8) = 0;
      goto LABEL_14;
    }
  }
  else
  {
    valid = MiLockLowestValidPageTable(v4, a2, &v17, v7);
    v10 = v17;
    v11 = valid;
    if ( v17 == a2 )
    {
      LODWORD(v8) = 1;
LABEL_4:
      if ( (*(_BYTE *)(a1 + 78) & 4) != 0 )
        KeBugCheckEx(0x1Au, 0x5301uLL, v5, 0LL, 0LL);
      goto LABEL_5;
    }
    if ( v17 != ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
    {
      LODWORD(v8) = 0;
      goto LABEL_13;
    }
    v14 = 2;
  }
  v15 = MI_READ_PTE_LOCK_FREE(v10);
  if ( (v15 & 1) != 0 )
  {
    if ( v15 < 0 )
      KeBugCheckEx(0x1Au, 0x5302uLL, v5, 0LL, 0LL);
    if ( (*(_BYTE *)(a1 + 78) & 4) != 0 )
      KeBugCheckEx(0x1Au, 0x5303uLL, v5, 0LL, 0LL);
  }
  LODWORD(v8) = (*(_BYTE *)(a1 + 78) & 4) != 0 ? v14 : 0;
  if ( !(_DWORD)v8 )
  {
LABEL_13:
    if ( !v11 )
      goto LABEL_5;
LABEL_14:
    MiUnlockPageTableInternal(v4, v11);
    v11 = 0LL;
  }
LABEL_5:
  *(_QWORD *)(a1 + 64) = v11;
  return (unsigned int)v8;
}
