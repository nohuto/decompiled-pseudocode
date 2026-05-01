/*
 * XREFs of ??$find@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@Uiid_finder@impl@6@@?$interface_list@UIActivatedEventArgs@Activation@ApplicationModel@Windows@winrt@@UIInitializeActivatedEventArgs@2345@UILaunchActivatedEventArgs@2345@UILaunchActivatedEventArgs2@2345@UIActivatedEventArgsWithUser@2345@UIPrelaunchActivatedEventArgs@2345@@impl@winrt@@SAPEAXPEBUSearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@2@AEBUiid_finder@12@@Z @ 0x1800F94C0
 * Callers:
 *     ?find_interface@?$implements@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@U13456@UISearchAppActivatedEventArgs2@3456@UIActivatedEventArgs@Activation@ApplicationModel@Windows@6@UIInitializeActivatedEventArgs@9ApplicationModel@Windows@6@UILaunchActivatedEventArgs@9ApplicationModel@Windows@6@UILaunchActivatedEventArgs2@9ApplicationModel@Windows@6@UIActivatedEventArgsWithUser@9ApplicationModel@Windows@6@UIPrelaunchActivatedEventArgs@9ApplicationModel@Windows@6@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1801A2B80 (-find_interface@-$implements@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@win.c)
 * Callees:
 *     ??$find@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@Uiid_finder@impl@6@@?$interface_list@UILaunchActivatedEventArgs2@Activation@ApplicationModel@Windows@winrt@@UIActivatedEventArgsWithUser@2345@UIPrelaunchActivatedEventArgs@2345@@impl@winrt@@SAPEAXPEBUSearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@2@AEBUiid_finder@12@@Z @ 0x1800F9458 (--$find@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@Uiid_finder@impl@.c)
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800F96D0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 */

__int64 __fastcall winrt::impl::interface_list<winrt::Windows::ApplicationModel::Activation::IActivatedEventArgs,winrt::Windows::ApplicationModel::Activation::IInitializeActivatedEventArgs,winrt::Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs,winrt::Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2,winrt::Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser,winrt::Windows::ApplicationModel::Activation::IPrelaunchActivatedEventArgs>::find<winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs,winrt::impl::iid_finder>(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  _QWORD *v8; // r9
  __int64 v11; // rax

  if ( !(unsigned __int8)winrt::operator==(
                           *a2,
                           &winrt::impl::guid_v<winrt::Windows::ApplicationModel::Activation::IActivatedEventArgs>,
                           a1,
                           a2) )
  {
    if ( (unsigned __int8)winrt::operator==(
                            v2,
                            &winrt::impl::guid_v<winrt::Windows::ApplicationModel::Activation::IInitializeActivatedEventArgs>,
                            v3,
                            v4) )
    {
      v11 = v6 + 40;
    }
    else
    {
      if ( !(unsigned __int8)winrt::operator==(
                               v5,
                               &winrt::impl::guid_v<winrt::Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs>,
                               v6,
                               v7) )
        return winrt::impl::interface_list<winrt::Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2,winrt::Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser,winrt::Windows::ApplicationModel::Activation::IPrelaunchActivatedEventArgs>::find<winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs,winrt::impl::iid_finder>(
                 v6,
                 v8,
                 v6,
                 (__int64)v8);
      v11 = v6 + 48;
    }
    return v11 & -(__int64)(v6 != 0);
  }
  return (v3 + 32) & -(__int64)(v3 != 0);
}
