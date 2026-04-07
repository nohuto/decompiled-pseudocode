/*
 * XREFs of ??$get_weak@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@@?$root_implements@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@U1345@UIUserResizeVisualNative@34@@impl@winrt@@IEAA?AU?$weak_ref@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@@2@XZ @ 0x1800F77E8
 * Callers:
 *     ?PostTransition@WindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x1800F7E38 (-PostTransition@WindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt.c)
 *     ?StartHideAnimation@UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAAXUUnloadDelegate@345@@Z @ 0x1800FF930 (-StartHideAnimation@UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAAXUUnloadDelegate.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x180006224 (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     _CxxThrowException_0 @ 0x1800636E3 (_CxxThrowException_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800D3CDC (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?make_weak_ref@?$root_implements@U?$key_value_pair@U?$IKeyValuePair@Uhstring@winrt@@N@Collections@Foundation@Windows@winrt@@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@N@Collections@Foundation@Windows@3@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x1800F1720 (-make_weak_ref@-$root_implements@U-$key_value_pair@U-$IKeyValuePair@Uhstring@winrt@@N@Collection.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::UserResizeVisual,winrt::Udwm::Transitions::UserResizeVisual,Udwm::Transitions::IUserResizeVisualNative>::get_weak<winrt::Udwm::Transitions::implementation::UserResizeVisual>(
        volatile signed __int64 *a1,
        _QWORD *a2)
{
  __int64 weak_ref; // rax
  signed int v4; // eax
  _QWORD pExceptionObject[4]; // [rsp+28h] [rbp-20h] BYREF
  __int64 v7; // [rsp+60h] [rbp+18h] BYREF

  weak_ref = winrt::impl::root_implements<winrt::impl::key_value_pair<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,double>>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,double>>::make_weak_ref(a1);
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
    winrt::throw_hresult(v4);
  winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v7);
  return a2;
}
