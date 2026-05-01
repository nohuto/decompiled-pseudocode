/*
 * XREFs of ?find_interface@?$implements@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@U13456@UISearchAppActivatedEventArgs2@3456@UIActivatedEventArgs@Activation@ApplicationModel@Windows@6@UIInitializeActivatedEventArgs@9ApplicationModel@Windows@6@UILaunchActivatedEventArgs@9ApplicationModel@Windows@6@UILaunchActivatedEventArgs2@9ApplicationModel@Windows@6@UIActivatedEventArgsWithUser@9ApplicationModel@Windows@6@UIPrelaunchActivatedEventArgs@9ApplicationModel@Windows@6@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1801A2B80
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@Uiid_finder@impl@6@@?$interface_list@UIActivatedEventArgs@Activation@ApplicationModel@Windows@winrt@@UIInitializeActivatedEventArgs@2345@UILaunchActivatedEventArgs@2345@UILaunchActivatedEventArgs2@2345@UIActivatedEventArgsWithUser@2345@UIPrelaunchActivatedEventArgs@2345@@impl@winrt@@SAPEAXPEBUSearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@2@AEBUiid_finder@12@@Z @ 0x1800F94C0 (--$find@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@Uiid_ea_1800F94C0.c)
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800F96D0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 */

__int64 __fastcall winrt::implements<winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs,winrt::WindowsUdk::UI::Shell::SearchAppActivatedEventArgs,winrt::WindowsUdk::UI::Shell::ISearchAppActivatedEventArgs2,winrt::Windows::ApplicationModel::Activation::IActivatedEventArgs,winrt::Windows::ApplicationModel::Activation::IInitializeActivatedEventArgs,winrt::Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs,winrt::Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2,winrt::Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser,winrt::Windows::ApplicationModel::Activation::IPrelaunchActivatedEventArgs>::find_interface(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rax
  _QWORD *v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  if ( winrt::operator==(a2, winrt::impl::guid_v<winrt::WindowsUdk::UI::Shell::ISearchAppActivatedEventArgs>) )
  {
    v4 = v3 + 16;
  }
  else
  {
    if ( !winrt::operator==(v2, winrt::impl::guid_v<winrt::WindowsUdk::UI::Shell::ISearchAppActivatedEventArgs2>) )
      return winrt::impl::interface_list<winrt::Windows::ApplicationModel::Activation::IActivatedEventArgs,winrt::Windows::ApplicationModel::Activation::IInitializeActivatedEventArgs,winrt::Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs,winrt::Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2,winrt::Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser,winrt::Windows::ApplicationModel::Activation::IPrelaunchActivatedEventArgs>::find<winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs,winrt::impl::iid_finder>(
               v3,
               &v7);
    v4 = v3 + 24;
  }
  return v4 & -(__int64)(v3 != 0);
}
