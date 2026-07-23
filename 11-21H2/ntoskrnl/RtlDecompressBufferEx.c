/*
 * XREFs of RtlDecompressBufferEx @ 0x14035F780
 * Callers:
 *     sub_14035F614 @ 0x14035F614 (sub_14035F614.c)
 *     sub_140392180 @ 0x140392180 (sub_140392180.c)
 *     sub_1405F94CC @ 0x1405F94CC (sub_1405F94CC.c)
 *     sub_140AD7DE4 @ 0x140AD7DE4 (sub_140AD7DE4.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

NTSTATUS __cdecl RtlDecompressBufferEx(
        USHORT CompressionFormat,
        PUCHAR UncompressedBuffer,
        ULONG UncompressedBufferSize,
        PUCHAR CompressedBuffer,
        ULONG CompressedBufferSize,
        PULONG FinalUncompressedSize,
        PVOID WorkSpace)
{
  if ( (unsigned __int8)CompressionFormat < 2u )
    return -1073741811;
  if ( (unsigned __int8)CompressionFormat > 5u )
    return -1073741217;
  return sub_14042A5E0(UncompressedBuffer, UncompressedBufferSize);
}
