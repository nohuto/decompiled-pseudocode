/*
 * XREFs of ?SetBoolean@ShaderPropertyBlock@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z @ 0x180085368
 * Callers:
 *     ?SetBoolean@Material@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z @ 0x180044620 (-SetBoolean@Material@Engine@Spectre@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator.c)
 *     ?UpdateDebugConstants@ViewerEngine@Engine@Spectre@@AEAAXAEAVIRenderOutput@23@H@Z @ 0x180069CB0 (-UpdateDebugConstants@ViewerEngine@Engine@Spectre@@AEAAXAEAVIRenderOutput@23@H@Z.c)
 * Callees:
 *     ?FindPropertyChecked@ShaderPropertyLayout@Engine@Spectre@@QEBA?AW4ShaderProperty@23@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x180082C98 (-FindPropertyChecked@ShaderPropertyLayout@Engine@Spectre@@QEBA-AW4ShaderProperty@23@AEBV-$basic_.c)
 */

__int64 __fastcall Spectre::Engine::ShaderPropertyBlock::SetBoolean(__int64 a1, _QWORD *a2, char a3)
{
  unsigned __int16 PropertyChecked; // ax
  __int64 v6; // r8

  PropertyChecked = Spectre::Engine::ShaderPropertyLayout::FindPropertyChecked(*(_QWORD *)(a1 + 16), a2);
  LOBYTE(v6) = a3;
  return Spectre::Engine::ShaderPropertyBlock::SetBoolean(a1, PropertyChecked, v6);
}
