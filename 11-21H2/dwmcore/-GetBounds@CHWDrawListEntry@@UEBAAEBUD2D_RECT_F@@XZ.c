/*
 * XREFs of ?GetBounds@CHWDrawListEntry@@UEBAAEBUD2D_RECT_F@@XZ @ 0x1800FAE30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

const struct D2D_RECT_F *__fastcall CHWDrawListEntry::GetBounds(CHWDrawListEntry *this)
{
  return (const struct D2D_RECT_F *)(*((_QWORD *)this + 8) + 72LL);
}
