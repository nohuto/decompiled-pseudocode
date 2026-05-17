/*
 * XREFs of RtlpHeapTrkSyncWithDiagnoser @ 0x18010B6C4
 * Callers:
 *     RtlpHeapTrkLeakCallback @ 0x18010B3D0 (RtlpHeapTrkLeakCallback.c)
 *     RtlpHeapTrkReportResult @ 0x18010B5D0 (RtlpHeapTrkReportResult.c)
 * Callees:
 *     ZwSetEvent @ 0x18009EFB0 (ZwSetEvent.c)
 *     NtWaitForMultipleObjects @ 0x18009F940 (NtWaitForMultipleObjects.c)
 */

char RtlpHeapTrkSyncWithDiagnoser()
{
  int v0; // eax

  if ( !TrkContext || (ZwSetEvent(), v0 = NtWaitForMultipleObjects(), v0 != 1) )
  {
    byte_180185998 = 1;
    LOBYTE(v0) = 0;
  }
  return v0;
}
