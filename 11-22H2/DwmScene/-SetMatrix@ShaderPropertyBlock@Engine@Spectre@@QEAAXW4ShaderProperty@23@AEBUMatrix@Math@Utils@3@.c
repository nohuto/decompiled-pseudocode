/*
 * XREFs of ?SetMatrix@ShaderPropertyBlock@Engine@Spectre@@QEAAXW4ShaderProperty@23@AEBUMatrix@Math@Utils@3@@Z @ 0x18008551C
 * Callers:
 *     ?SetMatrix@ShaderPropertyBlock@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBUMatrix@Math@Utils@3@@Z @ 0x1800854E4 (-SetMatrix@ShaderPropertyBlock@Engine@Spectre@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@@V-.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __fastcall Spectre::Engine::ShaderPropertyBlock::SetMatrix(__int64 a1, __int64 a2, _OWORD *a3)
{
  return Spectre::Engine::ShaderPropertyBlock::SetProperty<Spectre::Utils::Math::Matrix>(a1, a2, a3);
}
