/*
 * XREFs of ?IsViewVisibleOnMonitor@MultitaskingViewGestureHandlerHelpers@@YA_NPEAUIApplicationView@@PEAUIVirtualDesktop@@PEAUHMONITOR__@@@Z @ 0x18055D98C
 * Callers:
 *     ?CacheAllVisibleAppsOnMonitor@CAppThumbnailWindow@@IEAAJXZ @ 0x180555460 (-CacheAllVisibleAppsOnMonitor@CAppThumbnailWindow@@IEAAJXZ.c)
 *     ?TryGetTopTwoWindows@CAppThumbnailWindow@@AEAAXPEAPEAUHWND__@@0@Z @ 0x18055CD20 (-TryGetTopTwoWindows@CAppThumbnailWindow@@AEAAXPEAPEAUHWND__@@0@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsViewVisible@MultitaskingViewGestureHandlerHelpers@@YA_NPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x18055D7AC (-IsViewVisible@MultitaskingViewGestureHandlerHelpers@@YA_NPEAUIApplicationView@@PEAUIVirtualDesk.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall MultitaskingViewGestureHandlerHelpers::IsViewVisibleOnMonitor(
        MultitaskingViewGestureHandlerHelpers *this,
        struct IApplicationView *a2,
        struct IVirtualDesktop *a3,
        HMONITOR a4)
{
  char v6; // bl
  char result; // al
  __int64 v8; // rax
  HWND hWnd; // [rsp+20h] [rbp-10h] BYREF
  struct IVirtualDesktop *v10; // [rsp+28h] [rbp-8h] BYREF
  int v11; // [rsp+60h] [rbp+30h] BYREF
  __int64 v12; // [rsp+68h] [rbp+38h] BYREF

  v11 = 0;
  hWnd = 0LL;
  v6 = 1;
  result = MultitaskingViewGestureHandlerHelpers::IsViewVisible(this, a2, a3)
        && (*(int (__fastcall **)(MultitaskingViewGestureHandlerHelpers *, HWND *))(*(_QWORD *)this + 72LL))(
             this,
             &hWnd) >= 0
        && !IsIconic(hWnd)
        && (*(int (__fastcall **)(MultitaskingViewGestureHandlerHelpers *, int *))(*(_QWORD *)this + 88LL))(this, &v11) >= 0
        && v11;
  if ( a3 )
  {
    v12 = 0LL;
    if ( !result
      || (v8 = *(_QWORD *)this,
          v12 = 0LL,
          (*(int (__fastcall **)(MultitaskingViewGestureHandlerHelpers *, __int64 *))(v8 + 80))(this, &v12) < 0)
      || (*(int (__fastcall **)(__int64, struct IVirtualDesktop **))(*(_QWORD *)v12 + 40LL))(v12, &v10) < 0
      || a3 != v10 )
    {
      v6 = 0;
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v12);
    return v6;
  }
  return result;
}
