/*
 * XREFs of ?Dispose@MessageProxyReconnectAdapter@@QEAAJXZ @ 0x180737B84
 * Callers:
 *     ?UnInitialize@TabTipAdapter@KeyboardHosting@@QEAAXXZ @ 0x180185330 (-UnInitialize@TabTipAdapter@KeyboardHosting@@QEAAXXZ.c)
 *     ?OnRemotePolicyIsReady@TabTipAdapter@KeyboardHosting@@UEAAJXZ @ 0x1802DDB10 (-OnRemotePolicyIsReady@TabTipAdapter@KeyboardHosting@@UEAAJXZ.c)
 *     ?OnDisconnected@TabTipAdapter@KeyboardHosting@@UEAAJPEAUIMessageProxy@@@Z @ 0x180525980 (-OnDisconnected@TabTipAdapter@KeyboardHosting@@UEAAJPEAUIMessageProxy@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?StopConnectionRetryTimer@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x18073815C (-StopConnectionRetryTimer@MessageProxyReconnectAdapter@@AEAAJXZ.c)
 */

__int64 __fastcall MessageProxyReconnectAdapter::Dispose(MessageProxyReconnectAdapter *this)
{
  int v2; // eax
  unsigned int v3; // edi
  __int64 v5; // rcx
  int v6; // eax
  unsigned int v7; // esi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = MessageProxyReconnectAdapter::StopConnectionRetryTimer(this);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v5 = *((_QWORD *)this + 8);
    if ( v5
      && (v6 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v5 + 64LL))(
                 v5,
                 ((unsigned __int64)this + 8) & -(__int64)(this != 0LL)),
          v7 = v6,
          v6 < 0) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x26,
        (int)"shellcommondesktopbase\\textinput\\sharedlibs\\messageproxyreconnectadapter\\messageproxyreconnectadapter.cpp",
        (const char *)(unsigned int)v6);
      return v7;
    }
    else
    {
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 8);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 7);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 9);
      *((_QWORD *)this + 6) = 0LL;
      return 0LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x22,
      (int)"shellcommondesktopbase\\textinput\\sharedlibs\\messageproxyreconnectadapter\\messageproxyreconnectadapter.cpp",
      (const char *)(unsigned int)v2);
    return v3;
  }
}
