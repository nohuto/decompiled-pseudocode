/*
 * XREFs of ?HasSpriteContent@CWindowNode@@AEBA_NXZ @ 0x1800BE7D8
 * Callers:
 *     ?HasSingleD2DBitmapOrPrimitiveGroupInternal@CWindowNode@@MEBA_NXZ @ 0x1800BE790 (-HasSingleD2DBitmapOrPrimitiveGroupInternal@CWindowNode@@MEBA_NXZ.c)
 * Callees:
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x180091A90 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 */

bool __fastcall CWindowNode::HasSpriteContent(CWindowNode *this)
{
  char v1; // dl

  v1 = 0;
  if ( !*((_BYTE *)this + 890) )
    return CPtrArrayBase::GetCount((CWindowNode *)((char *)this + 776)) != 0;
  return v1;
}
