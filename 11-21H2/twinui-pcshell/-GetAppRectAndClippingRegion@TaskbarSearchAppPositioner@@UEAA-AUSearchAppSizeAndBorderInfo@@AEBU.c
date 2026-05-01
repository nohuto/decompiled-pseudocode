/*
 * XREFs of ?GetAppRectAndClippingRegion@TaskbarSearchAppPositioner@@UEAA?AUSearchAppSizeAndBorderInfo@@AEBUtagRECT@@0W4SearchAppActivationMode@Shell@UI@WindowsUdk@winrt@@_NAEBUhstring@8@@Z @ 0x1801A6550
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x18009301C (-IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z.c)
 *     ?GetDefaultSearchAppWidth@TaskbarSearchAppPositioner@@AEAAHAEBUtagRECT@@HW4EDGEUI_TRAYSTUCKPLACE@@@Z @ 0x1800F80CC (-GetDefaultSearchAppWidth@TaskbarSearchAppPositioner@@AEAAHAEBUtagRECT@@HW4EDGEUI_TRAYSTUCKPLACE.c)
 *     ?LogMonitorData_@TaskbarSearchAppPositionerTelemetry@@QEAAXUMonitorInfo@@@Z @ 0x1801441D4 (-LogMonitorData_@TaskbarSearchAppPositionerTelemetry@@QEAAXUMonitorInfo@@@Z.c)
 *     ?get@?$static_lazy@VTaskbarSearchAppPositionerTelemetry@@@details@wil@@QEAAPEAVTaskbarSearchAppPositionerTelemetry@@P6AXXZ@Z @ 0x1801443BC (-get@-$static_lazy@VTaskbarSearchAppPositionerTelemetry@@@details@wil@@QEAAPEAVTaskbarSearchAppP.c)
 *     ?CalculateTaskbarSearchBoxRect@TaskbarSearchAppPositioner@@AEAA?AURect@Foundation@Windows@winrt@@UMonitorInfo@@_N@Z @ 0x180147DE0 (-CalculateTaskbarSearchBoxRect@TaskbarSearchAppPositioner@@AEAA-AURect@Foundation@Windows@winrt@.c)
 *     ?CorrectRectsForAutoHide@TaskbarSearchAppPositioner@@AEAAXPEAUMonitorInfo@@@Z @ 0x180147E40 (-CorrectRectsForAutoHide@TaskbarSearchAppPositioner@@AEAAXPEAUMonitorInfo@@@Z.c)
 *     ?GetDefaultSearchAppPopupHeight@TaskbarSearchAppPositioner@@AEAAHW4EDGEUI_TRAYSTUCKPLACE@@UtagRECT@@H@Z @ 0x180156D64 (-GetDefaultSearchAppPopupHeight@TaskbarSearchAppPositioner@@AEAAHW4EDGEUI_TRAYSTUCKPLACE@@UtagRE.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     ??0SearchAppSizeAndBorderInfo@@QEAA@$$QEAU0@@Z @ 0x1801A47C0 (--0SearchAppSizeAndBorderInfo@@QEAA@$$QEAU0@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Tidy@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ @ 0x18022B92C (-_Tidy@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TaskbarSearchAppPositioner::GetAppRectAndClippingRegion(
        TaskbarSearchAppPositioner *a1,
        __int64 a2,
        __int64 a3,
        const RECT *a4,
        int a5)
{
  TaskbarSearchAppPositioner *v9; // rcx
  char v10; // si
  __int64 v11; // rcx
  __int64 *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v15; // ebx
  int DefaultSearchAppPopupHeight; // eax
  __int64 v17; // rcx
  int v18; // edi
  int v19; // ebx
  int DefaultSearchAppWidth; // eax
  int v21; // ebx
  int v22; // ecx
  LONG v23; // eax
  __int32 bottom; // eax
  LONG left; // eax
  LONG v26; // eax
  LONG v27; // eax
  LONG v28; // eax
  float *v29; // rax
  float v30; // xmm2_4
  float v31; // xmm0_4
  float v32; // xmm1_4
  LONG v33; // ebx
  __int32 v34; // ebx
  int v35; // ebx
  int v36; // edx
  RECT *v37; // rax
  int v38; // ebx
  int v39; // eax
  bool v40; // r10
  LONG right; // edx
  RECT v43; // [rsp+20h] [rbp-E0h] BYREF
  __m128i v44; // [rsp+30h] [rbp-D0h] BYREF
  RECT v45; // [rsp+40h] [rbp-C0h]
  __int128 v46; // [rsp+50h] [rbp-B0h]
  __int128 v47; // [rsp+60h] [rbp-A0h]
  __int128 v48; // [rsp+70h] [rbp-90h]
  int v49; // [rsp+80h] [rbp-80h]
  RECT rcSrc1; // [rsp+90h] [rbp-70h] BYREF
  RECT rcSrc2; // [rsp+A0h] [rbp-60h] BYREF
  struct tagRECT rc; // [rsp+B0h] [rbp-50h] BYREF
  __m128i v53; // [rsp+C0h] [rbp-40h] BYREF
  RECT v54; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v55; // [rsp+E0h] [rbp-20h]
  int nNumerator[4]; // [rsp+F0h] [rbp-10h]
  __int128 v57; // [rsp+100h] [rbp+0h]
  int v58; // [rsp+110h] [rbp+10h]
  struct tagRECT v59; // [rsp+120h] [rbp+20h] BYREF
  __int128 v60; // [rsp+130h] [rbp+30h]
  __int128 v61; // [rsp+140h] [rbp+40h]
  __int128 v62; // [rsp+150h] [rbp+50h]
  int v63; // [rsp+160h] [rbp+60h]
  __int64 v64; // [rsp+168h] [rbp+68h] BYREF
  __int128 v65; // [rsp+170h] [rbp+70h]
  struct tagRECT rcDst; // [rsp+180h] [rbp+80h] BYREF

  *(_QWORD *)&rcSrc1.left = a2;
  memset_0(&v59, 0, 0x48uLL);
  v64 = 0LL;
  v65 = 0LL;
  (*(void (__fastcall **)(_QWORD *, __m128i *, __int64))(**((_QWORD **)a1 + 1) + 8LL))(*((_QWORD **)a1 + 1), &v53, a3);
  TaskbarSearchAppPositioner::CorrectRectsForAutoHide(v9, &v53);
  v10 = (*(__int64 (__fastcall **)(_QWORD *))(**((_QWORD **)a1 + 1) + 16LL))(*((_QWORD **)a1 + 1));
  v12 = wil::details::static_lazy<TaskbarSearchAppPositionerTelemetry>::get(
          v11,
          _lambda_6ac579ef605ef130f5510e0ddb1e8dfd_::_lambda_invoker_cdecl_);
  if ( wil::TraceLoggingProvider::IsEnabled_((wil::TraceLoggingProvider *)v12, 0) )
  {
    wil::details::static_lazy<TaskbarSearchAppPositionerTelemetry>::get(
      v13,
      _lambda_6ac579ef605ef130f5510e0ddb1e8dfd_::_lambda_invoker_cdecl_);
    v44 = v53;
    v45 = v54;
    v46 = v55;
    v47 = *(_OWORD *)nNumerator;
    v48 = v57;
    v49 = v58;
    TaskbarSearchAppPositionerTelemetry::LogMonitorData_(v14, v44.m128i_i32);
  }
  rcSrc2 = v54;
  MulDiv(642, nNumerator[2], 96);
  v43 = v54;
  v15 = nNumerator[2];
  DefaultSearchAppPopupHeight = TaskbarSearchAppPositioner::GetDefaultSearchAppPopupHeight(
                                  (__int64)a1,
                                  nNumerator[1],
                                  (__int64)&v43,
                                  nNumerator[2]);
  v18 = MulDiv(DefaultSearchAppPopupHeight, v15, 96);
  if ( nNumerator[1] != -1 )
  {
    v19 = nNumerator[2];
    DefaultSearchAppWidth = TaskbarSearchAppPositioner::GetDefaultSearchAppWidth(
                              v17,
                              &v53,
                              nNumerator[2],
                              nNumerator[1]);
    v21 = MulDiv(DefaultSearchAppWidth, v19, 96);
    if ( v18 <= MulDiv(480, nNumerator[2], 96) )
      v18 = MulDiv(480, nNumerator[2], 96);
    if ( nNumerator[1] == 3 && BYTE1(nNumerator[0]) )
      v18 += DWORD2(v57) - v57;
    if ( nNumerator[1] )
    {
      if ( nNumerator[1] == 1 )
      {
        if ( v10 )
          v27 = v55 - v21;
        else
          v27 = DWORD2(v55);
        rcSrc2.left = v27;
        v28 = HIDWORD(v55);
        goto LABEL_30;
      }
      if ( nNumerator[1] != 2 )
      {
        v22 = MulDiv(12, nNumerator[2], 96);
        if ( v10 )
          v23 = v22 + DWORD1(v57) - v21;
        else
          v23 = nNumerator[3] - v22;
        rcSrc2.left = v23;
        bottom = v53.m128i_i32[3];
        if ( !BYTE1(nNumerator[0]) )
          bottom = v54.bottom;
        rcSrc2.top = bottom - v18;
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(**((_QWORD **)a1 + 1) + 40LL))(*((_QWORD **)a1 + 1))
          && !HIDWORD(v57) )
        {
          if ( v10 )
            left = v54.right - v21;
          else
            left = v54.left;
          rcSrc2.left = left;
        }
        goto LABEL_31;
      }
      v26 = v55 - v21;
    }
    else
    {
      v26 = DWORD2(v55);
    }
    rcSrc2.left = v26;
    v28 = DWORD1(v55);
LABEL_30:
    rcSrc2.top = v28;
LABEL_31:
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(**((_QWORD **)a1 + 1) + 32LL))(*((_QWORD **)a1 + 1))
      && HIDWORD(v57) == 1 )
    {
      if ( (nNumerator[1] & 0xFFFFFFFD) != 0 )
        rcSrc2.left = v54.left + (v54.right - v54.left - v21) / 2;
      else
        rcSrc2.top = v54.top + (v54.bottom - v54.top - v18) / 2;
    }
    rcSrc2.right = v21 + rcSrc2.left;
    rcSrc2.bottom = v18 + rcSrc2.top;
  }
  v44 = v53;
  v45 = v54;
  v46 = v55;
  v47 = *(_OWORD *)nNumerator;
  v48 = v57;
  v49 = v58;
  v29 = (float *)TaskbarSearchAppPositioner::CalculateTaskbarSearchBoxRect(a1, (__int64)&v43, (__int64)&v44, v10);
  v30 = *v29;
  v31 = v29[1];
  v32 = v29[2];
  v33 = (int)(float)(v31 + v29[3]);
  rc.left = (int)*v29;
  rc.top = (int)v31;
  rc.right = (int)(float)(v30 + v32);
  rc.bottom = v33;
  rcDst = 0LL;
  v34 = v33 - (int)v31;
  if ( !v34 )
    v34 = DWORD2(v57) + MulDiv(40, nNumerator[2], 96) - v57;
  if ( !IsRectEmpty(a4) && IntersectRect(&rcDst, a4, &rcSrc2) && v53.m128i_i32[3] - a4->bottom <= v34 )
  {
    v35 = a4->top - rcSrc2.bottom;
    OffsetRect(&rcSrc2, 0, v35);
    if ( a5 == 1 )
      v36 = 0;
    else
      v36 = rcSrc2.right - rc.right;
    OffsetRect(&rc, v36, v35);
  }
  v37 = (RECT *)&v53;
  if ( !BYTE1(nNumerator[0]) )
    v37 = &v54;
  rcSrc1 = *v37;
  v38 = MulDiv(0, nNumerator[2], 96);
  v39 = MulDiv(0, nNumerator[2], 96);
  switch ( nNumerator[1] )
  {
    case 0:
      rcSrc1.bottom -= v38;
      goto LABEL_56;
    case 1:
      rcSrc1.bottom -= v38;
      rcSrc1.left += v39;
LABEL_57:
      rcSrc1.right -= v39;
      break;
    case 2:
      rcSrc1.bottom -= v38;
      rcSrc1.top += v38;
      rcSrc1.left += v39;
      break;
    case 3:
      rcSrc1.left += v39;
LABEL_56:
      rcSrc1.top += v38;
      goto LABEL_57;
  }
  IntersectRect(&v59, &rcSrc1, &rcSrc2);
  v40 = nNumerator[1] == 3 && BYTE1(nNumerator[0]);
  right = v59.right;
  *(_QWORD *)&v60 = 0LL;
  DWORD2(v60) = v59.right - v59.left;
  HIDWORD(v60) = v59.bottom - v59.top;
  v61 = 0LL;
  if ( v40 )
  {
    if ( a5 == 1 )
    {
      LODWORD(v60) = rc.left - v59.left;
      DWORD1(v60) = rc.top - v59.top;
      DWORD2(v60) = rc.right - v59.left;
      HIDWORD(v60) = rc.bottom - v59.top;
    }
    else
    {
      if ( v10 )
        LODWORD(v61) = 0;
      else
        LODWORD(v61) = rc.right - v59.left;
      DWORD1(v61) = rc.top - v59.top;
      if ( v10 )
        right = rc.left;
      DWORD2(v61) = right - v59.left;
      HIDWORD(v61) = rc.bottom - v59.top;
    }
  }
  else if ( a5 == 1 )
  {
    v60 = 0LL;
  }
  v62 = 0LL;
  v63 = 0;
  SearchAppSizeAndBorderInfo::SearchAppSizeAndBorderInfo(a2, (__int64)&v59);
  std::vector<Geometry::CRect>::_Tidy(&v64);
  return a2;
}
