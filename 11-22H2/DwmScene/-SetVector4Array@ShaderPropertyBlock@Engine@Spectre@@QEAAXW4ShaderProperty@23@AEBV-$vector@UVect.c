/*
 * XREFs of ?SetVector4Array@ShaderPropertyBlock@Engine@Spectre@@QEAAXW4ShaderProperty@23@AEBV?$vector@UVector4@Math@Utils@Spectre@@V?$allocator@UVector4@Math@Utils@Spectre@@@std@@@std@@@Z @ 0x180085A60
 * Callers:
 *     ?SetVector4Array@ShaderPropertyBlock@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@UVector4@Math@Utils@Spectre@@V?$allocator@UVector4@Math@Utils@Spectre@@@std@@@5@@Z @ 0x180085A28 (-SetVector4Array@ShaderPropertyBlock@Engine@Spectre@@QEAAXAEBV-$basic_string@DU-$char_traits@D@s.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Spectre::Engine::ShaderPropertyBlock::SetVector4Array(__int64 a1, __int64 a2, _QWORD *a3)
{
  return Spectre::Engine::ShaderPropertyBlock::SetVector4Array(a1, a2, *a3, (__int64)(a3[1] - *a3) >> 4);
}
