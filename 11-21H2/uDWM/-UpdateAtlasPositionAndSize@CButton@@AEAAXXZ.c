/*
 * XREFs of ?UpdateAtlasPositionAndSize@CButton@@AEAAXXZ @ 0x18000E99C
 * Callers:
 *     ?RedrawVisual@CButton@@AEAAJXZ @ 0x180032070 (-RedrawVisual@CButton@@AEAAJXZ.c)
 * Callees:
 *     ?SetOffset@CAtlasedImage@@QEAAXAEBUtagPOINT@@@Z @ 0x18000E9E8 (-SetOffset@CAtlasedImage@@QEAAXAEBUtagPOINT@@@Z.c)
 *     ?SetSize@CAtlasedImage@@QEAAXAEBUtagSIZE@@@Z @ 0x18000EA18 (-SetSize@CAtlasedImage@@QEAAXAEBUtagSIZE@@@Z.c)
 */

void __fastcall CButton::UpdateAtlasPositionAndSize(CButton *this)
{
  CButton **v2; // rcx
  const struct tagPOINT *v3; // rdx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  CAtlasedImage::SetSize(*((CAtlasedImage **)this + 37), (const struct tagSIZE *)this + 16);
  v2 = (CButton **)*((_QWORD *)this + 37);
  if ( v2[10] == this )
  {
    v4 = 0LL;
    v3 = (const struct tagPOINT *)&v4;
  }
  else
  {
    v3 = (const struct tagPOINT *)((char *)this + 120);
  }
  CAtlasedImage::SetOffset((CAtlasedImage *)v2, v3);
}
