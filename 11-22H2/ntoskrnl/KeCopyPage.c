/*
 * XREFs of KeCopyPage @ 0x140424020
 * Callers:
 *     MiInitializeImageProtos @ 0x14021A220 (MiInitializeImageProtos.c)
 *     MiCopyPage @ 0x140283CF0 (MiCopyPage.c)
 *     MiCopyDataPageToImagePage @ 0x14028B350 (MiCopyDataPageToImagePage.c)
 *     MiInitializeSystemPageTable @ 0x1402E45A8 (MiInitializeSystemPageTable.c)
 *     MiCombineInitialInstance @ 0x1402EC690 (MiCombineInitialInstance.c)
 *     MiReplacePageOfProtoPool @ 0x14061DA50 (MiReplacePageOfProtoPool.c)
 *     MiCopyKstack @ 0x14062CB50 (MiCopyKstack.c)
 *     MiSlowRotateCopy @ 0x140632FD4 (MiSlowRotateCopy.c)
 *     MiScrubPage @ 0x14065F160 (MiScrubPage.c)
 *     MiCopyMemoryPagefileData @ 0x14065FB98 (MiCopyMemoryPagefileData.c)
 *     MiValidateSectionCreate @ 0x1406ABE8C (MiValidateSectionCreate.c)
 *     MiRevertRelocatedImagePfn @ 0x1406B1250 (MiRevertRelocatedImagePfn.c)
 *     MxCopyPage @ 0x140B9A540 (MxCopyPage.c)
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
