/*
 * XREFs of MiCaptureAllWorkingSetAccessBits @ 0x14035EEA8
 * Callers:
 *     MmPerformMemoryListCommand @ 0x140A884BC (MmPerformMemoryListCommand.c)
 * Callees:
 *     MiQueueWorkingSetRequest @ 0x14035EEC8 (MiQueueWorkingSetRequest.c)
 */

__int64 __fastcall MiCaptureAllWorkingSetAccessBits(__int64 a1, int a2)
{
  return MiQueueWorkingSetRequest(a1, a2 != 0 ? 16 : 8);
}
