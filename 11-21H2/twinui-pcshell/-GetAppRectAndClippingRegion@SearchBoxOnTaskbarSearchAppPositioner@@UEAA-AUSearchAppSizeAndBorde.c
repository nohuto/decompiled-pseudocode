/*
 * XREFs of ?GetAppRectAndClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@UEAA?AUSearchAppSizeAndBorderInfo@@AEBUtagRECT@@0W4SearchAppActivationMode@Shell@UI@WindowsUdk@winrt@@_NAEBUhstring@8@@Z @ 0x1801A53E0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x18009301C (-IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     ??0SearchAppSizeAndBorderInfo@@QEAA@$$QEAU0@@Z @ 0x1801A47C0 (--0SearchAppSizeAndBorderInfo@@QEAA@$$QEAU0@@Z.c)
 *     ?CorrectRectsForAutoHide@SearchBoxOnTaskbarSearchAppPositioner@@AEAAXPEAUMonitorInfo@@@Z @ 0x1801A52D4 (-CorrectRectsForAutoHide@SearchBoxOnTaskbarSearchAppPositioner@@AEAAXPEAUMonitorInfo@@@Z.c)
 *     ?GetDefaultStartSearchAppPopupHeight@SearchBoxOnTaskbarSearchAppPositioner@@AEAAHW4EDGEUI_TRAYSTUCKPLACE@@UtagRECT@@H@Z @ 0x1801A58FC (-GetDefaultStartSearchAppPopupHeight@SearchBoxOnTaskbarSearchAppPositioner@@AEAAHW4EDGEUI_TRAYST.c)
 *     ?GetDefaultStartSearchAppWidth@SearchBoxOnTaskbarSearchAppPositioner@@AEAAHAEBUtagRECT@@HW4EDGEUI_TRAYSTUCKPLACE@@@Z @ 0x1801A5994 (-GetDefaultStartSearchAppWidth@SearchBoxOnTaskbarSearchAppPositioner@@AEAAHAEBUtagRECT@@HW4EDGEU.c)
 *     ?GetSearchBoxOnTaskbarAppRectAndClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@AEAA?AUSearchAppSizeAndBorderInfo@@AEBUMonitorInfo@@AEBUtagRECT@@_N@Z @ 0x1801A5A7C (-GetSearchBoxOnTaskbarAppRectAndClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@AEAA-AUSea.c)
 *     ?Instance@SearchBoxOnTaskbarSearchAppPositionerTelemetry@@KAPEAV1@XZ @ 0x1801A60A0 (-Instance@SearchBoxOnTaskbarSearchAppPositionerTelemetry@@KAPEAV1@XZ.c)
 *     ?LogMonitorData_@SearchBoxOnTaskbarSearchAppPositionerTelemetry@@QEAAXUMonitorInfo@@@Z @ 0x1801A62AC (-LogMonitorData_@SearchBoxOnTaskbarSearchAppPositionerTelemetry@@QEAAXUMonitorInfo@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Tidy@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ @ 0x18022B92C (-_Tidy@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SearchBoxOnTaskbarSearchAppPositioner::GetAppRectAndClippingRegion(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const RECT *a4,
        int a5,
        char a6)
{
  SearchBoxOnTaskbarSearchAppPositioner *v10; // rcx
  char v11; // r15
  wil::TraceLoggingProvider *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v15; // ebx
  int DefaultStartSearchAppPopupHeight; // eax
  __int64 v17; // rcx
  int v18; // r14d
  int v19; // ebx
  int DefaultStartSearchAppWidth; // eax
  int v21; // ebx
  unsigned int v22; // eax
  LONG left; // eax
  __int32 v24; // ebx
  int v25; // ebx
  int v26; // eax
  RECT v28; // [rsp+30h] [rbp-D0h] BYREF
  _OWORD v29[5]; // [rsp+40h] [rbp-C0h] BYREF
  int v30; // [rsp+90h] [rbp-70h]
  RECT rcSrc2; // [rsp+A0h] [rbp-60h] BYREF
  RECT rcSrc1; // [rsp+B0h] [rbp-50h] BYREF
  __m128i v33; // [rsp+C0h] [rbp-40h] BYREF
  RECT v34; // [rsp+D0h] [rbp-30h]
  __int128 v35; // [rsp+E0h] [rbp-20h]
  int nNumerator[4]; // [rsp+F0h] [rbp-10h]
  __int128 v37; // [rsp+100h] [rbp+0h]
  int v38; // [rsp+110h] [rbp+10h]
  struct tagRECT v39; // [rsp+120h] [rbp+20h] BYREF
  __int128 v40; // [rsp+130h] [rbp+30h]
  __int128 v41; // [rsp+140h] [rbp+40h]
  __int128 v42; // [rsp+150h] [rbp+50h]
  int v43; // [rsp+160h] [rbp+60h]
  __int64 v44; // [rsp+168h] [rbp+68h] BYREF
  __int128 v45; // [rsp+170h] [rbp+70h]
  struct tagRECT rcDst; // [rsp+180h] [rbp+80h] BYREF

  *(_QWORD *)&rcSrc2.left = a2;
  memset_0(&v39, 0, 0x48uLL);
  v44 = 0LL;
  v45 = 0LL;
  (*(void (__fastcall **)(_QWORD, __m128i *, __int64))(**(_QWORD **)(a1 + 8) + 8LL))(*(_QWORD *)(a1 + 8), &v33, a3);
  SearchBoxOnTaskbarSearchAppPositioner::CorrectRectsForAutoHide(v10, &v33);
  v11 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 16LL))(*(_QWORD *)(a1 + 8));
  v12 = SearchBoxOnTaskbarSearchAppPositionerTelemetry::Instance();
  if ( wil::TraceLoggingProvider::IsEnabled_(v12, 0) )
  {
    SearchBoxOnTaskbarSearchAppPositionerTelemetry::Instance();
    v29[0] = v33;
    v29[1] = v34;
    v29[2] = v35;
    v29[3] = *(_OWORD *)nNumerator;
    v29[4] = v37;
    v30 = v38;
    SearchBoxOnTaskbarSearchAppPositionerTelemetry::LogMonitorData_(v14, v29);
  }
  if ( !a6 && !a5 && nNumerator[1] == 3 && v38 )
  {
    SearchBoxOnTaskbarSearchAppPositioner::GetSearchBoxOnTaskbarAppRectAndClippingRegion(v13, a2, &v33, a4, v11);
    goto LABEL_31;
  }
  rcSrc2 = v34;
  MulDiv(642, nNumerator[2], 96);
  v28 = v34;
  v15 = nNumerator[2];
  DefaultStartSearchAppPopupHeight = SearchBoxOnTaskbarSearchAppPositioner::GetDefaultStartSearchAppPopupHeight(
                                       a1,
                                       (unsigned int)nNumerator[1],
                                       &v28,
                                       (unsigned int)nNumerator[2]);
  v18 = MulDiv(DefaultStartSearchAppPopupHeight, v15, 96);
  if ( nNumerator[1] != -1 )
  {
    v19 = nNumerator[2];
    DefaultStartSearchAppWidth = SearchBoxOnTaskbarSearchAppPositioner::GetDefaultStartSearchAppWidth(
                                   v17,
                                   &v33,
                                   (unsigned int)nNumerator[2]);
    v21 = MulDiv(DefaultStartSearchAppWidth, v19, 96);
    if ( v18 <= MulDiv(480, nNumerator[2], 96) )
      v18 = MulDiv(480, nNumerator[2], 96);
    v22 = MulDiv(12, nNumerator[2], 96);
    if ( v11 )
      rcSrc2.left = v22 + DWORD1(v37) - v21;
    else
      rcSrc2.left = nNumerator[3] - v22;
    rcSrc2.top = v34.bottom - v18;
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 8) + 40LL))(*(_QWORD *)(a1 + 8), v22)
      || HIDWORD(v37) )
    {
      left = rcSrc2.left;
    }
    else
    {
      if ( v11 )
      {
        left = v34.right - v21;
        goto LABEL_22;
      }
      left = v34.left;
      rcSrc2.left = v34.left;
    }
    if ( HIDWORD(v37) != 1 )
    {
LABEL_23:
      rcSrc2.right = v21 + left;
      rcSrc2.bottom = v18 + rcSrc2.top;
      goto LABEL_24;
    }
    left = v34.left + (v34.right - v34.left - v21) / 2;
LABEL_22:
    rcSrc2.left = left;
    goto LABEL_23;
  }
LABEL_24:
  rcDst = 0LL;
  v24 = DWORD2(v37) + MulDiv(40, nNumerator[2], 96) - v37;
  if ( !IsRectEmpty(a4) && IntersectRect(&rcDst, a4, &rcSrc2) && v33.m128i_i32[3] - a4->bottom <= v24 )
    OffsetRect(&rcSrc2, 0, a4->top - rcSrc2.bottom);
  rcSrc1 = v34;
  v25 = MulDiv(0, nNumerator[2], 96);
  v26 = MulDiv(0, nNumerator[2], 96);
  rcSrc1.top += v25;
  rcSrc1.left += v26;
  rcSrc1.right -= v26;
  IntersectRect(&v39, &rcSrc1, &rcSrc2);
  *(_QWORD *)&v40 = 0LL;
  DWORD2(v40) = v39.right - v39.left;
  HIDWORD(v40) = v39.bottom - v39.top;
  v41 = 0LL;
  v42 = 0LL;
  v43 = 0;
  if ( a5 == 1 )
    v40 = 0LL;
  SearchAppSizeAndBorderInfo::SearchAppSizeAndBorderInfo(a2, (__int64)&v39);
LABEL_31:
  std::vector<Geometry::CRect>::_Tidy(&v44);
  return a2;
}
