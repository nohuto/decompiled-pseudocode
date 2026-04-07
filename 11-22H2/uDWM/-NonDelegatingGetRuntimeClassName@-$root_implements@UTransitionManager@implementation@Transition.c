/*
 * XREFs of ?NonDelegatingGetRuntimeClassName@?$root_implements@UTransitionManager@implementation@Transitions@Udwm@winrt@@U1345@UIRotationTransitionManager@Private@345@UIWindowStateTransitionManager@7345@UIAnimationsTransitionManager@7345@UITransitionManagerNativePrivate@34@@impl@winrt@@IEAAHPEAPEAX@Z @ 0x1800FE190
 * Callers:
 *     ?GetRuntimeClassName@?$implements@UTransitionManager@implementation@Transitions@Udwm@winrt@@U1345@UIRotationTransitionManager@Private@345@UIWindowStateTransitionManager@7345@UIAnimationsTransitionManager@7345@UITransitionManagerNativePrivate@34@@winrt@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1800FD960 (-GetRuntimeClassName@-$implements@UTransitionManager@implementation@Transitions@Udwm@winrt@@U134.c)
 *     ?GetRuntimeClassName@?$produce_base@UTransitionManager@implementation@Transitions@Udwm@winrt@@UIAnimationsTransitionManager@Private@345@X@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1800FD9F0 (-GetRuntimeClassName@-$produce_base@UTransitionManager@implementation@Transitions@Udwm@winrt@@UI.c)
 *     ?GetRuntimeClassName@?$produce_base@UTransitionManager@implementation@Transitions@Udwm@winrt@@UIRotationTransitionManager@Private@345@X@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1800FDA20 (-GetRuntimeClassName@-$produce_base@UTransitionManager@implementation@Transitions@U_ea_1800FDA20.c)
 *     ?GetRuntimeClassName@?$produce_base@UTransitionManager@implementation@Transitions@Udwm@winrt@@UITransitionManager@345@X@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1800FDA50 (-GetRuntimeClassName@-$produce_base@UTransitionManager@implementation@Transitions@U_ea_1800FDA50.c)
 *     ?GetRuntimeClassName@?$produce_base@UTransitionManager@implementation@Transitions@Udwm@winrt@@UIWindowStateTransitionManager@Private@345@X@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1800FDA80 (-GetRuntimeClassName@-$produce_base@UTransitionManager@implementation@Transitions@U_ea_1800FDA80.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18005BE70 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::TransitionManager,winrt::Udwm::Transitions::TransitionManager,winrt::Udwm::Transitions::Private::IRotationTransitionManager,winrt::Udwm::Transitions::Private::IWindowStateTransitionManager,winrt::Udwm::Transitions::Private::IAnimationsTransitionManager,Udwm::Transitions::ITransitionManagerNativePrivate>::NonDelegatingGetRuntimeClassName(
        __int64 a1,
        _QWORD *a2)
{
  __int64 *v3; // rax
  __int64 v4; // rcx
  __int64 result; // rax
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 )
    a1 = 40LL;
  try
  {
    v3 = (__int64 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 40LL))(a1);
    v4 = *v3;
    *v3 = 0LL;
    *a2 = v4;
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v6);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v6);
  }
  return result;
}
