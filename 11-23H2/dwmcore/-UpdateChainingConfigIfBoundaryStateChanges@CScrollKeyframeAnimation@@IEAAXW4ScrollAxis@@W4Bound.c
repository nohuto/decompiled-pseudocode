/*
 * XREFs of ?UpdateChainingConfigIfBoundaryStateChanges@CScrollKeyframeAnimation@@IEAAXW4ScrollAxis@@W4Boundary@@@Z @ 0x18026F038
 * Callers:
 *     ?EnsureChainingConfigUpdated@CScrollPositionKeyframeAnimation@@MEAAXPEAVCExpressionValueStack@@_K@Z @ 0x180265830 (-EnsureChainingConfigUpdated@CScrollPositionKeyframeAnimation@@MEAAXPEAVCExpressionValueStack@@_.c)
 *     ?EnsureChainingConfigUpdated@CScrollScaleKeyframeAnimation@@MEAAXPEAVCExpressionValueStack@@_K@Z @ 0x180265D70 (-EnsureChainingConfigUpdated@CScrollScaleKeyframeAnimation@@MEAAXPEAVCExpressionValueStack@@_K@Z.c)
 * Callees:
 *     ?TryGetActiveChainingHelper@InteractionSourceManager@@QEBAPEAVCChainingHelper@@XZ @ 0x18013484E (-TryGetActiveChainingHelper@InteractionSourceManager@@QEBAPEAVCChainingHelper@@XZ.c)
 *     ?BoundaryFromValue@CInteractionTracker@@QEBA?AW4Boundary@@MW4ScrollAxis@@@Z @ 0x180230E74 (-BoundaryFromValue@CInteractionTracker@@QEBA-AW4Boundary@@MW4ScrollAxis@@@Z.c)
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x1802322A8 (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?ShouldChainAllForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@@Z @ 0x1802351DC (-ShouldChainAllForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@@Z.c)
 *     ?ShouldChainForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@_N@Z @ 0x18023529C (-ShouldChainForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@_N@Z.c)
 *     ?TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ @ 0x180274F88 (-TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ.c)
 *     ?RestoreSupportedInteractionsWithBoundaries@CChainingHelper@@QEAAXW4ScrollAxis@@W4Boundary@@_N2@Z @ 0x1802760C8 (-RestoreSupportedInteractionsWithBoundaries@CChainingHelper@@QEAAXW4ScrollAxis@@W4Boundary@@_N2@.c)
 */

struct CManipulation *__fastcall CScrollKeyframeAnimation::UpdateChainingConfigIfBoundaryStateChanges(
        __int64 a1,
        unsigned int a2,
        unsigned int a3)
{
  __int64 v3; // rbx
  float CurrentValue; // xmm0_4
  struct CManipulation *result; // rax
  __int64 v9; // rbx
  struct CChainingHelper *ActiveChainingHelper; // rsi
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // r10
  __int64 v14; // r9
  char v15; // r11

  v3 = *(_QWORD *)(a1 + 584);
  CurrentValue = CInteractionTracker::GetCurrentValue(v3, a2);
  result = (struct CManipulation *)CInteractionTracker::BoundaryFromValue(v3, CurrentValue, a2);
  if ( (_DWORD)result != a3 )
  {
    v9 = *(_QWORD *)(a1 + 584);
    ActiveChainingHelper = InteractionSourceManager::TryGetActiveChainingHelper((InteractionSourceManager *)(v9 + 200));
    result = InteractionSourceManager::TryGetActiveManipulation((InteractionSourceManager *)(v9 + 200));
    if ( ActiveChainingHelper )
    {
      if ( result )
      {
        CInteractionTracker::ShouldChainAllForAxis(v11, a2, (__int64)result);
        LOBYTE(v14) = CInteractionTracker::ShouldChainForAxis(v12, a2, v13, 1u);
        return (struct CManipulation *)CChainingHelper::RestoreSupportedInteractionsWithBoundaries(
                                         ActiveChainingHelper,
                                         a2,
                                         a3,
                                         v14,
                                         v15);
      }
    }
  }
  return result;
}
