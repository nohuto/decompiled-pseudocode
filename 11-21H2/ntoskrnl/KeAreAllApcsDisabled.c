/*
 * XREFs of KeAreAllApcsDisabled @ 0x140281980
 * Callers:
 *     EtwpTraceImageUnloadApc @ 0x140243500 (EtwpTraceImageUnloadApc.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1402BA130 (NtWaitForWorkViaWorkerFactory.c)
 *     NtSetInformationWorkerFactory @ 0x1402D4530 (NtSetInformationWorkerFactory.c)
 *     PnpIsSafeToExamineUserModeTeb @ 0x1402E08F8 (PnpIsSafeToExamineUserModeTeb.c)
 *     sub_1403ED150 @ 0x1403ED150 (sub_1403ED150.c)
 *     IopCopyCompleteReadIrp @ 0x140417DE0 (IopCopyCompleteReadIrp.c)
 *     EtwpEnumerateAddressSpace @ 0x1406F6CA4 (EtwpEnumerateAddressSpace.c)
 *     PsCallImageNotifyRoutines @ 0x1406F84B0 (PsCallImageNotifyRoutines.c)
 *     CcGetDeviceGuid @ 0x1407460A4 (CcGetDeviceGuid.c)
 *     PerfLogImageUnload @ 0x14079D948 (PerfLogImageUnload.c)
 *     MmFlushVirtualMemory @ 0x1407F0478 (MmFlushVirtualMemory.c)
 *     ViZwCheckApcRequirement @ 0x140A95858 (ViZwCheckApcRequirement.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x1402ABBD0 (KeAreInterruptsEnabled.c)
 */

BOOLEAN KeAreAllApcsDisabled(void)
{
  return KeGetCurrentThread()->SpecialApcDisable || !(unsigned __int8)KeAreInterruptsEnabled() || KeGetCurrentIrql();
}
