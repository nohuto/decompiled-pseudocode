/*
 * XREFs of ?FindCallMonitorAndSharingToolBar@PPIWin32VtcLayoutOperation@@UEAAJPEAPEAUHWND__@@0@Z @ 0x1805CDA30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall PPIWin32VtcLayoutOperation::FindCallMonitorAndSharingToolBar(
        PPIWin32VtcLayoutOperation *this,
        HWND *a2,
        HWND *a3)
{
  HWND v5; // rax
  DWORD WindowThreadProcessId; // eax
  LPARAM lParam[3]; // [rsp+20h] [rbp-18h] BYREF

  *a2 = 0LL;
  *a3 = 0LL;
  v5 = (HWND)(*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 22) + 216LL))((char *)this - 176);
  if ( !v5 )
    return 2147943568LL;
  WindowThreadProcessId = GetWindowThreadProcessId(v5, 0LL);
  if ( !WindowThreadProcessId )
    return 2147943568LL;
  lParam[0] = (LPARAM)a2;
  lParam[1] = (LPARAM)a3;
  EnumThreadWindows(
    WindowThreadProcessId,
    (WNDENUMPROC)lambda_ee220ff7548bede1c40267f3ce601e5d_::_lambda_invoker_cdecl_,
    (LPARAM)lParam);
  if ( *a2 )
    return 0LL;
  else
    return *a3 == 0LL ? 0x80070490 : 0;
}
