/*
 * XREFs of RtlWow64GetThreadContext @ 0x1800E66B0
 * Callers:
 *     <none>
 * Callees:
 *     ZwQueryInformationThread @ 0x18009F290 (ZwQueryInformationThread.c)
 */

__int64 RtlWow64GetThreadContext()
{
  return ZwQueryInformationThread();
}
