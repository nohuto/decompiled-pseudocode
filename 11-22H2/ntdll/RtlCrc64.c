/*
 * XREFs of RtlCrc64 @ 0x180101F30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONGLONG __cdecl RtlCrc64(const void *Buffer, size_t Size, ULONGLONG InitialCrc)
{
  return RtlpComputeCrcInternal((unsigned __int64)Buffer, Size, InitialCrc, &Crc64Ctrl);
}
