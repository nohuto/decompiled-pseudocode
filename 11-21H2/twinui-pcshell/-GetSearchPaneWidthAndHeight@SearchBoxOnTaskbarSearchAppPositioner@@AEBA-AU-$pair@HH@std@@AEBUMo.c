/*
 * XREFs of ?GetSearchPaneWidthAndHeight@SearchBoxOnTaskbarSearchAppPositioner@@AEBA?AU?$pair@HH@std@@AEBUMonitorInfo@@_N@Z @ 0x1801A5DFC
 * Callers:
 *     ?GetSearchBoxOnTaskbarAppRectAndClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@AEAA?AUSearchAppSizeAndBorderInfo@@AEBUMonitorInfo@@AEBUtagRECT@@_N@Z @ 0x1801A5A7C (-GetSearchBoxOnTaskbarAppRectAndClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@AEAA-AUSea.c)
 *     ?GetTaskbarSearchBoxRect@SearchBoxOnTaskbarSearchAppPositioner@@UEAA?AURect@Foundation@Windows@winrt@@AEBUtagRECT@@@Z @ 0x1801A5EE0 (-GetTaskbarSearchBoxRect@SearchBoxOnTaskbarSearchAppPositioner@@UEAA-AURect@Foundation@Windows@w.c)
 * Callees:
 *     ?GetSharedStartSearchWindowHeight@StartSearchSharedUtils@@YANN@Z @ 0x180156DFC (-GetSharedStartSearchWindowHeight@StartSearchSharedUtils@@YANN@Z.c)
 */

int *__fastcall SearchBoxOnTaskbarSearchAppPositioner::GetSearchPaneWidthAndHeight(
        __int64 a1,
        int *a2,
        __m128i *a3,
        char a4)
{
  double v4; // xmm1_8
  int v8; // eax
  int v9; // ebx
  int v10; // r14d
  StartSearchSharedUtils *v11; // rcx
  double SharedStartSearchWindowHeight; // xmm0_8
  int v13; // eax
  int *result; // rax

  v8 = MulDiv(800, a3[3].m128i_i32[2], 96);
  v9 = a3[3].m128i_i32[2];
  v10 = v8;
  MulDiv(_mm_srli_si128(a3[16LL], 8).m128i_i32[1] - HIDWORD(a3[1].m128i_i64[0]), 96, v9);
  SharedStartSearchWindowHeight = StartSearchSharedUtils::GetSharedStartSearchWindowHeight(v11, v4);
  v13 = MulDiv((int)SharedStartSearchWindowHeight + 24, v9, 96);
  if ( a4 )
    v13 += a3[4].m128i_i32[2] - a3[4].m128i_i32[0];
  a2[1] = v13;
  result = a2;
  *a2 = v10;
  return result;
}
