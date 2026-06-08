/*
 * XREFs of GetDevExtFromIndex @ 0x1C00088D0
 * Callers:
 *     DeregisterKernelIdleDomains @ 0x1C002D1B8 (DeregisterKernelIdleDomains.c)
 *     RegisterKernelIdleDomains @ 0x1C002D274 (RegisterKernelIdleDomains.c)
 *     ValidateCoordinatedLpiDependenciesProcessor @ 0x1C0038784 (ValidateCoordinatedLpiDependenciesProcessor.c)
 *     PepNotifyCoordinatedLpiStates @ 0x1C00418DC (PepNotifyCoordinatedLpiStates.c)
 *     LpiEnumerateDependencies @ 0x1C0044848 (LpiEnumerateDependencies.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetDevExtFromIndex(unsigned int a1)
{
  return *((_QWORD *)&WPP_MAIN_CB.Queue.ListEntry.Flink->Flink + a1);
}
