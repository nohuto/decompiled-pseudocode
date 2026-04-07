/*
 * XREFs of ?NonDelegatingGetRuntimeClassName@?$root_implements@UTransitionManager@implementation@Transitions@Udwm@winrt@@U1345@UIRotationTransitionManager@Private@345@UIWindowStateTransitionManager@7345@UITransitionManagerNativePrivate@34@@impl@winrt@@IEAAHPEAPEAX@Z @ 0x1800FA9E0
 * Callers:
 *     ?GetRuntimeClassName@?$implements@UTransitionManager@implementation@Transitions@Udwm@winrt@@U1345@UIRotationTransitionManager@Private@345@UIWindowStateTransitionManager@7345@UITransitionManagerNativePrivate@34@@winrt@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1800FA200 (-GetRuntimeClassName@-$implements@UTransitionManager@implementation@Transitions@Udwm@winrt@@U134.c)
 *     ?GetRuntimeClassName@?$produce_base@UTransitionManager@implementation@Transitions@Udwm@winrt@@UIRotationTransitionManager@Private@345@X@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1800FA290 (-GetRuntimeClassName@-$produce_base@UTransitionManager@implementation@Transitions@Udwm@winrt@@UI.c)
 *     ?GetRuntimeClassName@?$produce_base@UTransitionManager@implementation@Transitions@Udwm@winrt@@UITransitionManager@345@X@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1800FA2C0 (-GetRuntimeClassName@-$produce_base@UTransitionManager@implementation@Transitions@U_ea_1800FA2C0.c)
 *     ?GetRuntimeClassName@?$produce_base@UTransitionManager@implementation@Transitions@Udwm@winrt@@UIWindowStateTransitionManager@Private@345@X@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1800FA2F0 (-GetRuntimeClassName@-$produce_base@UTransitionManager@implementation@Transitions@U_ea_1800FA2F0.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18005FA60 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::TransitionManager,winrt::Udwm::Transitions::TransitionManager,winrt::Udwm::Transitions::Private::IRotationTransitionManager,winrt::Udwm::Transitions::Private::IWindowStateTransitionManager,Udwm::Transitions::ITransitionManagerNativePrivate>::NonDelegatingGetRuntimeClassName(
        __int64 a1,
        _QWORD *a2)
{
  __int64 *v3; // rax
  __int64 v4; // rcx
  __int64 result; // rax
  volatile signed __int32 *v6; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 )
    a1 = 32LL;
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
