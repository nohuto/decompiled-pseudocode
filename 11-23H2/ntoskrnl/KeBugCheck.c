/*
 * XREFs of KeBugCheck @ 0x14041EDC0
 * Callers:
 *     KiDetachProcess @ 0x14022DE10 (KiDetachProcess.c)
 *     KeExpandKernelStackAndCalloutInternal @ 0x14022E7E0 (KeExpandKernelStackAndCalloutInternal.c)
 *     PspSystemThreadStartup @ 0x14030BF60 (PspSystemThreadStartup.c)
 *     KeWaitForMultipleObjects @ 0x140311430 (KeWaitForMultipleObjects.c)
 *     KiLockServiceTable @ 0x14034C070 (KiLockServiceTable.c)
 *     sub_1403E5A20 @ 0x1403E5A20 (sub_1403E5A20.c)
 *     KxStartSystemThread @ 0x140423F20 (KxStartSystemThread.c)
 *     PspThreadDelete @ 0x1407475B0 (PspThreadDelete.c)
 *     PspProcessDelete @ 0x1407612A0 (PspProcessDelete.c)
 *     CmpAddProcessorConfigurationEntry @ 0x14080CBEC (CmpAddProcessorConfigurationEntry.c)
 *     EtwCleanupSiloState @ 0x1409E1F50 (EtwCleanupSiloState.c)
 *     KiInitializeKernel @ 0x140A8BF10 (KiInitializeKernel.c)
 *     KiSetCacheInformation @ 0x140A8C660 (KiSetCacheInformation.c)
 *     KeWriteProtectProcessorState @ 0x140A91730 (KeWriteProtectProcessorState.c)
 *     KeStartAllProcessors @ 0x140B47590 (KeStartAllProcessors.c)
 *     EtwpInitialize @ 0x140B47A50 (EtwpInitialize.c)
 *     IoInitSystemPreDrivers @ 0x140B4B914 (IoInitSystemPreDrivers.c)
 *     PspInitPhase1 @ 0x140B4D1F4 (PspInitPhase1.c)
 *     Phase1InitializationIoReady @ 0x140B4DC38 (Phase1InitializationIoReady.c)
 *     Phase1InitializationDiscard @ 0x140B4FFBC (Phase1InitializationDiscard.c)
 *     InitBootProcessor @ 0x140B52774 (InitBootProcessor.c)
 *     BvgaSaveResources @ 0x140B53464 (BvgaSaveResources.c)
 *     VslRegisterBootDrivers @ 0x140B729B8 (VslRegisterBootDrivers.c)
 *     KiFatalExceptionFilter @ 0x140B73480 (KiFatalExceptionFilter.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 */

void __stdcall __noreturn KeBugCheck(ULONG BugCheckCode)
{
  ULONG_PTR v1; // rdx
  ULONG_PTR v2; // r8
  ULONG_PTR v3; // r9
  ULONG_PTR v4; // [rsp+20h] [rbp-8h]

  KeBugCheckEx(BugCheckCode, v1, v2, v3, v4);
}
