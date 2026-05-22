/*
 * XREFs of ??_GInvalidatableSurface@Composition@UI@Windows@@MEAAPEAXI@Z @ 0x180152B20
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ??1InvalidatableSurface@Composition@UI@Windows@@MEAA@XZ @ 0x180061078 (--1InvalidatableSurface@Composition@UI@Windows@@MEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 */

Windows::UI::Composition::InvalidatableSurface *__fastcall Windows::UI::Composition::InvalidatableSurface::`scalar deleting destructor'(
        Windows::UI::Composition::InvalidatableSurface *this,
        char a2)
{
  Windows::UI::Composition::InvalidatableSurface::~InvalidatableSurface(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
