/*
 * XREFs of ??$register_service_information@$$CBU_GUID@@@immersive_shell_component@winrt@@IEAAXAEBU_GUID@@@Z @ 0x1800BCCE4
 * Callers:
 *     ??0PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x180088BE8 (--0PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??0MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1800892C0 (--0MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??0ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@QEAA@XZ @ 0x1800894BC (--0ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??0NPSMDesktopShellComponent@@QEAA@XZ @ 0x1800896D0 (--0NPSMDesktopShellComponent@@QEAA@XZ.c)
 *     ??0AppBackupListener@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x180089790 (--0AppBackupListener@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??0InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x180089D14 (--0InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??0?$module_count_wrapper@UImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@QEAA@XZ @ 0x180089E60 (--0-$module_count_wrapper@UImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@@d.c)
 *     ??0DashboardManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18008ABC8 (--0DashboardManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??0?$module_count_wrapper@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@details@wil@@QEAA@XZ @ 0x18008AD98 (--0-$module_count_wrapper@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Int.c)
 *     ??0PenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18008AE84 (--0PenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??0?$module_count_wrapper@UFocusSessionComponent@implementation@Shell@Internal@Windows@winrt@@@details@wil@@QEAA@XZ @ 0x18008AF20 (--0-$module_count_wrapper@UFocusSessionComponent@implementation@Shell@Internal@Windows@winrt@@@d.c)
 *     ??0WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18008B088 (--0WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??0DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1806F96C0 (--0DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??0CopilotHotkeyManager@@QEAA@XZ @ 0x1806FD460 (--0CopilotHotkeyManager@@QEAA@XZ.c)
 * Callees:
 *     ?register_service_information@immersive_shell_component@winrt@@IEAAXU?$array_view@$$CBUservice_description@immersive_shell_component@winrt@@@2@@Z @ 0x1800BD88C (-register_service_information@immersive_shell_component@winrt@@IEAAXU-$array_view@$$CBUservice_d.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1801C8E9C (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::immersive_shell_component::register_service_information<_GUID const>(__int64 a1, __int128 *a2)
{
  __int128 *v2; // [rsp+20h] [rbp-48h] BYREF
  int v3; // [rsp+28h] [rbp-40h]
  __int128 v4; // [rsp+30h] [rbp-38h] BYREF
  __int64 v5; // [rsp+40h] [rbp-28h]
  int v6; // [rsp+48h] [rbp-20h]

  v4 = *a2;
  v5 = 0LL;
  v6 = 0;
  v2 = &v4;
  v3 = 1;
  winrt::immersive_shell_component::register_service_information(a1, &v2);
  `eh vector destructor iterator'(
    &v4,
    0x20uLL,
    1uLL,
    (void (*)(void *))winrt::immersive_shell_component::service_description::~service_description);
}
