/*
 * XREFs of ?SetScale@SceneNode@Engine@Spectre@@QEAAXUVector3@Math@Utils@3@@Z @ 0x18003D8B8
 * Callers:
 *     ?SetTransform@SceneNode@Engine@Spectre@@QEAAXUVector3@Math@Utils@3@UQuaternion@563@0@Z @ 0x18003D900 (-SetTransform@SceneNode@Engine@Spectre@@QEAAXUVector3@Math@Utils@3@UQuaternion@563@0@Z.c)
 *     ?UpdateModelFromConfiguration@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@_N@Z @ 0x18006BA5C (-UpdateModelFromConfiguration@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VScene@Engine@S.c)
 * Callees:
 *     ?VerifyWriteAccess@SceneNode@Engine@Spectre@@QEBAXXZ @ 0x18003E2F0 (-VerifyWriteAccess@SceneNode@Engine@Spectre@@QEBAXXZ.c)
 */

void __fastcall Spectre::Engine::SceneNode::SetScale(Spectre::Engine::SceneNode *a1, _DWORD *a2)
{
  Spectre::Engine::SceneNode::VerifyWriteAccess(a1);
  *((_DWORD *)a1 + 43) = *a2;
  *((_DWORD *)a1 + 44) = a2[1];
  *((_DWORD *)a1 + 45) = a2[2];
  Spectre::Engine::SceneNode::NotifyTransformChanged(a1);
}
