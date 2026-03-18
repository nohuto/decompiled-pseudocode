/*
 * XREFs of RtlGetCompressionWorkSpaceSize @ 0x1402F5920
 * Callers:
 *     SmDecompressBuffer @ 0x1402F57B0 (SmDecompressBuffer.c)
 *     ?StStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z @ 0x140343AE0 (-StStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z.c)
 *     ?SmCompressCtxStart@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@Z @ 0x1403A6940 (-SmCompressCtxStart@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@Z.c)
 *     EtwpInitializeCompression @ 0x1403B4558 (EtwpInitializeCompression.c)
 *     PopHiberInitializeResources @ 0x140988824 (PopHiberInitializeResources.c)
 *     EtwpInitializeCompressedWriter @ 0x1409ED44C (EtwpInitializeCompressedWriter.c)
 *     sub_140B19730 @ 0x140B19730 (sub_140B19730.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 */

NTSTATUS __stdcall RtlGetCompressionWorkSpaceSize(
        USHORT CompressionFormatAndEngine,
        PULONG CompressBufferWorkSpaceSize,
        PULONG CompressFragmentWorkSpaceSize)
{
  if ( (unsigned __int8)CompressionFormatAndEngine < 2u )
    return -1073741811;
  if ( (unsigned __int8)CompressionFormatAndEngine > 5u )
    return -1073741217;
  return ((__int64 (__fastcall *)(_WORD, PULONG, PULONG))RtlWorkSpaceProcs[(unsigned __int8)CompressionFormatAndEngine])(
           CompressionFormatAndEngine & 0xFF00,
           CompressBufferWorkSpaceSize,
           CompressFragmentWorkSpaceSize);
}
