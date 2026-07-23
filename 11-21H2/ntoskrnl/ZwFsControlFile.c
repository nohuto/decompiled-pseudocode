/*
 * XREFs of ZwFsControlFile @ 0x14041BE80
 * Callers:
 *     sub_14059D170 @ 0x14059D170 (sub_14059D170.c)
 *     sub_140620BA0 @ 0x140620BA0 (sub_140620BA0.c)
 *     RtlUnlockBootStatusData @ 0x1406D6AD0 (RtlUnlockBootStatusData.c)
 *     sub_140713F8C @ 0x140713F8C (sub_140713F8C.c)
 *     sub_1408005A0 @ 0x1408005A0 (sub_1408005A0.c)
 *     NaptrDnsRecordConvert_1 @ 0x140801108 (NaptrDnsRecordConvert_1.c)
 *     sub_1408017F8 @ 0x1408017F8 (sub_1408017F8.c)
 *     sub_1408568A0 @ 0x1408568A0 (sub_1408568A0.c)
 *     sub_1409876B8 @ 0x1409876B8 (sub_1409876B8.c)
 *     sub_1409D6CF4 @ 0x1409D6CF4 (sub_1409D6CF4.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwFsControlFile(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG FsControlCode,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength)
{
  _disable();
  __readeflags();
  return sub_140433F80(FileHandle, Event);
}
