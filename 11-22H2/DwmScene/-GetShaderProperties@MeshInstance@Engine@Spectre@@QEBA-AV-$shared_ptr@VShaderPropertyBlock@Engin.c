/*
 * XREFs of ?GetShaderProperties@MeshInstance@Engine@Spectre@@QEBA?AV?$shared_ptr@VShaderPropertyBlock@Engine@Spectre@@@std@@_KW4EShaderPropertyScope@23@@Z @ 0x18004BAA0
 * Callers:
 *     ?OnMeshRender@BackgroundUnlitShaderExtension@Engine@Spectre@@UEAAXPEBVMeshInstance@23@_K@Z @ 0x180080EF0 (-OnMeshRender@BackgroundUnlitShaderExtension@Engine@Spectre@@UEAAXPEBVMeshInstance@23@_K@Z.c)
 *     ?OnMeshRender@BaseShaderExtension@Engine@Spectre@@UEAAXPEBVMeshInstance@23@_K@Z @ 0x18009B340 (-OnMeshRender@BaseShaderExtension@Engine@Spectre@@UEAAXPEBVMeshInstance@23@_K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ?at@?$vector@UMaterialInfo@MeshInstance@Engine@Spectre@@V?$allocator@UMaterialInfo@MeshInstance@Engine@Spectre@@@std@@@std@@QEBAAEBUMaterialInfo@MeshInstance@Engine@Spectre@@_K@Z @ 0x18004CEB0 (-at@-$vector@UMaterialInfo@MeshInstance@Engine@Spectre@@V-$allocator@UMaterialInfo@_ea_18004CEB0.c)
 *     ??0EngineException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBV34@_N@Z @ 0x18006ECFC (--0EngineException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@.c)
 */

_QWORD *__fastcall Spectre::Engine::MeshInstance::GetShaderProperties(__int64 a1, _QWORD *a2, unsigned __int64 a3)
{
  _QWORD *v4; // rcx
  unsigned int v5; // eax
  int v6; // r8d
  __int64 v7; // rax
  _QWORD v9[4]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v10[4]; // [rsp+60h] [rbp-68h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+80h] [rbp-48h] BYREF

  v4 = (_QWORD *)(a1 + 104);
  if ( a3 >= 0x2E8BA2E8BA2E8BA3LL * ((__int64)(v4[1] - *v4) >> 3) )
  {
    std::string::string(v10, (__int64)"Out of range");
    v5 = (unsigned int)std::string::string(
                         v9,
                         (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\"
                                  "source\\engine\\meshinstance.cpp");
    Spectre::Engine::EngineException::EngineException((unsigned int)pExceptionObject, v5, v6, (unsigned int)v10, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  v7 = std::vector<Spectre::Engine::MeshInstance::MaterialInfo>::at(v4, a3);
  std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
    a2,
    (_QWORD *)(v7 + 24));
  return a2;
}
