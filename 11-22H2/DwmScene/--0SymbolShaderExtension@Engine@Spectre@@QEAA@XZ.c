/*
 * XREFs of ??0SymbolShaderExtension@Engine@Spectre@@QEAA@XZ @ 0x18007F308
 * Callers:
 *     ??$make_shared@VSymbolShaderExtension@Engine@Spectre@@$$V@std@@YA?AV?$shared_ptr@VSymbolShaderExtension@Engine@Spectre@@@0@XZ @ 0x180030714 (--$make_shared@VSymbolShaderExtension@Engine@Spectre@@$$V@std@@YA-AV-$shared_ptr@VSymbolShaderEx.c)
 * Callees:
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@AEBV01@@Z @ 0x180017648 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??0IShaderExtension@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x18005F76C (--0IShaderExtension@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2.c)
 */

Spectre::Engine::SymbolShaderExtension *__fastcall Spectre::Engine::SymbolShaderExtension::SymbolShaderExtension(
        Spectre::Engine::SymbolShaderExtension *this)
{
  _QWORD *v2; // rax
  Spectre::Engine::SymbolShaderExtension *result; // rax
  _QWORD v4[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = std::string::string(v4, (__int64)&Spectre::Engine::SymbolShaderExtension::kShaderFamilyName);
  Spectre::Engine::IShaderExtension::IShaderExtension((__int64)this, (__int64)v2);
  *((_DWORD *)this + 28) = 16;
  *(_QWORD *)this = &Spectre::Engine::SymbolShaderExtension::`vftable';
  result = this;
  *((_DWORD *)this + 29) = 32;
  return result;
}
