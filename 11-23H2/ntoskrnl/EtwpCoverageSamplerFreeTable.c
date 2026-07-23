/*
 * XREFs of EtwpCoverageSamplerFreeTable @ 0x1409F3398
 * Callers:
 *     EtwpCovSampContextAddSamples @ 0x1408A8DC0 (EtwpCovSampContextAddSamples.c)
 *     EtwpCovSampHashMakeRoomAndAcquireLock @ 0x1408A976A (EtwpCovSampHashMakeRoomAndAcquireLock.c)
 *     EtwpCoverageSamplerQuery @ 0x1408AA1E8 (EtwpCoverageSamplerQuery.c)
 *     EtwpCoverageSamplerCleanup @ 0x1409F31E4 (EtwpCoverageSamplerCleanup.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpCoverageSamplerFreeTable(_QWORD *P)
{
  void *v2; // rcx

  v2 = (void *)P[3];
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x56777445u);
    P[3] = 0LL;
  }
  ExFreePoolWithTag(P, 0x56777445u);
}
