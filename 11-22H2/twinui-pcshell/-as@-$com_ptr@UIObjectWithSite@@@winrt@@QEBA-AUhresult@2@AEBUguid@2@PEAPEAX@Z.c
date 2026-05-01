/*
 * XREFs of ?as@?$com_ptr@UIObjectWithSite@@@winrt@@QEBA?AUhresult@2@AEBUguid@2@PEAPEAX@Z @ 0x18008BF30
 * Callers:
 *     ?CreateInstance@?$wrl_factory_for_winrt_com_class@UFocusSessionComponent@implementation@Shell@Internal@Windows@winrt@@@wil@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18008B740 (-CreateInstance@-$wrl_factory_for_winrt_com_class@UFocusSessionComponent@implementation@Shell@In.c)
 *     ?CreateInstance@?$wrl_factory_for_winrt_com_class@UPenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@@wil@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18008B820 (-CreateInstance@-$wrl_factory_for_winrt_com_class@UPenMenuSystemTrayManager@implementation@Shell.c)
 *     ?CreateInstance@?$wrl_factory_for_winrt_com_class@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@wil@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18008B900 (-CreateInstance@-$wrl_factory_for_winrt_com_class@UDragDropSimulatorComponent@implementation@Dra.c)
 *     ?CreateInstance@?$wrl_factory_for_winrt_com_class@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@@wil@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18008B9E0 (-CreateInstance@-$wrl_factory_for_winrt_com_class@UTaskGroupsComponent@implementation@TaskGroups.c)
 *     ?CreateInstance@TouchGestureComponentClassFactory@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18008BAC0 (-CreateInstance@TouchGestureComponentClassFactory@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?CreateInstance@?$wrl_factory_for_winrt_com_class@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@@wil@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18008BBB0 (-CreateInstance@-$wrl_factory_for_winrt_com_class@UThemeCoordinator@implementation@Themes@UI@Int.c)
 *     ?CreateInstance@?$wrl_factory_for_winrt_com_class@VNPSMDesktopShellComponent@@@wil@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18008BC90 (-CreateInstance@-$wrl_factory_for_winrt_com_class@VNPSMDesktopShellComponent@@@wil@@UEAAJPEAUIUn.c)
 *     ?CreateInstance@?$wrl_factory_for_winrt_com_class@UInputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@@wil@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18008BD70 (-CreateInstance@-$wrl_factory_for_winrt_com_class@UInputSwitchingManager@implementation@Shell@In.c)
 *     ?CreateInstance@?$wrl_factory_for_winrt_com_class@UImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@@wil@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18008BE50 (-CreateInstance@-$wrl_factory_for_winrt_com_class@UImeContextMenuManager@implementation@Shell@In.c)
 *     ?CreateInstance@?$wrl_factory_for_winrt_com_class@VCopilotHotkeyManager@@@wil@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1806FD8E0 (-CreateInstance@-$wrl_factory_for_winrt_com_class@VCopilotHotkeyManager@@@wil@@UEAAJPEAUIUnknown.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

_DWORD *__fastcall winrt::com_ptr<IObjectWithSite>::as(_QWORD *a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  *a2 = (**(__int64 (__fastcall ***)(_QWORD, __int64, __int64))*a1)(*a1, a3, a4);
  return a2;
}
