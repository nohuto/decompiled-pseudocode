/*
 * XREFs of ObInsertObject @ 0x14076B780
 * Callers:
 *     SepCreateTokenEx @ 0x140229820 (SepCreateTokenEx.c)
 *     FsRtlCreateSectionForDataScan @ 0x140305390 (FsRtlCreateSectionForDataScan.c)
 *     PopPowerRequestCreateUserModeRequest @ 0x14036E00C (PopPowerRequestCreateUserModeRequest.c)
 *     IoCreateStreamFileObjectEx2 @ 0x140767ED0 (IoCreateStreamFileObjectEx2.c)
 *     IoCreateDevice @ 0x14076B1C0 (IoCreateDevice.c)
 *     EtwpCreateUmReplyObject @ 0x14077ECBC (EtwpCreateUmReplyObject.c)
 *     IopLoadDriver @ 0x1407947C8 (IopLoadDriver.c)
 *     IoCreateDriver @ 0x1408104D0 (IoCreateDriver.c)
 *     PopEtEnergyTrackerCreate @ 0x140851B7C (PopEtEnergyTrackerCreate.c)
 *     PspAllocatePartition @ 0x140859250 (PspAllocatePartition.c)
 *     TtmpDispatchCreateEventQueue @ 0x1409A6630 (TtmpDispatchCreateEventQueue.c)
 *     TtmiCreateTerminal @ 0x1409AAFA8 (TtmiCreateTerminal.c)
 *     CmpCreateRegistryRoot @ 0x140B36088 (CmpCreateRegistryRoot.c)
 *     IopInitializeBuiltinDriver @ 0x140B3DB64 (IopInitializeBuiltinDriver.c)
 *     PspInitPhase1 @ 0x140B4D1F4 (PspInitPhase1.c)
 *     PspInitializeCpuPartitionsPhase1 @ 0x140B4D4BC (PspInitializeCpuPartitionsPhase1.c)
 *     MiSectionInitialization @ 0x140B70508 (MiSectionInitialization.c)
 * Callees:
 *     ObInsertObjectEx @ 0x140735BC0 (ObInsertObjectEx.c)
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
