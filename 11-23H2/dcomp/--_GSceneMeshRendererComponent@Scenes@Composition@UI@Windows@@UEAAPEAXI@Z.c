/*
 * XREFs of ??_GSceneMeshRendererComponent@Scenes@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x1801334E0
 * Callers:
 *     ??_ESceneMeshRendererComponent@Scenes@Composition@UI@Windows@@WLI@EAAPEAXI@Z @ 0x1800AF320 (--_ESceneMeshRendererComponent@Scenes@Composition@UI@Windows@@WLI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1SceneMeshRendererComponent@Scenes@Composition@UI@Windows@@UEAA@XZ @ 0x1801333D0 (--1SceneMeshRendererComponent@Scenes@Composition@UI@Windows@@UEAA@XZ.c)
 */

Windows::UI::Composition::Scenes::SceneMeshRendererComponent *__fastcall Windows::UI::Composition::Scenes::SceneMeshRendererComponent::`scalar deleting destructor'(
        Windows::UI::Composition::Scenes::SceneMeshRendererComponent *this,
        char a2)
{
  Windows::UI::Composition::Scenes::SceneMeshRendererComponent::~SceneMeshRendererComponent(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
