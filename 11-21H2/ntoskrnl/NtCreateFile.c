/*
 * XREFs of NtCreateFile @ 0x1407E0BC0
 * Callers:
 *     sub_140617C10 @ 0x140617C10 (sub_140617C10.c)
 *     sub_1406AECC0 @ 0x1406AECC0 (sub_1406AECC0.c)
 *     sub_1407E0A98 @ 0x1407E0A98 (sub_1407E0A98.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x1407F7F00 (RtlCreateSystemVolumeInformationFolder.c)
 * Callees:
 *     sub_1407ADB90 @ 0x1407ADB90 (sub_1407ADB90.c)
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
  return sub_1407ADB90(
           FileHandle,
           DesiredAccess,
           (__int64)ObjectAttributes,
           (int *)&IoStatusBlock->0,
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
