/*
 * XREFs of ?WaitForWindowManagerConnection@WindowManagerBridge@@UEAAJXZ @ 0x1804DAC00
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

// Hidden C++ exception states: #wind=1 #try_helpers=1
__int64 __fastcall WindowManagerBridge::WaitForWindowManagerConnection(wil **this, char a2)
{
  const char *v4; // r9
  int v5; // [rsp+20h] [rbp-168h]
  volatile signed __int32 *v6[40]; // [rsp+30h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]

  ViewManagerInteropTraceLogging::ConnectToWindowManager::ConnectToWindowManager((__int64)v6, a2);
  if ( (unsigned __int8)wil::handle_wait(this[33], (void *)0xEA60) )
  {
    v4 = (const char *)*((unsigned int *)this + 72);
    if ( (int)v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x60,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        v4,
        v5);
    wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v6, 0);
    ViewManagerInteropTraceLogging::ConnectToWindowManager::~ConnectToWindowManager(v6);
    return 0LL;
  }
  else
  {
    ViewManagerInteropTraceLogging::ConnectToWindowManager::~ConnectToWindowManager(v6);
    return 2147483658LL;
  }
}
