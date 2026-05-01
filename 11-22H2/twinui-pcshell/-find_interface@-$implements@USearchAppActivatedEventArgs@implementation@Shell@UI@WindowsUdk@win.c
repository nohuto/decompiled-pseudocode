/*
 * XREFs of ?find_interface@?$implements@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@U13456@UISearchAppActivatedEventArgs2@3456@UIActivatedEventArgs@Activation@ApplicationModel@Windows@6@UIInitializeActivatedEventArgs@9ApplicationModel@Windows@6@UILaunchActivatedEventArgs@9ApplicationModel@Windows@6@UILaunchActivatedEventArgs2@9ApplicationModel@Windows@6@UIActivatedEventArgsWithUser@9ApplicationModel@Windows@6@UIPrelaunchActivatedEventArgs@9ApplicationModel@Windows@6@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1800D7D20
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@Uiid_finder@impl@6@@?$interface_list@UIActivatedEventArgs@Activation@ApplicationModel@Windows@winrt@@UIInitializeActivatedEventArgs@2345@UILaunchActivatedEventArgs@2345@UILaunchActivatedEventArgs2@2345@UIActivatedEventArgsWithUser@2345@UIPrelaunchActivatedEventArgs@2345@@impl@winrt@@SAPEAXPEBUSearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@2@AEBUiid_finder@12@@Z @ 0x1800D83EC (--$find@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@Uiid_finder@impl@.c)
 */

__int64 __fastcall winrt::implements<winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs,winrt::WindowsUdk::UI::Shell::SearchAppActivatedEventArgs,winrt::WindowsUdk::UI::Shell::ISearchAppActivatedEventArgs2,winrt::Windows::ApplicationModel::Activation::IActivatedEventArgs,winrt::Windows::ApplicationModel::Activation::IInitializeActivatedEventArgs,winrt::Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs,winrt::Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2,winrt::Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser,winrt::Windows::ApplicationModel::Activation::IPrelaunchActivatedEventArgs>::find_interface(
        __int64 a1,
        _QWORD *a2)
{
  bool v2; // zf
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v7; // rax
  _QWORD *v8; // [rsp+38h] [rbp+10h] BYREF

  v3 = *a2 - winrt::impl::guid_v<winrt::WindowsUdk::UI::Shell::ISearchAppActivatedEventArgs>;
  v2 = *a2 == winrt::impl::guid_v<winrt::WindowsUdk::UI::Shell::ISearchAppActivatedEventArgs>;
  v8 = a2;
  if ( v2 )
    v3 = a2[1] + 0x5613316517C3A06FLL;
  if ( !v3 )
  {
    v7 = a1 + 16;
    return v7 & -(__int64)(a1 != 0);
  }
  v4 = *a2 - winrt::impl::guid_v<winrt::WindowsUdk::UI::Shell::ISearchAppActivatedEventArgs2>;
  if ( *a2 == winrt::impl::guid_v<winrt::WindowsUdk::UI::Shell::ISearchAppActivatedEventArgs2> )
    v4 = a2[1] - 0x4CFC80014C69C4B6LL;
  if ( !v4 )
  {
    v7 = a1 + 24;
    return v7 & -(__int64)(a1 != 0);
  }
  return winrt::impl::interface_list<winrt::Windows::ApplicationModel::Activation::IActivatedEventArgs,winrt::Windows::ApplicationModel::Activation::IInitializeActivatedEventArgs,winrt::Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs,winrt::Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2,winrt::Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser,winrt::Windows::ApplicationModel::Activation::IPrelaunchActivatedEventArgs>::find<winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs,winrt::impl::iid_finder>(
           a1,
           &v8);
}
