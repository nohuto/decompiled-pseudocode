/*
 * XREFs of ??$find@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@Uiid_finder@impl@6@@?$interface_list@UIActivatedEventArgs@Activation@ApplicationModel@Windows@winrt@@UIInitializeActivatedEventArgs@2345@UILaunchActivatedEventArgs@2345@UILaunchActivatedEventArgs2@2345@UIActivatedEventArgsWithUser@2345@UIPrelaunchActivatedEventArgs@2345@@impl@winrt@@SAPEAXPEBUSearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@2@AEBUiid_finder@12@@Z @ 0x1800D83EC
 * Callers:
 *     ?find_interface@?$implements@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@U13456@UISearchAppActivatedEventArgs2@3456@UIActivatedEventArgs@Activation@ApplicationModel@Windows@6@UIInitializeActivatedEventArgs@9ApplicationModel@Windows@6@UILaunchActivatedEventArgs@9ApplicationModel@Windows@6@UILaunchActivatedEventArgs2@9ApplicationModel@Windows@6@UIActivatedEventArgsWithUser@9ApplicationModel@Windows@6@UIPrelaunchActivatedEventArgs@9ApplicationModel@Windows@6@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1800D7D20 (-find_interface@-$implements@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@win.c)
 * Callees:
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800D8AF0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 */

__int64 __fastcall winrt::impl::interface_list<winrt::Windows::ApplicationModel::Activation::IActivatedEventArgs,winrt::Windows::ApplicationModel::Activation::IInitializeActivatedEventArgs,winrt::Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs,winrt::Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2,winrt::Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser,winrt::Windows::ApplicationModel::Activation::IPrelaunchActivatedEventArgs>::find<winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs,winrt::impl::iid_finder>(
        __int64 a1,
        _QWORD **a2)
{
  __int64 v2; // r9
  _QWORD *v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  _QWORD *v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v12; // rax

  v2 = a1;
  v3 = *a2;
  v4 = **a2 - winrt::impl::guid_v<winrt::Windows::ApplicationModel::Activation::IActivatedEventArgs>;
  if ( !v4 )
    v4 = v3[1] - 0x2E4E54B681A297B6LL;
  if ( v4 )
  {
    v5 = *v3 - winrt::impl::guid_v<winrt::Windows::ApplicationModel::Activation::IInitializeActivatedEventArgs>;
    if ( *v3 == winrt::impl::guid_v<winrt::Windows::ApplicationModel::Activation::IInitializeActivatedEventArgs> )
      v5 = v3[1] + 0x77E8E4E2CC89FB41LL;
    if ( v5 )
    {
      v6 = *v3 - winrt::impl::guid_v<winrt::Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs>;
      if ( *v3 == winrt::impl::guid_v<winrt::Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs> )
        v6 = v3[1] - 0x52AF20D9BE33B082LL;
      if ( v6 )
      {
        if ( (unsigned __int8)winrt::operator==(
                                v3,
                                &winrt::impl::guid_v<winrt::Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2>) )
        {
          v12 = v2 + 56;
        }
        else if ( (unsigned __int8)winrt::operator==(
                                     v7,
                                     &winrt::impl::guid_v<winrt::Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>) )
        {
          v12 = v2 + 64;
        }
        else
        {
          v10 = *v8 - winrt::impl::guid_v<winrt::Windows::ApplicationModel::Activation::IPrelaunchActivatedEventArgs>;
          if ( *v8 == winrt::impl::guid_v<winrt::Windows::ApplicationModel::Activation::IPrelaunchActivatedEventArgs> )
            v10 = v8[1] - 0x74AA6E8222CF46B0LL;
          if ( v10 )
            return v9;
          v12 = v2 + 72;
        }
      }
      else
      {
        v12 = v2 + 48;
      }
    }
    else
    {
      v12 = v2 + 40;
    }
    return v12 & -(__int64)(v2 != 0);
  }
  return (v2 + 32) & -(__int64)(v2 != 0);
}
