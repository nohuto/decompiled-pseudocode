/*
 * XREFs of ?SwitchToLastActivatedView@MultitaskingViewGestureHandlerHelpers@@YAJPEAUIApplicationViewCollection@@PEAUIApplicationViewSwitcher@@PEAUIVirtualDesktop@@@Z @ 0x18049E018
 * Callers:
 *     _lambda_75bac987ac5f971a4d8840925317feb1_::operator() @ 0x180495E0C (_lambda_75bac987ac5f971a4d8840925317feb1_--operator().c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180082930 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18019033C (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIApplicationView@@@Z @ 0x1802EC8A4 (--4-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIApplicationVi.c)
 *     ?GetMostRecentlyUsedView@MultitaskingViewGestureHandlerHelpers@@YAJPEAUIObjectArray@@PEAUIVirtualDesktop@@PEAPEAUIApplicationView@@@Z @ 0x18049DC70 (-GetMostRecentlyUsedView@MultitaskingViewGestureHandlerHelpers@@YAJPEAUIObjectArray@@PEAUIVirtua.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall MultitaskingViewGestureHandlerHelpers::SwitchToLastActivatedView(
        MultitaskingViewGestureHandlerHelpers *this,
        IUnknown *a2,
        struct IObjectArray *a3,
        struct IVirtualDesktop *a4)
{
  __int64 v7; // rax
  int v8; // eax
  struct IApplicationView **v9; // r9
  unsigned int v10; // ebx
  int MostRecentlyUsedView; // eax
  struct IApplicationView *v12; // rdx
  HWND WindowForView; // rbx
  HANDLE PropW; // rdx
  int (__fastcall *v15)(MultitaskingViewGestureHandlerHelpers *, HANDLE, __int64 *); // rax
  UINT v16; // eax
  const char *v17; // r9
  MultitaskingViewGestureHandlerHelpers *v19[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  ApplicationViewHelpers *v21; // [rsp+50h] [rbp+20h] BYREF
  __int64 v22; // [rsp+68h] [rbp+38h] BYREF

  if ( !this || !a2 )
    return 0LL;
  v7 = *(_QWORD *)this;
  v19[0] = 0LL;
  v8 = (*(__int64 (__fastcall **)(MultitaskingViewGestureHandlerHelpers *, MultitaskingViewGestureHandlerHelpers **, struct IObjectArray *, struct IVirtualDesktop *))(v7 + 24))(
         this,
         v19,
         a3,
         a4);
  v10 = v8;
  if ( v8 >= 0 )
  {
    v21 = 0LL;
    MostRecentlyUsedView = MultitaskingViewGestureHandlerHelpers::GetMostRecentlyUsedView(
                             v19[0],
                             a3,
                             (struct IVirtualDesktop *)&v21,
                             v9);
    v10 = MostRecentlyUsedView;
    if ( MostRecentlyUsedView >= 0 )
    {
      if ( v21 )
      {
        WindowForView = (HWND)ApplicationViewHelpers::GetWindowForView(
                                (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64))v21,
                                v12);
        PropW = GetPropW(WindowForView, (LPCWSTR)0xA920);
        if ( PropW )
        {
          v15 = *(int (__fastcall **)(MultitaskingViewGestureHandlerHelpers *, HANDLE, __int64 *))(*(_QWORD *)this + 48LL);
          v22 = 0LL;
          if ( v15(this, PropW, &v22) >= 0 )
            wil::com_ptr_t<IApplicationView,wil::err_exception_policy>::operator=((__int64 *)&v21, v22);
          v16 = Msg;
          if ( Msg )
            goto LABEL_16;
          v16 = RegisterWindowMessageW(L"TabSwitch");
          Msg = v16;
          if ( !v16 )
          {
            wil::details::in1diag3::_Log_GetLastError(
              retaddr,
              (void *)0xAF,
              (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandlerhelpers.cpp",
              v17);
            v16 = Msg;
          }
          if ( v16 )
LABEL_16:
            PostMessageW(WindowForView, v16, 0LL, 0LL);
          wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v22);
        }
        CoAllowSetForegroundWindow(a2, 0LL);
        v10 = ((__int64 (__fastcall *)(IUnknown *, ApplicationViewHelpers *))a2->lpVtbl[1].QueryInterface)(a2, v21);
      }
      else
      {
        v10 = 0;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x9B,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandlerhelpers.cpp",
        (const char *)(unsigned int)MostRecentlyUsedView);
    }
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v21);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x98,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandlerhelpers.cpp",
      (const char *)(unsigned int)v8);
  }
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)v19);
  return v10;
}
