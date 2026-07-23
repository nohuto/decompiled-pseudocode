/*
 * XREFs of RtlDecompressBuffer @ 0x14045ECF0
 * Callers:
 *     RtlDecompressChunks @ 0x1409B60C0 (RtlDecompressChunks.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

NTSTATUS __stdcall RtlDecompressBuffer(
        USHORT CompressionFormat,
        PUCHAR UncompressedBuffer,
        ULONG UncompressedBufferSize,
        PUCHAR CompressedBuffer,
        ULONG CompressedBufferSize,
        PULONG FinalUncompressedSize)
{
  if ( (unsigned __int8)CompressionFormat < 2u )
    return -1073741811;
  if ( (unsigned __int8)CompressionFormat <= 5u )
    return sub_14042A5E0(UncompressedBuffer, UncompressedBufferSize);
  return -1073741217;
}
