/*
 * XREFs of ?GetTaskbarSearchBoxRect@SearchBoxOnTaskbarSearchAppPositioner@@UEAA?AURect@Foundation@Windows@winrt@@AEBUtagRECT@@@Z @ 0x1801A5EE0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnscaleByMonitorDPI@SearchAppSizeHelpers@@YA?AURect@Foundation@Windows@winrt@@AEBU2345@H@Z @ 0x180147D6C (-UnscaleByMonitorDPI@SearchAppSizeHelpers@@YA-AURect@Foundation@Windows@winrt@@AEBU2345@H@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??$LogSearchPaneRect@AEAUtagRECT@@@SearchBoxOnTaskbarSearchAppPositionerTelemetry@@SAXAEAUtagRECT@@@Z @ 0x1801A4EBC (--$LogSearchPaneRect@AEAUtagRECT@@@SearchBoxOnTaskbarSearchAppPositionerTelemetry@@SAXAEAUtagREC.c)
 *     ?CalculateTaskbarSearchBoxRect@SearchBoxOnTaskbarSearchAppPositioner@@AEAA?AURect@Foundation@Windows@winrt@@AEBUMonitorInfo@@AEBUtagRECT@@_N@Z @ 0x1801A51C4 (-CalculateTaskbarSearchBoxRect@SearchBoxOnTaskbarSearchAppPositioner@@AEAA-AURect@Foundation@Win.c)
 *     ?CorrectRectsForAutoHide@SearchBoxOnTaskbarSearchAppPositioner@@AEAAXPEAUMonitorInfo@@@Z @ 0x1801A52D4 (-CorrectRectsForAutoHide@SearchBoxOnTaskbarSearchAppPositioner@@AEAAXPEAUMonitorInfo@@@Z.c)
 *     ?GetAppRectForSearchBoxOnTaskbar@SearchBoxOnTaskbarSearchAppPositioner@@AEAA?AUtagRECT@@AEBUMonitorInfo@@_NHH1@Z @ 0x1801A57E0 (-GetAppRectForSearchBoxOnTaskbar@SearchBoxOnTaskbarSearchAppPositioner@@AEAA-AUtagRECT@@AEBUMoni.c)
 *     ?GetSearchPaneWidthAndHeight@SearchBoxOnTaskbarSearchAppPositioner@@AEBA?AU?$pair@HH@std@@AEBUMonitorInfo@@_N@Z @ 0x1801A5DFC (-GetSearchPaneWidthAndHeight@SearchBoxOnTaskbarSearchAppPositioner@@AEBA-AU-$pair@HH@std@@AEBUMo.c)
 *     _anonymous_namespace_::IsAppRectCrossScreenRectOnSide @ 0x1801A6128 (_anonymous_namespace_--IsAppRectCrossScreenRectOnSide.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall SearchBoxOnTaskbarSearchAppPositioner::GetTaskbarSearchBoxRect(__int64 a1, __int64 a2)
{
  SearchBoxOnTaskbarSearchAppPositioner *v4; // rcx
  char v5; // r14
  bool v6; // di
  __int64 v7; // rcx
  LONG top; // esi
  LONG left; // ebx
  SearchBoxOnTaskbarSearchAppPositioner *v10; // rcx
  SearchBoxOnTaskbarSearchAppPositioner *v11; // rcx
  int v12; // r9d
  _OWORD *v13; // rax
  struct tagRECT v15; // [rsp+40h] [rbp-59h] BYREF
  _BYTE v16[16]; // [rsp+50h] [rbp-49h] BYREF
  __m128i v17[3]; // [rsp+60h] [rbp-39h] BYREF
  int v18; // [rsp+98h] [rbp-1h]
  int v19; // [rsp+B0h] [rbp+17h]

  (*(void (__fastcall **)(_QWORD, __m128i *))(**(_QWORD **)(a1 + 8) + 8LL))(*(_QWORD *)(a1 + 8), v17);
  SearchBoxOnTaskbarSearchAppPositioner::CorrectRectsForAutoHide(v4, v17);
  v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 16LL))(*(_QWORD *)(a1 + 8));
  v6 = v19 == 2;
  SearchBoxOnTaskbarSearchAppPositioner::GetSearchPaneWidthAndHeight(v7, &v15.left, v17, v19 == 2);
  top = v15.top;
  left = v15.left;
  SearchBoxOnTaskbarSearchAppPositioner::GetAppRectForSearchBoxOnTaskbar(v10, &v15, v17, v5, v15.left, v15.top, 0);
  if ( v6 )
  {
    if ( (unsigned __int8)anonymous_namespace_::IsAppRectCrossScreenRectOnSide(&v15, v17) )
    {
      v15.top = v17[0].m128i_i32[3] - top;
      v15.left = (v17[0].m128i_i32[2] - v17[0].m128i_i32[0] - left) / 2 + v17[0].m128i_i32[0];
      v15.right = v15.left + left;
      v15.bottom = v17[0].m128i_i32[3];
      if ( (unsigned __int8)anonymous_namespace_::IsAppRectCrossScreenRectOnSide(&v15, v17) )
      {
        v15 = *SearchBoxOnTaskbarSearchAppPositioner::GetAppRectForSearchBoxOnTaskbar(v11, &v15, v17, v5, v12, top, 1);
        SearchBoxOnTaskbarSearchAppPositionerTelemetry::LogSearchPaneRect<tagRECT &>(&v15);
      }
    }
  }
  v13 = (_OWORD *)SearchBoxOnTaskbarSearchAppPositioner::CalculateTaskbarSearchBoxRect(
                    (__int64)v11,
                    (__int64)v16,
                    v17[0].m128i_i32,
                    &v15,
                    v5);
  SearchAppSizeHelpers::UnscaleByMonitorDPI(a2, v13, v18);
  return a2;
}
