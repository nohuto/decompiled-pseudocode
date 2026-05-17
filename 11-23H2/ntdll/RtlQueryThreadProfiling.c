/*
 * XREFs of RtlQueryThreadProfiling @ 0x1800D69A0
 * Callers:
 *     <none>
 * Callees:
 *     ZwQueryInformationThread @ 0x1800A1350 (ZwQueryInformationThread.c)
 */

__int64 RtlQueryThreadProfiling()
{
  return ZwQueryInformationThread();
}
