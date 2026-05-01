/*
 * XREFs of ?HandleProviderAppLaunchResult@BootProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBU?$IAsyncOperation@_N@Foundation@56@@Z @ 0x18072DD20
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800C69A4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     ??0?$basic_string_view@GU?$char_traits@G@std@@@std@@QEAA@QEBG@Z @ 0x1801D92E8 (--0-$basic_string_view@GU-$char_traits@G@std@@@std@@QEAA@QEBG@Z.c)
 *     ??1?$test_data_control@U_tip_VDSlideAnimationPerfTest@@@tip@@QEAA@XZ @ 0x180276C00 (--1-$test_data_control@U_tip_VDSlideAnimationPerfTest@@@tip@@QEAA@XZ.c)
 *     ?complete@?$test_watcher@U_tip_DiscoverabilityManagerTipTest@@@tip@@QEAAXXZ @ 0x1802788A4 (-complete@-$test_watcher@U_tip_DiscoverabilityManagerTipTest@@@tip@@QEAAXXZ.c)
 *     ?c_str@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEBAPEBDXZ @ 0x18038BCBC (-c_str@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEBAPEBDXZ.c)
 *     ??0exception@std@@QEAA@QEBD@Z @ 0x18038CD44 (--0exception@std@@QEAA@QEBD@Z.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@QEBG@Z @ 0x1803D4B8C (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@QEBG@Z.c)
 *     ??B?$test_watcher@U_tip_RemoteSessionOnStateChangedTipTest@@@tip@@QEBA_NXZ @ 0x1806006B8 (--B-$test_watcher@U_tip_RemoteSessionOnStateChangedTipTest@@@tip@@QEBA_NXZ.c)
 *     ??C?$test_watcher@U_tip_VDSlideAnimationPerfTest@@@tip@@QEAA?AV?$test_data_control@U_tip_VDSlideAnimationPerfTest@@@1@XZ @ 0x1806006DC (--C-$test_watcher@U_tip_VDSlideAnimationPerfTest@@@tip@@QEAA-AV-$test_data_control@U_tip_VDSlide.c)
 *     ?get@?$consume_Windows_Foundation_IAsyncOperation@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@_N@impl@winrt@@QEBA@XZ @ 0x1806336E0 (-get@-$consume_Windows_Foundation_IAsyncOperation@U-$IAsyncOperation@_N@Foundation@Windows@winrt.c)
 *     ??$open_and_watch_errors@V?$tip_test@U_tip_BootToCloudPCTest@@@tip@@@tip@@YA?A_PXZ @ 0x180702AF4 (--$open_and_watch_errors@V-$tip_test@U_tip_BootToCloudPCTest@@@tip@@@tip@@YA-A_PXZ.c)
 *     ??C?$test_data_control@U_tip_BootToCloudPCTest@@@tip@@QEBAPEAU_tip_BootToCloudPCTest@@XZ @ 0x18070541C (--C-$test_data_control@U_tip_BootToCloudPCTest@@@tip@@QEBAPEAU_tip_BootToCloudPCTest@@XZ.c)
 *     ?persist_cached_test_results@tip@@YAXXZ @ 0x180708364 (-persist_cached_test_results@tip@@YAXXZ.c)
 *     ?to_string@winrt@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string_view@GU?$char_traits@G@std@@@3@@Z @ 0x180728E80 (-to_string@winrt@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@V-$basic_str.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall winrt::Windows::Internal::Shell::implementation::BootProviderActivator::HandleProviderAppLaunchResult(
        __int64 a1,
        __int64 *a2)
{
  _QWORD *v3; // rax
  __int64 v4; // rax
  _QWORD *v5; // rax
  __int64 v6; // rax
  _QWORD *v7; // rax
  tip *v8; // rcx
  _QWORD *v9; // rax
  const char *v10; // rax
  __int128 v11; // [rsp+20h] [rbp-49h] BYREF
  _BYTE v12[8]; // [rsp+30h] [rbp-39h] BYREF
  _BYTE v13[24]; // [rsp+38h] [rbp-31h] BYREF
  int v14; // [rsp+50h] [rbp-19h]
  std::_Ref_count_base *v15; // [rsp+68h] [rbp-1h]
  _BYTE pExceptionObject[24]; // [rsp+70h] [rbp+7h] BYREF
  __int64 v17; // [rsp+88h] [rbp+1Fh] BYREF
  _BYTE v18[32]; // [rsp+98h] [rbp+2Fh] BYREF

  tip::open_and_watch_errors<tip::tip_test<_tip_BootToCloudPCTest>>((struct wil::details::IFailureCallback *)v12);
  if ( !winrt::impl::consume_Windows_Foundation_IAsyncOperation<winrt::Windows::Foundation::IAsyncOperation<bool>,bool>::get(a2) )
  {
    if ( tip::test_watcher<_tip_RemoteSessionOnStateChangedTipTest>::operator bool((__int64)v12) )
    {
      v5 = tip::test_watcher<_tip_VDSlideAnimationPerfTest>::operator->((__int64)v12, &v11);
      v6 = tip::test_data_control<_tip_BootToCloudPCTest>::operator->(v5);
      std::wstring::operator=(
        (char *)(v6 + 24),
        L"BootProviderActivator::HandleProviderAppLaunchResult, Failed to Activate Provider App");
      tip::test_data_control<_tip_VDSlideAnimationPerfTest>::~test_data_control<_tip_VDSlideAnimationPerfTest>((__int64 *)&v11);
      v7 = tip::test_watcher<_tip_VDSlideAnimationPerfTest>::operator->((__int64)v12, &v11);
      *(_BYTE *)(tip::test_data_control<_tip_BootToCloudPCTest>::operator->(v7) + 9) = 1;
      tip::test_data_control<_tip_VDSlideAnimationPerfTest>::~test_data_control<_tip_VDSlideAnimationPerfTest>((__int64 *)&v11);
      tip::test_watcher<_tip_DiscoverabilityManagerTipTest>::complete((__int64)v12);
      tip::persist_cached_test_results(v8);
    }
    v11 = *(_OWORD *)std::basic_string_view<unsigned short>::basic_string_view<unsigned short,std::char_traits<unsigned short>>(
                       &v17,
                       (__int64)L"Failed to activate app");
    v9 = (_QWORD *)winrt::to_string((__int64)v18, (__int64)&v11);
    v10 = (const char *)std::string::c_str(v9);
    std::exception::exception((std::exception *)pExceptionObject, v10);
    throw (std::exception *)pExceptionObject;
  }
  if ( tip::test_watcher<_tip_RemoteSessionOnStateChangedTipTest>::operator bool((__int64)v12) )
  {
    v3 = tip::test_watcher<_tip_VDSlideAnimationPerfTest>::operator->((__int64)v12, &v11);
    v4 = tip::test_data_control<_tip_BootToCloudPCTest>::operator->(v3);
    std::wstring::operator=(
      (char *)(v4 + 24),
      L"BootProviderActivator::HandleProviderAppLaunchResult, Activated Provider App");
    tip::test_data_control<_tip_VDSlideAnimationPerfTest>::~test_data_control<_tip_VDSlideAnimationPerfTest>((__int64 *)&v11);
  }
  if ( v15 )
    std::_Ref_count_base::_Decref(v15);
  if ( v14 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v13);
}
