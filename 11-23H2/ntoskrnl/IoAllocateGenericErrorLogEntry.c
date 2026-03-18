/*
 * XREFs of IoAllocateGenericErrorLogEntry @ 0x140556748
 * Callers:
 *     IopLogBlockedDriverEvent @ 0x14094524C (IopLogBlockedDriverEvent.c)
 *     PnpLogEvent @ 0x140958AB0 (PnpLogEvent.c)
 *     MiLogFailedDriverLoad @ 0x140A30284 (MiLogFailedDriverLoad.c)
 *     MiBadMemoryLogger @ 0x140A42E80 (MiBadMemoryLogger.c)
 * Callees:
 *     IopAllocateErrorLogEntry @ 0x1403C711C (IopAllocateErrorLogEntry.c)
 */

__int64 __fastcall IoAllocateGenericErrorLogEntry(char a1)
{
  return IopAllocateErrorLogEntry(0LL, 0LL, a1);
}
