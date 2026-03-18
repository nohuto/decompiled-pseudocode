/*
 * XREFs of ??1CWindowNode@@MEAA@XZ @ 0x180092854
 * Callers:
 *     ??_GCWindowNode@@MEAAPEAXI@Z @ 0x180092810 (--_GCWindowNode@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800233AC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?DiscardGdiSpriteBitmaps@CWindowNode@@AEAAXXZ @ 0x180092B58 (-DiscardGdiSpriteBitmaps@CWindowNode@@AEAAXXZ.c)
 *     ?DiscardFlipExSurfaces@CWindowNode@@AEAAXXZ @ 0x180092BF0 (-DiscardFlipExSurfaces@CWindowNode@@AEAAXXZ.c)
 *     ??$ReleaseInterface@VCProcessAttribution@@@@YAXAEAPEAVCProcessAttribution@@@Z @ 0x180092C18 (--$ReleaseInterface@VCProcessAttribution@@@@YAXAEAPEAVCProcessAttribution@@@Z.c)
 *     ?Clear@CPtrArrayBase@@IEAAXXZ @ 0x1800F0BB8 (-Clear@CPtrArrayBase@@IEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CWindowNode::~CWindowNode(struct CResource **this)
{
  struct CResource *v2; // rcx

  *this = (struct CResource *)&CWindowNode::`vftable';
  CWindowNode::DiscardGdiSpriteBitmaps((CWindowNode *)this);
  CWindowNode::DiscardFlipExSurfaces((CWindowNode *)this);
  CResource::UnRegisterNotifierInternal((CResource *)this, this[99]);
  this[99] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[109]);
  this[109] = 0LL;
  v2 = this[110];
  if ( v2 )
    (**(void (__fastcall ***)(struct CResource *, __int64))v2)(v2, 1LL);
  ReleaseInterface<CProcessAttribution>(this + 90);
  CPtrArrayBase::Clear((CPtrArrayBase *)(this + 98));
  CPtrArrayBase::Clear((CPtrArrayBase *)(this + 97));
  CVisual::~CVisual((CVisual *)this);
}
