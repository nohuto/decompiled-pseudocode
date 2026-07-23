/*
 * XREFs of KeAreAllApcsDisabled @ 0x140215000
 * Callers:
 *     EtwpTraceImageUnloadApc @ 0x1402107C0 (EtwpTraceImageUnloadApc.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     IopCopyCompleteReadIrp @ 0x14028C660 (IopCopyCompleteReadIrp.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1402A9440 (NtWaitForWorkViaWorkerFactory.c)
 *     NtSetInformationWorkerFactory @ 0x140303120 (NtSetInformationWorkerFactory.c)
 *     PnpIsSafeToExamineUserModeTeb @ 0x14031E4A0 (PnpIsSafeToExamineUserModeTeb.c)
 *     sub_1403E5A20 @ 0x1403E5A20 (sub_1403E5A20.c)
 *     PerfLogImageUnload @ 0x140697438 (PerfLogImageUnload.c)
 *     EtwpEnumerateAddressSpace @ 0x1406ADB2C (EtwpEnumerateAddressSpace.c)
 *     PsCallImageNotifyRoutines @ 0x1406AFC40 (PsCallImageNotifyRoutines.c)
 *     MmFlushVirtualMemory @ 0x1407B4538 (MmFlushVirtualMemory.c)
 *     CcGetDeviceGuid @ 0x140873770 (CcGetDeviceGuid.c)
 *     ViZwCheckApcRequirement @ 0x140AD4EF8 (ViZwCheckApcRequirement.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x14022ECE0 (KeAreInterruptsEnabled.c)
 */

BOOLEAN KeAreAllApcsDisabled(void)
{
  return KeGetCurrentThread()->SpecialApcDisable || !(unsigned __int8)KeAreInterruptsEnabled() || KeGetCurrentIrql();
}
