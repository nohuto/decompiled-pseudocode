/*
 * XREFs of ??$_ForwardVirtualDesktopNotification2@UIVirtualDesktopNotification@@PEAUIVirtualDesktop@@PEAU2@@CVirtualDesktopNotifications@@IEAAJP8IVirtualDesktopNotification@@EAAJPEAUIVirtualDesktop@@0@Z00@Z @ 0x1805F90C0
 * Callers:
 *     ?CurrentVirtualDesktopChanged@?$VirtualDesktopNotificationForwarderHelper@VCVirtualDesktopNotifications@@@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x1805FA040 (-CurrentVirtualDesktopChanged@-$VirtualDesktopNotificationForwarderHelper@VCVirtualDesktopNotifi.c)
 *     ?VirtualDesktopDestroyBegin@?$VirtualDesktopNotificationForwarderHelper@VCVirtualDesktopNotifications@@@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x1805FA140 (-VirtualDesktopDestroyBegin@-$VirtualDesktopNotificationForwarderHelper@VCVirtualDesktopNotifica.c)
 *     ?VirtualDesktopDestroyFailed@?$VirtualDesktopNotificationForwarderHelper@VCVirtualDesktopNotifications@@@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x1805FA160 (-VirtualDesktopDestroyFailed@-$VirtualDesktopNotificationForwarderHelper@VCVirtualDesktopNotific.c)
 *     ?VirtualDesktopDestroyed@?$VirtualDesktopNotificationForwarderHelper@VCVirtualDesktopNotifications@@@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x1805FA180 (-VirtualDesktopDestroyed@-$VirtualDesktopNotificationForwarderHelper@VCVirtualDesktopNotificatio.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$AddRefCountWrappers@PEAUIVirtualDesktop@@PEAU1@@@YAJV?$tuple@PEAUIVirtualDesktop@@PEAU1@@std@@PEAV?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V123@@1@@Z @ 0x1805F8A68 (--$AddRefCountWrappers@PEAUIVirtualDesktop@@PEAU1@@@YAJV-$tuple@PEAUIVirtualDesktop@@PEAU1@@std@.c)
 *     ??$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIVirtualDesktop@@PEAU2@$$ZV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V345@@CVirtualDesktopNotifications@@AEAAJP8IVirtualDesktopNotification@@EAAJPEAUIVirtualDesktop@@0@ZV?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V123@@std@@@Z @ 0x1805F9460 (--$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIVirtualDesktop@@PEAU2@$$ZV-$ComPtr@UIV.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopNotifications::_ForwardVirtualDesktopNotification2<IVirtualDesktopNotification,IVirtualDesktop *,IVirtualDesktop *>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int128 v9; // [rsp+20h] [rbp-20h] BYREF
  __int128 v10; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]

  v10 = 0LL;
  *(_QWORD *)&v9 = a4;
  *((_QWORD *)&v9 + 1) = a3;
  v6 = AddRefCountWrappers<IVirtualDesktop *,IVirtualDesktop *>((__int64 *)&v9, (__int64 *)&v10);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v9 = v10;
    v10 = 0uLL;
    v7 = ____QueueNotification2_UIVirtualDesktopNotification__PEAUIVirtualDesktop__PEAU2___ZV__ComPtr_UIVirtualDesktop___WRL_Microsoft__V345__CVirtualDesktopNotifications__AEAAJP8IVirtualDesktopNotification__EAAJPEAUIVirtualDesktop__0_ZV__tuple_V__ComPtr_UIVirtualDesktop___WRL_Microsoft__V123__std___Z(
           a1,
           a2,
           &v9);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x11A,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopnotifications.cpp",
      (const char *)(unsigned int)v6);
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v10 + 1);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v10);
  return v7;
}
