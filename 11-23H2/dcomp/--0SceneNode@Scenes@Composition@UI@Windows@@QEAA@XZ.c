/*
 * XREFs of ??0SceneNode@Scenes@Composition@UI@Windows@@QEAA@XZ @ 0x18014131C
 * Callers:
 *     ??$MakeAndInitialize2@VSceneNode@Scenes@Composition@UI@Windows@@V12345@PEAVCompositor@345@@Details@WRL2@Microsoft@@YAJPEAPEAVSceneNode@Scenes@Composition@UI@Windows@@$$QEAPEAVCompositor@567@@Z @ 0x180140438 (--$MakeAndInitialize2@VSceneNode@Scenes@Composition@UI@Windows@@V12345@PEAVCompositor@345@@Detai.c)
 * Callees:
 *     ??0SceneObject@Scenes@Composition@UI@Windows@@QEAA@XZ @ 0x180122D34 (--0SceneObject@Scenes@Composition@UI@Windows@@QEAA@XZ.c)
 */

Windows::UI::Composition::Scenes::SceneNode *__fastcall Windows::UI::Composition::Scenes::SceneNode::SceneNode(
        Windows::UI::Composition::Scenes::SceneNode *this)
{
  Windows::UI::Composition::Scenes::SceneObject::SceneObject(this);
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_BYTE *)this + 192) &= 0xFCu;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *(_QWORD *)this = &Windows::UI::Composition::Scenes::SceneNode::`vftable'{for `Windows::UI::Composition::Scenes::SceneNodeGeneratedT<Windows::UI::Composition::Scenes::SceneObject>'};
  *((_QWORD *)this + 22) = &Windows::UI::Composition::Scenes::SceneNode::`vftable'{for `DirectComposition::CRebuildableObject'};
  *((_QWORD *)this + 26) = &Windows::UI::Composition::Scenes::SceneNode::Api::`vftable';
  return this;
}
