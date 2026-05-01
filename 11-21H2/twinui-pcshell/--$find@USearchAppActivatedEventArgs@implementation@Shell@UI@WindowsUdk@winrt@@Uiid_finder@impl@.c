/*
 * XREFs of ??$find@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@Uiid_finder@impl@6@@?$interface_list@UILaunchActivatedEventArgs2@Activation@ApplicationModel@Windows@winrt@@UIActivatedEventArgsWithUser@2345@UIPrelaunchActivatedEventArgs@2345@@impl@winrt@@SAPEAXPEBUSearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@2@AEBUiid_finder@12@@Z @ 0x1800F9458
 * Callers:
 *     ??$find@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@Uiid_finder@impl@6@@?$interface_list@UIActivatedEventArgs@Activation@ApplicationModel@Windows@winrt@@UIInitializeActivatedEventArgs@2345@UILaunchActivatedEventArgs@2345@UILaunchActivatedEventArgs2@2345@UIActivatedEventArgsWithUser@2345@UIPrelaunchActivatedEventArgs@2345@@impl@winrt@@SAPEAXPEBUSearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@2@AEBUiid_finder@12@@Z @ 0x1800F94C0 (--$find@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@Uiid_ea_1800F94C0.c)
 * Callees:
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800F96D0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 */

__int64 __fastcall winrt::impl::interface_list<winrt::Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2,winrt::Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser,winrt::Windows::ApplicationModel::Activation::IPrelaunchActivatedEventArgs>::find<winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs,winrt::impl::iid_finder>(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r9
  __int64 v11; // rax

  if ( !(unsigned __int8)winrt::operator==(
                           *a2,
                           &winrt::impl::guid_v<winrt::Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2>,
                           a1,
                           a4) )
  {
    if ( (unsigned __int8)winrt::operator==(
                            v4,
                            &winrt::impl::guid_v<winrt::Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>,
                            v5,
                            0LL) )
    {
      v11 = v7 + 64;
    }
    else
    {
      if ( !(unsigned __int8)winrt::operator==(
                               v6,
                               &winrt::impl::guid_v<winrt::Windows::ApplicationModel::Activation::IPrelaunchActivatedEventArgs>,
                               v7,
                               v8) )
        return v9;
      v11 = v7 + 72;
    }
    return v11 & -(__int64)(v7 != 0);
  }
  return (v5 + 56) & -(__int64)(v5 != 0);
}
