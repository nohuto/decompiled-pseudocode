/*
 * XREFs of ??$_ForwardVirtualDesktopNotification2@UIVirtualDesktopNotification@@PEAUIVirtualDesktop@@II@CVirtualDesktopNotifications@@IEAAJP8IVirtualDesktopNotification@@EAAJPEAUIVirtualDesktop@@II@Z0II@Z @ 0x1805F9018
 * Callers:
 *     ?VirtualDesktopMoved@?$VirtualDesktopNotificationForwarderHelper@VCVirtualDesktopNotifications@@@@UEAAJPEAUIVirtualDesktop@@II@Z @ 0x1805FA1A0 (-VirtualDesktopMoved@-$VirtualDesktopNotificationForwarderHelper@VCVirtualDesktopNotifications@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$AddRefCountWrappers@PEAUIVirtualDesktop@@II@@YAJV?$tuple@PEAUIVirtualDesktop@@II@std@@PEAV?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@II@1@@Z @ 0x1805F89D4 (--$AddRefCountWrappers@PEAUIVirtualDesktop@@II@@YAJV-$tuple@PEAUIVirtualDesktop@@II@std@@PEAV-$t.c)
 *     ??$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIVirtualDesktop@@II$$ZV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@II@CVirtualDesktopNotifications@@AEAAJP8IVirtualDesktopNotification@@EAAJPEAUIVirtualDesktop@@II@ZV?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@II@std@@@Z @ 0x1805F935C (--$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIVirtualDesktop@@II$$ZV-$ComPtr@UIVirtu.c)
 *     ??0?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@II@std@@QEAA@$$QEAV01@@Z @ 0x1805F9840 (--0-$tuple@V-$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@II@std@@QEAA@$$QEAV01@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopNotifications::_ForwardVirtualDesktopNotification2<IVirtualDesktopNotification,IVirtualDesktop *,unsigned int,unsigned int>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rdx
  _DWORD v11[2]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v12; // [rsp+28h] [rbp-18h] BYREF
  int v13[2]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v14; // [rsp+38h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]

  v11[0] = 0;
  v11[1] = 0;
  v12 = 0LL;
  v13[0] = a5;
  v13[1] = a4;
  v14 = a3;
  v6 = AddRefCountWrappers<IVirtualDesktop *,unsigned int,unsigned int>((__int64)v13, (__int64)v11);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v8 = std::tuple<Microsoft::WRL::ComPtr<IVirtualDesktop>,unsigned int,unsigned int>::tuple<Microsoft::WRL::ComPtr<IVirtualDesktop>,unsigned int,unsigned int>(
           v13,
           v11);
    v7 = ____QueueNotification2_UIVirtualDesktopNotification__PEAUIVirtualDesktop__II__ZV__ComPtr_UIVirtualDesktop___WRL_Microsoft__II_CVirtualDesktopNotifications__AEAAJP8IVirtualDesktopNotification__EAAJPEAUIVirtualDesktop__II_ZV__tuple_V__ComPtr_UIVirtualDesktop___WRL_Microsoft__II_std___Z(
           a1,
           v9,
           v8);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x11A,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopnotifications.cpp",
      (const char *)(unsigned int)v6);
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v12);
  return v7;
}
