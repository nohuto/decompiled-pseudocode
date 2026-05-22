/*
 * XREFs of ??_ECompositionMipmapSurface@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x180156A30
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CompositionMipmapSurface@Composition@UI@Windows@@UEAA@XZ @ 0x180156980 (--1CompositionMipmapSurface@Composition@UI@Windows@@UEAA@XZ.c)
 */

Windows::UI::Composition::CompositionMipmapSurface *__fastcall Windows::UI::Composition::CompositionMipmapSurface::`vector deleting destructor'(
        Windows::UI::Composition::CompositionMipmapSurface *this,
        char a2)
{
  Windows::UI::Composition::CompositionMipmapSurface::~CompositionMipmapSurface(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
