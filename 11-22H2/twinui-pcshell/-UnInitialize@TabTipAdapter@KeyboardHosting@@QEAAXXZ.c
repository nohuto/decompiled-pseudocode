/*
 * XREFs of ?UnInitialize@TabTipAdapter@KeyboardHosting@@QEAAXXZ @ 0x180185330
 * Callers:
 *     ?ShutdownServices@TouchKeyboardExperienceManager@@UEAAJPEAUIProfferService@@@Z @ 0x1800A3B50 (-ShutdownServices@TouchKeyboardExperienceManager@@UEAAJPEAUIProfferService@@@Z.c)
 *     ??1TabTipAdapter@KeyboardHosting@@UEAA@XZ @ 0x1801850D8 (--1TabTipAdapter@KeyboardHosting@@UEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoveEventHandlersFromCoreKeyboardManager@TabTipAdapter@KeyboardHosting@@AEAAXXZ @ 0x180185448 (-RemoveEventHandlersFromCoreKeyboardManager@TabTipAdapter@KeyboardHosting@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Dispose@MessageProxyReconnectAdapter@@QEAAJXZ @ 0x180737B84 (-Dispose@MessageProxyReconnectAdapter@@QEAAJXZ.c)
 */

void __fastcall KeyboardHosting::TabTipAdapter::UnInitialize(KeyboardHosting::TabTipAdapter *this)
{
  MessageProxyReconnectAdapter *v2; // rcx
  int v3; // eax
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rcx
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  KeyboardHosting::TabTipAdapter::RemoveEventHandlersFromCoreKeyboardManager(this);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 11);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 7);
  v2 = (MessageProxyReconnectAdapter *)*((_QWORD *)this + 8);
  if ( v2 )
  {
    v3 = MessageProxyReconnectAdapter::Dispose(v2);
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1BD,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v3);
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 8);
  }
  v4 = *((_QWORD *)this + 13);
  if ( v4 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 96LL))(v4);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1C3,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v5);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 13);
  }
  v6 = *((_QWORD *)this + 14);
  if ( v6 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 96LL))(v6);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1C9,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v7);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 14);
  }
  if ( *((_QWORD *)this + 69) )
  {
    UnregisterScaleChangeEvent();
    *((_QWORD *)this + 69) = 0LL;
  }
}
