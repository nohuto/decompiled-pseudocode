/*
 * XREFs of ??$SetProperty@UMatrix@Math@Utils@Spectre@@@ShaderPropertyBlock@Engine@Spectre@@AEAAXW4ShaderProperty@12@AEBUMatrix@Math@Utils@2@@Z @ 0x180083DFC
 * Callers:
 *     ?SetMatrix@ShaderPropertyBlock@Engine@Spectre@@QEAAXW4ShaderProperty@23@AEBUMatrix@Math@Utils@3@@Z @ 0x18008551C (-SetMatrix@ShaderPropertyBlock@Engine@Spectre@@QEAAXW4ShaderProperty@23@AEBUMatrix@Math@Utils@3@.c)
 * Callees:
 *     memcmp_0 @ 0x18000CA6D (memcmp_0.c)
 *     ?AccessPropertyValueElements@ShaderPropertyBlock@Engine@Spectre@@AEAAPEATValueElement@ShaderPropertyLayout@23@W4ShaderProperty@23@W4ShaderPropertyType@23@I@Z @ 0x1800846AC (-AccessPropertyValueElements@ShaderPropertyBlock@Engine@Spectre@@AEAAPEATValueElement@ShaderProp.c)
 */

int __fastcall Spectre::Engine::ShaderPropertyBlock::SetProperty<Spectre::Utils::Math::Matrix>(
        __int64 a1,
        __int64 a2,
        _OWORD *a3)
{
  _OWORD *v5; // rdi
  int result; // eax

  v5 = (_OWORD *)Spectre::Engine::ShaderPropertyBlock::AccessPropertyValueElements(a1, a2, 7LL);
  result = memcmp_0(v5, a3, 0x40uLL);
  if ( result )
  {
    *v5 = *a3;
    v5[1] = a3[1];
    v5[2] = a3[2];
    v5[3] = a3[3];
    ++*(_DWORD *)(a1 + 80);
  }
  return result;
}
