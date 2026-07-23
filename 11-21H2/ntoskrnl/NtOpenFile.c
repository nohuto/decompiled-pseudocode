/*
 * XREFs of NtOpenFile @ 0x1407D8800
 * Callers:
 *     sub_140617ED0 @ 0x140617ED0 (sub_140617ED0.c)
 *     sub_1407D84EC @ 0x1407D84EC (sub_1407D84EC.c)
 *     sub_1409BB4D8 @ 0x1409BB4D8 (sub_1409BB4D8.c)
 * Callees:
 *     sub_1407ADB90 @ 0x1407ADB90 (sub_1407ADB90.c)
 */

NTSTATUS __stdcall NtOpenFile(
        PHANDLE FileHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG ShareAccess,
        ULONG OpenOptions)
{
  size_t v7; // [rsp+50h] [rbp-38h]

  LODWORD(v7) = 0;
  return sub_1407ADB90(
           FileHandle,
           DesiredAccess,
           (__int64)ObjectAttributes,
           (int *)&IoStatusBlock->0,
           0LL,
           0,
           ShareAccess,
           1u,
           OpenOptions,
           0LL,
           v7,
           0,
           0LL,
           0,
           32,
           0LL);
}
