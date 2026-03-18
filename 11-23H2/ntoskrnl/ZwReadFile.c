/*
 * XREFs of ZwReadFile @ 0x14041AE20
 * Callers:
 *     CmpDoFileRead @ 0x140207B68 (CmpDoFileRead.c)
 *     RtlInitializeBootStatDataCache @ 0x1403A9C24 (RtlInitializeBootStatDataCache.c)
 *     SecureDump_LoadCertAndProvisionKey @ 0x14055E140 (SecureDump_LoadCertAndProvisionKey.c)
 *     DifZwReadFileWrapper @ 0x1405F5D20 (DifZwReadFileWrapper.c)
 *     RtlpGetSetBootStatusData @ 0x1407EC96C (RtlpGetSetBootStatusData.c)
 *     EtwpFinalizeHeader @ 0x1407F5E38 (EtwpFinalizeHeader.c)
 *     EtwpUpdateFileHeader @ 0x1407F6FF4 (EtwpUpdateFileHeader.c)
 *     EtwpRealtimeRestoreBuffer @ 0x14083FF10 (EtwpRealtimeRestoreBuffer.c)
 *     RtlCheckBootStatusIntegrity @ 0x14084D67C (RtlCheckBootStatusIntegrity.c)
 *     EtwpRealtimeRestoreState @ 0x140852208 (EtwpRealtimeRestoreState.c)
 *     RtlInitializeBootStatusDataBlackBox @ 0x14085E45C (RtlInitializeBootStatusDataBlackBox.c)
 *     CMFSystemThreadRoutine @ 0x140A02AC0 (CMFSystemThreadRoutine.c)
 *     EmInitSystem @ 0x140B55508 (EmInitSystem.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwReadFile(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID Buffer,
        ULONG Length,
        PLARGE_INTEGER ByteOffset,
        PULONG Key)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle, Event, ApcRoutine);
}
