/*
 * XREFs of ??1TriggerClock@AnimationClockLoggingTelemetry@@QEAA@XZ @ 0x1800A1B2C
 * Callers:
 *     ?_TriggerAnimation@CAnimationClock@@AEAAJXZ @ 0x1800A42BC (-_TriggerAnimation@CAnimationClock@@AEAAJXZ.c)
 *     _CAnimationClock::_TriggerAnimation_::_1_::dtor$0 @ 0x1800A446A (_CAnimationClock--_TriggerAnimation_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800A1E24 (-Destroy@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProvide.c)
 */

void __fastcall AnimationClockLoggingTelemetry::TriggerClock::~TriggerClock(
        AnimationClockLoggingTelemetry::TriggerClock *this)
{
  *(_QWORD *)this = &AnimationClockLoggingTelemetry::TriggerClock::`vftable';
  wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
