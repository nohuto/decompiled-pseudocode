/*
 * XREFs of ?SwitchToDesktopForSystem@SwitchConnectStateBase@implementation@Shell@Internal@Windows@winrt@@IEAAXAEBUhstring@6@@Z @ 0x180732CD8
 * Callers:
 *     ?Execute@SwitchUserInputNeededState@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@W4CloudPCState@3456@@Z @ 0x180731C10 (-Execute@SwitchUserInputNeededState@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV-$shar.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800C69A4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Get@RemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@QEAA?AU?$com_ptr@UIVirtualDesktop@@@6@AEBUhstring@6@@Z @ 0x18072FE68 (-Get@RemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@QEAA-AU-$com_ptr@UIVir.c)
 *     ??$open_and_watch_errors@V?$tip_test@U_tip_RemoteSessionOnStateChangedTipTest@@@tip@@@tip@@YA?A_PXZ @ 0x180731318 (--$open_and_watch_errors@V-$tip_test@U_tip_RemoteSessionOnStateChangedTipTest@@@tip@@@tip@@YA-A_.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall winrt::Windows::Internal::Shell::implementation::SwitchConnectStateBase::SwitchToDesktopForSystem(
        PSRWLOCK *this,
        const struct winrt::hstring *a2)
{
  __int64 v4; // rbx
  int v5; // eax
  int v6; // eax
  int v7; // [rsp+20h] [rbp-40h] BYREF
  _BYTE v8[24]; // [rsp+28h] [rbp-38h] BYREF
  int v9; // [rsp+40h] [rbp-20h]
  std::_Ref_count_base *v10; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]
  __int64 v12; // [rsp+70h] [rbp+10h] BYREF
  __int64 v13; // [rsp+80h] [rbp+20h] BYREF

  tip::open_and_watch_errors<tip::tip_test<_tip_RemoteSessionOnStateChangedTipTest>>((__int64)&v7);
  winrt::Windows::Internal::Shell::implementation::RemoteDesktopCollection::Get(this[1], &v13, (__int64 *)a2);
  v4 = v13;
  if ( !v13 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x30,
      (int)"pcshell\\twinui\\cloudpc\\lib\\switchconnectionhandler.cpp",
      (const char *)0x80004005LL,
      v7);
  v12 = 0LL;
  v5 = (*(__int64 (__fastcall **)(PSRWLOCK, GUID *, __int64 *))(*this)->Ptr)(
         *this,
         &GUID_53f5ca0b_158f_4124_900c_057158060b27,
         &v12);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x32,
      (int)"pcshell\\twinui\\cloudpc\\lib\\switchconnectionhandler.cpp",
      (const char *)(unsigned int)v5,
      v7);
  v6 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v12 + 160LL))(v12, v4, 1LL);
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x33,
      (int)"pcshell\\twinui\\cloudpc\\lib\\switchconnectionhandler.cpp",
      (const char *)(unsigned int)v6,
      v7);
  if ( v12 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v12);
  winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v13);
  if ( v10 )
    std::_Ref_count_base::_Decref(v10);
  if ( v9 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v8);
}
