/*
 * XREFs of ?SetPhysicalDeviceAccessState@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SAXXZ @ 0x18027957C
 * Callers:
 *     _lambda_c27fb3894833df319de68fad3b02a886_$_ResumeCoro$1::operator() @ 0x180276D10 (_lambda_c27fb3894833df319de68fad3b02a886_$_ResumeCoro$1--operator().c)
 * Callees:
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ?unconditional_release_ref@?$com_ptr@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@@winrt@@AEAAXXZ @ 0x1800B1AC0 (-unconditional_release_ref@-$com_ptr@USearchAppActivatedEventArgs@implementation@Shell@UI@Window.c)
 *     ??$?RURemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@URemoteSystemStateChangedEventArgs@2345@@?$event@U?$EventHandler@URemoteSystemStateChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBURemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@1@AEBURemoteSystemStateChangedEventArgs@4561@@Z @ 0x1807094BC (--$-RURemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@URemoteSystemSt.c)
 *     ??$make@URemoteSystemStateChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@AEBUhstring@6@W4CloudPCState@3456@@winrt@@YA?A_PAEBUhstring@0@$$QEAW4CloudPCState@Shell@Internal@Windows@0@@Z @ 0x18070C58C (--$make@URemoteSystemStateChangedEventArgs@implementation@Shell@Internal@Windows@wi_ea_18070C58C.c)
 *     ?GetFactoryImplObj@implementation@Shell@Internal@Windows@winrt@@YA@XZ @ 0x180711EC4 (-GetFactoryImplObj@implementation@Shell@Internal@Windows@winrt@@YA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
void winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::SetPhysicalDeviceAccessState(void)
{
  __int64 FactoryImplObj; // rax
  __int64 v1; // rbx
  int v2; // [rsp+30h] [rbp+8h] BYREF
  char v3; // [rsp+38h] [rbp+10h] BYREF
  volatile __int64 *v4; // [rsp+40h] [rbp+18h] BYREF

  FactoryImplObj = winrt::Windows::Internal::Shell::implementation::GetFactoryImplObj((winrt::Windows::Internal::Shell::implementation *)&v4);
  v1 = *(_QWORD *)FactoryImplObj;
  if ( *(_DWORD *)(*(_QWORD *)FactoryImplObj + 44LL) == 1 )
  {
    v2 = 98;
    winrt::make<winrt::Windows::Internal::Shell::implementation::RemoteSystemStateChangedEventArgs,winrt::hstring const &,enum winrt::Windows::Internal::Shell::CloudPCState>(
      &v3,
      &c_bootSystemId,
      &v2);
    winrt::event<winrt::Windows::Foundation::EventHandler<winrt::Windows::Internal::Shell::RemoteSystemStateChangedEventArgs>>::operator()<winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel,winrt::Windows::Internal::Shell::RemoteSystemStateChangedEventArgs>(
      v1 + 160,
      v1,
      &v3);
    winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v3);
  }
  if ( v4 )
    winrt::com_ptr<winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs>::unconditional_release_ref(&v4);
}
