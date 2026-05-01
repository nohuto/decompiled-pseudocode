/*
 * XREFs of ?GetAppRectAndClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@UEAA?AUSearchAppSizeAndBorderInfo@@AEBUtagRECT@@0W4SearchAppActivationMode@Shell@UI@WindowsUdk@winrt@@_NAEBUhstring@8@@Z @ 0x1800B6210
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDefaultStartSearchAppWidth@SearchBoxOnTaskbarSearchAppPositioner@@AEAAHAEBUtagRECT@@HW4EDGEUI_TRAYSTUCKPLACE@@@Z @ 0x18004AE18 (-GetDefaultStartSearchAppWidth@SearchBoxOnTaskbarSearchAppPositioner@@AEAAHAEBUtagRECT@@HW4EDGEU.c)
 *     ?GetDefaultStartSearchAppPopupHeight@SearchBoxOnTaskbarSearchAppPositioner@@AEAAHW4EDGEUI_TRAYSTUCKPLACE@@UtagRECT@@H@Z @ 0x18005E608 (-GetDefaultStartSearchAppPopupHeight@SearchBoxOnTaskbarSearchAppPositioner@@AEAAHW4EDGEUI_TRAYST.c)
 *     ?IsEnabled@SearchBoxOnTaskbarSearchAppPositionerTelemetry@@SA_NE_K@Z @ 0x1800B65F4 (-IsEnabled@SearchBoxOnTaskbarSearchAppPositionerTelemetry@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VSearchBoxOnTaskbarSearchAppPositionerTelemetry@@@details@wil@@QEAAPEAVSearchBoxOnTaskbarSearchAppPositionerTelemetry@@P6AXXZ@Z @ 0x1800B6618 (-get@-$static_lazy@VSearchBoxOnTaskbarSearchAppPositionerTelemetry@@@details@wil@@QEAAPEAVSearch.c)
 *     ?_Tidy@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEAAXXZ @ 0x1800B68BC (-_Tidy@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@AEAAXXZ.c)
 *     ?LogMonitorData_@SearchBoxOnTaskbarSearchAppPositionerTelemetry@@QEAAXUMonitorInfo@@@Z @ 0x1800B8E48 (-LogMonitorData_@SearchBoxOnTaskbarSearchAppPositionerTelemetry@@QEAAXUMonitorInfo@@@Z.c)
 *     ?GetSearchBoxOnTaskbarAppRectAndClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@AEAA?AUSearchAppSizeAndBorderInfo@@AEBUMonitorInfo@@AEBUtagRECT@@_N@Z @ 0x180180698 (-GetSearchBoxOnTaskbarAppRectAndClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@AEAA-AUSea.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ScaleByDPI@ExperienceManagerUtils@@YAHHH@Z @ 0x18074931C (-ScaleByDPI@ExperienceManagerUtils@@YAHHH@Z.c)
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
  char v10; // r15
  unsigned __int64 v11; // rdx
  unsigned __int8 v12; // cl
  __int64 v13; // rcx
  int v14; // r8d
  __int64 v15; // rcx
  unsigned int DefaultStartSearchAppPopupHeight; // eax
  int v17; // r8d
  __int64 v18; // rcx
  int v19; // r8d
  int v20; // r14d
  unsigned int DefaultStartSearchAppWidth; // eax
  int v22; // r8d
  int v23; // ebx
  int v24; // r8d
  int v25; // r8d
  unsigned int v26; // eax
  char v27; // al
  LONG left; // eax
  int v29; // ebx
  int v30; // r8d
  int v31; // ebx
  int v32; // r8d
  int v33; // eax
  __int128 v34; // xmm1
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rax
  __int128 v39; // [rsp+40h] [rbp-C0h] BYREF
  _OWORD v40[5]; // [rsp+50h] [rbp-B0h] BYREF
  int v41; // [rsp+A0h] [rbp-60h]
  RECT rcSrc2; // [rsp+B0h] [rbp-50h] BYREF
  RECT rcSrc1; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v44; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v45; // [rsp+E0h] [rbp-20h]
  __int128 v46; // [rsp+F0h] [rbp-10h]
  int v47[4]; // [rsp+100h] [rbp+0h]
  __int128 v48; // [rsp+110h] [rbp+10h]
  int v49; // [rsp+120h] [rbp+20h]
  struct tagRECT v50; // [rsp+130h] [rbp+30h] BYREF
  __int128 v51; // [rsp+140h] [rbp+40h]
  __int128 v52; // [rsp+150h] [rbp+50h]
  __int128 v53; // [rsp+160h] [rbp+60h]
  int v54; // [rsp+170h] [rbp+70h]
  __int64 v55; // [rsp+178h] [rbp+78h] BYREF
  __int128 v56; // [rsp+180h] [rbp+80h]
  struct tagRECT rcDst; // [rsp+190h] [rbp+90h] BYREF

  *(_QWORD *)&rcSrc2.left = a2;
  memset_0(&v50, 0, 0x48uLL);
  v55 = 0LL;
  v56 = 0LL;
  (*(void (__fastcall **)(_QWORD, __int128 *, __int64))(**(_QWORD **)(a1 + 8) + 8LL))(*(_QWORD *)(a1 + 8), &v44, a3);
  v10 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 16LL))(*(_QWORD *)(a1 + 8));
  if ( SearchBoxOnTaskbarSearchAppPositionerTelemetry::IsEnabled(v12, v11) )
  {
    wil::details::static_lazy<SearchBoxOnTaskbarSearchAppPositionerTelemetry>::get(
      v13,
      _lambda_c91fb1c26cc17dbc30d45b50c58914ed_::_lambda_invoker_cdecl_);
    v40[0] = v44;
    v40[1] = v45;
    v40[2] = v46;
    v40[3] = *(_OWORD *)v47;
    v40[4] = v48;
    v41 = v49;
    SearchBoxOnTaskbarSearchAppPositionerTelemetry::LogMonitorData_(v15, v40);
  }
  if ( a6 || a5 || v47[1] != 3 || !v49 )
  {
    rcSrc2.left = v44;
    rcSrc2.top = DWORD1(v45);
    rcSrc2.right = DWORD2(v44);
    rcSrc2.bottom = HIDWORD(v45);
    ExperienceManagerUtils::ScaleByDPI((ExperienceManagerUtils *)0x282, v47[2], v14);
    v39 = v45;
    DefaultStartSearchAppPopupHeight = SearchBoxOnTaskbarSearchAppPositioner::GetDefaultStartSearchAppPopupHeight(
                                         a1,
                                         v47[1],
                                         (__int64)&v39,
                                         v47[2]);
    v20 = ExperienceManagerUtils::ScaleByDPI((ExperienceManagerUtils *)DefaultStartSearchAppPopupHeight, v47[2], v17);
    if ( v47[1] != -1 )
    {
      DefaultStartSearchAppWidth = SearchBoxOnTaskbarSearchAppPositioner::GetDefaultStartSearchAppWidth(
                                     v18,
                                     &v44,
                                     v47[2],
                                     v47[1]);
      v23 = ExperienceManagerUtils::ScaleByDPI((ExperienceManagerUtils *)DefaultStartSearchAppWidth, v47[2], v22);
      if ( v20 <= (int)ExperienceManagerUtils::ScaleByDPI((ExperienceManagerUtils *)0x1E0, v47[2], v24) )
        v20 = ExperienceManagerUtils::ScaleByDPI((ExperienceManagerUtils *)0x1E0, v47[2], v25);
      v26 = ExperienceManagerUtils::ScaleByDPI((ExperienceManagerUtils *)0xC, v47[2], v25);
      if ( v10 )
        rcSrc2.left = v26 + DWORD1(v48) - v23;
      else
        rcSrc2.left = v47[3] - v26;
      rcSrc2.top = HIDWORD(v45) - v20;
      v27 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 8) + 40LL))(*(_QWORD *)(a1 + 8), v26);
      v19 = v44;
      if ( !v27 || HIDWORD(v48) )
      {
        left = rcSrc2.left;
      }
      else
      {
        if ( v10 )
          left = DWORD2(v44) - v23;
        else
          left = v44;
        rcSrc2.left = left;
      }
      if ( HIDWORD(v48) == 1 )
      {
        left = v44 + (DWORD2(v44) - (int)v44 - v23) / 2;
        rcSrc2.left = left;
      }
      rcSrc2.right = v23 + left;
      rcSrc2.bottom = v20 + rcSrc2.top;
    }
    rcDst = 0LL;
    v29 = ExperienceManagerUtils::ScaleByDPI((ExperienceManagerUtils *)0x28, v47[2], v19) + DWORD2(v48) - v48;
    if ( !IsRectEmpty(a4) && IntersectRect(&rcDst, a4, &rcSrc2) && HIDWORD(v44) - a4->bottom <= v29 )
      OffsetRect(&rcSrc2, 0, a4->top - rcSrc2.bottom);
    rcSrc1.left = v44;
    rcSrc1.top = DWORD1(v45);
    rcSrc1.right = DWORD2(v44);
    rcSrc1.bottom = HIDWORD(v45);
    v31 = ExperienceManagerUtils::ScaleByDPI(0LL, v47[2], v30);
    v33 = ExperienceManagerUtils::ScaleByDPI(0LL, v47[2], v32);
    rcSrc1.top += v31;
    rcSrc1.left += v33;
    rcSrc1.right -= v33;
    IntersectRect(&v50, &rcSrc1, &rcSrc2);
    *(_QWORD *)&v51 = 0LL;
    DWORD2(v51) = v50.right - v50.left;
    HIDWORD(v51) = v50.bottom - v50.top;
    v52 = 0LL;
    v53 = 0LL;
    v54 = 0;
    if ( a5 == 1 )
    {
      v34 = 0LL;
      v51 = 0LL;
    }
    else
    {
      v34 = v51;
    }
    *(struct tagRECT *)a2 = v50;
    *(_OWORD *)(a2 + 16) = v34;
    *(_OWORD *)(a2 + 32) = 0LL;
    *(_OWORD *)(a2 + 48) = 0LL;
    *(_DWORD *)(a2 + 64) = 0;
    v35 = *((_QWORD *)&v56 + 1);
    v36 = v56;
    v56 = 0uLL;
    v37 = v55;
    v55 = 0LL;
    *(_QWORD *)(a2 + 72) = v37;
    *(_QWORD *)(a2 + 80) = v36;
    *(_QWORD *)(a2 + 88) = v35;
  }
  else
  {
    SearchBoxOnTaskbarSearchAppPositioner::GetSearchBoxOnTaskbarAppRectAndClippingRegion(v13, a2, &v44, a4, v10);
  }
  std::vector<tagRECT>::_Tidy(&v55);
  return a2;
}
