/*
 * XREFs of NtCreateFile @ 0x1407E0BC0
 * Callers:
 *     DifNtCreateFileWrapper @ 0x140617C10 (DifNtCreateFileWrapper.c)
 *     PfpVolumeOpenAndVerify @ 0x1406AECC0 (PfpVolumeOpenAndVerify.c)
 *     PfSnIsVolumeMounted @ 0x1407E0A98 (PfSnIsVolumeMounted.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x1407F7F00 (RtlCreateSystemVolumeInformationFolder.c)
 * Callees:
 *     IopCreateFile @ 0x1407ADB90 (IopCreateFile.c)
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
  size_t Size; // [rsp+50h] [rbp-38h]

  LODWORD(Size) = EaLength;
  return IopCreateFile(
           FileHandle,
           DesiredAccess,
           (_SLIST_ENTRY *)ObjectAttributes,
           (NTSTATUS *)&IoStatusBlock->0,
           (HANDLE *)AllocationSize,
           FileAttributes,
           ShareAccess,
           CreateDisposition,
           CreateOptions,
           (ULONG *)EaBuffer,
           Size,
           0,
           0LL,
           0,
           32,
           0LL);
}
