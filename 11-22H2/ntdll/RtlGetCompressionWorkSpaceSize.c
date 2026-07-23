/*
 * XREFs of RtlGetCompressionWorkSpaceSize @ 0x1800842A0
 * Callers:
 *     EtwpInitializeCompression @ 0x180125158 (EtwpInitializeCompression.c)
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
