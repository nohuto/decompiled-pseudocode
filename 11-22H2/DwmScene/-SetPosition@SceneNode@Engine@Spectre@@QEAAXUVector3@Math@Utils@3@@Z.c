/*
 * XREFs of ?SetPosition@SceneNode@Engine@Spectre@@QEAAXUVector3@Math@Utils@3@@Z @ 0x180012ED8
 * Callers:
 *     ?SetTransform@SpectreLightNode@@UEAAJPEBUD2D_VECTOR_3F@@0@Z @ 0x180012F60 (-SetTransform@SpectreLightNode@@UEAAJPEBUD2D_VECTOR_3F@@0@Z.c)
 *     ?SetTransform@SceneNode@Engine@Spectre@@QEAAXUVector3@Math@Utils@3@UQuaternion@563@0@Z @ 0x18003D900 (-SetTransform@SceneNode@Engine@Spectre@@QEAAXUVector3@Math@Utils@3@UQuaternion@563@0@Z.c)
 *     ?SetWorldPosition@SceneNode@Engine@Spectre@@QEAAXUVector3@Math@Utils@3@@Z @ 0x18003DA80 (-SetWorldPosition@SceneNode@Engine@Spectre@@QEAAXUVector3@Math@Utils@3@@Z.c)
 *     ?CreateStandardLights@ViewerEngine@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x180065C40 (-CreateStandardLights@ViewerEngine@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VScene@Engine@Spectre@@.c)
 *     ?UpdateCameraFromConfiguration@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@AEBV?$unordered_set@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$hash@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@U?$equal_to@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@5@@Z @ 0x180068DE8 (-UpdateCameraFromConfiguration@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VScene@Engine@.c)
 *     ?UpdateModelFromConfiguration@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@_N@Z @ 0x18006BA5C (-UpdateModelFromConfiguration@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VScene@Engine@S.c)
 *     ?Reset@Aimer@Engine@Spectre@@UEAAXXZ @ 0x180096A00 (-Reset@Aimer@Engine@Spectre@@UEAAXXZ.c)
 *     ?Update@Aimer@Engine@Spectre@@UEAAXAEBVFrameData@23@@Z @ 0x180096B80 (-Update@Aimer@Engine@Spectre@@UEAAXAEBVFrameData@23@@Z.c)
 * Callees:
 *     ?VerifyWriteAccess@SceneNode@Engine@Spectre@@QEBAXXZ @ 0x18003E2F0 (-VerifyWriteAccess@SceneNode@Engine@Spectre@@QEBAXXZ.c)
 */

void __fastcall Spectre::Engine::SceneNode::SetPosition(Spectre::Engine::SceneNode *a1, _DWORD *a2)
{
  Spectre::Engine::SceneNode::VerifyWriteAccess(a1);
  *((_DWORD *)a1 + 36) = *a2;
  *((_DWORD *)a1 + 37) = a2[1];
  *((_DWORD *)a1 + 38) = a2[2];
  Spectre::Engine::SceneNode::NotifyTransformChanged(a1);
}
