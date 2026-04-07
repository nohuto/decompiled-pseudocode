/*
 * XREFs of ?zInternalRelatedId@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x18005EC2C
 * Callers:
 *     ?StartActivity@CreateAnimationClock@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@@Z @ 0x180004600 (-StartActivity@CreateAnimationClock@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@@Z.c)
 *     ?StartActivity@EndAnimationClock@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@J@Z @ 0x1800046AC (-StartActivity@EndAnimationClock@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@J@Z.c)
 *     ?StartActivity@BeginAnimationClock@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@J@Z @ 0x180004774 (-StartActivity@BeginAnimationClock@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@J@Z.c)
 *     ?StartActivity@TriggerClock@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@@Z @ 0x18000483C (-StartActivity@TriggerClock@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@@Z.c)
 *     ?StartActivity@AnimationClockStateChange@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@HH@Z @ 0x180005B10 (-StartActivity@AnimationClockStateChange@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@HH@Z.c)
 *     ?StartActivity@CloneWindow@WindowFrameLoggingTelemetry@@QEAAXXZ @ 0x180007CF8 (-StartActivity@CloneWindow@WindowFrameLoggingTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@GetCommitHandle@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@@Z @ 0x1800AA33C (-StartActivity@GetCommitHandle@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@@Z.c)
 *     ?StartActivity@StartDisplayCapture@WindowFrameLoggingTelemetry@@QEAAXPEAUHMONITOR__@@II@Z @ 0x1800D12AC (-StartActivity@StartDisplayCapture@WindowFrameLoggingTelemetry@@QEAAXPEAUHMONITOR__@@II@Z.c)
 *     ?StartActivity@StartWindowCapture@WindowFrameLoggingTelemetry@@QEAAXPEAUHWND__@@II@Z @ 0x1800D13A8 (-StartActivity@StartWindowCapture@WindowFrameLoggingTelemetry@@QEAAXPEAUHWND__@@II@Z.c)
 *     ?StartActivity@StopDisplayCapture@WindowFrameLoggingTelemetry@@QEAAXII@Z @ 0x1800D14A4 (-StartActivity@StopDisplayCapture@WindowFrameLoggingTelemetry@@QEAAXII@Z.c)
 *     ?StartActivity@StopWindowCapture@WindowFrameLoggingTelemetry@@QEAAXII@Z @ 0x1800D157C (-StartActivity@StopWindowCapture@WindowFrameLoggingTelemetry@@QEAAXII@Z.c)
 *     ?StartActivity@UpdateWindowCapture@WindowFrameLoggingTelemetry@@QEAAXPEAUHWND__@@II@Z @ 0x1800D1654 (-StartActivity@UpdateWindowCapture@WindowFrameLoggingTelemetry@@QEAAXPEAUHWND__@@II@Z.c)
 * Callees:
 *     ?_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z @ 0x1800AA64C (-_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z.c)
 */

__int64 __fastcall wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(
        __int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rcx

  v1 = *(_QWORD *)(a1 + 48);
  if ( !*(_BYTE *)(v1 + 4) || _tlgGuidIsZero((const struct _GUID *)(v1 + 24)) )
    return 0LL;
  return v2;
}
