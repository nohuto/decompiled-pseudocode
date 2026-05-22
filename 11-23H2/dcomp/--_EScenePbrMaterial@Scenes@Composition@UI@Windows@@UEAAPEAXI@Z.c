/*
 * XREFs of ??_EScenePbrMaterial@Scenes@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x18013F1D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1ScenePbrMaterial@Scenes@Composition@UI@Windows@@UEAA@XZ @ 0x18013F0DC (--1ScenePbrMaterial@Scenes@Composition@UI@Windows@@UEAA@XZ.c)
 */

Windows::UI::Composition::Scenes::ScenePbrMaterial *__fastcall Windows::UI::Composition::Scenes::ScenePbrMaterial::`vector deleting destructor'(
        Windows::UI::Composition::Scenes::ScenePbrMaterial *this,
        char a2)
{
  Windows::UI::Composition::Scenes::ScenePbrMaterial::~ScenePbrMaterial(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
