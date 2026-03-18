/*
 * XREFs of HalpInterruptSetRemappedLineState @ 0x140504760
 * Callers:
 *     HalpTimerInitializeHypervisorTimer @ 0x1403B6700 (HalpTimerInitializeHypervisorTimer.c)
 * Callees:
 *     HalpInterruptLookupController @ 0x14031FEE0 (HalpInterruptLookupController.c)
 *     HalpInterruptSetRemappedLineStateInternal @ 0x14037C5A8 (HalpInterruptSetRemappedLineStateInternal.c)
 *     HalpInterruptSetProblemEx @ 0x14051AA08 (HalpInterruptSetProblemEx.c)
 */

__int64 __fastcall HalpInterruptSetRemappedLineState(int *a1)
{
  ULONG_PTR *v1; // rax
  unsigned int *v2; // r9
  __int64 v3; // r10

  v1 = HalpInterruptLookupController(*a1);
  if ( v1 )
    return HalpInterruptSetRemappedLineStateInternal((__int64)v1, v2, v3);
  HalpInterruptSetProblemEx(0, 17, 1, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 3268);
  return 3221225485LL;
}
