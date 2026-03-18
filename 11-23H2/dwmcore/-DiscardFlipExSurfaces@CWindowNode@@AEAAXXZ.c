/*
 * XREFs of ?DiscardFlipExSurfaces@CWindowNode@@AEAAXXZ @ 0x180092BF0
 * Callers:
 *     ??1CWindowNode@@MEAA@XZ @ 0x180092854 (--1CWindowNode@@MEAA@XZ.c)
 *     ?SetFlipExSurface@CWindowNode@@AEAAJPEAVCCompositionSurfaceBitmap@@@Z @ 0x180256600 (-SetFlipExSurface@CWindowNode@@AEAAJPEAVCCompositionSurfaceBitmap@@@Z.c)
 * Callees:
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x180091A90 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 */

void __fastcall CWindowNode::DiscardFlipExSurfaces(CWindowNode *this)
{
  unsigned __int64 Count; // rax
  CWindowNode *v2; // r8

  Count = CPtrArrayBase::GetCount((CWindowNode *)((char *)this + 784));
  CWindowNode::DiscardOldestFlipExSurfaces(v2, Count);
}
