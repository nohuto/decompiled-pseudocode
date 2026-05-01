/*
 * XREFs of ?UnscaleByMonitorDPI@SearchAppSizeHelpers@@YA?AURect@Foundation@Windows@winrt@@AEBU2345@H@Z @ 0x180147D6C
 * Callers:
 *     ?GetTaskbarSearchBoxRect@TaskbarSearchAppPositioner@@UEAA?AURect@Foundation@Windows@winrt@@AEBUtagRECT@@@Z @ 0x180147C90 (-GetTaskbarSearchBoxRect@TaskbarSearchAppPositioner@@UEAA-AURect@Foundation@Windows@winrt@@AEBUt.c)
 *     ?GetTaskbarSearchBoxRect@SearchBoxOnTaskbarSearchAppPositioner@@UEAA?AURect@Foundation@Windows@winrt@@AEBUtagRECT@@@Z @ 0x1801A5EE0 (-GetTaskbarSearchBoxRect@SearchBoxOnTaskbarSearchAppPositioner@@UEAA-AURect@Foundation@Windows@w.c)
 *     ?GetTaskbarSearchButtonRect@TaskbarSearchAppPositioner@@UEAA?AURect@Foundation@Windows@winrt@@AEBUtagRECT@@@Z @ 0x1801A6B30 (-GetTaskbarSearchButtonRect@TaskbarSearchAppPositioner@@UEAA-AURect@Foundation@Windows@winrt@@AE.c)
 *     ?GetTaskbarSearchBoxRect@MiniSearchAppPositioner@@UEAA?AURect@Foundation@Windows@winrt@@AEBUtagRECT@@@Z @ 0x1803AEC40 (-GetTaskbarSearchBoxRect@MiniSearchAppPositioner@@UEAA-AURect@Foundation@Windows@winrt@@AEBUtagR.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SearchAppSizeHelpers::UnscaleByMonitorDPI(__int64 a1, _OWORD *a2, int a3)
{
  int v5; // eax
  int v6; // ecx
  __m128i v7; // xmm0
  __int64 result; // rax

  *(_OWORD *)a1 = *a2;
  v5 = MulDiv((int)*(float *)(a1 + 8), 96, a3);
  v6 = (int)*(float *)(a1 + 12);
  *(float *)(a1 + 8) = (float)v5;
  v7 = _mm_cvtsi32_si128(MulDiv(v6, 96, a3));
  result = a1;
  *(_DWORD *)(a1 + 12) = _mm_cvtepi32_ps(v7).m128_u32[0];
  return result;
}
