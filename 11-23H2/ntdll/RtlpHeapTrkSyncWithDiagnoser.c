/*
 * XREFs of RtlpHeapTrkSyncWithDiagnoser @ 0x18010CB64
 * Callers:
 *     RtlpHeapTrkLeakCallback @ 0x18010C870 (RtlpHeapTrkLeakCallback.c)
 *     RtlpHeapTrkReportResult @ 0x18010CA70 (RtlpHeapTrkReportResult.c)
 * Callees:
 *     ZwSetEvent @ 0x1800A1070 (ZwSetEvent.c)
 *     NtWaitForMultipleObjects @ 0x1800A1A00 (NtWaitForMultipleObjects.c)
 */

char RtlpHeapTrkSyncWithDiagnoser()
{
  int v0; // eax

  if ( !TrkContext || (ZwSetEvent(), v0 = NtWaitForMultipleObjects(), v0 != 1) )
  {
    byte_180188A68 = 1;
    LOBYTE(v0) = 0;
  }
  return v0;
}
