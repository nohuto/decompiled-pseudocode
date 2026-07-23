/*
 * XREFs of NtDeviceIoControlFile @ 0x140730880
 * Callers:
 *     sub_140A51F50 @ 0x140A51F50 (sub_140A51F50.c)
 * Callees:
 *     sub_1407308F0 @ 0x1407308F0 (sub_1407308F0.c)
 */

NTSTATUS __stdcall NtDeviceIoControlFile(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG IoControlCode,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength)
{
  size_t Size; // [rsp+38h] [rbp-30h]
  SIZE_T Length; // [rsp+48h] [rbp-20h]

  LODWORD(Length) = OutputBufferLength;
  LODWORD(Size) = InputBufferLength;
  return sub_1407308F0(
           (int)FileHandle,
           (__int64)IoStatusBlock,
           IoControlCode,
           InputBuffer,
           Size,
           OutputBuffer,
           Length,
           1);
}
