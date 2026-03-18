/*
 * XREFs of ?DiscardGdiSpriteBitmaps@CWindowNode@@AEAAXXZ @ 0x1800615E8
 * Callers:
 *     ??1CWindowNode@@MEAA@XZ @ 0x180061494 (--1CWindowNode@@MEAA@XZ.c)
 *     ?SetSpriteBitmap@CWindowNode@@AEAAJPEAVCGdiSpriteBitmap@@@Z @ 0x180062144 (-SetSpriteBitmap@CWindowNode@@AEAAJPEAVCGdiSpriteBitmap@@@Z.c)
 * Callees:
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x180062474 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 */

void __fastcall CWindowNode::DiscardGdiSpriteBitmaps(CWindowNode *this)
{
  unsigned __int64 Count; // rax
  CWindowNode *v2; // r8

  Count = CPtrArrayBase::GetCount((CWindowNode *)((char *)this + 800));
  CWindowNode::DiscardOldestGdiSpriteBitmaps(v2, Count);
}
