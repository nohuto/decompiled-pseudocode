/*
 * XREFs of ?RuntimeClassInitialize@SceneComponentCollection@Scenes@Composition@UI@Windows@@QEAAJPEAVCompositor@345@PEAVSceneNode@2345@@Z @ 0x180192958
 * Callers:
 *     ??$MakeAndInitialize2@VSceneComponentCollection@Scenes@Composition@UI@Windows@@V12345@AEAPEAVCompositor@345@PEAVSceneNode@2345@@Details@WRL2@Microsoft@@YAJPEAPEAVSceneComponentCollection@Scenes@Composition@UI@Windows@@AEAPEAVCompositor@567@$$QEAPEAVSceneNode@4567@@Z @ 0x180140294 (--$MakeAndInitialize2@VSceneComponentCollection@Scenes@Composition@UI@Windows@@V12345@AEAPEAVCom.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@CompositionObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z @ 0x180055F60 (-RuntimeClassInitialize@CompositionObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::Scenes::SceneComponentCollection::RuntimeClassInitialize(
        Windows::UI::Composition::Scenes::SceneComponentCollection *this,
        struct Windows::UI::Composition::Compositor *a2,
        struct Windows::UI::Composition::Scenes::SceneNode *a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = Windows::UI::Composition::CompositionObject::RuntimeClassInitialize(this, a2);
  v6 = v5;
  if ( v5 >= 0 )
  {
    *((_QWORD *)this + 25) = a3;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x35,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtspatialcomponentcollection.cpp",
      (const char *)(unsigned int)v5);
    return v6;
  }
}
