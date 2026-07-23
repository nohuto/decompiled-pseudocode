/*
 * XREFs of CmSiReleaseProcessLockedPagesCharge @ 0x1402E9E4C
 * Callers:
 *     HvpViewMapAcquireChargesAndLockViewPages @ 0x140689A3C (HvpViewMapAcquireChargesAndLockViewPages.c)
 *     HvpViewMapCreateViewsForRegion @ 0x140689C78 (HvpViewMapCreateViewsForRegion.c)
 *     HvpViewMapCreateView @ 0x140689F1C (HvpViewMapCreateView.c)
 *     HvpViewMapDeleteViewTreeNode @ 0x14068F7D4 (HvpViewMapDeleteViewTreeNode.c)
 *     HvpViewMapMakeViewRangeCOWByCaller @ 0x14070B254 (HvpViewMapMakeViewRangeCOWByCaller.c)
 *     HvpViewMapPromoteRangeToMapping @ 0x14074FC60 (HvpViewMapPromoteRangeToMapping.c)
 *     HvpMappedViewConvertRegionFromLockedToCOWByPolicy @ 0x1407C3914 (HvpMappedViewConvertRegionFromLockedToCOWByPolicy.c)
 *     HvpViewMapMakeViewRangeUnCOWByPolicy @ 0x140829888 (HvpViewMapMakeViewRangeUnCOWByPolicy.c)
 *     HvpViewMapMakeViewRangeInvalid @ 0x140885870 (HvpViewMapMakeViewRangeInvalid.c)
 *     HvpViewMapShrinkStorage @ 0x140A1D5A8 (HvpViewMapShrinkStorage.c)
 * Callees:
 *     KiStackAttachProcess @ 0x14022D710 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x14022DAD0 (KiUnstackDetachProcess.c)
 *     MmAdjustWorkingSetSizeEx @ 0x1402E9F08 (MmAdjustWorkingSetSizeEx.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     CmSiRWLockReleaseExclusive @ 0x140747528 (CmSiRWLockReleaseExclusive.c)
 *     CmSiRWLockAcquireExclusive @ 0x14074755C (CmSiRWLockAcquireExclusive.c)
 */

__int64 __fastcall CmSiReleaseProcessLockedPagesCharge(_QWORD *a1, __int64 a2)
{
  _KPROCESS *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rbx
  int v7; // ecx
  _BYTE v9[8]; // [rsp+30h] [rbp-58h] BYREF
  $115DCDF994C6370D29323EAB0E0C9502 v10; // [rsp+38h] [rbp-50h] BYREF

  v4 = (_KPROCESS *)a1[1];
  memset(&v10, 0, sizeof(v10));
  KiStackAttachProcess(v4, 0, (__int64)&v10);
  CmSiRWLockAcquireExclusive(a1 + 2);
  v5 = a1[5];
  v6 = a1[4] - a2;
  v7 = *((_DWORD *)a1 + 8) - a2;
  v9[0] = 0;
  MmAdjustWorkingSetSizeEx(v7, v5, 0, 0, 0, (__int64)v9);
  a1[3] -= a2;
  a1[4] = v6;
  CmSiRWLockReleaseExclusive((ULONG_PTR)(a1 + 2));
  return KiUnstackDetachProcess(&v10);
}
