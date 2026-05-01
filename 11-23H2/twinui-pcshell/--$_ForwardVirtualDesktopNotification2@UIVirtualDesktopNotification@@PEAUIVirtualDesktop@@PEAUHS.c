/*
 * XREFs of ??$_ForwardVirtualDesktopNotification2@UIVirtualDesktopNotification@@PEAUIVirtualDesktop@@PEAUHSTRING__@@@CVirtualDesktopNotifications@@IEAAJP8IVirtualDesktopNotification@@EAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z01@Z @ 0x1805F9184
 * Callers:
 *     ?VirtualDesktopNameChanged@?$VirtualDesktopNotificationForwarderHelper@VCVirtualDesktopNotifications@@@@UEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z @ 0x1805FA1D0 (-VirtualDesktopNameChanged@-$VirtualDesktopNotificationForwarderHelper@VCVirtualDesktopNotificat.c)
 *     ?VirtualDesktopWallpaperChanged@?$VirtualDesktopNotificationForwarderHelper@VCVirtualDesktopNotifications@@@@UEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z @ 0x1805FA290 (-VirtualDesktopWallpaperChanged@-$VirtualDesktopNotificationForwarderHelper@VCVirtualDesktopNoti.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$AddRefCountWrappers@PEAUIVirtualDesktop@@PEAUHSTRING__@@@@YAJV?$tuple@PEAUIVirtualDesktop@@PEAUHSTRING__@@@std@@PEAV?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@VHString@Wrappers@23@@1@@Z @ 0x1805F8B58 (--$AddRefCountWrappers@PEAUIVirtualDesktop@@PEAUHSTRING__@@@@YAJV-$tuple@PEAUIVirtualDesktop@@PE.c)
 *     ??$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIVirtualDesktop@@PEAUHSTRING__@@$$ZV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@VHString@Wrappers@56@@CVirtualDesktopNotifications@@AEAAJP8IVirtualDesktopNotification@@EAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@ZV?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@VHString@Wrappers@23@@std@@@Z @ 0x1805F9560 (--$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIVirtualDesktop@@PEAUHSTRING__@@$$ZV-$C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopNotifications::_ForwardVirtualDesktopNotification2<IVirtualDesktopNotification,IVirtualDesktop *,HSTRING__ *>(
        __int64 a1,
        __int64 a2,
        HSTRING a3,
        HSTRING a4)
{
  int v6; // eax
  unsigned int v7; // ebx
  HSTRING v9; // [rsp+20h] [rbp-20h] BYREF
  HSTRING v10; // [rsp+28h] [rbp-18h]
  HSTRING string[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]

  *(_OWORD *)string = 0LL;
  v9 = a4;
  v10 = a3;
  v6 = AddRefCountWrappers<IVirtualDesktop *,HSTRING__ *>(&v9, (__int64)string);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v9 = string[0];
    string[0] = 0LL;
    v10 = string[1];
    string[1] = 0LL;
    v7 = ____QueueNotification2_UIVirtualDesktopNotification__PEAUIVirtualDesktop__PEAUHSTRING______ZV__ComPtr_UIVirtualDesktop___WRL_Microsoft__VHString_Wrappers_56__CVirtualDesktopNotifications__AEAAJP8IVirtualDesktopNotification__EAAJPEAUIVirtualDesktop__PEAUHSTRING_____ZV__tuple_V__ComPtr_UIVirtualDesktop___WRL_Microsoft__VHString_Wrappers_23__std___Z(
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
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&string[1]);
  WindowsDeleteString(string[0]);
  return v7;
}
