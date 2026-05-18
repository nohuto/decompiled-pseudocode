/*
 * XREFs of ?SetInteger@ShaderPropertyBlock@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z @ 0x180085474
 * Callers:
 *     ?SetInteger@Material@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z @ 0x180044640 (-SetInteger@Material@Engine@Spectre@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator.c)
 *     ?UpdateDebugConstants@ViewerEngine@Engine@Spectre@@AEAAXAEAVIRenderOutput@23@H@Z @ 0x180069CB0 (-UpdateDebugConstants@ViewerEngine@Engine@Spectre@@AEAAXAEAVIRenderOutput@23@H@Z.c)
 * Callees:
 *     ?FindPropertyChecked@ShaderPropertyLayout@Engine@Spectre@@QEBA?AW4ShaderProperty@23@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x180082C98 (-FindPropertyChecked@ShaderPropertyLayout@Engine@Spectre@@QEBA-AW4ShaderProperty@23@AEBV-$basic_.c)
 */

__int64 __fastcall Spectre::Engine::ShaderPropertyBlock::SetInteger(__int64 a1, _QWORD *a2, unsigned int a3)
{
  unsigned __int16 PropertyChecked; // ax

  PropertyChecked = Spectre::Engine::ShaderPropertyLayout::FindPropertyChecked(*(_QWORD *)(a1 + 16), a2);
  return Spectre::Engine::ShaderPropertyBlock::SetInteger(a1, PropertyChecked, a3);
}
