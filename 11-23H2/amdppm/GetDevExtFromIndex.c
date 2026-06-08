/*
 * XREFs of GetDevExtFromIndex @ 0x1C0001E80
 * Callers:
 *     InitCoreProcessorSetAffinity @ 0x1C001FE70 (InitCoreProcessorSetAffinity.c)
 *     InitEnergyCountersOnCurrentProcessor @ 0x1C001FF10 (InitEnergyCountersOnCurrentProcessor.c)
 *     UnInitEnergyCountersOnCurrentProcessor @ 0x1C0020150 (UnInitEnergyCountersOnCurrentProcessor.c)
 *     ValidateCoordinatedLpiDependenciesProcessor @ 0x1C002F53C (ValidateCoordinatedLpiDependenciesProcessor.c)
 *     DeregisterKernelIdleDomains @ 0x1C0030BE8 (DeregisterKernelIdleDomains.c)
 *     RegisterKernelIdleDomains @ 0x1C003399C (RegisterKernelIdleDomains.c)
 *     PepNotifyCoordinatedLpiStates @ 0x1C0036EB0 (PepNotifyCoordinatedLpiStates.c)
 *     LpiEnumerateDependencies @ 0x1C003BF50 (LpiEnumerateDependencies.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetDevExtFromIndex(unsigned int a1)
{
  return *((_QWORD *)&WPP_MAIN_CB.Queue.ListEntry.Blink->Flink + a1);
}
