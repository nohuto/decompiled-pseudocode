/*
 * XREFs of RtlWow64GetThreadContext @ 0x1800E79E0
 * Callers:
 *     <none>
 * Callees:
 *     ZwQueryInformationThread @ 0x1800A1350 (ZwQueryInformationThread.c)
 */

__int64 RtlWow64GetThreadContext()
{
  return ZwQueryInformationThread();
}
