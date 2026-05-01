/*
 * XREFs of ?find_interface@?$implements@UFocusSessionComponent@implementation@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@6@UIFocusSessionComponent@3456@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1800D7C80
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@UFocusSessionComponent@implementation@Shell@Internal@Windows@winrt@@Uiid_finder@impl@6@@?$interface_list@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@UIFocusSessionComponent@Shell@Internal@45@@impl@winrt@@SAPEAXPEBUFocusSessionComponent@implementation@Shell@Internal@Windows@2@AEBUiid_finder@12@@Z @ 0x1800D7BE8 (--$find@UFocusSessionComponent@implementation@Shell@Internal@Windows@winrt@@Uiid_finder@impl@6@@.c)
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::implementation::FocusSessionComponent,winrt::immersive_shell_component,winrt::Windows::Internal::Shell::IFocusSessionComponent>::find_interface(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rcx
  bool v3; // zf
  __int64 v4; // rax
  __int64 v5; // rax
  _QWORD *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1 - 32;
  v4 = *a2 - winrt::impl::guid_v<IObjectWithSite>;
  v3 = *a2 == winrt::impl::guid_v<IObjectWithSite>;
  v7 = a2;
  if ( v3 )
    v4 = a2[1] - 0x52733D00AA0029A2LL;
  if ( v4 )
  {
    v5 = *a2 - *(_QWORD *)&winrt::impl::guid_v<IServiceProvider>.Data1;
    if ( *a2 == *(_QWORD *)&winrt::impl::guid_v<IServiceProvider>.Data1 )
      v5 = a2[1] - *(_QWORD *)winrt::impl::guid_v<IServiceProvider>.Data4;
    if ( v5 )
      return winrt::impl::interface_list<IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable,winrt::Windows::Internal::Shell::IFocusSessionComponent>::find<winrt::Windows::Internal::Shell::implementation::FocusSessionComponent,winrt::impl::iid_finder>(
               v2,
               &v7);
    else
      return (v2 + 8) & -(__int64)(v2 != 0);
  }
  return v2;
}
