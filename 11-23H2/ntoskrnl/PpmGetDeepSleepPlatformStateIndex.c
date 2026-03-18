/*
 * XREFs of PpmGetDeepSleepPlatformStateIndex @ 0x1405841DC
 * Callers:
 *     PopFxClearDeviceConstraints @ 0x140589280 (PopFxClearDeviceConstraints.c)
 *     PopFxEnablePlatformStates @ 0x14058A230 (PopFxEnablePlatformStates.c)
 *     PopPepInitializeVetoMasks @ 0x14059F2C4 (PopPepInitializeVetoMasks.c)
 *     PopPepUpdateDripsDeviceVetoMask @ 0x14059FE64 (PopPepUpdateDripsDeviceVetoMask.c)
 *     PopCheckResiliencyScenarios @ 0x140700E80 (PopCheckResiliencyScenarios.c)
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
