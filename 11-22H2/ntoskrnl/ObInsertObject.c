/*
 * XREFs of ObInsertObject @ 0x14076BAA0
 * Callers:
 *     SepCreateTokenEx @ 0x140229730 (SepCreateTokenEx.c)
 *     FsRtlCreateSectionForDataScan @ 0x140305100 (FsRtlCreateSectionForDataScan.c)
 *     PopPowerRequestCreateUserModeRequest @ 0x14036D81C (PopPowerRequestCreateUserModeRequest.c)
 *     IoCreateStreamFileObjectEx2 @ 0x1407681F0 (IoCreateStreamFileObjectEx2.c)
 *     IoCreateDevice @ 0x14076B4E0 (IoCreateDevice.c)
 *     EtwpCreateUmReplyObject @ 0x14077EFDC (EtwpCreateUmReplyObject.c)
 *     IopLoadDriver @ 0x140794AE8 (IopLoadDriver.c)
 *     IoCreateDriver @ 0x140812780 (IoCreateDriver.c)
 *     PopEtEnergyTrackerCreate @ 0x14085278C (PopEtEnergyTrackerCreate.c)
 *     PspAllocatePartition @ 0x14085A080 (PspAllocatePartition.c)
 *     TtmpDispatchCreateEventQueue @ 0x1409A64E0 (TtmpDispatchCreateEventQueue.c)
 *     TtmiCreateTerminal @ 0x1409AAE58 (TtmiCreateTerminal.c)
 *     CmpCreateRegistryRoot @ 0x140B39780 (CmpCreateRegistryRoot.c)
 *     IopInitializeBuiltinDriver @ 0x140B41264 (IopInitializeBuiltinDriver.c)
 *     PspInitPhase1 @ 0x140B54658 (PspInitPhase1.c)
 *     PspInitializeCpuPartitionsPhase1 @ 0x140B54920 (PspInitializeCpuPartitionsPhase1.c)
 *     MiSectionInitialization @ 0x140B71584 (MiSectionInitialization.c)
 * Callees:
 *     ObInsertObjectEx @ 0x140735ED0 (ObInsertObjectEx.c)
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
