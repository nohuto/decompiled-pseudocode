/*
 * XREFs of ?NotifyTransformChanged@SceneNode@Engine@Spectre@@AEAAXXZ @ 0x180012728
 * Callers:
 *     ?SetPosition@SceneNode@Engine@Spectre@@QEAAXUVector3@Math@Utils@3@@Z @ 0x180012ED8 (-SetPosition@SceneNode@Engine@Spectre@@QEAAXUVector3@Math@Utils@3@@Z.c)
 *     ??0SceneNode@Engine@Spectre@@AEAA@V?$shared_ptr@VScene@Engine@Spectre@@@std@@_K@Z @ 0x18003B028 (--0SceneNode@Engine@Spectre@@AEAA@V-$shared_ptr@VScene@Engine@Spectre@@@std@@_K@Z.c)
 *     ?SetParent@SceneNode@Engine@Spectre@@AEAAXV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x18003D484 (-SetParent@SceneNode@Engine@Spectre@@AEAAXV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z.c)
 *     ?SetRotation@SceneNode@Engine@Spectre@@QEAAXUQuaternion@Math@Utils@3@@Z @ 0x18003D868 (-SetRotation@SceneNode@Engine@Spectre@@QEAAXUQuaternion@Math@Utils@3@@Z.c)
 *     ?SetScale@SceneNode@Engine@Spectre@@QEAAXUVector3@Math@Utils@3@@Z @ 0x18003D8B8 (-SetScale@SceneNode@Engine@Spectre@@QEAAXUVector3@Math@Utils@3@@Z.c)
 * Callees:
 *     ??E?$_Atomic_integral@_K$07@std@@QEAA_KXZ @ 0x180012548 (--E-$_Atomic_integral@_K$07@std@@QEAA_KXZ.c)
 */

void __fastcall Spectre::Engine::SceneNode::NotifyTransformChanged(Spectre::Engine::SceneNode *this)
{
  unsigned __int64 v1; // rax
  __int64 v2; // r8
  unsigned __int64 v3; // rdx

  v1 = std::_Atomic_integral<unsigned __int64,8>::operator++((__int64)&Spectre::Engine::SceneNode::s_sharedTransformUpdateID);
  *(_QWORD *)(v2 + 208) = v1;
  v3 = *(_QWORD *)(v2 + 216);
  if ( v1 >= v3 )
    v3 = v1;
  *(_QWORD *)(v2 + 216) = v3;
}
