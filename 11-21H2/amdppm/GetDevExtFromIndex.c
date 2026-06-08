/*
 * XREFs of GetDevExtFromIndex @ 0x1C0002270
 * Callers:
 *     InitCoreProcessorSetAffinity @ 0x1C001F8C0 (InitCoreProcessorSetAffinity.c)
 *     InitEnergyCountersOnCurrentProcessor @ 0x1C001F960 (InitEnergyCountersOnCurrentProcessor.c)
 *     UnInitEnergyCountersOnCurrentProcessor @ 0x1C001FB40 (UnInitEnergyCountersOnCurrentProcessor.c)
 *     ValidateCoordinatedLpiDependenciesProcessor @ 0x1C002E5D8 (ValidateCoordinatedLpiDependenciesProcessor.c)
 *     DeregisterKernelIdleDomains @ 0x1C002FC88 (DeregisterKernelIdleDomains.c)
 *     RegisterKernelIdleDomains @ 0x1C0032A2C (RegisterKernelIdleDomains.c)
 *     PepNotifyCoordinatedLpiStates @ 0x1C0035F7C (PepNotifyCoordinatedLpiStates.c)
 *     LpiEnumerateDependencies @ 0x1C003AFC4 (LpiEnumerateDependencies.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetDevExtFromIndex(unsigned int a1)
{
  return *((_QWORD *)&WPP_MAIN_CB.Queue.ListEntry.Blink->Flink + a1);
}
