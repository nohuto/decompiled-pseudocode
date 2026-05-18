/*
 * XREFs of ?SetMatrix@ShaderPropertyBlock@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBUMatrix@Math@Utils@3@@Z @ 0x1800854E4
 * Callers:
 *     ?SetGlobalMatrix@ShaderManager@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UMatrix@Math@Utils@3@@Z @ 0x18005072C (-SetGlobalMatrix@ShaderManager@Engine@Spectre@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@@V-.c)
 *     ?OnMeshRender@BackgroundUnlitShaderExtension@Engine@Spectre@@UEAAXPEBVMeshInstance@23@_K@Z @ 0x180080EF0 (-OnMeshRender@BackgroundUnlitShaderExtension@Engine@Spectre@@UEAAXPEBVMeshInstance@23@_K@Z.c)
 *     ?OnMeshRender@BaseShaderExtension@Engine@Spectre@@UEAAXPEBVMeshInstance@23@_K@Z @ 0x18009B340 (-OnMeshRender@BaseShaderExtension@Engine@Spectre@@UEAAXPEBVMeshInstance@23@_K@Z.c)
 * Callees:
 *     ?FindPropertyChecked@ShaderPropertyLayout@Engine@Spectre@@QEBA?AW4ShaderProperty@23@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x180082C98 (-FindPropertyChecked@ShaderPropertyLayout@Engine@Spectre@@QEBA-AW4ShaderProperty@23@AEBV-$basic_.c)
 */

__int64 __fastcall Spectre::Engine::ShaderPropertyBlock::SetMatrix(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned __int16 PropertyChecked; // ax

  PropertyChecked = Spectre::Engine::ShaderPropertyLayout::FindPropertyChecked(*(_QWORD *)(a1 + 16), a2);
  return Spectre::Engine::ShaderPropertyBlock::SetMatrix(a1, PropertyChecked, a3);
}
