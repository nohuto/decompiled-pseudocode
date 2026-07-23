/*
 * XREFs of IoAllocateGenericErrorLogEntry @ 0x140556E08
 * Callers:
 *     IopLogBlockedDriverEvent @ 0x14094544C (IopLogBlockedDriverEvent.c)
 *     PnpLogEvent @ 0x140958CB0 (PnpLogEvent.c)
 *     MiLogFailedDriverLoad @ 0x140A30534 (MiLogFailedDriverLoad.c)
 *     MiBadMemoryLogger @ 0x140A43130 (MiBadMemoryLogger.c)
 * Callees:
 *     IopAllocateErrorLogEntry @ 0x1403C72FC (IopAllocateErrorLogEntry.c)
 */

__int64 __fastcall IoAllocateGenericErrorLogEntry(char a1)
{
  return IopAllocateErrorLogEntry(0LL, 0LL, a1);
}
