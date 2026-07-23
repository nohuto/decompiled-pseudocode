/*
 * XREFs of VerifierFreeTrackedPool @ 0x1405D00D0
 * Callers:
 *     ExFreeHeapPool @ 0x140323340 (ExFreeHeapPool.c)
 *     ExpFreeHeapSpecialPool @ 0x14060F5F8 (ExpFreeHeapSpecialPool.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x140ACD2A4 (VerifierBugCheckIfAppropriate.c)
 *     ViFreeTrackedPool @ 0x140AD141C (ViFreeTrackedPool.c)
 */

__int64 __fastcall VerifierFreeTrackedPool(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  if ( !VerifierIsTrackingPool )
    VerifierBugCheckIfAppropriate(0xC2u, 0x99uLL, BugCheckParameter2, 0LL, 0LL);
  return ViFreeTrackedPool(BugCheckParameter2, BugCheckParameter3);
}
