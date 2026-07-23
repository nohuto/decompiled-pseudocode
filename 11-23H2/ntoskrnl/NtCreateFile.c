/*
 * XREFs of NtCreateFile @ 0x14073C7F0
 * Callers:
 *     DifNtCreateFileWrapper @ 0x1405E8370 (DifNtCreateFileWrapper.c)
 *     PfpVolumeOpenAndVerify @ 0x1406853AC (PfpVolumeOpenAndVerify.c)
 *     PfSnIsVolumeMounted @ 0x140686890 (PfSnIsVolumeMounted.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x1409BE5F0 (RtlCreateSystemVolumeInformationFolder.c)
 * Callees:
 *     IopCreateFile @ 0x14073C880 (IopCreateFile.c)
 */

NTSTATUS __stdcall NtCreateFile(
        PHANDLE FileHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PIO_STATUS_BLOCK IoStatusBlock,
        PLARGE_INTEGER AllocationSize,
        ULONG FileAttributes,
        ULONG ShareAccess,
        ULONG CreateDisposition,
        ULONG CreateOptions,
        PVOID EaBuffer,
        ULONG EaLength)
{
  return IopCreateFile(
           (int)FileHandle,
           DesiredAccess,
           (int)ObjectAttributes,
           (int)IoStatusBlock,
           (__int64)AllocationSize,
           FileAttributes,
           ShareAccess,
           CreateDisposition,
           CreateOptions,
           (__int64)EaBuffer,
           EaLength,
           0,
           0LL,
           0,
           32,
           0LL);
}
