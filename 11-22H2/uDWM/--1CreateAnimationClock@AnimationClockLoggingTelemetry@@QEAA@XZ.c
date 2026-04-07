/*
 * XREFs of ??1CreateAnimationClock@AnimationClockLoggingTelemetry@@QEAA@XZ @ 0x1800044CC
 * Callers:
 *     ?Create@CAnimationClockFactory@@SAJU_GUID@@PEAPEAVCAnimationClock@@@Z @ 0x1800043B8 (-Create@CAnimationClockFactory@@SAJU_GUID@@PEAPEAVCAnimationClock@@@Z.c)
 *     _CAnimationClockFactory::Create_::_1_::dtor$0 @ 0x180067168 (_CAnimationClockFactory--Create_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800059F0 (-Destroy@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProvide.c)
 */

void __fastcall AnimationClockLoggingTelemetry::CreateAnimationClock::~CreateAnimationClock(
        AnimationClockLoggingTelemetry::CreateAnimationClock *this)
{
  *(_QWORD *)this = &AnimationClockLoggingTelemetry::CreateAnimationClock::`vftable';
  wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>(this);
}
