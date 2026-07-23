/*
 * XREFs of MiHardFaultPageRelease @ 0x140335038
 * Callers:
 *     MiFinishHardFault @ 0x1402D9590 (MiFinishHardFault.c)
 *     MiAddPageToInsertList @ 0x1402D9C60 (MiAddPageToInsertList.c)
 *     MiUnlockMdlWritePages @ 0x1402D9DC0 (MiUnlockMdlWritePages.c)
 *     MmUnmapViewInSystemCache @ 0x1402DA240 (MmUnmapViewInSystemCache.c)
 * Callees:
 *     MiChargeCommit @ 0x140276750 (MiChargeCommit.c)
 *     MiPfnReferenceCountIsZero @ 0x1402D9270 (MiPfnReferenceCountIsZero.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1402DB214 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiRemoveLockedPageCharge @ 0x1402DBDB0 (MiRemoveLockedPageCharge.c)
 *     MiIsPfnCommitNotCharged @ 0x1402DC410 (MiIsPfnCommitNotCharged.c)
 *     MiMakeFaultPfnActive @ 0x140335170 (MiMakeFaultPfnActive.c)
 *     MiInsertProtectedStandbyPage @ 0x1403352C0 (MiInsertProtectedStandbyPage.c)
 *     MiHandleInPageError @ 0x14033540C (MiHandleInPageError.c)
 *     MiSwapHardFaultPage @ 0x14066CEC8 (MiSwapHardFaultPage.c)
 */

void __fastcall MiHardFaultPageRelease(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  __int64 v5; // rbx
  __int64 v6; // rcx
  char v7; // al
  __int64 v8; // rbp
  __int64 v9; // rcx

  v3 = *a1;
  v5 = a2;
  v6 = *(_QWORD *)(*a1 + 248);
  if ( (*(_QWORD *)(a2 + 24) & 0x4000000000000000LL) != 0 )
  {
LABEL_23:
    MiRemoveLockedPageChargeAndDecRef(v5);
    return;
  }
  v7 = *(_BYTE *)(a2 + 35);
  LOBYTE(a2) = 16;
  if ( (v7 & 0x10) != 0 )
  {
    if ( v5 == v6 && *(int *)(v3 + 80) >= 0 )
      *(_DWORD *)(v3 + 80) = -1073741761;
    goto LABEL_20;
  }
  if ( *(int *)(v3 + 80) < 0 )
  {
LABEL_19:
    *(_BYTE *)(v5 + 35) = v7 | 0x10;
LABEL_20:
    if ( ((*(_DWORD *)(v3 + 192) & 0x10) == 0 || *((_BYTE *)a1 + 41))
      && (*(_DWORD *)(v5 + 16) & 0x400LL) == 0
      && !(unsigned int)MiIsPfnCommitNotCharged(v5) )
    {
      MiChargeCommit(*(_QWORD *)(qword_140C673C8 + 8 * ((*(_QWORD *)(v5 + 40) >> 43) & 0x3FFLL)), 1uLL, 4uLL);
    }
    MiHandleInPageError(v5);
    goto LABEL_23;
  }
  if ( a1[2] >= (unsigned __int64)a1[3] )
  {
    if ( v5 == v6 )
      *((_DWORD *)a1 + 2) = -1073740748;
    v7 = *(_BYTE *)(v5 + 35);
    goto LABEL_19;
  }
  if ( v5 != v6 )
    goto LABEL_33;
  v8 = *(_QWORD *)(v3 + 104);
  if ( v8 )
  {
    MiSwapHardFaultPage(*(_QWORD *)(v3 + 232), v5, *(_QWORD *)(v3 + 104));
    *(_QWORD *)(v3 + 104) = 0LL;
    v6 = v8;
    v5 = v8;
    *(_QWORD *)(v3 + 248) = v8;
  }
  *((_BYTE *)a1 + 40) = 1;
  if ( v5 == v6 && *((int *)a1 + 2) >= 0 )
  {
    MiMakeFaultPfnActive(a1, v5);
  }
  else
  {
LABEL_33:
    if ( (unsigned int)MiRemoveLockedPageCharge(v5, a2, a3) )
    {
      v9 = a1[7];
      if ( v9 )
        MiInsertProtectedStandbyPage(v9, v5);
      else
        MiPfnReferenceCountIsZero(v5, 0xAAAAAAAAAAAAAAABuLL * ((v5 + 0x220000000000LL) >> 4));
    }
  }
}
