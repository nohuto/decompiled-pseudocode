/*
 * XREFs of RtlCompressBuffer @ 0x140244760
 * Callers:
 *     sub_14037A8BC @ 0x14037A8BC (sub_14037A8BC.c)
 *     sub_14037FDA0 @ 0x14037FDA0 (sub_14037FDA0.c)
 *     sub_1403B4AB0 @ 0x1403B4AB0 (sub_1403B4AB0.c)
 *     sub_14063499C @ 0x14063499C (sub_14063499C.c)
 *     RtlCompressChunks @ 0x1409B5F50 (RtlCompressChunks.c)
 *     sub_1409EDB30 @ 0x1409EDB30 (sub_1409EDB30.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

NTSTATUS __stdcall RtlCompressBuffer(
        USHORT CompressionFormatAndEngine,
        PUCHAR UncompressedBuffer,
        ULONG UncompressedBufferSize,
        PUCHAR CompressedBuffer,
        ULONG CompressedBufferSize,
        ULONG UncompressedChunkSize,
        PULONG FinalCompressedSize,
        PVOID WorkSpace)
{
  if ( (unsigned __int8)CompressionFormatAndEngine < 2u )
    return -1073741811;
  if ( (unsigned __int8)CompressionFormatAndEngine > 5u )
    return -1073741217;
  return sub_14042A5E0(CompressionFormatAndEngine & 0xFF00, UncompressedBuffer);
}
