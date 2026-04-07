/*
 * XREFs of ?AcquireAnimationEngine@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEBA?AV?$com_ptr_t@VCAnimationEngine@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x1800F3940
 * Callers:
 *     ?SkipAnimationDelay@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F4C08 (-SkipAnimationDelay@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm.c)
 *     ?StartFirstAnimation@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F4CE8 (-StartFirstAnimation@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udw.c)
 *     ?StartSecondAnimation@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F4E6C (-StartSecondAnimation@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Ud.c)
 *     ?StopAnimation@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F5444 (-StopAnimation@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winr.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UITransitionAnimationVisualNative@Transitions@Udwm@@@winrt@@AEAAXXZ @ 0x1800141A0 (-unconditional_release_ref@-$com_ptr@UITransitionAnimationVisualNative@Transitions@Udwm@@@winrt@.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x180015140 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800D3CDC (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

CAnimationEngine **__fastcall winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler::AcquireAnimationEngine(
        __int64 a1,
        CAnimationEngine **a2)
{
  CAnimationEngine *v3; // rcx
  __int64 v4; // rbx
  signed int v5; // eax
  void (__fastcall *v6)(__int64, CAnimationEngine **); // rsi
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v3 = *(CAnimationEngine **)(a1 + 40);
  if ( v3 )
  {
    v8 = 0LL;
    v5 = (**(__int64 (__fastcall ***)(CAnimationEngine *, __int64 *, __int64 *))v3)(
           v3,
           &winrt::impl::guid_v<Udwm::Transitions::ITransitionStateNative>,
           &v8);
    if ( v5 < 0 )
      winrt::throw_hresult(v5);
    v4 = v8;
    v3 = *a2;
  }
  else
  {
    v4 = 0LL;
  }
  v9 = v4;
  v6 = *(void (__fastcall **)(__int64, CAnimationEngine **))(*(_QWORD *)v4 + 80LL);
  *a2 = 0LL;
  if ( v3 )
    CAnimationEngine::Release(v3);
  v6(v4, a2);
  winrt::com_ptr<Udwm::Transitions::ITransitionAnimationVisualNative>::unconditional_release_ref(&v9);
  return a2;
}
