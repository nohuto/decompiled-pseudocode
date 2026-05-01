/*
 * XREFs of ?Execute@BootConnectingState@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@W4CloudPCState@3456@@Z @ 0x18072F140
 * Callers:
 *     <none>
 * Callees:
 *     ?end_update@?$test_common_data@$00@details@tip@@QEAAXXZ @ 0x1800404E8 (-end_update@-$test_common_data@$00@details@tip@@QEAAXXZ.c)
 *     ?begin_update@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x1800405EC (-begin_update@-$test_common_data@$00@details@tip@@QEAA_NXZ.c)
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ?reset@?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ @ 0x180098ACC (-reset@-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800C69A4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??B?$test_watcher@U_tip_RemoteSessionOnStateChangedTipTest@@@tip@@QEBA_NXZ @ 0x1806006B8 (--B-$test_watcher@U_tip_RemoteSessionOnStateChangedTipTest@@@tip@@QEBA_NXZ.c)
 *     ??$open_and_watch_errors@V?$tip_test@U_tip_BootToCloudPCTest@@@tip@@@tip@@YA?A_PXZ @ 0x180702AF4 (--$open_and_watch_errors@V-$tip_test@U_tip_BootToCloudPCTest@@@tip@@@tip@@YA-A_PXZ.c)
 *     ?GetLockImagePath@Utils@implementation@Shell@Internal@Windows@winrt@@SA?AUhstring@6@XZ @ 0x18072D9FC (-GetLockImagePath@Utils@implementation@Shell@Internal@Windows@winrt@@SA-AUhstring@6@XZ.c)
 *     ?GetMaxConnectionTimeoutFromAdmin@CloudPCHelpers@@YAHXZ @ 0x18072DB04 (-GetMaxConnectionTimeoutFromAdmin@CloudPCHelpers@@YAHXZ.c)
 *     ?ThrowIllegalStateTransition@ConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@IEAAXW4CloudPCState@3456@0@Z @ 0x180736C60 (-ThrowIllegalStateTransition@ConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@IE.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Windows::Internal::Shell::implementation::BootConnectingState::Execute(
        CloudPCHelpers *a1,
        __int64 a2,
        unsigned int a3)
{
  int MaxConnectionTimeoutFromAdmin; // eax
  void (__fastcall *v6)(CloudPCHelpers *, __int64, const struct winrt::Windows::System::UserProfile::ILockScreenStatics *(__fastcall **)(const struct winrt::Windows::System::UserProfile::ILockScreenStatics *, __int64), __int64 *); // rbx
  __int64 v7; // r14
  const struct winrt::Windows::System::UserProfile::ILockScreenStatics *(__fastcall **v8)(const struct winrt::Windows::System::UserProfile::ILockScreenStatics *, __int64); // rax
  const struct winrt::Windows::System::UserProfile::ILockScreenStatics *(__fastcall *v9)(const struct winrt::Windows::System::UserProfile::ILockScreenStatics *, __int64); // rbx
  __int64 v10; // rax
  void (__fastcall *v11)(CloudPCHelpers *, __int64, const struct winrt::Windows::System::UserProfile::ILockScreenStatics *(__fastcall **)(const struct winrt::Windows::System::UserProfile::ILockScreenStatics *, __int64), __int64 *); // rbx
  const struct winrt::Windows::System::UserProfile::ILockScreenStatics *(__fastcall **LockImagePath)(const struct winrt::Windows::System::UserProfile::ILockScreenStatics *, __int64); // rax
  const struct winrt::Windows::System::UserProfile::ILockScreenStatics *(__fastcall *v13)(const struct winrt::Windows::System::UserProfile::ILockScreenStatics *, __int64); // [rsp+30h] [rbp-50h] BYREF
  std::_Ref_count_base *v14; // [rsp+38h] [rbp-48h]
  _BYTE v15[8]; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v16[24]; // [rsp+48h] [rbp-38h] BYREF
  int v17; // [rsp+60h] [rbp-20h]
  __int64 v18; // [rsp+70h] [rbp-10h] BYREF
  std::_Ref_count_base *v19; // [rsp+78h] [rbp-8h]
  __int64 v20; // [rsp+B8h] [rbp+38h] BYREF

  if ( a3 == 1 )
  {
    v11 = *(void (__fastcall **)(CloudPCHelpers *, __int64, const struct winrt::Windows::System::UserProfile::ILockScreenStatics *(__fastcall **)(const struct winrt::Windows::System::UserProfile::ILockScreenStatics *, __int64), __int64 *))(*(_QWORD *)a1 + 8LL);
    v20 = 1200000000LL;
    LockImagePath = winrt::Windows::Internal::Shell::implementation::Utils::GetLockImagePath(&v13);
    v11(a1, a2, LockImagePath, &v20);
    winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v13);
  }
  else
  {
    if ( a3 != 2 )
    {
      if ( a3 == 98 )
        return;
      if ( a3 - 99 > 1 )
        winrt::Windows::Internal::Shell::implementation::ConnectionStateBase::ThrowIllegalStateTransition(a1, a3, 0LL);
    }
    MaxConnectionTimeoutFromAdmin = CloudPCHelpers::GetMaxConnectionTimeoutFromAdmin(a1);
    v6 = *(void (__fastcall **)(CloudPCHelpers *, __int64, const struct winrt::Windows::System::UserProfile::ILockScreenStatics *(__fastcall **)(const struct winrt::Windows::System::UserProfile::ILockScreenStatics *, __int64), __int64 *))(*(_QWORD *)a1 + 8LL);
    v7 = MaxConnectionTimeoutFromAdmin;
    v20 = 600000000LL * MaxConnectionTimeoutFromAdmin;
    v8 = winrt::Windows::Internal::Shell::implementation::Utils::GetLockImagePath(&v13);
    v6(a1, a2, v8, &v20);
    winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v13);
    tip::open_and_watch_errors<tip::tip_test<_tip_BootToCloudPCTest>>((struct wil::details::IFailureCallback *)v15);
    if ( tip::test_watcher<_tip_RemoteSessionOnStateChangedTipTest>::operator bool((__int64)v15) )
    {
      std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
        &v13,
        &v18);
      v9 = v13;
      tip::details::test_common_data<1>::begin_update((__int64)v13 + 8);
      v10 = (__int64)v9 + 272;
      if ( !v9 )
        v10 = 96LL;
      *(_QWORD *)v10 = v7;
      if ( v9 )
      {
        tip::details::test_common_data<1>::end_update((__int64)v9 + 8);
        std::shared_ptr<PeoplePaneViewInfo>::reset(&v13);
      }
      if ( v14 )
        std::_Ref_count_base::_Decref(v14);
    }
    if ( v19 )
      std::_Ref_count_base::_Decref(v19);
    if ( v17 )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v16);
  }
}
