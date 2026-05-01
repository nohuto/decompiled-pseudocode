/*
 * XREFs of ?WaitForWindowManagerConnection@WindowManagerBridge@@UEAAJXZ @ 0x180062210
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

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowManagerBridge::WaitForWindowManagerConnection(wil **this)
{
  unsigned int v2; // r8d
  int v3; // r9d
  const char *v4; // r9
  int v6; // [rsp+20h] [rbp-168h]
  _QWORD v7[40]; // [rsp+30h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]

  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v7);
  v7[0] = &ViewManagerInteropTraceLogging::ConnectToWindowManager::`vftable';
  ViewManagerInteropTraceLogging::ConnectToWindowManager::StartActivity((ViewManagerInteropTraceLogging::ConnectToWindowManager *)v7);
  if ( wil::handle_wait(this[33], (void *)0xEA60, v2, v3) )
  {
    v4 = (const char *)*((unsigned int *)this + 72);
    if ( (int)v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x60,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        v4,
        v6);
    wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v7, 0LL);
    ViewManagerInteropTraceLogging::ConnectToWindowManager::~ConnectToWindowManager((ViewManagerInteropTraceLogging::ConnectToWindowManager *)v7);
    return 0LL;
  }
  else
  {
    ViewManagerInteropTraceLogging::ConnectToWindowManager::~ConnectToWindowManager((ViewManagerInteropTraceLogging::ConnectToWindowManager *)v7);
    return 2147483658LL;
  }
}
