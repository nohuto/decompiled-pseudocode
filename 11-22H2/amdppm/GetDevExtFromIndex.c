/*
 * XREFs of GetDevExtFromIndex @ 0x1C0001ED0
 * Callers:
 *     InitCoreProcessorSetAffinity @ 0x1C001FE70 (InitCoreProcessorSetAffinity.c)
 *     InitEnergyCountersOnCurrentProcessor @ 0x1C001FF10 (InitEnergyCountersOnCurrentProcessor.c)
 *     UnInitEnergyCountersOnCurrentProcessor @ 0x1C0020150 (UnInitEnergyCountersOnCurrentProcessor.c)
 *     ValidateCoordinatedLpiDependenciesProcessor @ 0x1C002F404 (ValidateCoordinatedLpiDependenciesProcessor.c)
 *     DeregisterKernelIdleDomains @ 0x1C0030AB0 (DeregisterKernelIdleDomains.c)
 *     RegisterKernelIdleDomains @ 0x1C003386C (RegisterKernelIdleDomains.c)
 *     PepNotifyCoordinatedLpiStates @ 0x1C0036EB8 (PepNotifyCoordinatedLpiStates.c)
 *     LpiEnumerateDependencies @ 0x1C003BF60 (LpiEnumerateDependencies.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetDevExtFromIndex(unsigned int a1)
{
  return *((_QWORD *)&WPP_MAIN_CB.Queue.ListEntry.Blink->Flink + a1);
}
