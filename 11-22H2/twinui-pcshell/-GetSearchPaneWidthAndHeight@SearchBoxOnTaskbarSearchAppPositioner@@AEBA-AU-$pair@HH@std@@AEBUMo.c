/*
 * XREFs of ?GetSearchPaneWidthAndHeight@SearchBoxOnTaskbarSearchAppPositioner@@AEBA?AU?$pair@HH@std@@AEBUMonitorInfo@@_N@Z @ 0x1801809D0
 * Callers:
 *     ?GetTaskbarSearchBoxRect@SearchBoxOnTaskbarSearchAppPositioner@@UEAA?AURect@Foundation@Windows@winrt@@AEBUtagRECT@@@Z @ 0x180052B80 (-GetTaskbarSearchBoxRect@SearchBoxOnTaskbarSearchAppPositioner@@UEAA-AURect@Foundation@Windows@w.c)
 *     ?GetSearchBoxOnTaskbarAppRectAndClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@AEAA?AUSearchAppSizeAndBorderInfo@@AEBUMonitorInfo@@AEBUtagRECT@@_N@Z @ 0x180180698 (-GetSearchBoxOnTaskbarAppRectAndClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@AEAA-AUSea.c)
 * Callees:
 *     ?GetSharedStartSearchWindowHeight@StartSearchSharedUtils@@YANN@Z @ 0x180180A8C (-GetSharedStartSearchWindowHeight@StartSearchSharedUtils@@YANN@Z.c)
 *     ?ScaleByDPI@ExperienceManagerUtils@@YAHHH@Z @ 0x18074931C (-ScaleByDPI@ExperienceManagerUtils@@YAHHH@Z.c)
 */

_DWORD *__fastcall SearchBoxOnTaskbarSearchAppPositioner::GetSearchPaneWidthAndHeight(
        __int64 a1,
        _DWORD *a2,
        __m128i *a3,
        char a4)
{
  double v4; // xmm1_8
  int v8; // eax
  int v9; // ebx
  int v10; // r14d
  StartSearchSharedUtils *v11; // rcx
  double SharedStartSearchWindowHeight; // xmm0_8
  int v13; // r8d
  int v14; // eax
  _DWORD *result; // rax

  v8 = ExperienceManagerUtils::ScaleByDPI((ExperienceManagerUtils *)0x320, a3[3].m128i_i32[2], (int)a3);
  v9 = a3[3].m128i_i32[2];
  v10 = v8;
  MulDiv(_mm_srli_si128(a3[16LL], 8).m128i_i32[1] - HIDWORD(a3[1].m128i_i64[0]), 96, v9);
  SharedStartSearchWindowHeight = StartSearchSharedUtils::GetSharedStartSearchWindowHeight(v11, v4);
  v14 = ExperienceManagerUtils::ScaleByDPI(
          (ExperienceManagerUtils *)(unsigned int)((int)SharedStartSearchWindowHeight + 24),
          v9,
          v13);
  if ( a4 )
    v14 += a3[4].m128i_i32[2] - a3[4].m128i_i32[0];
  a2[1] = v14;
  result = a2;
  *a2 = v10;
  return result;
}
