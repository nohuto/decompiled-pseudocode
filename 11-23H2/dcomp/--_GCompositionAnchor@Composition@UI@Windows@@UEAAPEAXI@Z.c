/*
 * XREFs of ??_GCompositionAnchor@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x18000F5C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CompositionAnchor@Composition@UI@Windows@@UEAA@XZ @ 0x18000F604 (--1CompositionAnchor@Composition@UI@Windows@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 */

Windows::UI::Composition::CompositionAnchor *__fastcall Windows::UI::Composition::CompositionAnchor::`scalar deleting destructor'(
        Windows::UI::Composition::CompositionAnchor *this,
        char a2)
{
  Windows::UI::Composition::CompositionAnchor::~CompositionAnchor(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x130uLL);
    else
      operator delete(this);
  }
  return this;
}
