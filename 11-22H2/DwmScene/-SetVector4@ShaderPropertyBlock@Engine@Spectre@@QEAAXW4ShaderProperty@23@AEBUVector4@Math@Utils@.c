/*
 * XREFs of ?SetVector4@ShaderPropertyBlock@Engine@Spectre@@QEAAXW4ShaderProperty@23@AEBUVector4@Math@Utils@3@@Z @ 0x180085A1C
 * Callers:
 *     ?SetVector4@ShaderPropertyBlock@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBUVector4@Math@Utils@3@@Z @ 0x1800859E4 (-SetVector4@ShaderPropertyBlock@Engine@Spectre@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@@V.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
_QWORD *__fastcall Spectre::Engine::ShaderPropertyBlock::SetVector4(__int64 a1, __int64 a2, _QWORD *a3)
{
  return Spectre::Engine::ShaderPropertyBlock::SetProperty<Spectre::Utils::Math::Vector4>(a1, a2, a3);
}
