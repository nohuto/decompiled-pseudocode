/*
 * XREFs of VerifierFreeTrackedPool @ 0x1405CFB60
 * Callers:
 *     ExFreeHeapPool @ 0x1403230B0 (ExFreeHeapPool.c)
 *     ExpFreeHeapSpecialPool @ 0x14060F0A8 (ExpFreeHeapSpecialPool.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x140ACD2B4 (VerifierBugCheckIfAppropriate.c)
 *     ViFreeTrackedPool @ 0x140AD142C (ViFreeTrackedPool.c)
 */

__int64 __fastcall VerifierFreeTrackedPool(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  if ( !VerifierIsTrackingPool )
    VerifierBugCheckIfAppropriate(0xC2u, 0x99uLL, BugCheckParameter2, 0LL, 0LL);
  return ViFreeTrackedPool(BugCheckParameter2, BugCheckParameter3);
}
