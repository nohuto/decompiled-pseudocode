/*
 * XREFs of VfKeIrqlLogRaise @ 0x140AD6CB0
 * Callers:
 *     ViKeIrqlLogAndTrimMemory @ 0x140AD6DA8 (ViKeIrqlLogAndTrimMemory.c)
 *     ViIrqlExAcquireFastMutex_Exit @ 0x140AE9440 (ViIrqlExAcquireFastMutex_Exit.c)
 *     ViIrqlExTryToAcquireFastMutex_Exit @ 0x140AE9460 (ViIrqlExTryToAcquireFastMutex_Exit.c)
 * Callees:
 *     VfKeIrqlTransitionReserveLogEntry @ 0x140AC15B0 (VfKeIrqlTransitionReserveLogEntry.c)
 *     ViKeIrqlLogCommon @ 0x140AC1682 (ViKeIrqlLogCommon.c)
 */

char *__fastcall VfKeIrqlLogRaise(char a1, char a2)
{
  char *v3; // rbx

  if ( !ViIrqlTrimAndLog )
    return 0LL;
  v3 = VfKeIrqlTransitionReserveLogEntry(a1, a2);
  ViKeIrqlLogCommon((__int64)v3, 2u);
  return v3;
}
