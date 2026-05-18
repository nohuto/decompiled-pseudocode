/*
 * XREFs of ?GetSerializableUVSelectorPropertyName@BaseShaderExtension@Engine@Spectre@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Layer@MaterialMaker@Framework@3@@Z @ 0x18009A880
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@AEBV01@@Z @ 0x180017648 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@AEBV01@@Z.c)
 */

_QWORD *__fastcall Spectre::Engine::BaseShaderExtension::GetSerializableUVSelectorPropertyName(
        __int64 a1,
        _QWORD *a2,
        char a3)
{
  void *v4; // rdx

  switch ( a3 )
  {
    case 0:
      v4 = &Spectre::Engine::ShaderConstants::kMaterial_TexDiffuseUseUV1;
      goto LABEL_12;
    case 1:
      v4 = &Spectre::Engine::ShaderConstants::kMaterial_TexEmissiveUseUV1;
      goto LABEL_12;
    case 2:
      v4 = &Spectre::Engine::ShaderConstants::kMaterial_TexSpecularUseUV1;
      goto LABEL_12;
    case 3:
      v4 = &Spectre::Engine::ShaderConstants::kMaterial_TexNormalUseUV1;
      goto LABEL_12;
    case 5:
      v4 = &Spectre::Engine::ShaderConstants::kMaterial_TexOcclusionUseUV1;
LABEL_12:
      std::string::string(a2, (__int64)v4);
      return a2;
  }
  *a2 = 0LL;
  a2[2] = 0LL;
  a2[3] = 15LL;
  *(_BYTE *)a2 = 0;
  return a2;
}
