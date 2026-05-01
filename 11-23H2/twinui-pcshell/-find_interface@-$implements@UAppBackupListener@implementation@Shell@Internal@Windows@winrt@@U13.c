/*
 * XREFs of ?find_interface@?$implements@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@U13456@Uimmersive_shell_component@6@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1800D93A0
 * Callers:
 *     <none>
 * Callees:
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800D8AF0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 *     ??$find@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@Uiid_finder@impl@6@@?$interface_list@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@@impl@winrt@@SAPEAXPEBUAppBackupListener@implementation@Shell@Internal@Windows@2@AEBUiid_finder@12@@Z @ 0x1800D9780 (--$find@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@Uiid_finder@impl@6@@-$in.c)
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::implementation::AppBackupListener,winrt::Windows::Internal::Shell::AppBackupListener,winrt::immersive_shell_component>::find_interface(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r8
  _QWORD *v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = a2;
  if ( winrt::operator==(a2, winrt::impl::guid_v<winrt::Windows::Internal::Shell::IAppBackupListener>) )
    return (v3 + 88) & -(__int64)(v3 != 0);
  if ( !winrt::operator==(v2, &winrt::impl::guid_v<IObjectWithSite>) )
    return winrt::impl::interface_list<IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::find<winrt::Windows::Internal::Shell::implementation::AppBackupListener,winrt::impl::iid_finder>(
             v4,
             &v6);
  return v4;
}
