/*
 * XREFs of ??_GSceneNode@Scenes@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x180141B20
 * Callers:
 *     ??_ESceneNode@Scenes@Composition@UI@Windows@@WLA@EAAPEAXI@Z @ 0x1800B0320 (--_ESceneNode@Scenes@Composition@UI@Windows@@WLA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1?$SceneNodeGeneratedT@VSceneObject@Scenes@Composition@UI@Windows@@@Scenes@Composition@UI@Windows@@UEAA@XZ @ 0x180141454 (--1-$SceneNodeGeneratedT@VSceneObject@Scenes@Composition@UI@Windows@@@Scenes@Composition@UI@Wind.c)
 */

Windows::UI::Composition::Scenes::SceneNode *__fastcall Windows::UI::Composition::Scenes::SceneNode::`scalar deleting destructor'(
        Windows::UI::Composition::Scenes::SceneNode *this,
        char a2)
{
  *((_QWORD *)this + 22) = &DirectComposition::CRebuildableObject::`vftable';
  Windows::UI::Composition::Scenes::SceneNodeGeneratedT<Windows::UI::Composition::Scenes::SceneObject>::~SceneNodeGeneratedT<Windows::UI::Composition::Scenes::SceneObject>(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
