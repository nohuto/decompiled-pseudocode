/*
 * XREFs of KeAreAllApcsDisabled @ 0x140215000
 * Callers:
 *     EtwpTraceImageUnloadApc @ 0x1402107C0 (EtwpTraceImageUnloadApc.c)
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     IopCopyCompleteReadIrp @ 0x14028C3D0 (IopCopyCompleteReadIrp.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1402A91B0 (NtWaitForWorkViaWorkerFactory.c)
 *     NtSetInformationWorkerFactory @ 0x140302E90 (NtSetInformationWorkerFactory.c)
 *     PnpIsSafeToExamineUserModeTeb @ 0x14031E210 (PnpIsSafeToExamineUserModeTeb.c)
 *     sub_1403E5840 @ 0x1403E5840 (sub_1403E5840.c)
 *     PerfLogImageUnload @ 0x140697438 (PerfLogImageUnload.c)
 *     EtwpEnumerateAddressSpace @ 0x1406ADAFC (EtwpEnumerateAddressSpace.c)
 *     PsCallImageNotifyRoutines @ 0x1406AFC10 (PsCallImageNotifyRoutines.c)
 *     MmFlushVirtualMemory @ 0x1407B4258 (MmFlushVirtualMemory.c)
 *     CcGetDeviceGuid @ 0x140873530 (CcGetDeviceGuid.c)
 *     ViZwCheckApcRequirement @ 0x140AD4F08 (ViZwCheckApcRequirement.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x14022EBD0 (KeAreInterruptsEnabled.c)
 */

BOOLEAN KeAreAllApcsDisabled(void)
{
  return KeGetCurrentThread()->SpecialApcDisable || !(unsigned __int8)KeAreInterruptsEnabled() || KeGetCurrentIrql();
}
