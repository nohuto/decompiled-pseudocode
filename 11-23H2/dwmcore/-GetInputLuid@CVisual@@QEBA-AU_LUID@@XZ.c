/*
 * XREFs of ?GetInputLuid@CVisual@@QEBA?AU_LUID@@XZ @ 0x180019628
 * Callers:
 *     ?HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z @ 0x1800AA350 (-HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z.c)
 *     ?SetWorldTransform@CDesktopTreeData@@MEAA_NAEBVCMILMatrix@@_NPEAV2@@Z @ 0x1800BDDB0 (-SetWorldTransform@CDesktopTreeData@@MEAA_NAEBVCMILMatrix@@_NPEAV2@@Z.c)
 * Callees:
 *     ?GetInputLuid@CInteraction@@QEBA?AU_LUID@@XZ @ 0x180019660 (-GetInputLuid@CInteraction@@QEBA-AU_LUID@@XZ.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x180083644 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 */

struct _LUID __fastcall CVisual::GetInputLuid(CVisual *this, _QWORD *a2)
{
  CInteraction *InteractionInternal; // rax
  _QWORD *v3; // r10
  _QWORD *InputLuid; // rax

  *a2 = 0LL;
  InteractionInternal = CVisual::GetInteractionInternal(this);
  if ( InteractionInternal )
  {
    InputLuid = (_QWORD *)CInteraction::GetInputLuid(InteractionInternal);
    *v3 = *InputLuid;
  }
  return (struct _LUID)v3;
}
