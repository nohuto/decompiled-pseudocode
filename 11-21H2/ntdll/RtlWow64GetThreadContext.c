/*
 * XREFs of RtlWow64GetThreadContext @ 0x1800E7840
 * Callers:
 *     <none>
 * Callees:
 *     ZwQueryInformationThread @ 0x1800A4510 (ZwQueryInformationThread.c)
 */

__int64 RtlWow64GetThreadContext()
{
  return ZwQueryInformationThread();
}
