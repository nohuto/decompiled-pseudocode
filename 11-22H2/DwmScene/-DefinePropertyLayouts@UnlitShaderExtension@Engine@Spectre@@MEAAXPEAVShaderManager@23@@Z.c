/*
 * XREFs of ?DefinePropertyLayouts@UnlitShaderExtension@Engine@Spectre@@MEAAXPEAVShaderManager@23@@Z @ 0x18007FC10
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ?DefineGlobalPropertyLayouts@Engine@Spectre@@YAXPEAVShaderManager@12@V?$shared_ptr@VShaderFamily@Engine@Spectre@@@std@@@Z @ 0x180045218 (-DefineGlobalPropertyLayouts@Engine@Spectre@@YAXPEAVShaderManager@12@V-$shared_ptr@VShaderFamily.c)
 *     ?DefineMaterialPropertyLayout@Engine@Spectre@@YAXPEAVShaderManager@12@V?$shared_ptr@VShaderFamily@Engine@Spectre@@@std@@@Z @ 0x180045F78 (-DefineMaterialPropertyLayout@Engine@Spectre@@YAXPEAVShaderManager@12@V-$shared_ptr@VShaderFamil.c)
 *     ?DefineObjectPropertyLayouts@Engine@Spectre@@YAXPEAVShaderManager@12@V?$shared_ptr@VShaderFamily@Engine@Spectre@@@std@@@Z @ 0x1800464D4 (-DefineObjectPropertyLayouts@Engine@Spectre@@YAXPEAVShaderManager@12@V-$shared_ptr@VShaderFamily.c)
 *     ?DefineSkinningPropertyLayout@Engine@Spectre@@YAXPEAVShaderManager@12@V?$shared_ptr@VShaderFamily@Engine@Spectre@@@std@@@Z @ 0x1800469D8 (-DefineSkinningPropertyLayout@Engine@Spectre@@YAXPEAVShaderManager@12@V-$shared_ptr@VShaderFamil.c)
 */

void __fastcall Spectre::Engine::UnlitShaderExtension::DefinePropertyLayouts(
        Spectre::Engine::UnlitShaderExtension *this,
        struct Spectre::Engine::ShaderManager *a2)
{
  _QWORD *v2; // rbx
  _QWORD *v4; // rax
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = (_QWORD *)((char *)this + 56);
  v4 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
         v8,
         (_QWORD *)this + 7);
  Spectre::Engine::DefineGlobalPropertyLayouts((__int64)a2, (__int64)v4);
  v5 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(v8, v2);
  Spectre::Engine::DefineMaterialPropertyLayout((__int64)a2, (__int64)v5);
  v6 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(v8, v2);
  Spectre::Engine::DefineObjectPropertyLayouts((__int64)a2, (__int64)v6);
  v7 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(v8, v2);
  Spectre::Engine::DefineSkinningPropertyLayout((__int64)a2, (__int64)v7);
}
