/*
 * XREFs of ?subtract_reference@?$root_implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@2@@impl@winrt@@IEAAIXZ @ 0x1800FA2A4
 * Callers:
 *     ??1immersive_shell_component@winrt@@UEAA@XZ @ 0x1800F7E9C (--1immersive_shell_component@winrt@@UEAA@XZ.c)
 *     ?Release@?$implements@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@Uimmersive_shell_component@7@UIThemeCoordinator@3456@@winrt@@UEAAKXZ @ 0x1800FA110 (-Release@-$implements@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@Uimmers.c)
 *     ?Release@?$implements@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@7@UIDragDropSimulator@34567@@winrt@@UEAAKXZ @ 0x1800FA170 (-Release@-$implements@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Interna.c)
 *     ?Release@?$implements@UPenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@6@UIPenMenuSystemTrayManager@@@winrt@@UEAAKXZ @ 0x1800FA1D0 (-Release@-$implements@UPenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@Uim.c)
 *     ?Release@?$implements@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@U13456@Uimmersive_shell_component@6@UIImmersiveWindowMessageNotification@@@winrt@@UEAAKXZ @ 0x1800FA210 (-Release@-$implements@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@U13456@Ui.c)
 *     ?Release@?$implements@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@U13456@Uimmersive_shell_component@6@UIImmersiveWindowMessageNotification@@UIEdgeUiTouchInvocation@@@winrt@@UEAAKXZ @ 0x1800FA270 (-Release@-$implements@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@U13456@Uimm.c)
 *     ?Release@?$implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@2@@winrt@@UEAAKXZ @ 0x1803B5B70 (-Release@-$implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIService_ea_1803B5B70.c)
 * Callees:
 *     ?Release@?$weak_ref@$00$00@impl@winrt@@UEAAIXZ @ 0x1800FC1E0 (-Release@-$weak_ref@$00$00@impl@winrt@@UEAAIXZ.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::subtract_reference(
        __int64 a1)
{
  signed __int64 v1; // rax
  unsigned int v2; // edx
  signed __int64 v3; // rtt
  unsigned __int32 v5; // ebx

  v1 = *(_QWORD *)(a1 + 8);
  while ( v1 >= 0 )
  {
    v2 = v1 - 1;
    v3 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), v1 - 1, v1);
    if ( v3 == v1 )
      return v2;
  }
  v5 = _InterlockedDecrement((volatile signed __int32 *)(2 * v1 + 24));
  if ( !v5 )
    winrt::impl::weak_ref<1,1>::Release((void *)(2 * v1));
  return v5;
}
