/*
 * XREFs of ??_EBindableSurface@Composition@UI@Windows@@MEAAPEAXI@Z @ 0x180123400
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ??1BindableSurface@Composition@UI@Windows@@MEAA@XZ @ 0x180061000 (--1BindableSurface@Composition@UI@Windows@@MEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 */

Windows::UI::Composition::BindableSurface *__fastcall Windows::UI::Composition::BindableSurface::`vector deleting destructor'(
        Windows::UI::Composition::BindableSurface *this,
        char a2)
{
  Windows::UI::Composition::BindableSurface::~BindableSurface(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
