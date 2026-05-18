/*
 * XREFs of ?CreatePropertyLayout@ShaderManager@Engine@Spectre@@QEAA?AV?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@W4EShaderPropertyScope@23@@Z @ 0x18004F698
 * Callers:
 *     ?DefineGlobalPropertyLayouts@Engine@Spectre@@YAXPEAVShaderManager@12@V?$shared_ptr@VShaderFamily@Engine@Spectre@@@std@@@Z @ 0x180045218 (-DefineGlobalPropertyLayouts@Engine@Spectre@@YAXPEAVShaderManager@12@V-$shared_ptr@VShaderFamily.c)
 *     ?DefineMaterialPropertyLayout@Engine@Spectre@@YAXPEAVShaderManager@12@V?$shared_ptr@VShaderFamily@Engine@Spectre@@@std@@@Z @ 0x180045F78 (-DefineMaterialPropertyLayout@Engine@Spectre@@YAXPEAVShaderManager@12@V-$shared_ptr@VShaderFamil.c)
 *     ?DefineObjectPropertyLayouts@Engine@Spectre@@YAXPEAVShaderManager@12@V?$shared_ptr@VShaderFamily@Engine@Spectre@@@std@@@Z @ 0x1800464D4 (-DefineObjectPropertyLayouts@Engine@Spectre@@YAXPEAVShaderManager@12@V-$shared_ptr@VShaderFamily.c)
 *     ?DefineSkinningPropertyLayout@Engine@Spectre@@YAXPEAVShaderManager@12@V?$shared_ptr@VShaderFamily@Engine@Spectre@@@std@@@Z @ 0x1800469D8 (-DefineSkinningPropertyLayout@Engine@Spectre@@YAXPEAVShaderManager@12@V-$shared_ptr@VShaderFamil.c)
 *     ?DefineVolumePropertyLayout@Engine@Spectre@@YAXPEAVShaderManager@12@V?$shared_ptr@VShaderFamily@Engine@Spectre@@@std@@@Z @ 0x180046A68 (-DefineVolumePropertyLayout@Engine@Spectre@@YAXPEAVShaderManager@12@V-$shared_ptr@VShaderFamily@.c)
 *     ?Startup@ShaderManager@Engine@Spectre@@QEAAXXZ @ 0x1800509E8 (-Startup@ShaderManager@Engine@Spectre@@QEAAXXZ.c)
 *     ?EndDeclaration@ShaderFamily@Engine@Spectre@@QEAAXXZ @ 0x180060780 (-EndDeclaration@ShaderFamily@Engine@Spectre@@QEAAXXZ.c)
 *     ?OnCreate@ImageProcessingShaderExtension@Engine@Spectre@@UEAAXPEAVShaderManager@23@AEBV?$vector@W4EShaderModel@Engine@Spectre@@V?$allocator@W4EShaderModel@Engine@Spectre@@@std@@@std@@@Z @ 0x18007E880 (-OnCreate@ImageProcessingShaderExtension@Engine@Spectre@@UEAAXPEAVShaderManager@23@AEBV-$vector@.c)
 *     ?OnCreate@SymbolShaderExtension@Engine@Spectre@@UEAAXPEAVShaderManager@23@AEBV?$vector@W4EShaderModel@Engine@Spectre@@V?$allocator@W4EShaderModel@Engine@Spectre@@@std@@@std@@@Z @ 0x18007F3B0 (-OnCreate@SymbolShaderExtension@Engine@Spectre@@UEAAXPEAVShaderManager@23@AEBV-$vector@W4EShader.c)
 *     ?OnCreate@FontShaderExtension@Engine@Spectre@@UEAAXPEAVShaderManager@23@AEBV?$vector@W4EShaderModel@Engine@Spectre@@V?$allocator@W4EShaderModel@Engine@Spectre@@@std@@@std@@@Z @ 0x18007F7A0 (-OnCreate@FontShaderExtension@Engine@Spectre@@UEAAXPEAVShaderManager@23@AEBV-$vector@W4EShaderMo.c)
 *     ?DefinePropertyLayouts@BackgroundUnlitShaderExtension@Engine@Spectre@@AEAAXPEAVShaderManager@23@@Z @ 0x18007FED4 (-DefinePropertyLayouts@BackgroundUnlitShaderExtension@Engine@Spectre@@AEAAXPEAVShaderManager@23@.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?shared_from_this@?$enable_shared_from_this@VComponent@Engine@Spectre@@@std@@QEAA?AV?$shared_ptr@VComponent@Engine@Spectre@@@2@XZ @ 0x1800433FC (-shared_from_this@-$enable_shared_from_this@VComponent@Engine@Spectre@@@std@@QEAA-AV-$shared_ptr.c)
 *     ??$make_shared@VShaderPropertyLayout@Engine@Spectre@@AEAV?$shared_ptr@VShaderManager@Engine@Spectre@@@std@@AEAW4EShaderPropertyScope@23@@std@@YA?AV?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@0@AEAV?$shared_ptr@VShaderManager@Engine@Spectre@@@0@AEAW4EShaderPropertyScope@Engine@Spectre@@@Z @ 0x18004E468 (--$make_shared@VShaderPropertyLayout@Engine@Spectre@@AEAV-$shared_ptr@VShaderManager@Engine@Spec.c)
 */

_QWORD *__fastcall Spectre::Engine::ShaderManager::CreatePropertyLayout(__int64 a1, _QWORD *a2, unsigned int a3)
{
  __int64 v5; // [rsp+28h] [rbp-20h] BYREF
  std::_Ref_count_base *v6; // [rsp+30h] [rbp-18h]
  unsigned int v7; // [rsp+60h] [rbp+18h] BYREF

  v7 = a3;
  std::enable_shared_from_this<Spectre::Engine::Component>::shared_from_this(a1, &v5);
  std::make_shared<Spectre::Engine::ShaderPropertyLayout,std::shared_ptr<Spectre::Engine::ShaderManager> &,enum Spectre::Engine::EShaderPropertyScope &>(
    a2,
    (__int64)&v5,
    &v7);
  if ( v6 )
    std::_Ref_count_base::_Decref(v6);
  return a2;
}
