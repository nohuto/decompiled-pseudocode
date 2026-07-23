/*
 * XREFs of RtlGetCompressionWorkSpaceSize @ 0x14035F800
 * Callers:
 *     sub_140262650 @ 0x140262650 (sub_140262650.c)
 *     sub_14035F614 @ 0x14035F614 (sub_14035F614.c)
 *     sub_1403D7250 @ 0x1403D7250 (sub_1403D7250.c)
 *     sub_1403DDD90 @ 0x1403DDD90 (sub_1403DDD90.c)
 *     sub_140801D60 @ 0x140801D60 (sub_140801D60.c)
 *     sub_1409ECAFC @ 0x1409ECAFC (sub_1409ECAFC.c)
 *     sub_140AD7DE4 @ 0x140AD7DE4 (sub_140AD7DE4.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall RtlGetCompressionWorkSpaceSize(
        USHORT CompressionFormatAndEngine,
        PULONG CompressBufferWorkSpaceSize,
        PULONG CompressFragmentWorkSpaceSize)
{
  __int64 v3; // rcx

  if ( (unsigned __int8)CompressionFormatAndEngine < 2u )
    return -1073741811;
  if ( (unsigned __int8)CompressionFormatAndEngine > 5u )
    return -1073741217;
  LOWORD(v3) = CompressionFormatAndEngine & 0xFF00;
  return sub_14042A5E0(v3, CompressBufferWorkSpaceSize);
}
