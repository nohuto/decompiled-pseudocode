/*
 * XREFs of ?IsSupported@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAA_NXZ @ 0x180706ED0
 * Callers:
 *     ?IsSupported@?$produce@UCloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UIRemoteSystemProviderExtension@RemoteSystems@3456@@impl@winrt@@UEAAHPEA_N@Z @ 0x180706E70 (-IsSupported@-$produce@UCloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UIRemoteSy.c)
 * Callees:
 *     ?complete@?$test_common_data@$00@details@tip@@QEAAXXZ @ 0x180095B9C (-complete@-$test_common_data@$00@details@tip@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800C69A4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??1?$tip_test@U_tip_OnLaunchedTest@XamlExplorerHostTipTests@@@tip@@QEAA@XZ @ 0x180206AA0 (--1-$tip_test@U_tip_OnLaunchedTest@XamlExplorerHostTipTests@@@tip@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?start_and_watch_errors@?$tip_test@U_tip_IsSupportedTipTest@@@tip@@QEAA?AV?$test_watcher@U_tip_IsSupportedTipTest@@@2@XZ @ 0x180708734 (-start_and_watch_errors@-$tip_test@U_tip_IsSupportedTipTest@@@tip@@QEAA-AV-$test_watcher@U_tip_I.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall winrt::Windows::Internal::Shell::implementation::CloudPCComponent::IsSupported(
        winrt::Windows::Internal::Shell::implementation::CloudPCComponent *this)
{
  signed int v2; // eax
  __int128 v4; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v5[8]; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v6[24]; // [rsp+38h] [rbp-40h] BYREF
  int v7; // [rsp+50h] [rbp-28h]
  __int64 v8; // [rsp+60h] [rbp-18h]
  std::_Ref_count_base *v9; // [rsp+68h] [rbp-10h]
  char v10; // [rsp+80h] [rbp+8h] BYREF

  v4 = 0LL;
  tip::tip_test<_tip_IsSupportedTipTest>::start_and_watch_errors(&v4, v5);
  tip::tip_test<XamlExplorerHostTipTests::_tip_OnLaunchedTest>::~tip_test<XamlExplorerHostTipTests::_tip_OnLaunchedTest>((__int64)&v4);
  v10 = 0;
  v2 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 13) + 112LL))(*((_QWORD *)this + 13), &v10);
  if ( v2 < 0 )
    winrt::throw_hresult(v2);
  tip::details::test_common_data<1>::complete(v8 + 8);
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
  if ( v7 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v6);
  return v10;
}
