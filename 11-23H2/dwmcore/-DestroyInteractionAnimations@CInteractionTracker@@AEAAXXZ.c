/*
 * XREFs of ?DestroyInteractionAnimations@CInteractionTracker@@AEAAXXZ @ 0x180231CE0
 * Callers:
 *     ??1CInteractionTracker@@UEAA@XZ @ 0x180230330 (--1CInteractionTracker@@UEAA@XZ.c)
 *     ?DemoteToBoundTracker@CInteractionTracker@@AEAAX_N@Z @ 0x180231B40 (-DemoteToBoundTracker@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x180235570 (-TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTa.c)
 *     ?TransitionToIdle@CInteractionTracker@@AEAAXXZ @ 0x180235714 (-TransitionToIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z @ 0x180235808 (-TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z.c)
 *     ?BringBoundTrackersStateInSync@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0W4InteractionTrackerBindingModeFlags@@@Z @ 0x180237738 (-BringBoundTrackersStateInSync@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18001C904 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Stop@CScrollAnimation@@QEAAJXZ @ 0x180265074 (-Stop@CScrollAnimation@@QEAAJXZ.c)
 */

void __fastcall CInteractionTracker::DestroyInteractionAnimations(CInteractionTracker *this)
{
  __int64 *v1; // rdi
  CScrollAnimation *v3; // rcx
  CScrollAnimation *v4; // rcx
  CScrollAnimation *v5; // rcx

  v1 = (__int64 *)((char *)this + 328);
  v3 = (CScrollAnimation *)*((_QWORD *)this + 41);
  if ( v3 )
  {
    CScrollAnimation::Stop(v3);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v1);
  }
  v4 = (CScrollAnimation *)*((_QWORD *)this + 42);
  if ( v4 )
  {
    CScrollAnimation::Stop(v4);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 42);
  }
  v5 = (CScrollAnimation *)*((_QWORD *)this + 43);
  if ( v5 )
  {
    CScrollAnimation::Stop(v5);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 43);
  }
}
