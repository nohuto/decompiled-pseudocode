/*
 * XREFs of PpmGetDeepSleepPlatformStateIndex @ 0x1405846CC
 * Callers:
 *     PopFxClearDeviceConstraints @ 0x140589770 (PopFxClearDeviceConstraints.c)
 *     PopFxEnablePlatformStates @ 0x14058A720 (PopFxEnablePlatformStates.c)
 *     PopPepInitializeVetoMasks @ 0x14059F7B4 (PopPepInitializeVetoMasks.c)
 *     PopPepUpdateDripsDeviceVetoMask @ 0x1405A0354 (PopPepUpdateDripsDeviceVetoMask.c)
 *     PopCheckResiliencyScenarios @ 0x140701090 (PopCheckResiliencyScenarios.c)
 * Callees:
 *     <none>
 */

__int64 PpmGetDeepSleepPlatformStateIndex()
{
  if ( PpmPlatformStates && *(_DWORD *)PpmPlatformStates )
    return (unsigned int)(*(_DWORD *)PpmPlatformStates - 1);
  else
    return 0xFFFFFFFFLL;
}
