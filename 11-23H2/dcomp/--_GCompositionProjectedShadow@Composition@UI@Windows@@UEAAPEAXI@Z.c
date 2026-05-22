/*
 * XREFs of ??_GCompositionProjectedShadow@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x180011680
 * Callers:
 *     <none>
 * Callees:
 *     ??1CompositionProjectedShadow@Composition@UI@Windows@@UEAA@XZ @ 0x1800116C4 (--1CompositionProjectedShadow@Composition@UI@Windows@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 */

Windows::UI::Composition::CompositionProjectedShadow *__fastcall Windows::UI::Composition::CompositionProjectedShadow::`scalar deleting destructor'(
        Windows::UI::Composition::CompositionProjectedShadow *this,
        char a2)
{
  Windows::UI::Composition::CompositionProjectedShadow::~CompositionProjectedShadow(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0xF8uLL);
    else
      operator delete(this);
  }
  return this;
}
