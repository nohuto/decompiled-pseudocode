/*
 * XREFs of GetDevExtFromIndex @ 0x1C00071B0
 * Callers:
 *     RegisterKernelIdleDomains @ 0x1C002C298 (RegisterKernelIdleDomains.c)
 *     DeregisterKernelIdleDomains @ 0x1C002C8CC (DeregisterKernelIdleDomains.c)
 *     ValidateCoordinatedLpiDependenciesProcessor @ 0x1C00372AC (ValidateCoordinatedLpiDependenciesProcessor.c)
 *     PepNotifyCoordinatedLpiStates @ 0x1C00406AC (PepNotifyCoordinatedLpiStates.c)
 *     LpiEnumerateDependencies @ 0x1C0043618 (LpiEnumerateDependencies.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetDevExtFromIndex(unsigned int a1)
{
  return *((_QWORD *)&WPP_MAIN_CB.Queue.ListEntry.Flink->Flink + a1);
}
