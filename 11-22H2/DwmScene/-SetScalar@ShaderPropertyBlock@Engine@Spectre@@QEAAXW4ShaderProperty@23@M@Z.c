/*
 * XREFs of ?SetScalar@ShaderPropertyBlock@Engine@Spectre@@QEAAXW4ShaderProperty@23@M@Z @ 0x1800855C0
 * Callers:
 *     ?SetScalar@ShaderPropertyBlock@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@M@Z @ 0x180085588 (-SetScalar@ShaderPropertyBlock@Engine@Spectre@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@@V-.c)
 * Callees:
 *     ?AccessPropertyValueElements@ShaderPropertyBlock@Engine@Spectre@@AEAAPEATValueElement@ShaderPropertyLayout@23@W4ShaderProperty@23@W4ShaderPropertyType@23@I@Z @ 0x1800846AC (-AccessPropertyValueElements@ShaderPropertyBlock@Engine@Spectre@@AEAAPEATValueElement@ShaderProp.c)
 */

float *__fastcall Spectre::Engine::ShaderPropertyBlock::SetScalar(__int64 a1, __int64 a2, float a3)
{
  float *result; // rax

  result = (float *)Spectre::Engine::ShaderPropertyBlock::AccessPropertyValueElements(a1, a2, 2LL);
  if ( *result != a3 )
  {
    *result = a3;
    ++*(_DWORD *)(a1 + 80);
  }
  return result;
}
