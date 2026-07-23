/*
 * XREFs of RtlGetCompressionWorkSpaceSize @ 0x180087540
 * Callers:
 *     EtwpInitializeCompression @ 0x180123718 (EtwpInitializeCompression.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlGetCompressionWorkSpaceSize(
        USHORT CompressionFormatAndEngine,
        PULONG CompressBufferWorkSpaceSize,
        PULONG CompressFragmentWorkSpaceSize)
{
  if ( (unsigned __int8)CompressionFormatAndEngine < 2u )
    return -1073741811;
  if ( (unsigned __int8)CompressionFormatAndEngine > 5u )
    return -1073741217;
  return RtlWorkSpaceProcs[(unsigned __int8)CompressionFormatAndEngine](
           CompressionFormatAndEngine & 0xFF00,
           CompressBufferWorkSpaceSize,
           CompressFragmentWorkSpaceSize);
}
