/*
 * XREFs of ?SetBaseColorFactor@SpectreMaterial@@UEAAJAEBUD2D_VECTOR_4F@@@Z @ 0x180013600
 * Callers:
 *     <none>
 * Callees:
 *     ?SetColor@Material@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBUColor@Math@Utils@3@@Z @ 0x180044630 (-SetColor@Material@Engine@Spectre@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D.c)
 */

__int64 __fastcall SpectreMaterial::SetBaseColorFactor(SpectreMaterial *this, const struct D2D_VECTOR_4F *a2)
{
  __int64 v2; // rcx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = *((_QWORD *)this + 2);
  try
  {
    Spectre::Engine::Material::SetColor(v2, &Spectre::Engine::ShaderConstants::kMaterial_DiffuseColor);
    result = 0LL;
  }
  catch ( ... )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5D,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectrematerial.cpp",
      (const char *)0x80004005LL);
    return 2147500037LL;
  }
  return result;
}
