/*
 * XREFs of MiUnlockPhysicalPageByVa @ 0x14061D320
 * Callers:
 *     <none>
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiProbeUnlockPage @ 0x1402CB400 (MiProbeUnlockPage.c)
 *     MiUnlockPageTableCharges @ 0x1402E2DD0 (MiUnlockPageTableCharges.c)
 *     MiGetLeafVa @ 0x1402E5CB0 (MiGetLeafVa.c)
 *     MiReleaseWalkLocks @ 0x14033D52C (MiReleaseWalkLocks.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiUnlockPhysicalPageByVa(_QWORD *a1, unsigned __int64 a2, int a3)
{
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  char v11; // di
  __int64 v12; // rsi
  unsigned __int64 v13; // r9
  unsigned __int64 LeafVa; // r10
  unsigned __int64 v15; // r8
  __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rsi
  unsigned __int64 v21; // r9
  int v22; // edi
  __int64 v23; // rbx
  __int64 v24; // r15
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // [rsp+80h] [rbp+8h] BYREF
  unsigned __int64 v28; // [rsp+88h] [rbp+10h]
  ULONG_PTR BugCheckParameter4; // [rsp+98h] [rbp+20h] BYREF

  v28 = a2;
  v6 = a1[21];
  v7 = MI_READ_PTE_LOCK_FREE(a2);
  v11 = v7;
  v27 = v7;
  v12 = 1LL;
  if ( (v7 & 1) == 0 )
  {
    if ( (v7 & 0x400) != 0 )
    {
      MiReleaseWalkLocks((__int64)a1, v8, v9, v10);
      v27 = (__int64)(a2 << 25) >> 16;
      return 2LL;
    }
    v21 = v7;
    if ( qword_140C65B40 )
    {
      if ( (v7 & 0x10) != 0 )
        v21 = v7 & 0xFFFFFFFFFFFFFFEFuLL;
      else
        v21 = v7 & ~qword_140C65B40;
    }
    v13 = (v21 >> 12) & 0xFFFFFFFFFFLL;
    goto LABEL_18;
  }
  v13 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v27) >> 12) & 0xFFFFFFFFFFLL;
  if ( a3 < 1 )
  {
LABEL_18:
    v22 = *(_DWORD *)v6 != 0 ? 0x80 : 0;
    if ( v12 )
    {
      v23 = 48 * v13 - 0x220000000000LL;
      v24 = v12;
      do
      {
        LODWORD(v27) = 1;
        BugCheckParameter4 = 0x3FFFFFFFFFLL;
        MiProbeUnlockPage(v23, v22 + 256, (__int64 *)&BugCheckParameter4, (int *)&v27);
        if ( BugCheckParameter4 != 0x3FFFFFFFFFLL )
          MiUnlockPageTableCharges(48 * BugCheckParameter4 - 0x220000000000LL, v27, v25, v26);
        v23 += 48LL;
        --v24;
      }
      while ( v24 );
    }
    *(_QWORD *)(v6 + 8) += v12;
    return 0LL;
  }
  if ( v11 < 0 )
  {
    LeafVa = MiGetLeafVa(a2);
    v15 = LeafVa;
    if ( a1[4] > LeafVa )
      v15 = a1[4];
    v16 = 1LL;
    v17 = v15 >> 12;
    do
    {
      v13 += v16 * (v17 & 0x1FF);
      v17 >>= 9;
      v16 <<= 9;
      --a3;
    }
    while ( a3 );
    v18 = LeafVa + (v16 << 12);
    v19 = a1[5] + 1LL - v15;
    if ( a1[5] + 1LL >= v18 )
      v19 = v18 - v15;
    v12 = v19 >> 12;
    goto LABEL_18;
  }
  return 0LL;
}
