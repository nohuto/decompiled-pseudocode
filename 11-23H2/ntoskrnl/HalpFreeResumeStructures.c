/*
 * XREFs of HalpFreeResumeStructures @ 0x140A95DE4
 * Callers:
 *     HalpDispatchSystemStateTransition @ 0x14050DB94 (HalpDispatchSystemStateTransition.c)
 * Callees:
 *     HalpMmAllocCtxFree @ 0x1403A58A0 (HalpMmAllocCtxFree.c)
 */

__int64 __fastcall HalpFreeResumeStructures(__int64 a1)
{
  __int64 result; // rax

  if ( HalpHiberProcState )
  {
    result = HalpMmAllocCtxFree(a1, HalpHiberProcState);
    HalpHiberProcState = 0LL;
  }
  return result;
}
