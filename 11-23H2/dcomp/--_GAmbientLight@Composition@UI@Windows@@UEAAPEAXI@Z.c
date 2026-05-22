/*
 * XREFs of ??_GAmbientLight@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x18000DD70
 * Callers:
 *     <none>
 * Callees:
 *     ??1CompositionLight@Composition@UI@Windows@@UEAA@XZ @ 0x18000DE04 (--1CompositionLight@Composition@UI@Windows@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 */

Windows::UI::Composition::AmbientLight *__fastcall Windows::UI::Composition::AmbientLight::`scalar deleting destructor'(
        Windows::UI::Composition::AmbientLight *this,
        char a2)
{
  Windows::UI::Composition::CompositionLight::~CompositionLight(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x138uLL);
    else
      operator delete(this);
  }
  return this;
}
