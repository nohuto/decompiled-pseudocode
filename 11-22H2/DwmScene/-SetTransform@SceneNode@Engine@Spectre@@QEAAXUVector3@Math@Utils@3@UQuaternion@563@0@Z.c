/*
 * XREFs of ?SetTransform@SceneNode@Engine@Spectre@@QEAAXUVector3@Math@Utils@3@UQuaternion@563@0@Z @ 0x18003D900
 * Callers:
 *     ?Clone@SceneNode@Engine@Spectre@@QEAA?AV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@IV45@@Z @ 0x18003B950 (-Clone@SceneNode@Engine@Spectre@@QEAA-AV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@IV45@@Z.c)
 *     ?SetTransformMatrix@SceneNode@Engine@Spectre@@QEAA_NAEBUMatrix@Math@Utils@3@@Z @ 0x18003D994 (-SetTransformMatrix@SceneNode@Engine@Spectre@@QEAA_NAEBUMatrix@Math@Utils@3@@Z.c)
 * Callees:
 *     ?SetPosition@SceneNode@Engine@Spectre@@QEAAXUVector3@Math@Utils@3@@Z @ 0x180012ED8 (-SetPosition@SceneNode@Engine@Spectre@@QEAAXUVector3@Math@Utils@3@@Z.c)
 *     ?SetRotation@SceneNode@Engine@Spectre@@QEAAXUQuaternion@Math@Utils@3@@Z @ 0x18003D868 (-SetRotation@SceneNode@Engine@Spectre@@QEAAXUQuaternion@Math@Utils@3@@Z.c)
 *     ?SetScale@SceneNode@Engine@Spectre@@QEAAXUVector3@Math@Utils@3@@Z @ 0x18003D8B8 (-SetScale@SceneNode@Engine@Spectre@@QEAAXUVector3@Math@Utils@3@@Z.c)
 *     ?VerifyWriteAccess@SceneNode@Engine@Spectre@@QEBAXXZ @ 0x18003E2F0 (-VerifyWriteAccess@SceneNode@Engine@Spectre@@QEBAXXZ.c)
 */

void __fastcall Spectre::Engine::SceneNode::SetTransform(
        Spectre::Engine::SceneNode *a1,
        __int64 a2,
        __int128 *a3,
        __int64 a4)
{
  int v8; // eax
  int v9; // eax
  __int128 v10; // [rsp+20h] [rbp-18h] BYREF

  Spectre::Engine::SceneNode::VerifyWriteAccess(a1);
  v8 = *(_DWORD *)(a2 + 8);
  *(_QWORD *)&v10 = *(_QWORD *)a2;
  DWORD2(v10) = v8;
  Spectre::Engine::SceneNode::SetPosition(a1, &v10);
  v10 = *a3;
  Spectre::Engine::SceneNode::SetRotation(a1, &v10);
  v9 = *(_DWORD *)(a4 + 8);
  *(_QWORD *)&v10 = *(_QWORD *)a4;
  DWORD2(v10) = v9;
  Spectre::Engine::SceneNode::SetScale(a1, &v10);
}
