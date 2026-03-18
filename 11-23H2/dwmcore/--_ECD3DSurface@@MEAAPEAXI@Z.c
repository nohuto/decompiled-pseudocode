/*
 * XREFs of ??_ECD3DSurface@@MEAAPEAXI@Z @ 0x18029BBB0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18010F3C8 (--3@YAXPEAX_K@Z.c)
 *     ??1CD3DSurface@@MEAA@XZ @ 0x18029BA80 (--1CD3DSurface@@MEAA@XZ.c)
 */

CD3DSurface *__fastcall CD3DSurface::`vector deleting destructor'(CD3DSurface *this, char a2)
{
  CD3DSurface::~CD3DSurface(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
