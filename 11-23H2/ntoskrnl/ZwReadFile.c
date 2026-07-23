/*
 * XREFs of ZwReadFile @ 0x14041B1B0
 * Callers:
 *     CmpDoFileRead @ 0x140207B68 (CmpDoFileRead.c)
 *     RtlInitializeBootStatDataCache @ 0x1403A9E04 (RtlInitializeBootStatDataCache.c)
 *     SecureDump_LoadCertAndProvisionKey @ 0x14055E800 (SecureDump_LoadCertAndProvisionKey.c)
 *     DifZwReadFileWrapper @ 0x1405F6290 (DifZwReadFileWrapper.c)
 *     RtlpGetSetBootStatusData @ 0x1407ECC3C (RtlpGetSetBootStatusData.c)
 *     EtwpFinalizeHeader @ 0x1407F6108 (EtwpFinalizeHeader.c)
 *     EtwpUpdateFileHeader @ 0x1407F72C4 (EtwpUpdateFileHeader.c)
 *     EtwpRealtimeRestoreBuffer @ 0x140840210 (EtwpRealtimeRestoreBuffer.c)
 *     RtlCheckBootStatusIntegrity @ 0x14084D97C (RtlCheckBootStatusIntegrity.c)
 *     EtwpRealtimeRestoreState @ 0x140852508 (EtwpRealtimeRestoreState.c)
 *     RtlInitializeBootStatusDataBlackBox @ 0x14085E69C (RtlInitializeBootStatusDataBlackBox.c)
 *     CMFSystemThreadRoutine @ 0x140A02D50 (CMFSystemThreadRoutine.c)
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
  return KiServiceInternal(FileHandle);
}
