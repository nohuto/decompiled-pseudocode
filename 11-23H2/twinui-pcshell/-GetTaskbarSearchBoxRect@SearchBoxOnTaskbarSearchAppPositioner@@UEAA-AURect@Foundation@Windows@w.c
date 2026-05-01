/*
 * XREFs of ?GetTaskbarSearchBoxRect@SearchBoxOnTaskbarSearchAppPositioner@@UEAA?AURect@Foundation@Windows@winrt@@AEBUtagRECT@@@Z @ 0x180052B80
 * Callers:
 *     <none>
 * Callees:
 *     ?UnscaleByMonitorDPI@SearchAppSizeHelpers@@YA?AURect@Foundation@Windows@winrt@@AEBU2345@H@Z @ 0x180052CF8 (-UnscaleByMonitorDPI@SearchAppSizeHelpers@@YA-AURect@Foundation@Windows@winrt@@AEBU2345@H@Z.c)
 *     ?CalculateTaskbarSearchBoxRect@SearchBoxOnTaskbarSearchAppPositioner@@AEAA?AURect@Foundation@Windows@winrt@@AEBUMonitorInfo@@AEBUtagRECT@@_N@Z @ 0x180052D6C (-CalculateTaskbarSearchBoxRect@SearchBoxOnTaskbarSearchAppPositioner@@AEAA-AURect@Foundation@Win.c)
 *     _anonymous_namespace_::IsAppRectCrossScreenRectOnSide @ 0x180180948 (_anonymous_namespace_--IsAppRectCrossScreenRectOnSide.c)
 *     ?GetCenterModeSearchRect@SearchBoxOnTaskbarSearchAppPositioner@@AEAA?AUtagRECT@@AEBUMonitorInfo@@HH_N@Z @ 0x180180964 (-GetCenterModeSearchRect@SearchBoxOnTaskbarSearchAppPositioner@@AEAA-AUtagRECT@@AEBUMonitorInfo@.c)
 *     ?GetSearchPaneWidthAndHeight@SearchBoxOnTaskbarSearchAppPositioner@@AEBA?AU?$pair@HH@std@@AEBUMonitorInfo@@_N@Z @ 0x1801809D0 (-GetSearchPaneWidthAndHeight@SearchBoxOnTaskbarSearchAppPositioner@@AEBA-AU-$pair@HH@std@@AEBUMo.c)
 *     ?GetAppRectForSearchBoxOnTaskbar@SearchBoxOnTaskbarSearchAppPositioner@@AEAA?AUtagRECT@@AEBUMonitorInfo@@_NHH1@Z @ 0x180180AD8 (-GetAppRectForSearchBoxOnTaskbar@SearchBoxOnTaskbarSearchAppPositioner@@AEAA-AUtagRECT@@AEBUMoni.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$LogSearchPaneRect@AEAUtagRECT@@@SearchBoxOnTaskbarSearchAppPositionerTelemetry@@SAXAEAUtagRECT@@@Z @ 0x18047F88C (--$LogSearchPaneRect@AEAUtagRECT@@@SearchBoxOnTaskbarSearchAppPositionerTelemetry@@SAXAEAUtagREC.c)
 */

__int64 __fastcall SearchBoxOnTaskbarSearchAppPositioner::GetTaskbarSearchBoxRect(__int64 a1, __int64 a2)
{
  char v4; // di
  bool v5; // r15
  __int64 v6; // r9
  __int64 v7; // rcx
  LONG top; // r14d
  LONG left; // ebx
  SearchBoxOnTaskbarSearchAppPositioner *v10; // rcx
  SearchBoxOnTaskbarSearchAppPositioner *v11; // rcx
  __int64 v12; // rax
  struct MonitorInfo *v14; // [rsp+20h] [rbp-79h]
  struct MonitorInfo *v15; // [rsp+20h] [rbp-79h]
  struct tagRECT v16; // [rsp+40h] [rbp-59h] BYREF
  _BYTE v17[16]; // [rsp+50h] [rbp-49h] BYREF
  _DWORD v18[20]; // [rsp+60h] [rbp-39h] BYREF
  int v19; // [rsp+B0h] [rbp+17h]

  (*(void (__fastcall **)(_QWORD, _DWORD *))(**(_QWORD **)(a1 + 8) + 8LL))(*(_QWORD *)(a1 + 8), v18);
  v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 16LL))(*(_QWORD *)(a1 + 8));
  v5 = v19 == 2;
  LOBYTE(v6) = v19 == 2;
  SearchBoxOnTaskbarSearchAppPositioner::GetSearchPaneWidthAndHeight(v7, &v16, v18, v6);
  top = v16.top;
  left = v16.left;
  LODWORD(v14) = v16.left;
  SearchBoxOnTaskbarSearchAppPositioner::GetAppRectForSearchBoxOnTaskbar(
    v10,
    &v16,
    (const struct MonitorInfo *)v18,
    v4,
    v14,
    v16.top,
    0);
  if ( v5 )
  {
    if ( (unsigned __int8)anonymous_namespace_::IsAppRectCrossScreenRectOnSide(&v16, v18) )
    {
      v16 = *SearchBoxOnTaskbarSearchAppPositioner::GetCenterModeSearchRect(
               v11,
               &v16,
               (const struct MonitorInfo *)v18,
               left,
               top,
               v5);
      if ( (unsigned __int8)anonymous_namespace_::IsAppRectCrossScreenRectOnSide(&v16, v18) )
      {
        LODWORD(v15) = v18[2] - v18[0];
        v16 = *SearchBoxOnTaskbarSearchAppPositioner::GetAppRectForSearchBoxOnTaskbar(
                 v11,
                 &v16,
                 (const struct MonitorInfo *)v18,
                 v4,
                 v15,
                 top,
                 1);
        SearchBoxOnTaskbarSearchAppPositionerTelemetry::LogSearchPaneRect<tagRECT &>(&v16);
      }
    }
  }
  LOBYTE(v15) = v4;
  v12 = SearchBoxOnTaskbarSearchAppPositioner::CalculateTaskbarSearchBoxRect(v11, v17, v18, &v16, (_DWORD)v15);
  SearchAppSizeHelpers::UnscaleByMonitorDPI(a2, v12, v18[14]);
  return a2;
}
