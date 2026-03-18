/*
 * XREFs of ExpGetSystemProcessorFeaturesInformation @ 0x1409F66C4
 * Callers:
 *     ExpQuerySystemInformation @ 0x140726850 (ExpQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpGetSystemProcessorFeaturesInformation(_QWORD *a1)
{
  *a1 = KeFeatureBits;
  a1[1] = 0LL;
  a1[2] = 0LL;
  a1[3] = 0LL;
  return 0LL;
}
