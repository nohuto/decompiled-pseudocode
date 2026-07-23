/*
 * XREFs of ObCreateObjectType @ 0x14081F4D0
 * Callers:
 *     HalpDmaInitializeObjectType @ 0x14039C3CC (HalpDmaInitializeObjectType.c)
 *     CmpCreateObjectTypes @ 0x140B36BE8 (CmpCreateObjectTypes.c)
 *     WmipInitializeSecurity @ 0x140B39160 (WmipInitializeSecurity.c)
 *     PspInitializeSiloStructures @ 0x140B49810 (PspInitializeSiloStructures.c)
 *     ExpTimerInitialization @ 0x140B49970 (ExpTimerInitialization.c)
 *     IoCreateObjectTypes @ 0x140B4A2FC (IoCreateObjectTypes.c)
 *     ExpWin32Initialization @ 0x140B4A644 (ExpWin32Initialization.c)
 *     PspInitPhase0 @ 0x140B4A894 (PspInitPhase0.c)
 *     ObInitSystem @ 0x140B4B2F8 (ObInitSystem.c)
 *     DbgkpInitializePhase0 @ 0x140B4FD94 (DbgkpInitializePhase0.c)
 *     SepTokenInitialization @ 0x140B54424 (SepTokenInitialization.c)
 *     PopPowerRequestInitialize @ 0x140B64CF8 (PopPowerRequestInitialize.c)
 *     PopEtInit @ 0x140B6A7E0 (PopEtInit.c)
 *     ExpInitializeCallbacks @ 0x140B6B870 (ExpInitializeCallbacks.c)
 *     ExpKeyedEventInitialization @ 0x140B6D860 (ExpKeyedEventInitialization.c)
 *     MiSectionInitialization @ 0x140B70508 (MiSectionInitialization.c)
 *     ExpWorkerFactoryInitialization @ 0x140B72530 (ExpWorkerFactoryInitialization.c)
 *     MiInitializeSessionIds @ 0x140B7356C (MiInitializeSessionIds.c)
 *     EtwpInitializeRegistration @ 0x140B73E10 (EtwpInitializeRegistration.c)
 *     EtwpInitializeCoverageSampler @ 0x140B74030 (EtwpInitializeCoverageSampler.c)
 *     ExpMutantInitialization @ 0x140B74118 (ExpMutantInitialization.c)
 *     ExpProfileInitialization @ 0x140B74754 (ExpProfileInitialization.c)
 *     EtwpInitializeRealTimeConnection @ 0x140B74DA4 (EtwpInitializeRealTimeConnection.c)
 *     IopCreateIoRingObjectType @ 0x140B74E60 (IopCreateIoRingObjectType.c)
 *     ExpSemaphoreInitialization @ 0x140B74FA0 (ExpSemaphoreInitialization.c)
 *     ExpEventInitialization @ 0x140B75044 (ExpEventInitialization.c)
 * Callees:
 *     ObCreateObjectTypeEx @ 0x14081F4F0 (ObCreateObjectTypeEx.c)
 */

__int64 __fastcall ObCreateObjectType(const UNICODE_STRING *a1, __int64 a2, __int64 a3, __int64 a4)
{
  return ObCreateObjectTypeEx(a1, a4);
}
