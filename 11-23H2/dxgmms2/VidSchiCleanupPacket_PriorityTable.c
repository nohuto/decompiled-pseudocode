/*
 * XREFs of VidSchiCleanupPacket_PriorityTable @ 0x1C010A100
 * Callers:
 *     VidSchiCleanupQueuedCommand @ 0x1C0046E08 (VidSchiCleanupQueuedCommand.c)
 * Callees:
 *     VidSchiSelectContext @ 0x1C000A7A0 (VidSchiSelectContext.c)
 *     VidSchiDrainContextFromWorkerThread @ 0x1C003A750 (VidSchiDrainContextFromWorkerThread.c)
 *     VidSchiProcessPrimariesTerminationList @ 0x1C003B2A4 (VidSchiProcessPrimariesTerminationList.c)
 */

struct _VIDSCH_CONTEXT *__fastcall VidSchiCleanupPacket_PriorityTable(__int64 a1)
{
  struct _VIDSCH_CONTEXT *result; // rax

  VidSchiProcessPrimariesTerminationList(a1);
  while ( 1 )
  {
    result = VidSchiSelectContext(a1, 0);
    if ( !result )
      break;
    VidSchiDrainContextFromWorkerThread((__int64)result);
  }
  return result;
}
