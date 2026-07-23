/*
 * XREFs of SepGetCurrentLogLevel @ 0x1405B8CDC
 * Callers:
 *     SeSetLearningModeObjectInformation @ 0x1405B893C (SeSetLearningModeObjectInformation.c)
 *     SepGetLearningModeObjectInformation @ 0x1405B8D08 (SepGetLearningModeObjectInformation.c)
 * Callees:
 *     <none>
 */

__int64 SepGetCurrentLogLevel()
{
  if ( KeGetCurrentIrql() )
    return 2LL;
  else
    return KeGetCurrentThread()->ApcState.InProgressFlags & 1;
}
