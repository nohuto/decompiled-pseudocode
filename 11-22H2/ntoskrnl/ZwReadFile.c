/*
 * XREFs of ZwReadFile @ 0x14041A760
 * Callers:
 *     CmpDoFileRead @ 0x140207B68 (CmpDoFileRead.c)
 *     RtlInitializeBootStatDataCache @ 0x1403A9534 (RtlInitializeBootStatDataCache.c)
 *     SecureDump_LoadCertAndProvisionKey @ 0x14055E1E0 (SecureDump_LoadCertAndProvisionKey.c)
 *     DifZwReadFileWrapper @ 0x1405F5DB0 (DifZwReadFileWrapper.c)
 *     RtlpGetSetBootStatusData @ 0x1407ECEEC (RtlpGetSetBootStatusData.c)
 *     EtwpFinalizeHeader @ 0x1407F64A8 (EtwpFinalizeHeader.c)
 *     EtwpUpdateFileHeader @ 0x1407F7664 (EtwpUpdateFileHeader.c)
 *     RtlInitializeBootStatusDataBlackBox @ 0x140803260 (RtlInitializeBootStatusDataBlackBox.c)
 *     EtwpRealtimeRestoreBuffer @ 0x140841CA0 (EtwpRealtimeRestoreBuffer.c)
 *     RtlCheckBootStatusIntegrity @ 0x14084E4F0 (RtlCheckBootStatusIntegrity.c)
 *     EtwpRealtimeRestoreState @ 0x140853118 (EtwpRealtimeRestoreState.c)
 *     CMFSystemThreadRoutine @ 0x140A02B70 (CMFSystemThreadRoutine.c)
 *     EmInitSystem @ 0x140B54E68 (EmInitSystem.c)
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
