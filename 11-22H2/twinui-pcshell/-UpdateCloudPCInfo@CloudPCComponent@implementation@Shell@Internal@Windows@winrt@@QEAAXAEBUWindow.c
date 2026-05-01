/*
 * XREFs of ?UpdateCloudPCInfo@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUWindowId@UI@56@@Z @ 0x180707A58
 * Callers:
 *     ?UpdateCloudPCInfo@?$produce@UCloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UIRemoteSystemProviderExtension@RemoteSystems@3456@@impl@winrt@@UEAAHUstruct_Windows_UI_WindowId@23@@Z @ 0x180707A00 (-UpdateCloudPCInfo@-$produce@UCloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UIRe.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@@winrt@@AEAAXXZ @ 0x1800B1AC0 (-unconditional_release_ref@-$com_ptr@USearchAppActivatedEventArgs@implementation@Shell@UI@Window.c)
 *     ?GetFactoryImplObj@implementation@Shell@Internal@Windows@winrt@@YA@XZ @ 0x180711EC4 (-GetFactoryImplObj@implementation@Shell@Internal@Windows@winrt@@YA@XZ.c)
 *     ?UpdateDataForWindow@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUWindowId@UI@56@@Z @ 0x180719C80 (-UpdateDataForWindow@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Windows::Internal::Shell::implementation::CloudPCComponent::UpdateCloudPCInfo(
        winrt::Windows::Internal::Shell::implementation::CloudPCComponent *this,
        const struct winrt::Windows::UI::WindowId *a2)
{
  winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel **FactoryImplObj; // rax
  const char *v4; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  volatile __int64 *v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = (volatile __int64 *)this;
  try
  {
    FactoryImplObj = (winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel **)winrt::Windows::Internal::Shell::implementation::GetFactoryImplObj((winrt::Windows::Internal::Shell::implementation *)&v6);
    winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::UpdateDataForWindow(
      *FactoryImplObj,
      a2);
    if ( v6 )
      winrt::com_ptr<winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs>::unconditional_release_ref(&v6);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x93,
      (int)"pcshell\\twinui\\cloudpc\\lib\\cloudpccomponent.cpp",
      v4);
  }
}
