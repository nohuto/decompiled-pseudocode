/*
 * XREFs of ?WasInertiaStartedByImpulse@CInteractionTracker@@QEBA_NW4ScrollAxis@@@Z @ 0x180235C70
 * Callers:
 *     ?CalculateCenterPointForAxis@CInteractionTracker@@AEAAJPEAVCExpressionValueStack@@_KW4ScrollState@@W4ScrollAxis@@PEAM@Z @ 0x180230EB4 (-CalculateCenterPointForAxis@CInteractionTracker@@AEAAJPEAVCExpressionValueStack@@_KW4ScrollStat.c)
 * Callees:
 *     ?WasInertiaStartedByImpulse@CScrollAnimation@@QEBA_NXZ @ 0x180265740 (-WasInertiaStartedByImpulse@CScrollAnimation@@QEBA_NXZ.c)
 */

bool __fastcall CInteractionTracker::WasInertiaStartedByImpulse(__int64 a1)
{
  CScrollAnimation *v1; // rcx
  char v2; // bl

  v1 = *(CScrollAnimation **)(a1 + 328);
  v2 = 0;
  if ( v1 )
    return CScrollAnimation::WasInertiaStartedByImpulse(v1);
  return v2;
}
