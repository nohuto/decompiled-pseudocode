/*
 * XREFs of ?WaitForWindowManagerConnection@UwpWindowManagerBridge@@UEAAJXZ @ 0x180403870
 * Callers:
 *     <none>
 * Callees:
 *     ??1ConnectToWindowManager@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x1800622C8 (--1ConnectToWindowManager@ViewManagerInteropTraceLogging@@QEAA@XZ.c)
 *     ?StartActivity@ConnectToWindowManager@ViewManagerInteropTraceLogging@@QEAAXXZ @ 0x1800622F4 (-StartActivity@ConnectToWindowManager@ViewManagerInteropTraceLogging@@QEAAXXZ.c)
 *     ??0?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800623F4 (--0-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Para_ea_1800623F4.c)
 *     ?handle_wait@wil@@YA_NPEAXKH@Z @ 0x180062538 (-handle_wait@wil@@YA_NPEAXKH@Z.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180092C88 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=1
__int64 __fastcall UwpWindowManagerBridge::WaitForWindowManagerConnection(wil **this)
{
  const char *v3; // r9
  int v4; // [rsp+20h] [rbp-168h]
  _QWORD v5[40]; // [rsp+30h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]

  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v5,
    (__int64)"ConnectToWindowManager");
  v5[0] = &ViewManagerInteropTraceLogging::ConnectToWindowManager::`vftable';
  ViewManagerInteropTraceLogging::ConnectToWindowManager::StartActivity((ViewManagerInteropTraceLogging::ConnectToWindowManager *)v5);
  if ( (unsigned __int8)wil::handle_wait(this[34], (void *)0xEA60) )
  {
    v3 = (const char *)*((unsigned int *)this + 74);
    if ( (int)v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x62,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
        v3,
        v4);
    wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v5, 0);
    ViewManagerInteropTraceLogging::ConnectToWindowManager::~ConnectToWindowManager((ViewManagerInteropTraceLogging::ConnectToWindowManager *)v5);
    return 0LL;
  }
  else
  {
    ViewManagerInteropTraceLogging::ConnectToWindowManager::~ConnectToWindowManager((ViewManagerInteropTraceLogging::ConnectToWindowManager *)v5);
    return 2147483658LL;
  }
}
