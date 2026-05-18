/*
 * XREFs of ??$SetProperty@UVector4@Math@Utils@Spectre@@@ShaderPropertyBlock@Engine@Spectre@@AEAAXW4ShaderProperty@12@AEBUVector4@Math@Utils@2@@Z @ 0x180083E6C
 * Callers:
 *     ?SetVector4@ShaderPropertyBlock@Engine@Spectre@@QEAAXW4ShaderProperty@23@AEBUVector4@Math@Utils@3@@Z @ 0x180085A1C (-SetVector4@ShaderPropertyBlock@Engine@Spectre@@QEAAXW4ShaderProperty@23@AEBUVector4@Math@Utils@.c)
 * Callees:
 *     ?AccessPropertyValueElements@ShaderPropertyBlock@Engine@Spectre@@AEAAPEATValueElement@ShaderPropertyLayout@23@W4ShaderProperty@23@W4ShaderPropertyType@23@I@Z @ 0x1800846AC (-AccessPropertyValueElements@ShaderPropertyBlock@Engine@Spectre@@AEAAPEATValueElement@ShaderProp.c)
 */

_QWORD *__fastcall Spectre::Engine::ShaderPropertyBlock::SetProperty<Spectre::Utils::Math::Vector4>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  _QWORD *result; // rax
  __int64 v6; // rdx

  result = (_QWORD *)Spectre::Engine::ShaderPropertyBlock::AccessPropertyValueElements(a1, a2, 5LL);
  v6 = *result - *a3;
  if ( *result == *a3 )
    v6 = result[1] - a3[1];
  if ( v6 )
  {
    *(_OWORD *)result = *(_OWORD *)a3;
    ++*(_DWORD *)(a1 + 80);
  }
  return result;
}
