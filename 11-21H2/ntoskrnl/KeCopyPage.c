/*
 * XREFs of KeCopyPage @ 0x140424FF0
 * Callers:
 *     MiFillCombinePage @ 0x14026C038 (MiFillCombinePage.c)
 *     MiCopyDataPageToImagePage @ 0x14026F180 (MiCopyDataPageToImagePage.c)
 *     MiReplacePageOfProtoPool @ 0x14026FB78 (MiReplacePageOfProtoPool.c)
 *     MiInitializeSystemPageTable @ 0x14027C784 (MiInitializeSystemPageTable.c)
 *     MiInitializeImageProtos @ 0x1402E4474 (MiInitializeImageProtos.c)
 *     MiCopyPage @ 0x1402E7D60 (MiCopyPage.c)
 *     MiCopyKstack @ 0x140590A18 (MiCopyKstack.c)
 *     MiSlowRotateCopy @ 0x1405952D8 (MiSlowRotateCopy.c)
 *     MiCopyMemoryPagefileData @ 0x140599780 (MiCopyMemoryPagefileData.c)
 *     MiScrubPage @ 0x1405C573C (MiScrubPage.c)
 *     MiValidateSectionCreate @ 0x1406B79C8 (MiValidateSectionCreate.c)
 *     MiRevertRelocatedImagePfn @ 0x1406F367C (MiRevertRelocatedImagePfn.c)
 *     MxCopyPage @ 0x140B51C0C (MxCopyPage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeCopyPage(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __m128i v5; // xmm1
  __m128i v6; // xmm2
  __m128i v7; // xmm3

  result = -4096LL;
  v3 = a2 + 4096;
  v4 = a1 + 4096;
  do
  {
    v5 = *(__m128i *)(v3 + result + 16);
    v6 = *(__m128i *)(v3 + result + 32);
    v7 = *(__m128i *)(v3 + result + 48);
    _mm_stream_si128((__m128i *)(v4 + result), *(__m128i *)(v3 + result));
    _mm_stream_si128((__m128i *)(v4 + result + 16), v5);
    _mm_stream_si128((__m128i *)(v4 + result + 32), v6);
    _mm_stream_si128((__m128i *)(v4 + result + 48), v7);
    result += 64LL;
  }
  while ( result );
  _mm_sfence();
  return result;
}
