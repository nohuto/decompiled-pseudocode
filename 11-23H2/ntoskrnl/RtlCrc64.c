/*
 * XREFs of RtlCrc64 @ 0x1403BE860
 * Callers:
 *     <none>
 * Callees:
 *     RtlpComputeCrcInternal @ 0x1403BE880 (RtlpComputeCrcInternal.c)
 */

ULONGLONG __cdecl RtlCrc64(const void *Buffer, size_t Size, ULONGLONG InitialCrc)
{
  return RtlpComputeCrcInternal(Buffer, Size, InitialCrc, &Crc64Ctrl);
}
