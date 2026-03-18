/*
 * XREFs of ?BoostCompositorClock@CInteractionTracker@@AEAAX_N@Z @ 0x180230E1C
 * Callers:
 *     ??1CInteractionTracker@@UEAA@XZ @ 0x180230330 (--1CInteractionTracker@@UEAA@XZ.c)
 *     ?TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x180235570 (-TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTa.c)
 *     ?TransitionToIdle@CInteractionTracker@@AEAAXXZ @ 0x180235714 (-TransitionToIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?TransitionToInContact@CInteractionTracker@@AEAAXXZ @ 0x1802357AC (-TransitionToInContact@CInteractionTracker@@AEAAXXZ.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z @ 0x180235808 (-TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z.c)
 * Callees:
 *     ?LogBoostCompositorClock@CInteractionTracker@@AEAAX_N@Z @ 0x180232D18 (-LogBoostCompositorClock@CInteractionTracker@@AEAAX_N@Z.c)
 */

void __fastcall CInteractionTracker::BoostCompositorClock(CInteractionTracker *this, bool a2)
{
  __int64 v2; // r8
  int v3; // eax
  int v4; // eax

  if ( ((*((_BYTE *)this + 541) & 4) != 0) != a2 )
  {
    v2 = *((_QWORD *)this + 2);
    v3 = *(_DWORD *)(v2 + 1228);
    if ( a2 )
    {
      v4 = v3 + 1;
    }
    else
    {
      if ( !v3 )
      {
LABEL_7:
        *((_BYTE *)this + 541) &= ~4u;
        *((_BYTE *)this + 541) |= 4 * a2;
        CInteractionTracker::LogBoostCompositorClock(this, a2);
        return;
      }
      v4 = v3 - 1;
    }
    *(_DWORD *)(v2 + 1228) = v4;
    goto LABEL_7;
  }
}
