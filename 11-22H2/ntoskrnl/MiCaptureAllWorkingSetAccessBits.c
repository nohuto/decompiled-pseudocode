/*
 * XREFs of MiCaptureAllWorkingSetAccessBits @ 0x14035E858
 * Callers:
 *     MmPerformMemoryListCommand @ 0x140A884BC (MmPerformMemoryListCommand.c)
 * Callees:
 *     MiQueueWorkingSetRequest @ 0x14035E878 (MiQueueWorkingSetRequest.c)
 */

__int64 __fastcall MiCaptureAllWorkingSetAccessBits(__int64 a1, int a2)
{
  return MiQueueWorkingSetRequest(a1, a2 != 0 ? 16 : 8);
}
