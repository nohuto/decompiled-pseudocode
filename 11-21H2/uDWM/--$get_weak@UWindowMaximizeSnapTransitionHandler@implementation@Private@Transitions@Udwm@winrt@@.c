/*
 * XREFs of ??$get_weak@UWindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@@?$root_implements@UWindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@U13456@@impl@winrt@@IEAA?AU?$weak_ref@UWindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@@2@XZ @ 0x180006084
 * Callers:
 *     ?AnimationComplete@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAAXAEBUAnimationCompletedHandler@345@@Z @ 0x1800060F8 (-AnimationComplete@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAAXAEBUAnima.c)
 *     ?PostTransition@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x18003EF80 (-PostTransition@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winr.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x180006224 (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     ?make_weak_ref@?$root_implements@UWindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@U13456@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x18000624C (-make_weak_ref@-$root_implements@UWindowMaximizeSnapTransitionHandler@implementation@Private@Tra.c)
 *     _CxxThrowException_0 @ 0x1800636E3 (_CxxThrowException_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800D3CDC (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall winrt::impl::root_implements<winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler,winrt::Udwm::Transitions::Private::WindowMaximizeSnapTransitionHandler>::get_weak<winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler>(
        __int64 a1,
        _QWORD *a2)
{
  __int64 weak_ref; // rax
  int v4; // eax
  _QWORD pExceptionObject[4]; // [rsp+28h] [rbp-20h] BYREF
  __int64 v7; // [rsp+60h] [rbp+18h] BYREF

  weak_ref = winrt::impl::root_implements<winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler,winrt::Udwm::Transitions::Private::WindowMaximizeSnapTransitionHandler>::make_weak_ref(a1);
  if ( !weak_ref )
  {
    pExceptionObject[1] = "bad allocation";
    pExceptionObject[0] = &stdext::bad_alloc::`vftable';
    throw (stdext::bad_alloc *)pExceptionObject;
  }
  v7 = weak_ref;
  *a2 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)weak_ref + 24LL))(weak_ref, a2);
  if ( v4 < 0 )
    winrt::throw_hresult((unsigned int)v4);
  winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v7);
  return a2;
}
