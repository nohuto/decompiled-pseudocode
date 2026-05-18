/*
 * XREFs of ??0ImageProcessingShaderExtension@Engine@Spectre@@QEAA@XZ @ 0x18007E7D0
 * Callers:
 *     ??$make_shared@VImageProcessingShaderExtension@Engine@Spectre@@$$V@std@@YA?AV?$shared_ptr@VImageProcessingShaderExtension@Engine@Spectre@@@0@XZ @ 0x1800303B4 (--$make_shared@VImageProcessingShaderExtension@Engine@Spectre@@$$V@std@@YA-AV-$shared_ptr@VImage.c)
 * Callees:
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@AEBV01@@Z @ 0x180017648 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??0IShaderExtension@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x18005F76C (--0IShaderExtension@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2.c)
 */

Spectre::Engine::ImageProcessingShaderExtension *__fastcall Spectre::Engine::ImageProcessingShaderExtension::ImageProcessingShaderExtension(
        Spectre::Engine::ImageProcessingShaderExtension *this)
{
  _QWORD *v2; // rax
  Spectre::Engine::ImageProcessingShaderExtension *result; // rax
  _QWORD v4[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = std::string::string(v4, (__int64)&Spectre::Engine::ImageProcessingShaderExtension::kShaderFamilyName);
  Spectre::Engine::IShaderExtension::IShaderExtension((__int64)this, (__int64)v2);
  *((_DWORD *)this + 28) = 16;
  *(_QWORD *)this = &Spectre::Engine::ImageProcessingShaderExtension::`vftable';
  result = this;
  *((_DWORD *)this + 29) = 32;
  return result;
}
