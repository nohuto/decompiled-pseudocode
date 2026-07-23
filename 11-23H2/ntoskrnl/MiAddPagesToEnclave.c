/*
 * XREFs of MiAddPagesToEnclave @ 0x140646F60
 * Callers:
 *     MiCommitEnclavePages @ 0x140647788 (MiCommitEnclavePages.c)
 * Callees:
 *     MiMapPageInHyperSpaceWorker @ 0x14021ACA0 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14021AE84 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiUnlockWorkingSetShared @ 0x14023C5D0 (MiUnlockWorkingSetShared.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeSystemAddressValid @ 0x1402776C0 (MiMakeSystemAddressValid.c)
 *     MiLockWorkingSetShared @ 0x140283F20 (MiLockWorkingSetShared.c)
 *     MiMakeValidPte @ 0x1402CF540 (MiMakeValidPte.c)
 *     MiWorkingSetIsContended @ 0x1402E6C80 (MiWorkingSetIsContended.c)
 *     MiPageTableLockIsContended @ 0x1402E6CC0 (MiPageTableLockIsContended.c)
 *     MiUnlockPageTableInternal @ 0x140319850 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x140333F00 (KeShouldYieldProcessor.c)
 *     KeAddEnclavePage @ 0x140570778 (KeAddEnclavePage.c)
 *     MiGetPageForEnclave @ 0x140648588 (MiGetPageForEnclave.c)
 *     MiInitializeEnclavePfn @ 0x140648654 (MiInitializeEnclavePfn.c)
 *     MiReserveEnclavePages @ 0x140648E90 (MiReserveEnclavePages.c)
 *     MiReturnEnclavePage @ 0x140648F5C (MiReturnEnclavePage.c)
 *     MiWriteEnclavePte @ 0x1406490D8 (MiWriteEnclavePte.c)
 *     MiReturnReservedEnclavePages @ 0x140AAD520 (MiReturnReservedEnclavePages.c)
 */

__int64 __fastcall MiAddPagesToEnclave(__int64 a1, unsigned __int64 a2, ULONG_PTR a3, ULONG_PTR a4, unsigned int a5)
{
  ULONG_PTR v5; // r14
  unsigned __int64 v6; // rbx
  __int64 result; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 *v10; // rsi
  __int64 v11; // rcx
  unsigned __int64 v12; // rax
  int v13; // r9d
  int v14; // r10d
  void *v15; // rcx
  char v16; // cl
  char v17; // al
  unsigned __int64 v18; // rdi
  __int64 v19; // r12
  unsigned __int8 v20; // r13
  ULONG_PTR v21; // rax
  unsigned __int64 v22; // rax
  __int64 PageForEnclave; // r13
  unsigned __int64 v24; // rbx
  int v25; // r12d
  __int64 v26; // r8
  char v27; // [rsp+30h] [rbp-78h]
  int v28; // [rsp+34h] [rbp-74h] BYREF
  unsigned int v29; // [rsp+38h] [rbp-70h]
  __int64 v30; // [rsp+40h] [rbp-68h]
  __int64 v31; // [rsp+48h] [rbp-60h]
  __int64 v32; // [rsp+50h] [rbp-58h]
  __int64 v33; // [rsp+58h] [rbp-50h]
  unsigned __int8 v34; // [rsp+B0h] [rbp+8h]
  unsigned __int64 v35; // [rsp+B8h] [rbp+10h]

  v28 = 0;
  v5 = a3;
  v6 = a2;
  if ( (*(_DWORD *)(a1 + 64) & 2) != 0 && (*(_DWORD *)(a1 + 72) & 1) == 0 )
    return 3221225496LL;
  v9 = 0LL;
  v10 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[26];
  v11 = *(_QWORD *)(qword_140C673C8 + 8LL * *((unsigned __int16 *)v10 + 87));
  v12 = *(_QWORD *)(a1 + 104);
  v31 = v11;
  if ( v12 >= a2 || (v9 = a2 - v12, result = MiReserveEnclavePages(a1, v11, a2 - v12), (int)result >= 0) )
  {
    v13 = *(_DWORD *)(a1 + 64) & 2;
    v14 = 4;
    v15 = 0LL;
    if ( !v13 )
      v15 = qword_140C69718;
    v32 = (__int64)v15;
    v16 = (a5 >> 1) & 2 | 0x35;
    if ( (a5 & 2) == 0 )
      v16 = (a5 >> 1) & 2 | 0x31;
    if ( !v13 )
      v14 = a5;
    v29 = v14;
    v17 = v16 | 0x40;
    if ( !v13 )
      v17 = v16;
    v27 = v17;
    v18 = 0LL;
    v33 = (__int64)(*(_QWORD *)(a1 + 80) << 25) >> 16;
    v19 = (__int64)(v5 << 25) >> 16;
    v30 = v19;
    v20 = MiLockWorkingSetShared((__int64)v10);
    v34 = v20;
    v21 = a3;
    if ( a3 > a4 )
    {
LABEL_42:
      v25 = 0;
      goto LABEL_43;
    }
    while ( (v5 & 0x78) == 0 && v5 != v21 )
    {
      if ( MiWorkingSetIsContended((__int64)v10) || KeShouldYieldProcessor() )
      {
        if ( v18 )
LABEL_23:
          MiUnlockPageTableInternal((__int64)v10, v18);
        MiUnlockWorkingSetShared((__int64)v10, v20);
        MiLockWorkingSetShared((__int64)v10);
        goto LABEL_28;
      }
      if ( v18 )
      {
        if ( (unsigned int)MiPageTableLockIsContended((__int64)v10, v18) )
          goto LABEL_23;
        goto LABEL_26;
      }
LABEL_28:
      v18 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiMakeSystemAddressValid(v5, 0LL, (*(_DWORD *)(a1 + 48) >> 12) & 0x7F, v20, 0);
LABEL_29:
      if ( (MI_READ_PTE_LOCK_FREE(v5) & 1) == 0 )
      {
        v22 = v9 - 1;
        if ( v9 != v6 )
          v22 = v9;
        v35 = v6 - 1;
        v9 = v22;
        PageForEnclave = MiGetPageForEnclave(a1, v31);
        v24 = MiMapPageInHyperSpaceWorker(PageForEnclave, 0LL, 0x80000000);
        v25 = KeAddEnclavePage(v33, v32, v24, v19, v27, &v28);
        MiUnmapPageInHyperSpaceWorker(v24, 0x11u);
        if ( v25 < 0 )
        {
          MiReturnEnclavePage(PageForEnclave);
          if ( v25 == -1073740657 )
            v25 = -1073741823;
          if ( v18 )
            MiUnlockPageTableInternal((__int64)v10, v18);
LABEL_43:
          MiUnlockWorkingSetShared((__int64)v10, v34);
          if ( v9 )
            MiReturnReservedEnclavePages(a1, v9);
          return (unsigned int)v25;
        }
        MiInitializeEnclavePfn(PageForEnclave, v5, v29);
        v26 = v29;
        LODWORD(v26) = v29 | 0x80000000;
        MiMakeValidPte(v5, PageForEnclave, v26);
        MiWriteEnclavePte(v5, 0);
        v6 = v35;
        v19 = v30;
        v20 = v34;
      }
      v19 += 4096LL;
      v5 += 8LL;
      v30 = v19;
      if ( v5 > a4 )
      {
        if ( v18 )
          MiUnlockPageTableInternal((__int64)v10, v18);
        goto LABEL_42;
      }
      v21 = a3;
    }
    if ( !v18 )
      goto LABEL_28;
LABEL_26:
    if ( (v5 & 0xFFF) != 0 )
      goto LABEL_29;
    MiUnlockPageTableInternal((__int64)v10, v18);
    goto LABEL_28;
  }
  return result;
}
