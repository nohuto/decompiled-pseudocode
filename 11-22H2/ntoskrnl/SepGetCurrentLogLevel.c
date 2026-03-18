/*
 * XREFs of SepGetCurrentLogLevel @ 0x1405B87FC
 * Callers:
 *     SeSetLearningModeObjectInformation @ 0x1405B845C (SeSetLearningModeObjectInformation.c)
 *     SepGetLearningModeObjectInformation @ 0x1405B8828 (SepGetLearningModeObjectInformation.c)
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
