/*
 * XREFs of ?GetShaderProgram@ShaderManager@Engine@Spectre@@QEBAAEBV?$shared_ptr@VShaderProgram@Engine@Spectre@@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@5@@Z @ 0x180050334
 * Callers:
 *     ?AttachDevice@ShaderPipeline@Engine@Spectre@@QEAAXV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180086B60 (-AttachDevice@ShaderPipeline@Engine@Spectre@@QEAAXV-$shared_ptr@VRenderDevice@Engine@Spectre@@@s.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@$$QEAV10@QEBD@Z @ 0x18001C59C (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_tra_ea_18001C59C.c)
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@QEBDAEBV10@@Z @ 0x18001C6CC (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_tra_ea_18001C6CC.c)
 *     ??0EngineInvalidArgException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBV34@_N@Z @ 0x18003AED8 (--0EngineInvalidArgException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$allo.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UShaderInfo@ShaderManager@Engine@Spectre@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UShaderInfo@ShaderManager@Engine@Spectre@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UShaderInfo@ShaderManager@Engine@Spectre@@@std@@@std@@@std@@@2@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@Z @ 0x180050C30 (-find@-$_Tree@V-$_Tmap_traits@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@USha.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Spectre::Engine::ShaderManager::GetShaderProgram(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // rbx
  char *v4; // rax
  _QWORD *v5; // rbx
  _QWORD *v6; // rax
  __int64 v7; // r8
  __int64 v8; // rbx
  __int64 v10; // [rsp+30h] [rbp-B8h] BYREF
  _QWORD v11[5]; // [rsp+38h] [rbp-B0h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+60h] [rbp-88h] BYREF
  char v13[32]; // [rsp+98h] [rbp-50h] BYREF
  _QWORD v14[4]; // [rsp+B8h] [rbp-30h] BYREF

  v11[4] = a2;
  v3 = (_QWORD *)(a1 + 18576);
  std::_Tree<std::_Tmap_traits<std::string,Spectre::Engine::ShaderManager::ShaderInfo,std::less<std::string>,std::allocator<std::pair<std::string const,Spectre::Engine::ShaderManager::ShaderInfo>>,0>>::find(
    a1 + 18576,
    &v10,
    a2);
  if ( v10 == *v3 )
  {
    v4 = std::operator+<char>(v13, "ShaderManager::GetShaderProgram() -- shader program for name '", a2);
    v5 = std::operator+<char>(v14, v4, (__int64)"' does not exist");
    v6 = std::string::string(
           v11,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine"
                    "\\shadermanager.cpp");
    Spectre::Engine::EngineInvalidArgException::EngineInvalidArgException(
      pExceptionObject,
      (__int64)v6,
      v7,
      (__int64)v5,
      0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v8 = v10 + 64;
  std::string::_Tidy_deallocate((__int64)a2);
  return v8;
}
