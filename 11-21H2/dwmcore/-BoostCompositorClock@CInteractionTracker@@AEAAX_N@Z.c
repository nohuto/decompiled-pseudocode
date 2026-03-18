/*
 * XREFs of ?BoostCompositorClock@CInteractionTracker@@AEAAX_N@Z @ 0x1802194C8
 * Callers:
 *     ??1CInteractionTracker@@UEAA@XZ @ 0x180218970 (--1CInteractionTracker@@UEAA@XZ.c)
 *     ?TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x18021E190 (-TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTa.c)
 *     ?TransitionToIdle@CInteractionTracker@@AEAAXXZ @ 0x18021E304 (-TransitionToIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?TransitionToInContact@CInteractionTracker@@AEAAXXZ @ 0x18021E39C (-TransitionToInContact@CInteractionTracker@@AEAAXXZ.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z @ 0x18021E3F8 (-TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z.c)
 * Callees:
 *     ?LogBoostCompositorClock@CInteractionTracker@@AEAAX_N@Z @ 0x18021B694 (-LogBoostCompositorClock@CInteractionTracker@@AEAAX_N@Z.c)
 */

void __fastcall CInteractionTracker::BoostCompositorClock(CInteractionTracker *this, bool a2)
{
  __int64 v3; // r8
  int v4; // eax
  int v5; // edx
  int v6; // eax

  if ( ((*((_BYTE *)this + 541) & 4) != 0) != a2 )
  {
    v3 = *((_QWORD *)this + 2);
    v4 = *(_DWORD *)(v3 + 1228);
    v5 = v4 - 1;
    v6 = v4 + 1;
    if ( !a2 )
      v6 = v5;
    *(_DWORD *)(v3 + 1228) = v6;
    *((_BYTE *)this + 541) &= ~4u;
    *((_BYTE *)this + 541) |= 4 * a2;
    CInteractionTracker::LogBoostCompositorClock(this, a2);
  }
}
