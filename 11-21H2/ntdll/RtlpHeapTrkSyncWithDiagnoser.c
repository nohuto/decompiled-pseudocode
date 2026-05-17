/*
 * XREFs of RtlpHeapTrkSyncWithDiagnoser @ 0x18010B4F4
 * Callers:
 *     RtlpHeapTrkLeakCallback @ 0x18010B200 (RtlpHeapTrkLeakCallback.c)
 *     RtlpHeapTrkReportResult @ 0x18010B400 (RtlpHeapTrkReportResult.c)
 * Callees:
 *     ZwSetEvent @ 0x1800A4230 (ZwSetEvent.c)
 *     NtWaitForMultipleObjects @ 0x1800A4BC0 (NtWaitForMultipleObjects.c)
 */

char RtlpHeapTrkSyncWithDiagnoser()
{
  int v0; // eax

  if ( !TrkContext || (ZwSetEvent(), v0 = NtWaitForMultipleObjects(), v0 != 1) )
  {
    byte_18017B6F0 = 1;
    LOBYTE(v0) = 0;
  }
  return v0;
}
