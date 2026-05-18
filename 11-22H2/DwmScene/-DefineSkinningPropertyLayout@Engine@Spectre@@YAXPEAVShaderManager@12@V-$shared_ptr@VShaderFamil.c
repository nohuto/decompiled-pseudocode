/*
 * XREFs of ?DefineSkinningPropertyLayout@Engine@Spectre@@YAXPEAVShaderManager@12@V?$shared_ptr@VShaderFamily@Engine@Spectre@@@std@@@Z @ 0x1800469D8
 * Callers:
 *     ?DefinePropertyLayouts@StandardShaderExtension@Engine@Spectre@@MEAAXPEAVShaderManager@23@@Z @ 0x18007DE20 (-DefinePropertyLayouts@StandardShaderExtension@Engine@Spectre@@MEAAXPEAVShaderManager@23@@Z.c)
 *     ?DefinePropertyLayouts@UnlitShaderExtension@Engine@Spectre@@MEAAXPEAVShaderManager@23@@Z @ 0x18007FC10 (-DefinePropertyLayouts@UnlitShaderExtension@Engine@Spectre@@MEAAXPEAVShaderManager@23@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ?CreatePropertyLayout@ShaderManager@Engine@Spectre@@QEAA?AV?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@W4EShaderPropertyScope@23@@Z @ 0x18004F698 (-CreatePropertyLayout@ShaderManager@Engine@Spectre@@QEAA-AV-$shared_ptr@VShaderPropertyLayout@En.c)
 *     ?SetPropertyLayout@ShaderFamily@Engine@Spectre@@QEAAXV?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@@Z @ 0x180061324 (-SetPropertyLayout@ShaderFamily@Engine@Spectre@@QEAAXV-$shared_ptr@VShaderPropertyLayout@Engine@.c)
 *     ?AddArrayProperty@ShaderPropertyLayout@Engine@Spectre@@QEAA?AW4ShaderProperty@23@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ShaderPropertyType@23@I@Z @ 0x1800820CC (-AddArrayProperty@ShaderPropertyLayout@Engine@Spectre@@QEAA-AW4ShaderProperty@23@AEBV-$basic_str.c)
 *     ?EndDeclaration@ShaderPropertyLayout@Engine@Spectre@@QEAAXXZ @ 0x180082AB0 (-EndDeclaration@ShaderPropertyLayout@Engine@Spectre@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Spectre::Engine::DefineSkinningPropertyLayout(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rax
  __int64 v4; // r8
  std::_Ref_count_base *v5; // rcx
  Spectre::Engine::ShaderPropertyLayout *v6; // [rsp+20h] [rbp-28h] BYREF
  std::_Ref_count_base *v7; // [rsp+28h] [rbp-20h]
  _QWORD v8[3]; // [rsp+30h] [rbp-18h] BYREF

  Spectre::Engine::ShaderManager::CreatePropertyLayout(a1, &v6, 8LL);
  Spectre::Engine::ShaderPropertyLayout::AddArrayProperty(
    v6,
    &Spectre::Engine::ShaderConstants::kSkinning_BonePalette,
    7LL,
    256LL);
  Spectre::Engine::ShaderPropertyLayout::EndDeclaration(v6);
  v3 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
         v8,
         &v6);
  Spectre::Engine::ShaderFamily::SetPropertyLayout(v4, v3);
  if ( v7 )
    std::_Ref_count_base::_Decref(v7);
  v5 = *(std::_Ref_count_base **)(a2 + 8);
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
}
