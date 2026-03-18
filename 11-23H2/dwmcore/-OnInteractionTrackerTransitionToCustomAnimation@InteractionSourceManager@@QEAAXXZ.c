/*
 * XREFs of ?OnInteractionTrackerTransitionToCustomAnimation@InteractionSourceManager@@QEAAXXZ @ 0x1802746C8
 * Callers:
 *     ?SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z @ 0x180234ECC (-SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z.c)
 * Callees:
 *     ?HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ @ 0x18013276E (-HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ.c)
 *     ?ClearActiveManipulations@InteractionSourceManager@@AEAAXXZ @ 0x180273EFC (-ClearActiveManipulations@InteractionSourceManager@@AEAAXXZ.c)
 */

void __fastcall InteractionSourceManager::OnInteractionTrackerTransitionToCustomAnimation(
        InteractionSourceManager *this)
{
  InteractionSourceManager *v1; // rcx

  if ( InteractionSourceManager::HasActiveManipulation(this) )
    InteractionSourceManager::ClearActiveManipulations(v1);
}
