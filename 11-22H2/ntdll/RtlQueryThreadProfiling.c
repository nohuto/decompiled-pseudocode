/*
 * XREFs of RtlQueryThreadProfiling @ 0x1800D7040
 * Callers:
 *     <none>
 * Callees:
 *     ZwQueryInformationThread @ 0x18009F290 (ZwQueryInformationThread.c)
 */

__int64 RtlQueryThreadProfiling()
{
  return ZwQueryInformationThread();
}
