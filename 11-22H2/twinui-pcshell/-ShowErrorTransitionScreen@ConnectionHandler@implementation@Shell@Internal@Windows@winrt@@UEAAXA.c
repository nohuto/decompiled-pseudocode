/*
 * XREFs of ?ShowErrorTransitionScreen@ConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@Z @ 0x180736440
 * Callers:
 *     ?ShowErrorTransitionScreen@BootConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@Z @ 0x18072F870 (-ShowErrorTransitionScreen@BootConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UE.c)
 * Callees:
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1800B498C (--1hstring@winrt@@QEAA@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_RetryAndReconnect@@@details@wil@@QEAA_NXZ @ 0x180115CD0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_RetryAndReconnect@@@deta.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_EPDA@@@details@wil@@QEAA_NXZ @ 0x1801DBA84 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_EPDA@@@details@wil@@QEAA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1RemoteSystem@RemoteSystemData@@QEAA@XZ @ 0x1806F0ADC (--1RemoteSystem@RemoteSystemData@@QEAA@XZ.c)
 *     ?SystemId@?$consume_Windows_Internal_Shell_IRegistrationData@UIRegistrationData@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1807192A8 (-SystemId@-$consume_Windows_Internal_Shell_IRegistrationData@UIRegistrationData@Shell@Internal@W.c)
 *     ?Update@?$consume_Windows_Internal_Shell_CloudDesktop_TransitionScreen_ITransitionScreen@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBUTransitionScreenId@TransitionScreen@CloudDesktop@Shell@Internal@Windows@3@AEBW4ScreenType@567893@AEBV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z @ 0x180723980 (-Update@-$consume_Windows_Internal_Shell_CloudDesktop_TransitionScreen_ITransitionScreen@UITrans.c)
 *     ?GetPrimaryMonitor@Utils@implementation@Shell@Internal@Windows@winrt@@SAPEAUHMONITOR__@@XZ @ 0x18072DB6C (-GetPrimaryMonitor@Utils@implementation@Shell@Internal@Windows@winrt@@SAPEAUHMONITOR__@@XZ.c)
 *     ?Show@?$consume_Windows_Internal_Shell_CloudDesktop_TransitionScreen_ITransitionScreen@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBUCpcId@TransitionScreen@CloudDesktop@Shell@Internal@Windows@3@AEBW4ScreenType@567893@AEBV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@AEBUhstring@param@3@_K_N@Z @ 0x18072E660 (-Show@-$consume_Windows_Internal_Shell_CloudDesktop_TransitionScreen_ITransitionScreen@UITransit.c)
 *     ?Show@?$consume_Windows_Internal_Shell_CloudDesktop_TransitionScreen_ITransitionScreen@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBUCpcId@TransitionScreen@CloudDesktop@Shell@Internal@Windows@3@AEBW4ScreenType@567893@AEBV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@AEBUhstring@param@3@_K_NAEBW4TransitionScreenOptions@567893@@Z @ 0x18072E704 (-Show@-$consume_Windows_Internal_Shell_CloudDesktop_TransitionScreen_ITransitionScr_ea_18072E704.c)
 *     ?IsTransitionScreenShown@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAAX_N@Z @ 0x180733A64 (-IsTransitionScreenShown@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@Q.c)
 *     ?RemoteDesktopProviderInfo@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEBA?AU03456@XZ @ 0x180733B70 (-RemoteDesktopProviderInfo@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@.c)
 *     ?State@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAA?AW4CloudPCState@3456@XZ @ 0x180733C0C (-State@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAA-AW4CloudPCStat.c)
 *     ?TransitionScreen@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEBA?AU00CloudDesktop@3456@XZ @ 0x180733CB0 (-TransitionScreen@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEBA-AU0.c)
 *     ?TransitionScreenId@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAA?AU0TransitionScreen@CloudDesktop@3456@XZ @ 0x180733CD8 (-TransitionScreenId@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAA-A.c)
 *     ?TransitionScreenId@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBU0TransitionScreen@CloudDesktop@3456@@Z @ 0x180733D34 (-TransitionScreenId@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAAXA.c)
 */

// Hidden C++ exception states: #wind=10
void __fastcall winrt::Windows::Internal::Shell::implementation::ConnectionHandler::ShowErrorTransitionScreen(
        __int64 a1,
        RTL_SRWLOCK **a2)
{
  winrt::Windows::Foundation::IUnknown *v4; // rdi
  _QWORD *v5; // rbx
  unsigned int *v6; // rax
  winrt::Windows::Foundation::IUnknown *v7; // rcx
  char IsEnabled; // al
  __int64 v9; // rcx
  winrt::Windows::Foundation::IUnknown *v10; // rsi
  HMONITOR PrimaryMonitor; // rdi
  _QWORD *v12; // rbx
  __int64 *v13; // rax
  const struct winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreenId *v14; // rdx
  winrt::Windows::Foundation::IUnknown *v15; // rsi
  HMONITOR v16; // rdi
  _QWORD *v17; // rbx
  __int64 *v18; // rax
  char v19; // al
  RTL_SRWLOCK *v20; // rcx
  winrt::Windows::Foundation::IUnknown *v21; // rsi
  HMONITOR v22; // rdi
  _QWORD *v23; // rbx
  __int64 *v24; // rax
  winrt::Windows::Foundation::IUnknown *v25; // rsi
  HMONITOR v26; // rdi
  _QWORD *v27; // rbx
  __int64 *v28; // rax
  volatile signed __int32 *v29; // [rsp+50h] [rbp-19h] BYREF
  _BYTE v30[8]; // [rsp+58h] [rbp-11h] BYREF
  void *v31; // [rsp+60h] [rbp-9h] BYREF
  _BYTE v32[8]; // [rsp+68h] [rbp-1h] BYREF
  _BYTE v33[8]; // [rsp+70h] [rbp+7h] BYREF
  _QWORD v34[9]; // [rsp+78h] [rbp+Fh] BYREF
  unsigned int v35; // [rsp+D8h] [rbp+6Fh] BYREF
  unsigned int v36; // [rsp+E0h] [rbp+77h] BYREF
  volatile signed __int32 *v37; // [rsp+E8h] [rbp+7Fh] BYREF

  if ( (unsigned int)winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::State((__int64)*a2) )
  {
    if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_RetryAndReconnect>::__private_IsEnabled((__int64)&`wil::Feature<__WilFeatureTraits_Feature_W365Boot_RetryAndReconnect>::GetImpl'::`2'::impl) )
    {
      IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_EPDA>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_EPDA>::GetImpl'::`2'::impl);
      v9 = (__int64)*a2;
      if ( IsEnabled )
      {
        v10 = winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::TransitionScreen(
                v9,
                (winrt::Windows::Foundation::IUnknown *)v32);
        v35 = 2;
        PrimaryMonitor = winrt::Windows::Internal::Shell::implementation::Utils::GetPrimaryMonitor();
        v34[0] = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)a1 + 128LL))(a1, &v31);
        v12 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a1 + 120LL))(a1, v33);
        v36 = 1;
        v13 = (__int64 *)winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::RemoteDesktopProviderInfo(
                           *a2,
                           (winrt::Windows::Foundation::IUnknown *)v30);
        winrt::impl::consume_Windows_Internal_Shell_IRegistrationData<winrt::Windows::Internal::Shell::IRegistrationData>::SystemId(
          v13,
          &v29);
        winrt::impl::consume_Windows_Internal_Shell_CloudDesktop_TransitionScreen_ITransitionScreen<winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::ITransitionScreen>::Show(
          v10,
          &v37,
          &v29,
          &v36,
          v12,
          v34,
          (__int64)PrimaryMonitor,
          0,
          &v35);
        RemoteSystemData::RemoteSystem::~RemoteSystem(&v29);
        winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)v30);
        winrt::hstring::~hstring(&v31);
        winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)v32);
        v14 = (const struct winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreenId *)&v37;
LABEL_9:
        winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::TransitionScreenId(*a2, v14);
        winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::IsTransitionScreenShown(*a2, 1);
        return;
      }
      v15 = winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::TransitionScreen(
              v9,
              (winrt::Windows::Foundation::IUnknown *)v30);
      v35 = 2;
      v16 = winrt::Windows::Internal::Shell::implementation::Utils::GetPrimaryMonitor();
      v34[0] = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)a1 + 128LL))(a1, &v31);
      v17 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a1 + 120LL))(a1, v33);
      v36 = 1;
      v18 = (__int64 *)winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::RemoteDesktopProviderInfo(
                         *a2,
                         (winrt::Windows::Foundation::IUnknown *)v32);
      winrt::impl::consume_Windows_Internal_Shell_IRegistrationData<winrt::Windows::Internal::Shell::IRegistrationData>::SystemId(
        v18,
        &v29);
      winrt::impl::consume_Windows_Internal_Shell_CloudDesktop_TransitionScreen_ITransitionScreen<winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::ITransitionScreen>::Show(
        v15,
        &v37,
        &v29,
        &v36,
        v17,
        v34,
        (__int64)v16,
        0,
        &v35);
      RemoteSystemData::RemoteSystem::~RemoteSystem(&v29);
      winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)v32);
      winrt::hstring::~hstring(&v31);
    }
    else
    {
      v19 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_EPDA>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_EPDA>::GetImpl'::`2'::impl);
      v20 = *a2;
      if ( v19 )
      {
        v21 = winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::TransitionScreen(
                (__int64)v20,
                (winrt::Windows::Foundation::IUnknown *)v30);
        v22 = winrt::Windows::Internal::Shell::implementation::Utils::GetPrimaryMonitor();
        v34[0] = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)a1 + 128LL))(a1, &v31);
        v23 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a1 + 120LL))(a1, v33);
        v35 = 1;
        v24 = (__int64 *)winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::RemoteDesktopProviderInfo(
                           *a2,
                           (winrt::Windows::Foundation::IUnknown *)v32);
        winrt::impl::consume_Windows_Internal_Shell_IRegistrationData<winrt::Windows::Internal::Shell::IRegistrationData>::SystemId(
          v24,
          &v37);
        winrt::impl::consume_Windows_Internal_Shell_CloudDesktop_TransitionScreen_ITransitionScreen<winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::ITransitionScreen>::Show(
          v21,
          &v36,
          &v37,
          &v35,
          v23,
          v34,
          (__int64)v22);
        RemoteSystemData::RemoteSystem::~RemoteSystem(&v37);
        winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)v32);
        winrt::hstring::~hstring(&v31);
        winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)v30);
        v14 = (const struct winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreenId *)&v36;
        goto LABEL_9;
      }
      v25 = winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::TransitionScreen(
              (__int64)v20,
              (winrt::Windows::Foundation::IUnknown *)v30);
      v26 = winrt::Windows::Internal::Shell::implementation::Utils::GetPrimaryMonitor();
      v34[0] = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)a1 + 128LL))(a1, &v31);
      v27 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a1 + 120LL))(a1, v33);
      v35 = 1;
      v28 = (__int64 *)winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::RemoteDesktopProviderInfo(
                         *a2,
                         (winrt::Windows::Foundation::IUnknown *)v32);
      winrt::impl::consume_Windows_Internal_Shell_IRegistrationData<winrt::Windows::Internal::Shell::IRegistrationData>::SystemId(
        v28,
        &v37);
      winrt::impl::consume_Windows_Internal_Shell_CloudDesktop_TransitionScreen_ITransitionScreen<winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::ITransitionScreen>::Show(
        v25,
        &v36,
        &v37,
        &v35,
        v27,
        v34,
        (__int64)v26);
      RemoteSystemData::RemoteSystem::~RemoteSystem(&v37);
      winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)v32);
      winrt::hstring::~hstring(&v31);
    }
    v7 = (winrt::Windows::Foundation::IUnknown *)v30;
    goto LABEL_12;
  }
  v4 = winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::TransitionScreen(
         (__int64)*a2,
         (winrt::Windows::Foundation::IUnknown *)&v37);
  v5 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a1 + 120LL))(a1, v32);
  v35 = 1;
  v6 = winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::TransitionScreenId((__int64)*a2, &v36);
  winrt::impl::consume_Windows_Internal_Shell_CloudDesktop_TransitionScreen_ITransitionScreen<winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::ITransitionScreen>::Update(
    v4,
    v6,
    &v35,
    v5);
  v7 = (winrt::Windows::Foundation::IUnknown *)&v37;
LABEL_12:
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>(v7);
}
