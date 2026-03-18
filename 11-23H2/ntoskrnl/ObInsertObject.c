/*
 * XREFs of ObInsertObject @ 0x14076B590
 * Callers:
 *     SepCreateTokenEx @ 0x140229710 (SepCreateTokenEx.c)
 *     FsRtlCreateSectionForDataScan @ 0x140305100 (FsRtlCreateSectionForDataScan.c)
 *     PopPowerRequestCreateUserModeRequest @ 0x14036DE6C (PopPowerRequestCreateUserModeRequest.c)
 *     IoCreateStreamFileObjectEx2 @ 0x140767CE0 (IoCreateStreamFileObjectEx2.c)
 *     IoCreateDevice @ 0x14076AFD0 (IoCreateDevice.c)
 *     EtwpCreateUmReplyObject @ 0x14077EACC (EtwpCreateUmReplyObject.c)
 *     IopLoadDriver @ 0x1407945D8 (IopLoadDriver.c)
 *     IoCreateDriver @ 0x140810200 (IoCreateDriver.c)
 *     PopEtEnergyTrackerCreate @ 0x14085187C (PopEtEnergyTrackerCreate.c)
 *     PspAllocatePartition @ 0x140859010 (PspAllocatePartition.c)
 *     TtmpDispatchCreateEventQueue @ 0x1409A6430 (TtmpDispatchCreateEventQueue.c)
 *     TtmiCreateTerminal @ 0x1409AADA8 (TtmiCreateTerminal.c)
 *     CmpCreateRegistryRoot @ 0x140B36088 (CmpCreateRegistryRoot.c)
 *     IopInitializeBuiltinDriver @ 0x140B3DB64 (IopInitializeBuiltinDriver.c)
 *     PspInitPhase1 @ 0x140B4D1F4 (PspInitPhase1.c)
 *     PspInitializeCpuPartitionsPhase1 @ 0x140B4D4BC (PspInitializeCpuPartitionsPhase1.c)
 *     MiSectionInitialization @ 0x140B70508 (MiSectionInitialization.c)
 * Callees:
 *     ObInsertObjectEx @ 0x1407359D0 (ObInsertObjectEx.c)
 */

NTSTATUS __stdcall ObInsertObject(
        PVOID Object,
        PACCESS_STATE PassedAccessState,
        ACCESS_MASK DesiredAccess,
        ULONG ObjectPointerBias,
        PVOID *NewObject,
        PHANDLE Handle)
{
  return ObInsertObjectEx((char *)Object, PassedAccessState, DesiredAccess, ObjectPointerBias, 0, NewObject, Handle);
}
