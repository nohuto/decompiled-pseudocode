/*
 * XREFs of ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18003A7E0
 * Callers:
 *     ?MoveViewToDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x18003A700 (-MoveViewToDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@PEAUIVirtualDeskto.c)
 *     ?MoveViewToDesktopFromApiInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x1806021F0 (-MoveViewToDesktopFromApiInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@PEAUIVirtua.c)
 *     ?PinAppID@VirtualPinnedAppsHandler@@UEAAJPEBG@Z @ 0x180613470 (-PinAppID@VirtualPinnedAppsHandler@@UEAAJPEBG@Z.c)
 *     ?PinView@VirtualPinnedAppsHandler@@UEAAJPEAUIApplicationView@@@Z @ 0x180613900 (-PinView@VirtualPinnedAppsHandler@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?UnpinAppID@VirtualPinnedAppsHandler@@UEAAJPEBG@Z @ 0x180615770 (-UnpinAppID@VirtualPinnedAppsHandler@@UEAAJPEBG@Z.c)
 *     ?UnpinView@VirtualPinnedAppsHandler@@UEAAJPEAUIApplicationView@@@Z @ 0x180615C60 (-UnpinView@VirtualPinnedAppsHandler@@UEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x1800C8EDC (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 */

struct wil::details::IFailureCallback *__fastcall wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,2197815296,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,2197815296,_TlgReflectorTag_Param0IsProviderType>(
        struct wil::details::IFailureCallback *a1,
        __int64 a2)
{
  *(_QWORD *)a1 = &wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,2197815296,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (struct wil::details::IFailureCallback *)((char *)a1 + 8),
    a1,
    (struct wil::details::IFailureCallback *)((char *)a1 + 96),
    0);
  *((_QWORD *)a1 + 6) = (char *)a1 + 56;
  *((_DWORD *)a1 + 14) = 0;
  *((_DWORD *)a1 + 24) = 0;
  *((_QWORD *)a1 + 14) = 0LL;
  *((_DWORD *)a1 + 33) = 0;
  *((_BYTE *)a1 + 60) = 0;
  *((_BYTE *)a1 + 120) = 0;
  *((_QWORD *)a1 + 13) = a2;
  *((_DWORD *)a1 + 32) = 1;
  *((_QWORD *)a1 + 36) = 0LL;
  *((_QWORD *)a1 + 37) = 0LL;
  memset_0((char *)a1 + 136, 0, 0x98uLL);
  *((_QWORD *)a1 + 38) = 0LL;
  *((_QWORD *)a1 + 39) = 0LL;
  return a1;
}
