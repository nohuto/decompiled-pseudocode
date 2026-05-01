/*
 * XREFs of ??$find@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@Uiid_finder@impl@6@@?$interface_list@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@UIImmersiveWindowMessageNotification@@@impl@winrt@@SAPEAXPEBUMeetAndChatManager@implementation@Shell@Internal@Windows@2@AEBUiid_finder@12@@Z @ 0x1800F8A0C
 * Callers:
 *     ?find_interface@?$implements@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@U13456@Uimmersive_shell_component@6@UIImmersiveWindowMessageNotification@@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1800F8CF0 (-find_interface@-$implements@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@U1.c)
 * Callees:
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800F96D0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 */

__int64 __fastcall winrt::impl::interface_list<IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable,IImmersiveWindowMessageNotification>::find<winrt::Windows::Internal::Shell::implementation::MeetAndChatManager,winrt::impl::iid_finder>(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4)
{
  _QWORD *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  char v10; // al
  __int64 v11; // r8

  v5 = (_QWORD *)*a2;
  v6 = *(_QWORD *)*a2 - winrt::impl::guid_v<IImmersiveShellComponent>;
  if ( !v6 )
    v6 = v5[1] + 0x3BA05710A3855A7ELL;
  if ( !v6 )
    return (a1 + 32) & -(__int64)(a1 != 0);
  if ( (unsigned __int8)winrt::operator==(v5, &winrt::impl::guid_v<IInspectable>, a1, a4) )
    return (v8 + 40) & -(__int64)(v8 != 0);
  v10 = winrt::operator==(v7, &winrt::impl::guid_v<IImmersiveWindowMessageNotification>, v8, v9);
  return v11 & -(__int64)(v10 != 0);
}
