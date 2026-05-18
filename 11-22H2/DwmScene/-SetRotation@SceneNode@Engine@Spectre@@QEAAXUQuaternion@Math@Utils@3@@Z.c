/*
 * XREFs of ?SetRotation@SceneNode@Engine@Spectre@@QEAAXUQuaternion@Math@Utils@3@@Z @ 0x18003D868
 * Callers:
 *     ?SetTransform@SceneNode@Engine@Spectre@@QEAAXUVector3@Math@Utils@3@UQuaternion@563@0@Z @ 0x18003D900 (-SetTransform@SceneNode@Engine@Spectre@@QEAAXUVector3@Math@Utils@3@UQuaternion@563@0@Z.c)
 *     ?SetWorldRotation@SceneNode@Engine@Spectre@@QEAAXUQuaternion@Math@Utils@3@@Z @ 0x18003DBA8 (-SetWorldRotation@SceneNode@Engine@Spectre@@QEAAXUQuaternion@Math@Utils@3@@Z.c)
 *     ?UpdateCameraFromConfiguration@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@AEBV?$unordered_set@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$hash@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@U?$equal_to@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@5@@Z @ 0x180068DE8 (-UpdateCameraFromConfiguration@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VScene@Engine@.c)
 *     ?UpdateModelFromConfiguration@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@_N@Z @ 0x18006BA5C (-UpdateModelFromConfiguration@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VScene@Engine@S.c)
 * Callees:
 *     ?VerifyWriteAccess@SceneNode@Engine@Spectre@@QEBAXXZ @ 0x18003E2F0 (-VerifyWriteAccess@SceneNode@Engine@Spectre@@QEBAXXZ.c)
 */

void __fastcall Spectre::Engine::SceneNode::SetRotation(Spectre::Engine::SceneNode *a1, _DWORD *a2)
{
  Spectre::Engine::SceneNode::VerifyWriteAccess(a1);
  *((_DWORD *)a1 + 39) = *a2;
  *((_DWORD *)a1 + 40) = a2[1];
  *((_DWORD *)a1 + 41) = a2[2];
  *((_DWORD *)a1 + 42) = a2[3];
  Spectre::Engine::SceneNode::NotifyTransformChanged(a1);
}
