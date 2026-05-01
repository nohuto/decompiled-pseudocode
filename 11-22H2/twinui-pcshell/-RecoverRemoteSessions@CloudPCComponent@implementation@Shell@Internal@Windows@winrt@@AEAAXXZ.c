/*
 * XREFs of ?RecoverRemoteSessions@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18008CD68
 * Callers:
 *     ?perform_delayed_initialization@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UEAAXXZ @ 0x1801ADA70 (-perform_delayed_initialization@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UE.c)
 * Callees:
 *     ?ensure_data@?$tip_test@U_tip_RecoverRemoteSessionTipTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_RecoverRemoteSessionTipTest@@@details@tip@@@std@@XZ @ 0x18008D0E8 (-ensure_data@-$tip_test@U_tip_RecoverRemoteSessionTipTest@@@tip@@AEBAAEAV-$shared_ptr@V-$test_me.c)
 *     ??0?$test_watcher@U_tip_RecoverRemoteSessionTipTest@@@tip@@IEAA@AEAV?$shared_ptr@V?$test_merged_data@U_tip_RecoverRemoteSessionTipTest@@@details@tip@@@std@@@Z @ 0x18008D2A4 (--0-$test_watcher@U_tip_RecoverRemoteSessionTipTest@@@tip@@IEAA@AEAV-$shared_ptr@V-$test_merged_.c)
 *     ?complete@?$test_common_data@$00@details@tip@@QEAAXXZ @ 0x180095B9C (-complete@-$test_common_data@$00@details@tip@@QEAAXXZ.c)
 *     ?start@?$test_common_data@$00@details@tip@@QEAA?AU_GUID@@XZ @ 0x180098400 (-start@-$test_common_data@$00@details@tip@@QEAA-AU_GUID@@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800C69A4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?RecoverRemoteSessions@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x1801AD81C (-RecoverRemoteSessions@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@Q.c)
 *     ?unconditional_release_ref@?$com_ptr@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x1801BD9F8 (-unconditional_release_ref@-$com_ptr@URemoteSessionWindowManager@implementation@Shell@Internal@W.c)
 *     ??1?$tip_test@U_tip_OnLaunchedTest@XamlExplorerHostTipTests@@@tip@@QEAA@XZ @ 0x180206AA0 (--1-$tip_test@U_tip_OnLaunchedTest@XamlExplorerHostTipTests@@@tip@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall winrt::Windows::Internal::Shell::implementation::CloudPCComponent::RecoverRemoteSessions(
        winrt::Windows::Internal::Shell::implementation::CloudPCComponent *this)
{
  _QWORD *v2; // rax
  __int64 (__fastcall ***v3)(_QWORD, __int128 *, __int64 *); // rcx
  winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager *v4; // rbx
  int v5; // eax
  const char *v6; // r9
  __int128 v7; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v8[16]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v9[8]; // [rsp+40h] [rbp-48h] BYREF
  _BYTE v10[24]; // [rsp+48h] [rbp-40h] BYREF
  int v11; // [rsp+60h] [rbp-28h]
  __int64 v12; // [rsp+70h] [rbp-18h]
  std::_Ref_count_base *v13; // [rsp+78h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  __int64 v15; // [rsp+90h] [rbp+8h] BYREF
  winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager *v16; // [rsp+98h] [rbp+10h] BYREF

  v7 = 0LL;
  v2 = (_QWORD *)tip::tip_test<_tip_RecoverRemoteSessionTipTest>::ensure_data(&v7);
  tip::details::test_common_data<1>::start(*v2 + 8LL, v8);
  tip::test_watcher<_tip_RecoverRemoteSessionTipTest>::test_watcher<_tip_RecoverRemoteSessionTipTest>((struct wil::details::IFailureCallback *)v9);
  tip::tip_test<XamlExplorerHostTipTests::_tip_OnLaunchedTest>::~tip_test<XamlExplorerHostTipTests::_tip_OnLaunchedTest>(&v7);
  try
  {
    v3 = (__int64 (__fastcall ***)(_QWORD, __int128 *, __int64 *))*((_QWORD *)this + 13);
    if ( v3 )
    {
      v15 = 0LL;
      v5 = (**v3)(v3, &winrt::impl::guid_v<winrt::Windows::Internal::Shell::IRemoteSessionWindowManager>, &v15);
      if ( v5 < 0 )
        winrt::throw_hresult((unsigned int)v5);
      v4 = (winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager *)((v15 - 16) & -(__int64)(v15 != 0));
      v16 = v4;
    }
    else
    {
      v16 = 0LL;
      v4 = 0LL;
    }
    winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::RecoverRemoteSessions(v4);
    if ( v4 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager>::unconditional_release_ref(&v16);
    tip::details::test_common_data<1>::complete(v12 + 8);
    if ( v13 )
      std::_Ref_count_base::_Decref(v13);
    if ( v11 )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v10);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x105,
      (unsigned int)"pcshell\\twinui\\cloudpc\\lib\\cloudpccomponent.cpp",
      v6);
  }
}
