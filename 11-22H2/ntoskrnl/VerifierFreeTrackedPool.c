/*
 * XREFs of VerifierFreeTrackedPool @ 0x1405CFBF0
 * Callers:
 *     ExFreeHeapPool @ 0x140322ED0 (ExFreeHeapPool.c)
 *     ExpFreeHeapSpecialPool @ 0x14060F118 (ExpFreeHeapSpecialPool.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x140ACE284 (VerifierBugCheckIfAppropriate.c)
 *     ViFreeTrackedPool @ 0x140AD23FC (ViFreeTrackedPool.c)
 */

__int64 __fastcall VerifierFreeTrackedPool(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  if ( !VerifierIsTrackingPool )
    VerifierBugCheckIfAppropriate(0xC2u, 0x99uLL, BugCheckParameter2, 0LL, 0LL);
  return ViFreeTrackedPool(BugCheckParameter2, BugCheckParameter3);
}
