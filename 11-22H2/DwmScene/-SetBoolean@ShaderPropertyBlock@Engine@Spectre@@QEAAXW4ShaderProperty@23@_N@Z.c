/*
 * XREFs of ?SetBoolean@ShaderPropertyBlock@Engine@Spectre@@QEAAXW4ShaderProperty@23@_N@Z @ 0x1800853A0
 * Callers:
 *     ?SetBoolean@ShaderPropertyBlock@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z @ 0x180085368 (-SetBoolean@ShaderPropertyBlock@Engine@Spectre@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@@V.c)
 * Callees:
 *     ?AccessPropertyValueElements@ShaderPropertyBlock@Engine@Spectre@@AEAAPEATValueElement@ShaderPropertyLayout@23@W4ShaderProperty@23@W4ShaderPropertyType@23@I@Z @ 0x1800846AC (-AccessPropertyValueElements@ShaderPropertyBlock@Engine@Spectre@@AEAAPEATValueElement@ShaderProp.c)
 */

_DWORD *__fastcall Spectre::Engine::ShaderPropertyBlock::SetBoolean(__int64 a1, __int64 a2, char a3)
{
  int v4; // edi
  _DWORD *result; // rax

  v4 = -(a3 != 0);
  result = (_DWORD *)Spectre::Engine::ShaderPropertyBlock::AccessPropertyValueElements(a1, a2, 0LL);
  if ( *result != v4 )
  {
    *result = v4;
    ++*(_DWORD *)(a1 + 80);
  }
  return result;
}
