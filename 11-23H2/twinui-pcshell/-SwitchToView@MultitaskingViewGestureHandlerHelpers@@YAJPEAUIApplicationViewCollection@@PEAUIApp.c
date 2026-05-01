/*
 * XREFs of ?SwitchToView@MultitaskingViewGestureHandlerHelpers@@YAJPEAUIApplicationViewCollection@@PEAUIApplicationViewSwitcher@@PEAUIApplicationView@@@Z @ 0x18055DAA4
 * Callers:
 *     ?SwitchToWindow@MultitaskingViewGestureHandlerHelpers@@YAJPEAUIApplicationViewCollection@@PEAUIApplicationViewSwitcher@@PEAUHWND__@@@Z @ 0x18055DBF4 (-SwitchToWindow@MultitaskingViewGestureHandlerHelpers@@YAJPEAUIApplicationViewCollection@@PEAUIA.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x1800CA970 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1803A43A8 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall MultitaskingViewGestureHandlerHelpers::SwitchToView(
        MultitaskingViewGestureHandlerHelpers *this,
        struct IApplicationViewCollection *a2,
        __int64 (__fastcall ***a3)(ApplicationViewHelpers *, GUID *, __int64),
        struct IApplicationView *a4)
{
  __int64 (__fastcall ***v4)(ApplicationViewHelpers *, GUID *, __int64); // rdi
  HWND WindowForView; // rbp
  HANDLE PropW; // rdx
  int (__fastcall *v9)(MultitaskingViewGestureHandlerHelpers *, HANDLE, _QWORD); // rax
  UINT v10; // eax
  const char *v11; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 (__fastcall ***v14)(ApplicationViewHelpers *, GUID *, __int64); // [rsp+30h] [rbp+8h] BYREF

  v4 = a3;
  if ( !this || !a2 )
    return 0LL;
  WindowForView = (HWND)ApplicationViewHelpers::GetWindowForView(a3, a2);
  PropW = GetPropW(WindowForView, (LPCWSTR)0xA920);
  if ( PropW )
  {
    v9 = *(int (__fastcall **)(MultitaskingViewGestureHandlerHelpers *, HANDLE, _QWORD))(*(_QWORD *)this + 48LL);
    v14 = 0LL;
    if ( v9(this, PropW, &v14) >= 0 )
      v4 = v14;
    v10 = Msg;
    if ( Msg )
      goto LABEL_10;
    v10 = RegisterWindowMessageW(L"TabSwitch");
    Msg = v10;
    if ( !v10 )
    {
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0xCF,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandlerhelpers.cpp",
        v11);
      v10 = Msg;
    }
    if ( v10 )
LABEL_10:
      PostMessageW(WindowForView, v10, 0LL, 0LL);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v14);
  }
  CoAllowSetForegroundWindow((IUnknown *)a2, 0LL);
  return (*(__int64 (__fastcall **)(struct IApplicationViewCollection *, __int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64)))(*(_QWORD *)a2 + 24LL))(
           a2,
           v4);
}
