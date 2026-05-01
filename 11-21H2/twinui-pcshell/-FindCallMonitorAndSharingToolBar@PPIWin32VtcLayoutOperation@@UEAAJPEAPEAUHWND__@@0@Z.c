/*
 * XREFs of ?FindCallMonitorAndSharingToolBar@PPIWin32VtcLayoutOperation@@UEAAJPEAPEAUHWND__@@0@Z @ 0x180515380
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_GetViewThreadId@PPIWin32VtcLayoutOperation@@AEAAJPEAUIApplicationView@@PEAK@Z @ 0x180516864 (-_GetViewThreadId@PPIWin32VtcLayoutOperation@@AEAAJPEAUIApplicationView@@PEAK@Z.c)
 */

__int64 __fastcall PPIWin32VtcLayoutOperation::FindCallMonitorAndSharingToolBar(
        PPIWin32VtcLayoutOperation *this,
        HWND *a2,
        HWND *a3)
{
  int ViewThreadId; // eax
  unsigned int v6; // edi
  LPARAM lParam[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  DWORD dwThreadId; // [rsp+48h] [rbp+10h] BYREF

  *a2 = 0LL;
  *a3 = 0LL;
  if ( !PPIWin32VtcLayoutOperation::_vtcSidebarView )
    return 2147943568LL;
  ViewThreadId = PPIWin32VtcLayoutOperation::_GetViewThreadId(
                   this,
                   PPIWin32VtcLayoutOperation::_vtcSidebarView,
                   &dwThreadId);
  v6 = ViewThreadId;
  if ( ViewThreadId < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA4,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\ppiwin32vtclayoutoperation.cpp",
      (const char *)(unsigned int)ViewThreadId);
    return v6;
  }
  lParam[0] = (LPARAM)a2;
  lParam[1] = (LPARAM)a3;
  EnumThreadWindows(
    dwThreadId,
    (WNDENUMPROC)lambda_3d05abe18940be18f5c65a3df56cea1e_::_lambda_invoker_cdecl_,
    (LPARAM)lParam);
  if ( *a2 || *a3 )
    return 0LL;
  else
    return 2147943568LL;
}
