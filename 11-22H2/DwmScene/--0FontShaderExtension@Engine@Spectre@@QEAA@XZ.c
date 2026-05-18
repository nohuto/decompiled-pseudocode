/*
 * XREFs of ??0FontShaderExtension@Engine@Spectre@@QEAA@XZ @ 0x18007F6FC
 * Callers:
 *     ??$make_shared@VFontShaderExtension@Engine@Spectre@@$$V@std@@YA?AV?$shared_ptr@VFontShaderExtension@Engine@Spectre@@@0@XZ @ 0x1800302E8 (--$make_shared@VFontShaderExtension@Engine@Spectre@@$$V@std@@YA-AV-$shared_ptr@VFontShaderExtens.c)
 * Callees:
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@AEBV01@@Z @ 0x180017648 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??0IShaderExtension@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x18005F76C (--0IShaderExtension@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2.c)
 */

Spectre::Engine::FontShaderExtension *__fastcall Spectre::Engine::FontShaderExtension::FontShaderExtension(
        Spectre::Engine::FontShaderExtension *this)
{
  _QWORD *v2; // rax
  _QWORD v4[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = std::string::string(v4, (__int64)&Spectre::Engine::FontShaderExtension::kShaderFamilyName);
  Spectre::Engine::IShaderExtension::IShaderExtension((__int64)this, (__int64)v2);
  *(_QWORD *)this = &Spectre::Engine::FontShaderExtension::`vftable';
  return this;
}
