/*
 * XREFs of ??0Iterator@?$ObjectArrayAdapterImpl@UIVirtualDesktop@@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x18010EC70
 * Callers:
 *     ?get_VirtualDesktops@VirtualDesktopPerMonitorCollection@@UEAAJPEAPEAU?$IVectorView@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@@Z @ 0x180029850 (-get_VirtualDesktops@VirtualDesktopPerMonitorCollection@@UEAAJPEAPEAU-$IVectorView@PEAUIVirtualD.c)
 *     ?Initialize@VirtualDesktopPerMonitorCollection@@UEAAJPEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopNotificationService@@@Z @ 0x18010E880 (-Initialize@VirtualDesktopPerMonitorCollection@@UEAAJPEAUIVirtualDesktopManagerInternal@@PEAUIVi.c)
 *     ?CalculateDesktopIndex@VirtualDesktop@@AEAAJXZ @ 0x18010EAB8 (-CalculateDesktopIndex@VirtualDesktop@@AEAAJXZ.c)
 *     ?GetMonitorFromVirtualDesktop@VirtualDesktopHelpers@@YAPEAUHMONITOR__@@PEAUIVirtualDesktop@@PEAUIVirtualDesktopManagerInternal@@@Z @ 0x18048AD10 (-GetMonitorFromVirtualDesktop@VirtualDesktopHelpers@@YAPEAUHMONITOR__@@PEAUIVirtualDesktop@@PEAU.c)
 *     ?get_VirtualDesktops@VirtualDesktopDataSource@@UEAAJPEAPEAU?$IVectorView@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@@Z @ 0x18048C070 (-get_VirtualDesktops@VirtualDesktopDataSource@@UEAAJPEAPEAU-$IVectorView@PEAUIVirtualDesktop@Mul.c)
 *     ?TransitionToGlobalMode@CVirtualDesktopManager@@AEAAJAEBVSyncLockExclusive@Details@Wrappers@WRL@Microsoft@@@Z @ 0x18054B414 (-TransitionToGlobalMode@CVirtualDesktopManager@@AEAAJAEBVSyncLockExclusive@Details@Wrappers@WRL@.c)
 *     ?TransitionToPerMonitorMode@CVirtualDesktopManager@@AEAAJAEBVSyncLockExclusive@Details@Wrappers@WRL@Microsoft@@@Z @ 0x18054B82C (-TransitionToPerMonitorMode@CVirtualDesktopManager@@AEAAJAEBVSyncLockExclusive@Details@Wrappers@.c)
 *     ?UpdateWallpaperPathForAllDesktops@CVirtualDesktopManager@@UEAAJPEAUHSTRING__@@@Z @ 0x18054C2B0 (-UpdateWallpaperPathForAllDesktops@CVirtualDesktopManager@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?VirtualDesktopCollectionChanged@VirtualDesktopPersistence@@UEAAJPEAUHMONITOR__@@PEAUIVirtualDesktopCollection@@@Z @ 0x18055CF20 (-VirtualDesktopCollectionChanged@VirtualDesktopPersistence@@UEAAJPEAUHMONITOR__@@PEAUIVirtualDes.c)
 *     ?IsWindowValidForGroupInclusion@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@QEAA_NUWindowId@WindowManagement@ApplicationModel@567@AEBUTaskGroup@34567@@Z @ 0x18058A588 (-IsWindowValidForGroupInclusion@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Win.c)
 * Callees:
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIVirtualDesktop@@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x18010ECA0 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIVirtualDesktop@@V-$ComPtr@UIVirtualDesktop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall details::ObjectArrayAdapterImpl<IVirtualDesktop,Microsoft::WRL::ComPtr<IVirtualDesktop>>::Iterator::Iterator(
        __int64 a1,
        __int64 a2,
        int a3)
{
  *(_DWORD *)a1 = a3;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = a2;
  details::ObjectArrayAdapterImpl<IVirtualDesktop,Microsoft::WRL::ComPtr<IVirtualDesktop>>::Iterator::GetCurrentObject(a1);
  return a1;
}
