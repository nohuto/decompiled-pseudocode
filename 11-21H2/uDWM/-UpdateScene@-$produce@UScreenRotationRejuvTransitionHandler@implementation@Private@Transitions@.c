/*
 * XREFs of ?UpdateScene@?$produce@UScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UITransitionHandler@456@@impl@winrt@@UEAAHXZ @ 0x18000A020
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UITransitionAnimationVisualNative@Transitions@Udwm@@@winrt@@AEAAXXZ @ 0x1800141A0 (-unconditional_release_ref@-$com_ptr@UITransitionAnimationVisualNative@Transitions@Udwm@@@winrt@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F13D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$as@UITransitionStateNative@Transitions@Udwm@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@$0A@@impl@winrt@@YA?AU?$com_ptr@UITransitionStateNative@Transitions@Udwm@@@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x1800F266C (--$as@UITransitionStateNative@Transitions@Udwm@@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::produce<winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler,winrt::Udwm::Transitions::ITransitionHandler>::UpdateScene(
        __int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdx
  int v4; // eax
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    v1 = a1 + 32;
    v2 = a1 + 24;
  }
  else
  {
    v2 = 40LL;
    v1 = 48LL;
  }
  if ( *(_QWORD *)v1 && *(_QWORD *)(*(_QWORD *)v1 + 24LL) )
  {
    winrt::impl::as<Udwm::Transitions::ITransitionStateNative,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
      &v7,
      *(_QWORD *)v2);
    v4 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 72LL))(v7, *(_QWORD *)v1);
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xBE,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.private.screenrotationrejuvtransitionhandler.cpp",
        (const char *)(unsigned int)v4,
        v5);
    winrt::com_ptr<Udwm::Transitions::ITransitionAnimationVisualNative>::unconditional_release_ref(&v7);
  }
  return 0LL;
}
