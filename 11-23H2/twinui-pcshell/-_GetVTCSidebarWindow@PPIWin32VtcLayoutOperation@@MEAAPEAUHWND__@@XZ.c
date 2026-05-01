/*
 * XREFs of ?_GetVTCSidebarWindow@PPIWin32VtcLayoutOperation@@MEAAPEAUHWND__@@XZ @ 0x1805CEF00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LPARAM __fastcall PPIWin32VtcLayoutOperation::_GetVTCSidebarWindow(PPIWin32VtcLayoutOperation *this)
{
  LPARAM lParam; // [rsp+38h] [rbp+10h] BYREF

  lParam = 0LL;
  EnumWindows((WNDENUMPROC)lambda_7e13dd26ee5179011b47c221adf0f758_::_lambda_invoker_cdecl_, (LPARAM)&lParam);
  return lParam;
}
