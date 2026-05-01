/*
 * XREFs of ?GetSearchBoxOnTaskbarAppRectAndClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@AEAA?AUSearchAppSizeAndBorderInfo@@AEBUMonitorInfo@@AEBUtagRECT@@_N@Z @ 0x180180698
 * Callers:
 *     ?GetAppRectAndClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@UEAA?AUSearchAppSizeAndBorderInfo@@AEBUtagRECT@@0W4SearchAppActivationMode@Shell@UI@WindowsUdk@winrt@@_NAEBUhstring@8@@Z @ 0x1800B6210 (-GetAppRectAndClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@UEAA-AUSearchAppSizeAndBorde.c)
 * Callees:
 *     ?GetSearchBoxOnTaskbarClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@AEAAXAEBUtagRECT@@AEBUMonitorInfo@@_NPEAU2@AEAV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x180090DDC (-GetSearchBoxOnTaskbarClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@AEAAXAEBUtagRECT@@AE.c)
 *     ?_Tidy@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEAAXXZ @ 0x1800B68BC (-_Tidy@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@AEAAXXZ.c)
 *     _anonymous_namespace_::IsAppRectCrossScreenRectOnSide @ 0x180180948 (_anonymous_namespace_--IsAppRectCrossScreenRectOnSide.c)
 *     ?GetCenterModeSearchRect@SearchBoxOnTaskbarSearchAppPositioner@@AEAA?AUtagRECT@@AEBUMonitorInfo@@HH_N@Z @ 0x180180964 (-GetCenterModeSearchRect@SearchBoxOnTaskbarSearchAppPositioner@@AEAA-AUtagRECT@@AEBUMonitorInfo@.c)
 *     ?GetSearchPaneWidthAndHeight@SearchBoxOnTaskbarSearchAppPositioner@@AEBA?AU?$pair@HH@std@@AEBUMonitorInfo@@_N@Z @ 0x1801809D0 (-GetSearchPaneWidthAndHeight@SearchBoxOnTaskbarSearchAppPositioner@@AEBA-AU-$pair@HH@std@@AEBUMo.c)
 *     ?GetAppRectForSearchBoxOnTaskbar@SearchBoxOnTaskbarSearchAppPositioner@@AEAA?AUtagRECT@@AEBUMonitorInfo@@_NHH1@Z @ 0x180180AD8 (-GetAppRectForSearchBoxOnTaskbar@SearchBoxOnTaskbarSearchAppPositioner@@AEAA-AUtagRECT@@AEBUMoni.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     ??$LogSearchPaneRect@AEAUtagRECT@@@SearchBoxOnTaskbarSearchAppPositionerTelemetry@@SAXAEAUtagRECT@@@Z @ 0x18047F88C (--$LogSearchPaneRect@AEAUtagRECT@@@SearchBoxOnTaskbarSearchAppPositionerTelemetry@@SAXAEAUtagREC.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SearchBoxOnTaskbarSearchAppPositioner::GetSearchBoxOnTaskbarAppRectAndClippingRegion(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const RECT *a4,
        bool a5)
{
  const RECT *v5; // rsi
  int v8; // r12d
  LONG top; // r13d
  LONG left; // ebx
  SearchBoxOnTaskbarSearchAppPositioner *v11; // rcx
  LONG v12; // r14d
  SearchBoxOnTaskbarSearchAppPositioner *v13; // rcx
  SearchBoxOnTaskbarSearchAppPositioner *v14; // rcx
  int v15; // r11d
  char v16; // r14
  int v17; // ebx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  struct MonitorInfo *v23; // [rsp+20h] [rbp-C1h]
  struct MonitorInfo *v24; // [rsp+20h] [rbp-C1h]
  RECT rcSrc2; // [rsp+48h] [rbp-99h] BYREF
  RECT rcSrc1; // [rsp+58h] [rbp-89h] BYREF
  struct tagRECT rcDst; // [rsp+68h] [rbp-79h] BYREF
  struct tagRECT v28; // [rsp+80h] [rbp-61h] BYREF
  _OWORD v29[3]; // [rsp+90h] [rbp-51h] BYREF
  int v30; // [rsp+C0h] [rbp-21h]
  __int64 v31; // [rsp+C8h] [rbp-19h] BYREF
  __int128 v32; // [rsp+D0h] [rbp-11h]
  struct tagRECT v33; // [rsp+E0h] [rbp-1h] BYREF

  v5 = a4;
  *(_QWORD *)&rcDst.left = a2;
  v8 = *(_DWORD *)(a3 + 80);
  LOBYTE(a4) = v8 == 2;
  SearchBoxOnTaskbarSearchAppPositioner::GetSearchPaneWidthAndHeight(a1, &rcDst, a3, a4);
  top = rcDst.top;
  left = rcDst.left;
  LODWORD(v23) = rcDst.left;
  SearchBoxOnTaskbarSearchAppPositioner::GetAppRectForSearchBoxOnTaskbar(
    v11,
    &rcSrc2,
    (const struct MonitorInfo *)a3,
    a5,
    v23,
    rcDst.top,
    0);
  if ( v8 == 2 )
  {
    rcSrc1 = *(RECT *)a3;
    v12 = rcSrc1.left;
  }
  else
  {
    v12 = *(_DWORD *)a3;
    rcSrc1.left = *(_DWORD *)a3;
    rcSrc1.top = *(_DWORD *)(a3 + 20);
    rcSrc1.right = *(_DWORD *)(a3 + 8);
    rcSrc1.bottom = *(_DWORD *)(a3 + 28);
  }
  v33 = 0LL;
  if ( v8 == 2
    && (unsigned __int8)anonymous_namespace_::IsAppRectCrossScreenRectOnSide(&rcSrc2, &rcSrc1)
    && (rcSrc2 = *SearchBoxOnTaskbarSearchAppPositioner::GetCenterModeSearchRect(
                    v13,
                    &rcDst,
                    (const struct MonitorInfo *)a3,
                    left,
                    top,
                    v8 == 2),
        (unsigned __int8)anonymous_namespace_::IsAppRectCrossScreenRectOnSide(&rcSrc2, &rcSrc1)) )
  {
    LODWORD(v24) = v15 - v12;
    v16 = a5;
    rcSrc2 = *SearchBoxOnTaskbarSearchAppPositioner::GetAppRectForSearchBoxOnTaskbar(
                v14,
                &rcDst,
                (const struct MonitorInfo *)a3,
                a5,
                v24,
                top,
                1);
    SearchBoxOnTaskbarSearchAppPositionerTelemetry::LogSearchPaneRect<tagRECT &>(&rcSrc2);
  }
  else
  {
    v16 = a5;
  }
  rcDst = 0LL;
  v17 = *(_DWORD *)(a3 + 72) - *(_DWORD *)(a3 + 64);
  if ( !IsRectEmpty(v5) && IntersectRect(&rcDst, v5, &rcSrc2) && *(_DWORD *)(a3 + 12) - v5->bottom <= v17 )
    OffsetRect(&rcSrc2, 0, v5->top - rcSrc2.bottom);
  IntersectRect(&v33, &rcSrc1, &rcSrc2);
  memset_0(&v28, 0, 0x48uLL);
  v31 = 0LL;
  v32 = 0LL;
  v28 = v33;
  SearchBoxOnTaskbarSearchAppPositioner::GetSearchBoxOnTaskbarClippingRegion(
    v18,
    &v28.left,
    a3,
    v16,
    v29,
    (__int64)&v31);
  v29[2] = 0LL;
  v30 = 0;
  *(struct tagRECT *)a2 = v28;
  *(_OWORD *)(a2 + 16) = v29[0];
  *(_OWORD *)(a2 + 32) = v29[1];
  *(_OWORD *)(a2 + 48) = 0LL;
  *(_DWORD *)(a2 + 64) = 0;
  v19 = *((_QWORD *)&v32 + 1);
  v20 = v32;
  v32 = 0uLL;
  v21 = v31;
  v31 = 0LL;
  *(_QWORD *)(a2 + 72) = v21;
  *(_QWORD *)(a2 + 80) = v20;
  *(_QWORD *)(a2 + 88) = v19;
  std::vector<tagRECT>::_Tidy(&v31);
  return a2;
}
