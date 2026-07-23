/*
 * XREFs of IoCreateFile @ 0x1406CAD00
 * Callers:
 *     sub_14060DFF0 @ 0x14060DFF0 (sub_14060DFF0.c)
 *     sub_140661A80 @ 0x140661A80 (sub_140661A80.c)
 *     sub_1406CABA0 @ 0x1406CABA0 (sub_1406CABA0.c)
 *     NaptrDnsRecordConvert_1 @ 0x140801108 (NaptrDnsRecordConvert_1.c)
 *     sub_14084AA8C @ 0x14084AA8C (sub_14084AA8C.c)
 *     sub_1409D69A8 @ 0x1409D69A8 (sub_1409D69A8.c)
 *     sub_140B219F0 @ 0x140B219F0 (sub_140B219F0.c)
 * Callees:
 *     sub_1407ADB90 @ 0x1407ADB90 (sub_1407ADB90.c)
 */

NTSTATUS __stdcall IoCreateFile(
        PHANDLE FileHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PIO_STATUS_BLOCK IoStatusBlock,
        PLARGE_INTEGER AllocationSize,
        ULONG FileAttributes,
        ULONG ShareAccess,
        ULONG Disposition,
        ULONG CreateOptions,
        PVOID EaBuffer,
        ULONG EaLength,
        CREATE_FILE_TYPE CreateFileType,
        PVOID InternalParameters,
        ULONG Options)
{
  size_t Size; // [rsp+50h] [rbp-38h]

  LODWORD(Size) = EaLength;
  return sub_1407ADB90(
           (int)FileHandle,
           DesiredAccess,
           (int)ObjectAttributes,
           (int)IoStatusBlock,
           (__int64)AllocationSize,
           FileAttributes,
           ShareAccess,
           Disposition,
           CreateOptions,
           EaBuffer,
           Size,
           CreateFileType,
           (__int64)InternalParameters,
           Options,
           0,
           0LL);
}
