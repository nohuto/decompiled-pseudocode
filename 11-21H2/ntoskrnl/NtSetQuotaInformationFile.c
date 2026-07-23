/*
 * XREFs of NtSetQuotaInformationFile @ 0x14093A0A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140935320 @ 0x140935320 (sub_140935320.c)
 */

NTSTATUS __stdcall NtSetQuotaInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID Buffer,
        ULONG Length)
{
  char v5; // [rsp+20h] [rbp-18h]

  return sub_140935320(FileHandle, (unsigned __int64)IoStatusBlock, (char *)Buffer, Length, v5);
}
