/*
 * XREFs of ?_InitializeVirtualDesktopComponents@MultitaskingData@@AEAAJPEAUHMONITOR__@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopPinnedApps@@PEAUIVirtualDesktopNotificationService@@@Z @ 0x1804A0D08
 * Callers:
 *     ?RuntimeClassInitialize@MultitaskingData@@QEAAJPEAUIApplicationViewCollection@@PEAUIApplicationViewVisibilityDebouncedNotificationService@@PEAUIVirtualDesktopThumbnailWindowFilter@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopPinnedApps@@PEAUIVirtualDesktopNotificationService@@PEAUIImmersiveSettingsCache@@PEAUISnapServiceProvider@@PEAUIApplicationViewIconLoader@@PEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@W4SwitchItemFilterBehavior@@@Z @ 0x1804A0BAC (-RuntimeClassInitialize@MultitaskingData@@QEAAJPEAUIApplicationViewCollection@@PEAUIApplicationV.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIVirtualDesktopNotificationService@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopNotificationService@@@Z @ 0x1800A258C (--4-$ComPtr@UIVirtualDesktopNotificationService@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktop.c)
 *     ??4?$ComPtr@UIVirtualDesktopManagerInternal@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopManagerInternal@@@Z @ 0x1800A25DC (--4-$ComPtr@UIVirtualDesktopManagerInternal@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopMana.c)
 *     ??4?$ComPtr@UIVirtualDesktopPinnedApps@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopPinnedApps@@@Z @ 0x1800A2640 (--4-$ComPtr@UIVirtualDesktopPinnedApps@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopPinnedApp.c)
 *     ?VirtualDesktopItemFactory_CreateInstance@@YAJPEAUHMONITOR__@@PEAUIVirtualDesktopManagerInternal@@AEBU_GUID@@PEAPEAX@Z @ 0x1804A8B5C (-VirtualDesktopItemFactory_CreateInstance@@YAJPEAUHMONITOR__@@PEAUIVirtualDesktopManagerInternal.c)
 *     ?VirtualDesktopItemCollection_CreateInstance@@YAJPEAUHMONITOR__@@PEAUIVirtualDesktopItemFactory@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopNotificationService@@AEBU_GUID@@PEAPEAX@Z @ 0x1804A96F8 (-VirtualDesktopItemCollection_CreateInstance@@YAJPEAUHMONITOR__@@PEAUIVirtualDesktopItemFactory@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MultitaskingData::_InitializeVirtualDesktopComponents(
        MultitaskingData *this,
        HMONITOR a2,
        struct IVirtualDesktopManagerInternal *a3,
        struct IVirtualDesktopPinnedApps *a4,
        struct IVirtualDesktopNotificationService *a5)
{
  const struct _GUID *v9; // r8
  int Instance; // eax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  const struct _GUID *v14; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IVirtualDesktopItemFactory *v16; // [rsp+40h] [rbp+8h] BYREF

  Microsoft::WRL::ComPtr<IVirtualDesktopManagerInternal>::operator=((__int64 *)this + 3, (__int64)a3);
  Microsoft::WRL::ComPtr<IVirtualDesktopPinnedApps>::operator=((__int64 *)this + 4, (__int64)a4);
  Microsoft::WRL::ComPtr<IVirtualDesktopNotificationService>::operator=((__int64 *)this + 5, (__int64)a5);
  v16 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v16);
  Instance = VirtualDesktopItemFactory_CreateInstance(a2, a3, v9, (void **)&v16);
  v11 = Instance;
  if ( Instance < 0 )
  {
    v12 = 106LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingdata.cpp",
      (const char *)(unsigned int)Instance);
    goto LABEL_6;
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 6);
  Instance = VirtualDesktopItemCollection_CreateInstance(a2, v16, a3, a5, v14, (void **)this + 6);
  v11 = Instance;
  if ( Instance < 0 )
  {
    v12 = 107LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v16);
  return v11;
}
