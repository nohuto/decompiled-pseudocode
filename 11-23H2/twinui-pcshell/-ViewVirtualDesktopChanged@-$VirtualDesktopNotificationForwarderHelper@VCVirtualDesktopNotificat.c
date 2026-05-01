/*
 * XREFs of ?ViewVirtualDesktopChanged@?$VirtualDesktopNotificationForwarderHelper@VCVirtualDesktopNotifications@@@@UEAAJPEAUIApplicationView@@@Z @ 0x18019F310
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$AddRefCountWrappers@PEAUIApplicationView@@@@YAJV?$tuple@PEAUIApplicationView@@@std@@PEAV?$tuple@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@1@@Z @ 0x18014D9A0 (--$AddRefCountWrappers@PEAUIApplicationView@@@@YAJV-$tuple@PEAUIApplicationView@@@std@@PEAV-$tup.c)
 *     ??$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIApplicationView@@$$ZV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@CVirtualDesktopNotifications@@AEAAJP8IVirtualDesktopNotification@@EAAJPEAUIApplicationView@@@ZV?$tuple@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@@Z @ 0x18014DA4C (--$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIApplicationView@@$$ZV-$ComPtr@UIApplic.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualDesktopNotificationForwarderHelper<CVirtualDesktopNotifications>::ViewVirtualDesktopChanged(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rdi
  int v3; // eax
  __int64 v4; // rdx
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v2 = a1 - 8;
  v8 = 0LL;
  v9 = a2;
  v3 = AddRefCountWrappers<IApplicationView *>(&v9, &v8);
  v5 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x11A,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopnotifications.cpp",
      (const char *)(unsigned int)v3);
  }
  else
  {
    v9 = v8;
    v8 = 0LL;
    v5 = ____QueueNotification2_UIVirtualDesktopNotification__PEAUIApplicationView____ZV__ComPtr_UIApplicationView___WRL_Microsoft___CVirtualDesktopNotifications__AEAAJP8IVirtualDesktopNotification__EAAJPEAUIApplicationView___ZV__tuple_V__ComPtr_UIApplicationView___WRL_Microsoft___std___Z(
           v2,
           v4,
           &v9);
  }
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v8);
  return v5;
}
