/*
 * XREFs of KeCopyPage @ 0x1404246E0
 * Callers:
 *     MiInitializeImageProtos @ 0x14021A200 (MiInitializeImageProtos.c)
 *     MiCopyPage @ 0x140283E10 (MiCopyPage.c)
 *     MiCopyDataPageToImagePage @ 0x14028B470 (MiCopyDataPageToImagePage.c)
 *     MiInitializeSystemPageTable @ 0x1402E45A8 (MiInitializeSystemPageTable.c)
 *     MiCombineInitialInstance @ 0x1402EC690 (MiCombineInitialInstance.c)
 *     MiReplacePageOfProtoPool @ 0x14061D9E0 (MiReplacePageOfProtoPool.c)
 *     MiCopyKstack @ 0x14062CAE0 (MiCopyKstack.c)
 *     MiSlowRotateCopy @ 0x140632F64 (MiSlowRotateCopy.c)
 *     MiScrubPage @ 0x14065F0F0 (MiScrubPage.c)
 *     MiCopyMemoryPagefileData @ 0x14065FB28 (MiCopyMemoryPagefileData.c)
 *     MiValidateSectionCreate @ 0x1406ABE8C (MiValidateSectionCreate.c)
 *     MiRevertRelocatedImagePfn @ 0x1406B1250 (MiRevertRelocatedImagePfn.c)
 *     MxCopyPage @ 0x140B99540 (MxCopyPage.c)
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
