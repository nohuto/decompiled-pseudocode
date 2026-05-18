/*
 * XREFs of ??0UnlitShaderExtension@Engine@Spectre@@QEAA@XZ @ 0x18007FA68
 * Callers:
 *     ??$make_shared@VUnlitShaderExtension@Engine@Spectre@@$$V@std@@YA?AV?$shared_ptr@VUnlitShaderExtension@Engine@Spectre@@@0@XZ @ 0x1800307E0 (--$make_shared@VUnlitShaderExtension@Engine@Spectre@@$$V@std@@YA-AV-$shared_ptr@VUnlitShaderExte.c)
 * Callees:
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@AEBV01@@Z @ 0x180017648 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??0BaseShaderExtension@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x180098884 (--0BaseShaderExtension@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@.c)
 */

Spectre::Engine::UnlitShaderExtension *__fastcall Spectre::Engine::UnlitShaderExtension::UnlitShaderExtension(
        Spectre::Engine::UnlitShaderExtension *this)
{
  _QWORD *v2; // rax
  _QWORD v4[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = std::string::string(v4, (__int64)&Spectre::Engine::UnlitShaderExtension::kShaderFamilyName);
  Spectre::Engine::BaseShaderExtension::BaseShaderExtension(this, v2);
  *(_QWORD *)this = &Spectre::Engine::UnlitShaderExtension::`vftable';
  return this;
}
