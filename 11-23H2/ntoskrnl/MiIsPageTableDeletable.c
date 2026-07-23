/*
 * XREFs of MiIsPageTableDeletable @ 0x1402E5B14
 * Callers:
 *     MiDeleteVa @ 0x14027A850 (MiDeleteVa.c)
 *     MiDeleteEmptyPageTable @ 0x140357E80 (MiDeleteEmptyPageTable.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x1402377D0 (MiLockPageTableInternal.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetLeafVa @ 0x1402E5CB0 (MiGetLeafVa.c)
 *     MiGetUsedPtesHandle @ 0x1402E5D00 (MiGetUsedPtesHandle.c)
 *     MiUnlockPageTableInternal @ 0x140319850 (MiUnlockPageTableInternal.c)
 */

_BOOL8 __fastcall MiIsPageTableDeletable(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rsi
  __int64 v4; // r14
  unsigned __int64 v5; // rbx
  __int64 v6; // r9
  unsigned __int64 v8; // rcx
  __int64 v9; // r9
  int v10; // ebp
  __int64 v11; // rax
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v2 = a2;
  v4 = *(_QWORD *)(a1 + 24);
  v5 = (__int64)(a2 << 25) >> 16;
  if ( (unsigned __int64)MiGetLeafVa(v5) <= 0x7FFFFFFEFFFFLL )
    return (*(_DWORD *)(MiGetUsedPtesHandle((__int64)((v5 << 25) - v6) >> 16) + 16) & 0x3FF0000) == 0;
  v12 = MI_READ_PTE_LOCK_FREE(v2);
  v8 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v12) >> 12) & 0xFFFFFFFFFFLL)
     - 0x220000000000LL;
  if ( (*(_BYTE *)(v4 + 184) & 7) == 1 && v2 >= 0xFFFFF6FB7DBED000uLL && v2 <= 0xFFFFF6FB7DBEDFFFuLL )
  {
    if ( (*(_QWORD *)(v8 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 2 )
      return 0LL;
    if ( (*(_DWORD *)a1 & 4) != 0 )
      MiLockPageTableInternal(v4, v2, 0, v9);
    else
      v2 = 0LL;
    v10 = 1;
    while ( 1 )
    {
      v11 = MI_READ_PTE_LOCK_FREE(v5);
      if ( v11 )
      {
        if ( (v11 & 1) == 0 )
          break;
      }
      v5 += 8LL;
      if ( (v5 & 0xFFF) == 0 )
        goto LABEL_4;
    }
    v10 = 0;
LABEL_4:
    if ( v2 )
      MiUnlockPageTableInternal(v4, v2);
    return v10 != 0;
  }
  return (*(_QWORD *)(v8 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1;
}
