/*
 * XREFs of ??1EndAnimationClock@AnimationClockLoggingTelemetry@@QEAA@XZ @ 0x1800A1AD4
 * Callers:
 *     ?End@CAnimationClock@@QEAAJXZ @ 0x1800A1ECC (-End@CAnimationClock@@QEAAJXZ.c)
 *     _CAnimationClock::End_::_1_::dtor$1 @ 0x1800A200C (_CAnimationClock--End_--_1_--dtor$1.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800A1E24 (-Destroy@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProvide.c)
 */

void __fastcall AnimationClockLoggingTelemetry::EndAnimationClock::~EndAnimationClock(
        AnimationClockLoggingTelemetry::EndAnimationClock *this)
{
  *(_QWORD *)this = &AnimationClockLoggingTelemetry::EndAnimationClock::`vftable';
  wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
