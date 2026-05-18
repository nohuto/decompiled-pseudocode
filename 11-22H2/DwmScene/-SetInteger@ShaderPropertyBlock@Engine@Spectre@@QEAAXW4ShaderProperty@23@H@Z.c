/*
 * XREFs of ?SetInteger@ShaderPropertyBlock@Engine@Spectre@@QEAAXW4ShaderProperty@23@H@Z @ 0x1800854AC
 * Callers:
 *     ?SetInteger@ShaderPropertyBlock@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z @ 0x180085474 (-SetInteger@ShaderPropertyBlock@Engine@Spectre@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@@V.c)
 * Callees:
 *     ?AccessPropertyValueElements@ShaderPropertyBlock@Engine@Spectre@@AEAAPEATValueElement@ShaderPropertyLayout@23@W4ShaderProperty@23@W4ShaderPropertyType@23@I@Z @ 0x1800846AC (-AccessPropertyValueElements@ShaderPropertyBlock@Engine@Spectre@@AEAAPEATValueElement@ShaderProp.c)
 */

_DWORD *__fastcall Spectre::Engine::ShaderPropertyBlock::SetInteger(__int64 a1, __int64 a2, int a3)
{
  _DWORD *result; // rax

  result = (_DWORD *)Spectre::Engine::ShaderPropertyBlock::AccessPropertyValueElements(a1, a2, 1LL);
  if ( *result != a3 )
  {
    *result = a3;
    ++*(_DWORD *)(a1 + 80);
  }
  return result;
}
