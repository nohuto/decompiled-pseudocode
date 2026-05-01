/*
 * XREFs of ?find_interface@?$implements@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@U13456@Uimmersive_shell_component@6@UIImmersiveWindowMessageNotification@@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1800D6E30
 * Callers:
 *     <none>
 * Callees:
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800D8AF0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 *     ??$find@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@Uiid_finder@impl@6@@?$interface_list@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@UIImmersiveWindowMessageNotification@@@impl@winrt@@SAPEAXPEBUMeetAndChatManager@implementation@Shell@Internal@Windows@2@AEBUiid_finder@12@@Z @ 0x1800D93F8 (--$find@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@Uiid_finder@impl@6@@-$i.c)
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::implementation::MeetAndChatManager,winrt::Windows::Internal::Shell::MeetAndChatManager,winrt::immersive_shell_component,IImmersiveWindowMessageNotification>::find_interface(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // r8
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = a2;
  if ( (unsigned __int8)winrt::operator==(
                          a2,
                          &winrt::impl::guid_v<winrt::Windows::Internal::Shell::IMeetAndChatManager>) )
    return (v2 + 8) & -(__int64)(v2 != 0);
  else
    return winrt::impl::interface_list<IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable,IImmersiveWindowMessageNotification>::find<winrt::Windows::Internal::Shell::implementation::MeetAndChatManager,winrt::impl::iid_finder>(
             v2,
             &v5);
}
