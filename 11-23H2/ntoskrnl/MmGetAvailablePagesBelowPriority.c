/*
 * XREFs of MmGetAvailablePagesBelowPriority @ 0x1402F5C8C
 * Callers:
 *     PfSnAsyncPrefetchWorker @ 0x14074DE90 (PfSnAsyncPrefetchWorker.c)
 * Callees:
 *     MiGetAvailablePagesBelowPriority @ 0x14025BD60 (MiGetAvailablePagesBelowPriority.c)
 */

__int64 __fastcall MmGetAvailablePagesBelowPriority(unsigned int a1)
{
  return MiGetAvailablePagesBelowPriority(
           *(_QWORD **)(qword_140C673C8 + 8LL * KeGetCurrentThread()->ApcState.Process[1].IdealProcessor[25]),
           a1);
}
