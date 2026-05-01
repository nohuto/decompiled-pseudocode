/*
 * XREFs of ?WaitForWindowManagerConnection@UwpWindowManagerBridge@@UEAAJXZ @ 0x180177C40
 * Callers:
 *     <none>
 * Callees:
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800B5108 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1ConnectToWindowManager@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x180177CDC (--1ConnectToWindowManager@ViewManagerInteropTraceLogging@@QEAA@XZ.c)
 *     ??$?0$$V@ConnectToWindowManager@ViewManagerInteropTraceLogging@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x180177D08 (--$-0$$V@ConnectToWindowManager@ViewManagerInteropTraceLogging@@AEAA@U-$integral_constant@D$0A@@.c)
 *     ?handle_wait@wil@@YA_NPEAXKH@Z @ 0x180177DC8 (-handle_wait@wil@@YA_NPEAXKH@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall UwpWindowManagerBridge::WaitForWindowManagerConnection(wil **this)
{
  unsigned int v2; // r8d
  int v3; // r9d
  const char *v4; // r9
  int v6; // [rsp+20h] [rbp-168h]
  _BYTE v7[320]; // [rsp+30h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]

  ViewManagerInteropTraceLogging::ConnectToWindowManager::ConnectToWindowManager(v7);
  if ( wil::handle_wait(this[35], (void *)0xEA60, v2, v3) )
  {
    v4 = (const char *)*((unsigned int *)this + 76);
    if ( (int)v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xAE,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
        v4,
        v6);
    wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v7, 0);
    ViewManagerInteropTraceLogging::ConnectToWindowManager::~ConnectToWindowManager((ViewManagerInteropTraceLogging::ConnectToWindowManager *)v7);
    return 0LL;
  }
  else
  {
    ViewManagerInteropTraceLogging::ConnectToWindowManager::~ConnectToWindowManager((ViewManagerInteropTraceLogging::ConnectToWindowManager *)v7);
    return 2147483658LL;
  }
}
