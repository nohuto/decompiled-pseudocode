/*
 * XREFs of ?GetSearchBoxOnTaskbarAppRectAndClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@AEAA?AUSearchAppSizeAndBorderInfo@@AEBUMonitorInfo@@AEBUtagRECT@@_N@Z @ 0x1801A5A7C
 * Callers:
 *     ?GetAppRectAndClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@UEAA?AUSearchAppSizeAndBorderInfo@@AEBUtagRECT@@0W4SearchAppActivationMode@Shell@UI@WindowsUdk@winrt@@_NAEBUhstring@8@@Z @ 0x1801A53E0 (-GetAppRectAndClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@UEAA-AUSearchAppSizeAndBorde.c)
 * Callees:
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     ??0SearchAppSizeAndBorderInfo@@QEAA@$$QEAU0@@Z @ 0x1801A47C0 (--0SearchAppSizeAndBorderInfo@@QEAA@$$QEAU0@@Z.c)
 *     ??$LogSearchPaneRect@AEAUtagRECT@@@SearchBoxOnTaskbarSearchAppPositionerTelemetry@@SAXAEAUtagRECT@@@Z @ 0x1801A4EBC (--$LogSearchPaneRect@AEAUtagRECT@@@SearchBoxOnTaskbarSearchAppPositionerTelemetry@@SAXAEAUtagREC.c)
 *     ?AdjustRectPositionForTouchKeyboardIfNecessary@SearchBoxOnTaskbarSearchAppPositioner@@AEAAXAEBUtagRECT@@AEBUMonitorInfo@@AEAU2@@Z @ 0x1801A511C (-AdjustRectPositionForTouchKeyboardIfNecessary@SearchBoxOnTaskbarSearchAppPositioner@@AEAAXAEBUt.c)
 *     ?GetAppRectForSearchBoxOnTaskbar@SearchBoxOnTaskbarSearchAppPositioner@@AEAA?AUtagRECT@@AEBUMonitorInfo@@_NHH1@Z @ 0x1801A57E0 (-GetAppRectForSearchBoxOnTaskbar@SearchBoxOnTaskbarSearchAppPositioner@@AEAA-AUtagRECT@@AEBUMoni.c)
 *     ?GetSearchBoxOnTaskbarClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@AEAAXAEBUtagRECT@@AEBUMonitorInfo@@_NPEAU2@AEAV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x1801A5C84 (-GetSearchBoxOnTaskbarClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@AEAAXAEBUtagRECT@@AE.c)
 *     ?GetSearchPaneWidthAndHeight@SearchBoxOnTaskbarSearchAppPositioner@@AEBA?AU?$pair@HH@std@@AEBUMonitorInfo@@_N@Z @ 0x1801A5DFC (-GetSearchPaneWidthAndHeight@SearchBoxOnTaskbarSearchAppPositioner@@AEBA-AU-$pair@HH@std@@AEBUMo.c)
 *     _anonymous_namespace_::IsAppRectCrossScreenRectOnSide @ 0x1801A6128 (_anonymous_namespace_--IsAppRectCrossScreenRectOnSide.c)
 *     ?_Tidy@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ @ 0x18022B92C (-_Tidy@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SearchBoxOnTaskbarSearchAppPositioner::GetSearchBoxOnTaskbarAppRectAndClippingRegion(
        __int64 a1,
        __int64 a2,
        __m128i *a3,
        const struct tagRECT *a4,
        char a5)
{
  const struct tagRECT *v5; // r13
  __int32 v8; // edi
  LONG top; // r14d
  LONG left; // ebx
  SearchBoxOnTaskbarSearchAppPositioner *v11; // rcx
  RECT *v12; // rcx
  unsigned __int64 v13; // xmm0_8
  int v14; // ecx
  int v15; // r9d
  int v16; // ecx
  struct tagRECT v18; // [rsp+40h] [rbp-91h] BYREF
  RECT rcSrc2; // [rsp+50h] [rbp-81h] BYREF
  RECT rcSrc1; // [rsp+60h] [rbp-71h] BYREF
  struct tagRECT rcDst; // [rsp+70h] [rbp-61h] BYREF
  struct tagRECT v22; // [rsp+80h] [rbp-51h] BYREF
  _BYTE v23[32]; // [rsp+90h] [rbp-41h] BYREF
  __int128 v24; // [rsp+B0h] [rbp-21h]
  int v25; // [rsp+C0h] [rbp-11h]
  __int64 v26; // [rsp+C8h] [rbp-9h] BYREF
  __int128 v27; // [rsp+D0h] [rbp-1h]

  v5 = a4;
  *(_QWORD *)&v18.left = a2;
  v8 = a3[5].m128i_i32[0];
  LOBYTE(a4) = v8 == 2;
  SearchBoxOnTaskbarSearchAppPositioner::GetSearchPaneWidthAndHeight(a1, &v18, a3, a4);
  top = v18.top;
  left = v18.left;
  SearchBoxOnTaskbarSearchAppPositioner::GetAppRectForSearchBoxOnTaskbar(v11, &rcSrc2, a3, a5, v18.left, v18.top, 0);
  v12 = (RECT *)a3;
  if ( v8 != 2 )
    v12 = (RECT *)&a3[1];
  rcSrc1 = *v12;
  rcDst = 0LL;
  if ( v8 == 2 )
  {
    if ( (unsigned __int8)anonymous_namespace_::IsAppRectCrossScreenRectOnSide(&rcSrc2, &rcSrc1) )
    {
      v13 = _mm_srli_si128(*a3, 8).m128i_u64[0];
      v14 = _mm_cvtsi128_si32(*a3);
      rcSrc2.left = ((int)v13 - v14 - left) / 2 + v14;
      rcSrc2.top = HIDWORD(v13) - top;
      rcSrc2.right = rcSrc2.left + left;
      rcSrc2.bottom = HIDWORD(v13);
      if ( (unsigned __int8)anonymous_namespace_::IsAppRectCrossScreenRectOnSide(&rcSrc2, &rcSrc1) )
      {
        rcSrc2 = *SearchBoxOnTaskbarSearchAppPositioner::GetAppRectForSearchBoxOnTaskbar(
                    (SearchBoxOnTaskbarSearchAppPositioner *)v12,
                    &v18,
                    a3,
                    a5,
                    rcSrc1.right - rcSrc1.left,
                    top,
                    1);
        SearchBoxOnTaskbarSearchAppPositionerTelemetry::LogSearchPaneRect<tagRECT &>(&rcSrc2);
      }
    }
  }
  SearchBoxOnTaskbarSearchAppPositioner::AdjustRectPositionForTouchKeyboardIfNecessary(
    (SearchBoxOnTaskbarSearchAppPositioner *)v12,
    v5,
    (const struct MonitorInfo *)a3,
    &rcSrc2);
  IntersectRect(&rcDst, &rcSrc1, &rcSrc2);
  memset_0(&v22, 0, 0x48uLL);
  v26 = 0LL;
  v27 = 0LL;
  v22 = rcDst;
  LOBYTE(v15) = a5;
  SearchBoxOnTaskbarSearchAppPositioner::GetSearchBoxOnTaskbarClippingRegion(
    v16,
    (unsigned int)&v22,
    (_DWORD)a3,
    v15,
    (__int64)v23,
    (__int64)&v26);
  v24 = 0LL;
  v25 = 0;
  SearchAppSizeAndBorderInfo::SearchAppSizeAndBorderInfo(a2, (__int64)&v22);
  std::vector<Geometry::CRect>::_Tidy(&v26);
  return a2;
}
