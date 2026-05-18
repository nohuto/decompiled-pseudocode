/*
 * XREFs of ??0?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ShaderOption@Engine@Spectre@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ShaderOption@Engine@Spectre@@@std@@@2@@std@@QEAA@XZ @ 0x18004E658
 * Callers:
 *     ??0ShaderManager@Engine@Spectre@@QEAA@PEAV112@@Z @ 0x18004E6B8 (--0ShaderManager@Engine@Spectre@@QEAA@PEAV112@@Z.c)
 *     ??0ShaderFamily@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@VShaderManager@Engine@Spectre@@@4@V?$shared_ptr@VIShaderExtension@Engine@Spectre@@@4@@Z @ 0x18005F804 (--0ShaderFamily@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@st.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::map<std::string,enum Spectre::Engine::ShaderOption>::map<std::string,enum Spectre::Engine::ShaderOption>(
        _QWORD *a1)
{
  _QWORD *v2; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v2 = operator new(0x48uLL);
  *v2 = v2;
  v2[1] = v2;
  v2[2] = v2;
  *((_WORD *)v2 + 12) = 257;
  *a1 = v2;
  return a1;
}
