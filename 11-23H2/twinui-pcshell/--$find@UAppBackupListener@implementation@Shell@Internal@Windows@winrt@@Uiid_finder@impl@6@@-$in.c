/*
 * XREFs of ??$find@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@Uiid_finder@impl@6@@?$interface_list@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@@impl@winrt@@SAPEAXPEBUAppBackupListener@implementation@Shell@Internal@Windows@2@AEBUiid_finder@12@@Z @ 0x1800D9780
 * Callers:
 *     ?find_interface@?$implements@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@U13456@Uimmersive_shell_component@6@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1800D93A0 (-find_interface@-$implements@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@U13.c)
 * Callees:
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800D8AF0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 */

__int64 __fastcall winrt::impl::interface_list<IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::find<winrt::Windows::Internal::Shell::implementation::AppBackupListener,winrt::impl::iid_finder>(
        __int64 a1,
        _QWORD **a2)
{
  _QWORD *v2; // rcx
  __int64 v3; // r8
  _QWORD *v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v8; // rax

  if ( !winrt::operator==(*a2, &winrt::impl::guid_v<IServiceProvider>) )
  {
    if ( winrt::operator==(v2, &winrt::impl::guid_v<IImmersiveShellComponent>) )
    {
      v8 = v5 + 16;
    }
    else
    {
      if ( !winrt::operator==(v4, &winrt::impl::guid_v<IInspectable>) )
        return v6;
      v8 = v5 + 24;
    }
    return v8 & -(__int64)(v5 != 0);
  }
  return (v3 + 8) & -(__int64)(v3 != 0);
}
