/*
 * XREFs of ?Clear@?$consume_Windows_Foundation_Collections_IVector@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@winrt@@UUserResizeVisual@Transitions@Udwm@5@@impl@winrt@@QEBAXXZ @ 0x1800F7CA0
 * Callers:
 *     ?Cleanup@WindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F7C48 (-Cleanup@WindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAX.c)
 *     ?PostTransition@WindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x1800F7E38 (-PostTransition@WindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800D3CDC (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 __fastcall winrt::impl::consume_Windows_Foundation_Collections_IVector<winrt::Windows::Foundation::Collections::IVector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::Udwm::Transitions::UserResizeVisual>::Clear(
        _QWORD *a1)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 120LL))(*a1);
  if ( (int)result < 0 )
    winrt::throw_hresult(result);
  return result;
}
