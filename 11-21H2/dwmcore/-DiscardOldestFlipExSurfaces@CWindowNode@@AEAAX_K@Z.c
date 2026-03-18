/*
 * XREFs of ?DiscardOldestFlipExSurfaces@CWindowNode@@AEAAX_K@Z @ 0x180061594
 * Callers:
 *     ?DiscardFlipExSurfaces@CWindowNode@@AEAAXXZ @ 0x18006156C (-DiscardFlipExSurfaces@CWindowNode@@AEAAXXZ.c)
 *     ?ProcessReadyFlipExSurfaces@CWindowNode@@AEAA_NXZ @ 0x1801152E0 (-ProcessReadyFlipExSurfaces@CWindowNode@@AEAA_NXZ.c)
 *     ?SetFlipExSurface@CWindowNode@@AEAAJPEAVCCompositionSurfaceBitmap@@@Z @ 0x1802446E8 (-SetFlipExSurface@CWindowNode@@AEAAJPEAVCCompositionSurfaceBitmap@@@Z.c)
 * Callees:
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800D18A0 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800D7C40 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CWindowNode::DiscardOldestFlipExSurfaces(CWindowNode *this, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  CPtrArrayBase *i; // rsi
  struct CResource *v6; // rax

  v2 = 0LL;
  for ( i = (CWindowNode *)((char *)this + 808); v2 < a2; ++v2 )
  {
    v6 = (struct CResource *)CPtrArrayBase::operator[](i, v2);
    CResource::UnRegisterNotifierInternal(this, v6);
  }
  CPtrArrayBase::RemoveAt(i, 0LL, a2);
}
