/*
 * XREFs of ??_ECD3DVidMemOnlyTexture@@MEAAPEAXI@Z @ 0x1802BF6C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18010F3C8 (--3@YAXPEAX_K@Z.c)
 *     ??1CD3DVidMemOnlyTexture@@MEAA@XZ @ 0x1802BF67C (--1CD3DVidMemOnlyTexture@@MEAA@XZ.c)
 */

CD3DVidMemOnlyTexture *__fastcall CD3DVidMemOnlyTexture::`vector deleting destructor'(
        CD3DVidMemOnlyTexture *this,
        char a2)
{
  CD3DVidMemOnlyTexture::~CD3DVidMemOnlyTexture(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
