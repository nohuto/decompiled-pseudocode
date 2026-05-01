/*
 * XREFs of _lambda_c08ce6a39495b94ac81d1bf94c809a99_::operator() @ 0x180282678
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_c08ce6a39495b94ac81d1bf94c809a99__void_::_Do_call @ 0x180283B40 (std--_Func_impl_no_alloc__lambda_c08ce6a39495b94ac81d1bf94c809a99__void_--_Do_call.c)
 * Callees:
 *     ??1?$test_watcher@U_tip_DiscoverabilityManagerTipTest@@@tip@@QEAA@XZ @ 0x180072254 (--1-$test_watcher@U_tip_DiscoverabilityManagerTipTest@@@tip@@QEAA@XZ.c)
 *     ?complete@?$test_common_data@$00@details@tip@@QEAAXXZ @ 0x180095B9C (-complete@-$test_common_data@$00@details@tip@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$test_data_control@U_tip_VDSlideAnimationPerfTest@@@tip@@QEAA@XZ @ 0x180276C00 (--1-$test_data_control@U_tip_VDSlideAnimationPerfTest@@@tip@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?lock@?$weak_ptr@UBootProviderActivator@implementation@Shell@Internal@Windows@winrt@@@std@@QEBA?AV?$shared_ptr@UBootProviderActivator@implementation@Shell@Internal@Windows@winrt@@@2@XZ @ 0x18055D070 (-lock@-$weak_ptr@UBootProviderActivator@implementation@Shell@Internal@Windows@winrt@@@std@@QEBA-.c)
 *     ??B?$test_watcher@U_tip_RemoteSessionOnStateChangedTipTest@@@tip@@QEBA_NXZ @ 0x1806006B8 (--B-$test_watcher@U_tip_RemoteSessionOnStateChangedTipTest@@@tip@@QEBA_NXZ.c)
 *     ??C?$test_watcher@U_tip_VDSlideAnimationPerfTest@@@tip@@QEAA?AV?$test_data_control@U_tip_VDSlideAnimationPerfTest@@@1@XZ @ 0x1806006DC (--C-$test_watcher@U_tip_VDSlideAnimationPerfTest@@@tip@@QEAA-AV-$test_data_control@U_tip_VDSlide.c)
 *     ??$open_and_watch_errors@V?$tip_test@U_tip_DeactivateRemoteDesktopTipTest@@@tip@@@tip@@YA?A_PXZ @ 0x18070CD04 (--$open_and_watch_errors@V-$tip_test@U_tip_DeactivateRemoteDesktopTipTest@@@tip@@@tip@@YA-A_PXZ.c)
 *     ?RaiseCPCProviderAppClosedTelemetryEvent@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@AEAAXW4DisconnectSource@23456@AEBUhstring@6@1_N@Z @ 0x1807320D0 (-RaiseCPCProviderAppClosedTelemetryEvent@SwitchConnectionHandler@implementation@Shell@Internal@W.c)
 */

void __fastcall lambda_c08ce6a39495b94ac81d1bf94c809a99_::operator()(__int64 a1)
{
  int v2; // eax
  __int64 v3; // rcx
  __int64 v4; // rax
  int v5; // [rsp+20h] [rbp-78h]
  __int64 v6; // [rsp+30h] [rbp-68h] BYREF
  std::_Ref_count_base *v7; // [rsp+38h] [rbp-60h]
  __int64 v8[2]; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v9[48]; // [rsp+50h] [rbp-48h] BYREF
  __int64 v10; // [rsp+80h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  tip::open_and_watch_errors<tip::tip_test<_tip_DeactivateRemoteDesktopTipTest>>((struct wil::details::IFailureCallback *)v9);
  std::weak_ptr<winrt::Windows::Internal::Shell::implementation::BootProviderActivator>::lock(a1, &v6);
  if ( v6 && *(_QWORD *)(a1 + 16) && *(_QWORD *)(a1 + 24) )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v6 + 152) + 96LL))(*(_QWORD *)(v6 + 152));
    if ( v2 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x207,
        (int)"pcshell\\twinui\\cloudpc\\lib\\switchconnectionhandler.cpp",
        (const char *)(unsigned int)v2,
        v5);
    winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::RaiseCPCProviderAppClosedTelemetryEvent(
      retaddr,
      *(unsigned int *)(a1 + 32),
      a1 + 48,
      a1 + 40);
    if ( (unsigned __int8)tip::test_watcher<_tip_RemoteSessionOnStateChangedTipTest>::operator bool(v9) )
    {
      v3 = *(_QWORD *)tip::test_watcher<_tip_VDSlideAnimationPerfTest>::operator->(v9, v8);
      v4 = v3 + 217;
      if ( !v3 )
        v4 = 41LL;
      *(_BYTE *)v4 = 1;
      tip::test_data_control<_tip_VDSlideAnimationPerfTest>::~test_data_control<_tip_VDSlideAnimationPerfTest>(v8);
      tip::details::test_common_data<1>::complete(v10 + 8);
    }
  }
  if ( v7 )
    std::_Ref_count_base::_Decref(v7);
  tip::test_watcher<_tip_DiscoverabilityManagerTipTest>::~test_watcher<_tip_DiscoverabilityManagerTipTest>((__int64)v9);
}
