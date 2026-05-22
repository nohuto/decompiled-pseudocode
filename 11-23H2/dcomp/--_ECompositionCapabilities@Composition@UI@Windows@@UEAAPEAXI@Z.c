/*
 * XREFs of ??_ECompositionCapabilities@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x18003C510
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ??1CompositionCapabilities@Composition@UI@Windows@@UEAA@XZ @ 0x18003C660 (--1CompositionCapabilities@Composition@UI@Windows@@UEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 */

Windows::UI::Composition::CompositionCapabilities *__fastcall Windows::UI::Composition::CompositionCapabilities::`vector deleting destructor'(
        Windows::UI::Composition::CompositionCapabilities *this,
        char a2)
{
  Windows::UI::Composition::CompositionCapabilities::~CompositionCapabilities(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x58uLL);
    else
      operator delete(this);
  }
  return this;
}
