/*
 * XREFs of ?RegisterShaderProgram@ShaderRegistration@Engine@Spectre@@YA_NV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UProgramRegistration@123@@Z @ 0x18007C35C
 * Callers:
 *     ?RegisterShaders@BackgroundUnlit@ShaderProgramGenerator@@YAPEAXXZ @ 0x1800A5868 (-RegisterShaders@BackgroundUnlit@ShaderProgramGenerator@@YAPEAXXZ.c)
 *     ?RegisterShaders@ImageProcessingBlur@ShaderProgramGenerator@@YAPEAXXZ @ 0x1800A783C (-RegisterShaders@ImageProcessingBlur@ShaderProgramGenerator@@YAPEAXXZ.c)
 *     ?RegisterShaders@ImageProcessingCameraEffects@ShaderProgramGenerator@@YAPEAXXZ @ 0x1800A7D40 (-RegisterShaders@ImageProcessingCameraEffects@ShaderProgramGenerator@@YAPEAXXZ.c)
 *     ?RegisterShaders@ImageProcessingFullscreen@ShaderProgramGenerator@@YAPEAXXZ @ 0x1800AF408 (-RegisterShaders@ImageProcessingFullscreen@ShaderProgramGenerator@@YAPEAXXZ.c)
 *     ?RegisterShaders@Font@ShaderProgramGenerator@@YAPEAXXZ @ 0x1800AF69C (-RegisterShaders@Font@ShaderProgramGenerator@@YAPEAXXZ.c)
 *     ?RegisterShaders@UnlitShader@ShaderProgramGenerator@@YAPEAXXZ @ 0x1800AFA28 (-RegisterShaders@UnlitShader@ShaderProgramGenerator@@YAPEAXXZ.c)
 *     ?RegisterShaders@StandardShader@ShaderProgramGenerator@@YAPEAXXZ @ 0x1800B1AB4 (-RegisterShaders@StandardShader@ShaderProgramGenerator@@YAPEAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@AEBV01@@Z @ 0x180017648 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Try_emplace@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$V@?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UProgramRegistration@ShaderRegistration@Engine@Spectre@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UProgramRegistration@ShaderRegistration@Engine@Spectre@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UProgramRegistration@ShaderRegistration@Engine@Spectre@@@std@@PEAX@std@@_N@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@@Z @ 0x18007BDC0 (--$_Try_emplace@AEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@$$_ea_18007BDC0.c)
 *     Spectre::Engine::ShaderRegistration::_anonymous_namespace_::EmbeddedShaderDatabase::GetOrCreate @ 0x18007C198 (Spectre--Engine--ShaderRegistration--_anonymous_namespace_--EmbeddedShaderDatabase--GetOrCreate.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall Spectre::Engine::ShaderRegistration::RegisterShaderProgram(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  _QWORD *v6; // [rsp+20h] [rbp-68h]
  __int64 v7; // [rsp+28h] [rbp-60h] BYREF
  std::_Ref_count_base *v8; // [rsp+30h] [rbp-58h]
  _BYTE v9[16]; // [rsp+38h] [rbp-50h] BYREF
  _QWORD v10[5]; // [rsp+48h] [rbp-40h] BYREF

  v10[4] = a1;
  Spectre::Engine::ShaderRegistration::_anonymous_namespace_::EmbeddedShaderDatabase::GetOrCreate(
    &v7,
    *(_DWORD *)(a2 + 20));
  v6 = std::string::string(v10, a1);
  v4 = *(_QWORD *)std::map<std::string,Spectre::Engine::ShaderRegistration::ProgramRegistration>::_Try_emplace<std::string const &,>(
                    (__int64 *)(v7 + 16),
                    (__int64)v9,
                    v6);
  *(_OWORD *)(v4 + 64) = *(_OWORD *)a2;
  *(_OWORD *)(v4 + 80) = *(_OWORD *)(a2 + 16);
  std::string::_Tidy_deallocate((__int64)v6);
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
  std::string::_Tidy_deallocate(a1);
  return 1;
}
