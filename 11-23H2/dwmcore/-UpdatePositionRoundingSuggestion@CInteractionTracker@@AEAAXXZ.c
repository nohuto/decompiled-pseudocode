/*
 * XREFs of ?UpdatePositionRoundingSuggestion@CInteractionTracker@@AEAAXXZ @ 0x180235BBC
 * Callers:
 *     ?SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@W4TrackerUpdateType@1@@Z @ 0x180132E72 (-SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@W4TrackerUpdateType@1@@Z.c)
 *     ??0CInteractionTracker@@QEAA@PEAVCComposition@@@Z @ 0x18023006C (--0CInteractionTracker@@QEAA@PEAVCComposition@@@Z.c)
 *     ?SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z @ 0x180234ECC (-SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z.c)
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x180081EF4 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?IsPositionRoundingSuggestedForActiveManipulation@InteractionSourceManager@@QEBA_NXZ @ 0x18027462C (-IsPositionRoundingSuggestedForActiveManipulation@InteractionSourceManager@@QEBA_NXZ.c)
 */

void __fastcall CInteractionTracker::UpdatePositionRoundingSuggestion(CInteractionTracker *this)
{
  int v1; // edx
  bool IsPositionRoundingSuggestedForActiveManipulation; // r8
  CInteractionTracker *v3; // r10

  v1 = *((_DWORD *)this + 44);
  IsPositionRoundingSuggestedForActiveManipulation = 0;
  v3 = this;
  if ( v1 )
  {
    if ( v1 == 1 )
      IsPositionRoundingSuggestedForActiveManipulation = InteractionSourceManager::IsPositionRoundingSuggestedForActiveManipulation((CInteractionTracker *)((char *)this + 200));
  }
  else
  {
    IsPositionRoundingSuggestedForActiveManipulation = 1;
  }
  if ( (*((_BYTE *)v3 + 540) & 1) != IsPositionRoundingSuggestedForActiveManipulation )
  {
    *((_BYTE *)v3 + 540) = IsPositionRoundingSuggestedForActiveManipulation | *((_BYTE *)v3 + 540) & 0xFE;
    CResource::InvalidateAnimationSources(v3, 60);
  }
}
