/*
 * XREFs of ??1BeginAnimationClock@AnimationClockLoggingTelemetry@@QEAA@XZ @ 0x1800A19E0
 * Callers:
 *     ?Begin@CAnimationClock@@QEAAJK@Z @ 0x1800A1BB0 (-Begin@CAnimationClock@@QEAAJK@Z.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800A1E24 (-Destroy@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProvide.c)
 */

void __fastcall AnimationClockLoggingTelemetry::BeginAnimationClock::~BeginAnimationClock(
        AnimationClockLoggingTelemetry::BeginAnimationClock *this)
{
  *(_QWORD *)this = &AnimationClockLoggingTelemetry::BeginAnimationClock::`vftable';
  wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
