/*
 * XREFs of RtlCrc32 @ 0x140464770
 * Callers:
 *     <none>
 * Callees:
 *     RtlpComputeCrcInternal @ 0x1403BE880 (RtlpComputeCrcInternal.c)
 */

DWORD __cdecl RtlCrc32(const void *Buffer, size_t Size, DWORD InitialCrc)
{
  return RtlpComputeCrcInternal((unsigned __int64)Buffer, Size, InitialCrc, (__int64)&Crc32Ctrl);
}
