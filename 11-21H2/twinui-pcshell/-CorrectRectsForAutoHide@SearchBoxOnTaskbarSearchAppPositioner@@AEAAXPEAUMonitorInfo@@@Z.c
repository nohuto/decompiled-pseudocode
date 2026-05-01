/*
 * XREFs of ?CorrectRectsForAutoHide@SearchBoxOnTaskbarSearchAppPositioner@@AEAAXPEAUMonitorInfo@@@Z @ 0x1801A52D4
 * Callers:
 *     ?GetAppRectAndClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@UEAA?AUSearchAppSizeAndBorderInfo@@AEBUtagRECT@@0W4SearchAppActivationMode@Shell@UI@WindowsUdk@winrt@@_NAEBUhstring@8@@Z @ 0x1801A53E0 (-GetAppRectAndClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@UEAA-AUSearchAppSizeAndBorde.c)
 *     ?GetTaskbarSearchBoxRect@SearchBoxOnTaskbarSearchAppPositioner@@UEAA?AURect@Foundation@Windows@winrt@@AEBUtagRECT@@@Z @ 0x1801A5EE0 (-GetTaskbarSearchBoxRect@SearchBoxOnTaskbarSearchAppPositioner@@UEAA-AURect@Foundation@Windows@w.c)
 * Callees:
 *     <none>
 */

void __fastcall SearchBoxOnTaskbarSearchAppPositioner::CorrectRectsForAutoHide(
        SearchBoxOnTaskbarSearchAppPositioner *this,
        __m128i *a2)
{
  __int32 v2; // r8d
  __m128i v3; // xmm2
  __m128i v4; // xmm1
  __m128i v5; // [rsp+0h] [rbp-38h]
  __m128i v6; // [rsp+10h] [rbp-28h]
  __m128i v7; // [rsp+20h] [rbp-18h]

  v2 = a2->m128i_i32[3];
  v3 = a2[1];
  v6 = a2[2];
  v4 = v6;
  v5 = v6;
  v7 = v3;
  if ( _mm_srli_si128(v6, 8).m128i_i32[1] > v2 )
  {
    v5.m128i_i32[3] = a2->m128i_i32[3];
    v5.m128i_i32[1] = v2 + v6.m128i_i32[1] - v6.m128i_i32[3];
    v4 = v5;
    v7.m128i_i32[3] = v5.m128i_i32[1];
    v3 = v7;
  }
  a2[1] = v3;
  a2[2] = v4;
}
