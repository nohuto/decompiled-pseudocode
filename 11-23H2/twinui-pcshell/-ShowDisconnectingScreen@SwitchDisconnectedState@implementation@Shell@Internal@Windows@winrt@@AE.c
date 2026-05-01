/*
 * XREFs of ?ShowDisconnectingScreen@SwitchDisconnectedState@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@Z @ 0x180732704
 * Callers:
 *     ?Execute@SwitchDisconnectedState@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@W4CloudPCState@3456@@Z @ 0x180731930 (-Execute@SwitchDisconnectedState@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV-$shared_.c)
 * Callees:
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x1800B4460 (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800D2424 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800D246C (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180176DC4 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     ?now@clock@winrt@@SA?AV?$time_point@Uclock@winrt@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@chrono@std@@XZ @ 0x1806F70F4 (-now@clock@winrt@@SA-AV-$time_point@Uclock@winrt@@V-$duration@_JU-$ratio@$00$0JIJGIA@@std@@@chro.c)
 *     ?SystemId@?$consume_Windows_Internal_Shell_IRegistrationData@UIRegistrationData@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1807192A8 (-SystemId@-$consume_Windows_Internal_Shell_IRegistrationData@UIRegistrationData@Shell@Internal@W.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Switch_Disconnect_and_Signout@@@details@wil@@QEAA_NXZ @ 0x18071A844 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Switch_Disconnect_and_Signout.c)
 *     ?Show@?$consume_Windows_Internal_Shell_CloudDesktop_TransitionScreen_ITransitionScreen@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBUCpcId@TransitionScreen@CloudDesktop@Shell@Internal@Windows@3@AEBW4ScreenType@567893@AEBV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@AEBUhstring@param@3@_K_NAEBW4TransitionScreenOptions@567893@@Z @ 0x18072E704 (-Show@-$consume_Windows_Internal_Shell_CloudDesktop_TransitionScreen_ITransitionScr_ea_18072E704.c)
 *     ?DisconnectReason@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAA?AW4DisconnectSource@23456@XZ @ 0x180733914 (-DisconnectReason@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAA-AW4.c)
 *     ?IsTransitionScreenShown@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAAX_N@Z @ 0x180733A64 (-IsTransitionScreenShown@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@Q.c)
 *     ?TransitionScreenId@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBU0TransitionScreen@CloudDesktop@3456@@Z @ 0x180733D34 (-TransitionScreenId@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAAXA.c)
 *     ?TransitionScreenType@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAAXW4ScreenType@TransitionScreen@CloudDesktop@3456@@Z @ 0x180733E3C (-TransitionScreenType@RemoteSessionInformation@implementation@Shell@Internal@Window_ea_180733E3C.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall winrt::Windows::Internal::Shell::implementation::SwitchDisconnectedState::ShowDisconnectingScreen(
        __int64 a1,
        winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation **a2)
{
  HMONITOR v3; // r14
  LONG v4; // ecx
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 *v7; // rdi
  __int64 *v8; // rbx
  __int64 v9; // [rsp+50h] [rbp-9h] BYREF
  volatile signed __int32 *v10; // [rsp+58h] [rbp-1h] BYREF
  __int64 v11; // [rsp+60h] [rbp+7h] BYREF
  _QWORD v12[9]; // [rsp+68h] [rbp+Fh] BYREF
  POINT pt; // [rsp+C0h] [rbp+67h] BYREF
  __int64 v14; // [rsp+C8h] [rbp+6Fh] BYREF
  int v15; // [rsp+D0h] [rbp+77h] BYREF
  __int64 v16; // [rsp+D8h] [rbp+7Fh] BYREF

  pt = 0LL;
  v3 = MonitorFromPoint(0LL, 1u);
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Switch_Disconnect_and_Signout>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_W365Switch_Disconnect_and_Signout>::GetImpl'::`2'::impl) )
    v4 = 0;
  else
    v4 = 3
       - ((unsigned int)winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::DisconnectReason(*a2) != 1);
  pt.x = v4;
  v5 = *((_QWORD *)*a2 + 1);
  v9 = v5;
  winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)&v9);
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v12, &LocaleName, 0);
  v11 = 300000000LL;
  LODWORD(v14) = 3;
  v16 = *(_QWORD *)*a2;
  v6 = v16;
  winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)&v16);
  winrt::impl::consume_Windows_Internal_Shell_IRegistrationData<winrt::Windows::Internal::Shell::IRegistrationData>::SystemId(
    &v16,
    &v10);
  winrt::impl::consume_Windows_Internal_Shell_CloudDesktop_TransitionScreen_ITransitionScreen<winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::ITransitionScreen>::Show(
    &v9,
    &v15,
    &v10,
    (unsigned int *)&v14,
    &v11,
    v12,
    (__int64)v3,
    1,
    &pt);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v10);
  if ( v6 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v16);
  if ( v5 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v9);
  v7 = (__int64 *)*a2;
  v8 = winrt::clock::now(&v14);
  wil::srwlock::lock_exclusive((RTL_SRWLOCK *)v7 + 2, (RTL_SRWLOCK **)&pt);
  v7[5] = *v8;
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)&pt);
  winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::TransitionScreenId(
    *a2,
    (const struct winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreenId *)&v15);
  winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::TransitionScreenType(*a2, 3LL);
  winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::IsTransitionScreenShown(*a2, 1);
}
