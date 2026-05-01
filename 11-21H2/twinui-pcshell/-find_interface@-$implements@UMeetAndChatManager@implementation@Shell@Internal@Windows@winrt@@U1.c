/*
 * XREFs of ?find_interface@?$implements@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@U13456@Uimmersive_shell_component@6@UIImmersiveWindowMessageNotification@@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1800F8CF0
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@Uiid_finder@impl@6@@?$interface_list@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@UIImmersiveWindowMessageNotification@@@impl@winrt@@SAPEAXPEBUMeetAndChatManager@implementation@Shell@Internal@Windows@2@AEBUiid_finder@12@@Z @ 0x1800F8A0C (--$find@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@Uiid_finder@impl@6@@-$i.c)
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800F96D0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::implementation::MeetAndChatManager,winrt::Windows::Internal::Shell::MeetAndChatManager,winrt::immersive_shell_component,IImmersiveWindowMessageNotification>::find_interface(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // r8
  bool v3; // zf
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // r9
  __int64 v9; // rax
  _QWORD *v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1 - 48;
  v4 = *a2 - winrt::impl::guid_v<winrt::Windows::Internal::Shell::IMeetAndChatManager>;
  v3 = *a2 == winrt::impl::guid_v<winrt::Windows::Internal::Shell::IMeetAndChatManager>;
  v10 = a2;
  if ( v3 )
    v4 = a2[1] + 0x16B06328D108AD54LL;
  if ( !v4 )
  {
    v9 = v2 + 8;
    return v9 & -(__int64)(v2 != 0);
  }
  v5 = *a2 - winrt::impl::guid_v<IObjectWithSite>;
  if ( *a2 == winrt::impl::guid_v<IObjectWithSite> )
    v5 = a2[1] - 0x52733D00AA0029A2LL;
  if ( !v5 )
  {
    v9 = v2 + 16;
    return v9 & -(__int64)(v2 != 0);
  }
  if ( (unsigned __int8)winrt::operator==(a2, &winrt::impl::guid_v<IServiceProvider>, v2, a2) )
  {
    v9 = v2 + 24;
    return v9 & -(__int64)(v2 != 0);
  }
  return winrt::impl::interface_list<IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable,IImmersiveWindowMessageNotification>::find<winrt::Windows::Internal::Shell::implementation::MeetAndChatManager,winrt::impl::iid_finder>(
           v2,
           &v10,
           v2,
           v6);
}
