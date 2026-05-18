/*
 * XREFs of ?SetAlphaCutoff@SpectreMaterial@@UEAAJM@Z @ 0x180013580
 * Callers:
 *     <none>
 * Callees:
 *     ?SetScalar@Material@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@M@Z @ 0x180044878 (-SetScalar@Material@Engine@Spectre@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@.c)
 */

__int64 __fastcall SpectreMaterial::SetAlphaCutoff(SpectreMaterial *this, float a2)
{
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  try
  {
    Spectre::Engine::Material::SetScalar();
    result = 0LL;
  }
  catch ( ... )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2C,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectrematerial.cpp",
      (const char *)0x80004005LL);
    return 2147500037LL;
  }
  return result;
}
