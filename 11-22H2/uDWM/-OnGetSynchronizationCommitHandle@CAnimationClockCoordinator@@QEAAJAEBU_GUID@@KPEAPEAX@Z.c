/*
 * XREFs of ?OnGetSynchronizationCommitHandle@CAnimationClockCoordinator@@QEAAJAEBU_GUID@@KPEAPEAX@Z @ 0x1800AA808
 * Callers:
 *     ?_SetStoryboardTriggerForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x18000EA04 (-_SetStoryboardTriggerForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18001DAC0 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?GetAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAVCAnimationClock@@@Z @ 0x18000E0B0 (-GetAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAVCAnimationClock@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x180038438 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_2901997880@@@details@wil@@QEAA_NXZ @ 0x18005EEAC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_2901997880@@@details@wil@@QEAA_NX.c)
 *     ??1?$ComPtr@VCAnimationClock@@@WRL@Microsoft@@QEAA@XZ @ 0x18006B5B0 (--1-$ComPtr@VCAnimationClock@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCommitHandle@CAnimationClock@@QEAAJKPEAPEAX@Z @ 0x1800A9C0C (-GetCommitHandle@CAnimationClock@@QEAAJKPEAPEAX@Z.c)
 */

__int64 __fastcall CAnimationClockCoordinator::OnGetSynchronizationCommitHandle(
        CAnimationClockCoordinator *this,
        const struct _GUID *a2,
        unsigned int a3,
        void **a4)
{
  int AnimationClock; // ebx
  int CommitHandle; // eax
  struct _GUID v11; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct CAnimationClock *v13; // [rsp+48h] [rbp+10h] BYREF

  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_2901997880>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_2901997880>::GetImpl'::`2'::impl) )
    *a4 = 0LL;
  v13 = 0LL;
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v13);
  v11 = *a2;
  AnimationClock = CAnimationClockCoordinator::GetAnimationClock(this, &v11, &v13);
  if ( AnimationClock >= 0 )
  {
    CommitHandle = CAnimationClock::GetCommitHandle(v13, a3, a4);
    AnimationClock = CommitHandle;
    if ( CommitHandle >= 0 )
      AnimationClock = 0;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD9,
        (__int64)"clientcore\\windows\\dwm\\udwm\\animationclockcoordinator.cpp",
        (const char *)(unsigned int)CommitHandle);
  }
  Microsoft::WRL::ComPtr<CAnimationClock>::~ComPtr<CAnimationClock>(&v13);
  return (unsigned int)AnimationClock;
}
