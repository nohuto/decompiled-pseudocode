/*
 * XREFs of ??_GSceneLightingEffect@Effects@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x1800118B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1SceneLightingEffect@Effects@Composition@UI@Windows@@UEAA@XZ @ 0x1800118F4 (--1SceneLightingEffect@Effects@Composition@UI@Windows@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 */

Windows::UI::Composition::Effects::SceneLightingEffect *__fastcall Windows::UI::Composition::Effects::SceneLightingEffect::`scalar deleting destructor'(
        Windows::UI::Composition::Effects::SceneLightingEffect *this,
        char a2)
{
  Windows::UI::Composition::Effects::SceneLightingEffect::~SceneLightingEffect(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x70uLL);
    else
      operator delete(this);
  }
  return this;
}
