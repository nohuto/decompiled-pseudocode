/*
 * XREFs of MiHardFaultPageRelease @ 0x140231A68
 * Callers:
 *     MiAddPageToInsertList @ 0x140276C78 (MiAddPageToInsertList.c)
 *     MiUnlockMdlWritePages @ 0x140334830 (MiUnlockMdlWritePages.c)
 *     MiFinishHardFault @ 0x140334C40 (MiFinishHardFault.c)
 *     MmUnmapViewInSystemCache @ 0x140335870 (MmUnmapViewInSystemCache.c)
 * Callees:
 *     MiHandleInPageError @ 0x140231B9C (MiHandleInPageError.c)
 *     MiInsertProtectedStandbyPage @ 0x140276D2C (MiInsertProtectedStandbyPage.c)
 *     MiChargeCommit @ 0x14032A4B0 (MiChargeCommit.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140336AD8 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiRemoveLockedPageCharge @ 0x1403377E0 (MiRemoveLockedPageCharge.c)
 *     MiIsPfnCommitNotCharged @ 0x140337F0C (MiIsPfnCommitNotCharged.c)
 *     MiPfnReferenceCountIsZero @ 0x140338500 (MiPfnReferenceCountIsZero.c)
 *     MiMakeFaultPfnActive @ 0x140339240 (MiMakeFaultPfnActive.c)
 *     MiSwapHardFaultPage @ 0x1405C4C94 (MiSwapHardFaultPage.c)
 */

__int64 __fastcall MiHardFaultPageRelease(__int64 *a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v3; // rbx
  __int64 v5; // rax
  __int64 v6; // rdx
  char v7; // cl
  __int64 v8; // rbp
  __int64 result; // rax
  __int64 v10; // rcx

  v2 = *a1;
  v3 = a2;
  v5 = *(_QWORD *)(a2 + 24);
  v6 = *(_QWORD *)(*a1 + 248);
  if ( (v5 & 0x4000000000000000LL) != 0 )
    return MiRemoveLockedPageChargeAndDecRef(v3);
  v7 = *(_BYTE *)(v3 + 35);
  if ( (v7 & 0x10) != 0 )
  {
    if ( v3 == v6 && *(int *)(v2 + 80) >= 0 )
      *(_DWORD *)(v2 + 80) = -1073741761;
    goto LABEL_19;
  }
  if ( *(int *)(v2 + 80) < 0 )
  {
LABEL_18:
    *(_BYTE *)(v3 + 35) = v7 | 0x10;
LABEL_19:
    if ( ((*(_DWORD *)(v2 + 192) & 0x10) == 0 || *((_BYTE *)a1 + 41))
      && (*(_DWORD *)(v3 + 16) & 0x400LL) == 0
      && !(unsigned int)MiIsPfnCommitNotCharged(v3, v6) )
    {
      MiChargeCommit(*(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v3 + 40) >> 43) & 0x3FFLL)), 1LL, 4LL);
    }
    MiHandleInPageError(v3, v6);
    return MiRemoveLockedPageChargeAndDecRef(v3);
  }
  if ( a1[2] >= (unsigned __int64)a1[3] )
  {
    if ( v3 == v6 )
    {
      *((_DWORD *)a1 + 2) = -1073740748;
      v7 = *(_BYTE *)(v3 + 35);
    }
    goto LABEL_18;
  }
  if ( v3 != v6 )
    goto LABEL_12;
  v8 = *(_QWORD *)(v2 + 104);
  if ( v8 )
  {
    MiSwapHardFaultPage(*(_QWORD *)(v2 + 232), v3, *(_QWORD *)(v2 + 104));
    *(_QWORD *)(v2 + 104) = 0LL;
    v6 = v8;
    v3 = v8;
    *(_QWORD *)(v2 + 248) = v8;
  }
  *((_BYTE *)a1 + 40) = 1;
  if ( v3 == v6 && *((int *)a1 + 2) >= 0 )
    return MiMakeFaultPfnActive(a1, v3);
LABEL_12:
  result = MiRemoveLockedPageCharge(v3);
  if ( (_DWORD)result )
  {
    v10 = a1[7];
    if ( v10 )
      return MiInsertProtectedStandbyPage(v10, v3);
    else
      return MiPfnReferenceCountIsZero(v3, 0xAAAAAAAAAAAAAAABuLL * ((v3 + 0x220000000000LL) >> 4));
  }
  return result;
}
