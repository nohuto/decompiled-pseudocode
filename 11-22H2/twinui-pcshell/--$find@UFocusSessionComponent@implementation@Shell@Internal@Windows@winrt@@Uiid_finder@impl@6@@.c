/*
 * XREFs of ??$find@UFocusSessionComponent@implementation@Shell@Internal@Windows@winrt@@Uiid_finder@impl@6@@?$interface_list@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@UIFocusSessionComponent@Shell@Internal@45@@impl@winrt@@SAPEAXPEBUFocusSessionComponent@implementation@Shell@Internal@Windows@2@AEBUiid_finder@12@@Z @ 0x1800D7BE8
 * Callers:
 *     ?find_interface@?$implements@UFocusSessionComponent@implementation@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@6@UIFocusSessionComponent@3456@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1800D7C80 (-find_interface@-$implements@UFocusSessionComponent@implementation@Shell@Internal@Windows@winrt@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable,winrt::Windows::Internal::Shell::IFocusSessionComponent>::find<winrt::Windows::Internal::Shell::implementation::FocusSessionComponent,winrt::impl::iid_finder>(
        __int64 a1,
        _QWORD **a2)
{
  _QWORD *v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v9; // rax

  v3 = *a2;
  v4 = **a2 - winrt::impl::guid_v<IImmersiveShellComponent>;
  if ( !v4 )
    v4 = v3[1] + 0x3BA05710A3855A7ELL;
  v5 = 0LL;
  if ( v4 )
  {
    v6 = *v3 - winrt::impl::guid_v<IInspectable>;
    if ( *v3 == winrt::impl::guid_v<IInspectable> )
      v6 = v3[1] + 0x6FE1EF9A5528A564LL;
    if ( v6 )
    {
      v7 = *v3 - winrt::impl::guid_v<winrt::Windows::Internal::Shell::IFocusSessionComponent>;
      if ( *v3 == winrt::impl::guid_v<winrt::Windows::Internal::Shell::IFocusSessionComponent> )
        v7 = v3[1] - 0x51FF00E7A3CDAA98LL;
      if ( v7 )
        return v5;
      v9 = a1 + 88;
    }
    else
    {
      v9 = a1 + 24;
    }
    return v9 & -(__int64)(a1 != 0);
  }
  return (a1 + 16) & -(__int64)(a1 != 0);
}
