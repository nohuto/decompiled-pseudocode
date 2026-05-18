/*
 * XREFs of ?SetNormalScale@SpectreMaterial@@UEAAJM@Z @ 0x180013730
 * Callers:
 *     <none>
 * Callees:
 *     ?SetVector4@Material@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBUVector4@Math@Utils@3@@Z @ 0x180044A9C (-SetVector4@Material@Engine@Spectre@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator.c)
 */

__int64 __fastcall SpectreMaterial::SetNormalScale(SpectreMaterial *this, float a2)
{
  __int64 v2; // rcx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = *((_QWORD *)this + 2);
  try
  {
    Spectre::Engine::Material::SetVector4(v2, &Spectre::Engine::ShaderConstants::kMaterial_NormalScale);
    result = 0LL;
  }
  catch ( ... )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA5,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectrematerial.cpp",
      (const char *)0x80004005LL);
    return 2147500037LL;
  }
  return result;
}
