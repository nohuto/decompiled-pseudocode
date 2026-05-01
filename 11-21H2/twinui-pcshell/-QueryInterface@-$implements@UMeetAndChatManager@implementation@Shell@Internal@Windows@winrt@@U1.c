/*
 * XREFs of ?QueryInterface@?$implements@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@U13456@Uimmersive_shell_component@6@UIImmersiveWindowMessageNotification@@@winrt@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F8610
 * Callers:
 *     ?QueryInterface@?$implements@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@U13456@Uimmersive_shell_component@6@UIImmersiveWindowMessageNotification@@@winrt@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18020FE90 (-QueryInterface@-$implements@UMeetAndChatManager@implementation@Shell@Internal@Wind_ea_18020FE90.c)
 *     ?QueryInterface@?$implements@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@U13456@Uimmersive_shell_component@6@UIImmersiveWindowMessageNotification@@@winrt@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18020FEB0 (-QueryInterface@-$implements@UMeetAndChatManager@implementation@Shell@Internal@Wind_ea_18020FEB0.c)
 *     ?QueryInterface@?$implements@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@U13456@Uimmersive_shell_component@6@UIImmersiveWindowMessageNotification@@@winrt@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18020FED0 (-QueryInterface@-$implements@UMeetAndChatManager@implementation@Shell@Internal@Wind_ea_18020FED0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::implementation::MeetAndChatManager,winrt::Windows::Internal::Shell::MeetAndChatManager,winrt::immersive_shell_component,IImmersiveWindowMessageNotification>::QueryInterface(
        __int64 a1)
{
  return winrt::impl::root_implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::query_interface(a1 + 48);
}
