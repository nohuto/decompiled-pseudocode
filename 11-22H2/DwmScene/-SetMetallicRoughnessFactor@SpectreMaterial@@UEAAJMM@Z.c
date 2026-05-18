/*
 * XREFs of ?SetMetallicRoughnessFactor@SpectreMaterial@@UEAAJMM@Z @ 0x1800136E0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetColor@Material@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBUColor@Math@Utils@3@@Z @ 0x180044630 (-SetColor@Material@Engine@Spectre@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D.c)
 */

__int64 __fastcall SpectreMaterial::SetMetallicRoughnessFactor(SpectreMaterial *this, float a2, float a3)
{
  __int64 v3; // rcx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = *((_QWORD *)this + 2);
  try
  {
    Spectre::Engine::Material::SetColor(v3, &Spectre::Engine::ShaderConstants::kMaterial_SpecularColor);
    result = 0LL;
  }
  catch ( ... )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x95,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectrematerial.cpp",
      (const char *)0x80004005LL);
    return 2147500037LL;
  }
  return result;
}
