/*
 * XREFs of ?SetColor@ShaderPropertyBlock@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBUColor@Math@Utils@3@@Z @ 0x1800853D8
 * Callers:
 *     ?SetColor@Material@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBUColor@Math@Utils@3@@Z @ 0x180044630 (-SetColor@Material@Engine@Spectre@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D.c)
 *     ?SetGlobalColor@ShaderManager@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UColor@Math@Utils@3@@Z @ 0x180050708 (-SetGlobalColor@ShaderManager@Engine@Spectre@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@@V-$.c)
 *     ?UpdateImageProcessingColorCurveConstants@ViewerEngine@Engine@Spectre@@AEAAXUColor@Math@Utils@3@000AEAV?$shared_ptr@VShaderPropertyBlock@Engine@Spectre@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@8@22@Z @ 0x18006ABE0 (-UpdateImageProcessingColorCurveConstants@ViewerEngine@Engine@Spectre@@AEAAXUColor@Math@Utils@3@.c)
 * Callees:
 *     ?FindPropertyChecked@ShaderPropertyLayout@Engine@Spectre@@QEBA?AW4ShaderProperty@23@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x180082C98 (-FindPropertyChecked@ShaderPropertyLayout@Engine@Spectre@@QEBA-AW4ShaderProperty@23@AEBV-$basic_.c)
 */

__int64 __fastcall Spectre::Engine::ShaderPropertyBlock::SetColor(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned __int16 PropertyChecked; // ax

  PropertyChecked = Spectre::Engine::ShaderPropertyLayout::FindPropertyChecked(*(_QWORD *)(a1 + 16), a2);
  return Spectre::Engine::ShaderPropertyBlock::SetColor(a1, PropertyChecked, a3);
}
