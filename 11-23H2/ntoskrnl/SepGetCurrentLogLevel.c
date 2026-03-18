/*
 * XREFs of SepGetCurrentLogLevel @ 0x1405B876C
 * Callers:
 *     SeSetLearningModeObjectInformation @ 0x1405B83CC (SeSetLearningModeObjectInformation.c)
 *     SepGetLearningModeObjectInformation @ 0x1405B8798 (SepGetLearningModeObjectInformation.c)
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
