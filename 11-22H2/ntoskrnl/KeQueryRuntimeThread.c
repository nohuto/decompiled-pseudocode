/*
 * XREFs of KeQueryRuntimeThread @ 0x14036E890
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __stdcall KeQueryRuntimeThread(PKTHREAD Thread, PULONG UserTime)
{
  *UserTime = Thread->UserTime;
  return Thread->SchedulerApc.SpareLong0;
}
