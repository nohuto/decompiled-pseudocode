/*
 * XREFs of ??$make_weak@UITransitionState@Transitions@Udwm@winrt@@@winrt@@YA?AU?$weak_ref@UITransitionState@Transitions@Udwm@winrt@@@0@AEBUITransitionState@Transitions@Udwm@0@@Z @ 0x180063270
 * Callers:
 *     ?PostTransition@WindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x1800F7E38 (-PostTransition@WindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x180006224 (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800D3CDC (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall winrt::make_weak<winrt::Udwm::Transitions::ITransitionState>(
        _QWORD *a1,
        void (__fastcall ****a2)(_QWORD, __int64 *, __int64 *))
{
  void (__fastcall ***v3)(_QWORD, __int64 *, __int64 *); // rcx
  int v4; // eax
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v3 = *a2;
  if ( *a2 )
  {
    v6 = 0LL;
    (**v3)(v3, &winrt::impl::guid_v<winrt::impl::IWeakReferenceSource>, &v6);
    v7 = v6;
    v4 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v6 + 24LL))(v6, a1);
    if ( v4 < 0 )
      winrt::throw_hresult((unsigned int)v4);
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v7);
  }
  return a1;
}
