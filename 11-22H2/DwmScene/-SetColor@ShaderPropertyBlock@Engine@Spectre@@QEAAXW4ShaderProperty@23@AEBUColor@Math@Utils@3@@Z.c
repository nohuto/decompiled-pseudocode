/*
 * XREFs of ?SetColor@ShaderPropertyBlock@Engine@Spectre@@QEAAXW4ShaderProperty@23@AEBUColor@Math@Utils@3@@Z @ 0x180085410
 * Callers:
 *     ?SetColor@ShaderPropertyBlock@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBUColor@Math@Utils@3@@Z @ 0x1800853D8 (-SetColor@ShaderPropertyBlock@Engine@Spectre@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@@V-$.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
_QWORD *__fastcall Spectre::Engine::ShaderPropertyBlock::SetColor(__int64 a1, __int64 a2, _QWORD *a3)
{
  return Spectre::Engine::ShaderPropertyBlock::SetProperty<Spectre::Utils::Math::Color>(a1, a2, a3);
}
