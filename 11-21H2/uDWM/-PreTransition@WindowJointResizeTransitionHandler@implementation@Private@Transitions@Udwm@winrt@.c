/*
 * XREFs of ?PreTransition@WindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXW4ShellTransition@456@AEBUTransitionState@456@@Z @ 0x1800F8044
 * Callers:
 *     ?PreTransition@?$produce@UWindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UITransitionHandler@456@@impl@winrt@@UEAAHHPEAX@Z @ 0x1800F7FE0 (-PreTransition@-$produce@UWindowJointResizeTransitionHandler@implementation@Private@Transitions@.c)
 * Callees:
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x1800126B0 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x180040BB0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800D3CDC (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??$end@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@winrt@@$0A@@impl@winrt@@YA?AU?$fast_iterator@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@winrt@@@01@AEBU?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@1@@Z @ 0x1800F77B4 (--$end@U-$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@winr.c)
 *     ?Cleanup@WindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F7C48 (-Cleanup@WindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAX.c)
 *     ?GetAt@?$consume_Windows_Foundation_Collections_IVector@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@winrt@@UUserResizeVisual@Transitions@Udwm@5@@impl@winrt@@QEBA?AUUserResizeVisual@Transitions@Udwm@3@I@Z @ 0x1800F7CD8 (-GetAt@-$consume_Windows_Foundation_Collections_IVector@U-$IVector@UUserResizeVisual@Transitions.c)
 *     ?Size@?$consume_Windows_Foundation_Collections_IVector@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@winrt@@UUserResizeVisual@Transitions@Udwm@5@@impl@winrt@@QEBAIXZ @ 0x1800F82C0 (-Size@-$consume_Windows_Foundation_Collections_IVector@U-$IVector@UUserResizeVisual@Transitions@.c)
 *     ?TransferJointResizeVisuals@?$consume_Udwm_Transitions_ITransitionState@UITransitionState@Transitions@Udwm@winrt@@@impl@winrt@@QEBA?AU?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@XZ @ 0x1800F8348 (-TransferJointResizeVisuals@-$consume_Udwm_Transitions_ITransitionState@UITransitionState@Transi.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler::PreTransition(
        _QWORD *a1,
        __int64 a2,
        winrt::Windows::Foundation::IUnknown *a3)
{
  __int64 *v5; // rdi
  _QWORD *v6; // rbx
  __int64 v7; // rcx
  unsigned int v8; // edi
  signed int v9; // eax
  _BYTE v10[8]; // [rsp+20h] [rbp-18h] BYREF
  int v11; // [rsp+28h] [rbp-10h]
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler::Cleanup((winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler *)a1);
  winrt::Windows::Foundation::IUnknown::operator=((winrt::Windows::Foundation::IUnknown *)(a1 + 3), a3);
  v5 = (__int64 *)winrt::impl::consume_Udwm_Transitions_ITransitionState<winrt::Udwm::Transitions::ITransitionState>::TransferJointResizeVisuals(
                    a1 + 3,
                    &v12);
  v6 = a1 + 4;
  if ( a1 + 4 != v5 )
  {
    if ( *v6 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)(a1 + 4));
    v7 = *v5;
    *v5 = 0LL;
    *v6 = v7;
  }
  if ( v12 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v12);
  if ( (unsigned int)winrt::impl::consume_Windows_Foundation_Collections_IVector<winrt::Windows::Foundation::Collections::IVector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::Udwm::Transitions::UserResizeVisual>::Size(a1 + 4) )
  {
    v8 = 0;
    winrt::impl::end<winrt::Windows::Foundation::Collections::IVector<winrt::Udwm::Transitions::UserResizeVisual>,0>(
      (__int64)v10,
      (__int64)(a1 + 4));
    while ( v8 != v11 )
    {
      winrt::impl::consume_Windows_Foundation_Collections_IVector<winrt::Windows::Foundation::Collections::IVector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::Udwm::Transitions::UserResizeVisual>::GetAt(
        a1 + 4,
        &v12,
        v8);
      v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 72LL))(v12);
      if ( v9 < 0 )
        winrt::throw_hresult(v9);
      if ( v12 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v12);
      ++v8;
    }
  }
  else
  {
    winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler::Cleanup((winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler *)a1);
  }
}
