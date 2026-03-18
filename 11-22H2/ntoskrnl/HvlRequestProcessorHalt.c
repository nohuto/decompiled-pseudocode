/*
 * XREFs of HvlRequestProcessorHalt @ 0x140546EF0
 * Callers:
 *     <none>
 * Callees:
 *     HvcallInitiateHypercall @ 0x1403CCD00 (HvcallInitiateHypercall.c)
 *     HvlpHvToNtStatus @ 0x14045EEB6 (HvlpHvToNtStatus.c)
 */

__int64 HvlRequestProcessorHalt()
{
  unsigned __int16 v0; // ax

  v0 = HvcallInitiateHypercall(65758);
  return HvlpHvToNtStatus(v0);
}
