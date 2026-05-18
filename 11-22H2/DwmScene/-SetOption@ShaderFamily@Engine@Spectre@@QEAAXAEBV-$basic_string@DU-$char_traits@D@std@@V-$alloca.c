/*
 * XREFs of ?SetOption@ShaderFamily@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z @ 0x180061184
 * Callers:
 *     ?PreRenderScene@ViewerEngine@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@5@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x180067590 (-PreRenderScene@ViewerEngine@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VScene@Engine@Spectre@@@std@@.c)
 *     ?UpdateCameraEffectsDiagnostics@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x180068BA0 (-UpdateCameraEffectsDiagnostics@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VScene@Engine.c)
 *     ?UpdatePipelineConstants@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@AEBV?$shared_ptr@VScene@Engine@Spectre@@@5@@Z @ 0x18006BE30 (-UpdatePipelineConstants@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VRenderDevice@Engine.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@$$QEAV10@QEBD@Z @ 0x18001C59C (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_tra_ea_18001C59C.c)
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@QEBDAEBV10@@Z @ 0x18001C6CC (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_tra_ea_18001C6CC.c)
 *     ??0EngineInvalidArgException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBV34@_N@Z @ 0x18003AED8 (--0EngineInvalidArgException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$allo.c)
 *     ?FindOption@ShaderFamily@Engine@Spectre@@QEBA?AW4ShaderOption@23@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x180060910 (-FindOption@ShaderFamily@Engine@Spectre@@QEBA-AW4ShaderOption@23@AEBV-$basic_string@DU-$char_tra.c)
 *     ?SetOption@ShaderFamily@Engine@Spectre@@QEAAXW4ShaderOption@23@_N@Z @ 0x180061260 (-SetOption@ShaderFamily@Engine@Spectre@@QEAAXW4ShaderOption@23@_N@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Spectre::Engine::ShaderFamily::SetOption(__int64 a1, _QWORD *a2, char a3)
{
  unsigned int Option; // eax
  __int64 v7; // r8
  char *v8; // rax
  _QWORD *v9; // rbx
  _QWORD *v10; // rax
  __int64 v11; // r8
  _QWORD v13[4]; // [rsp+38h] [rbp-B0h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+58h] [rbp-90h] BYREF
  char v15[32]; // [rsp+90h] [rbp-58h] BYREF
  _QWORD v16[4]; // [rsp+B0h] [rbp-38h] BYREF

  Option = Spectre::Engine::ShaderFamily::FindOption(a1);
  if ( Option == -1 )
  {
    v8 = std::operator+<char>(v15, "ShaderFamily::SetOption() -- The option '", a2);
    v9 = std::operator+<char>(v16, v8, (__int64)"' cannot be set.");
    v10 = std::string::string(
            v13,
            (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engin"
                     "e\\shaderfamily.cpp");
    Spectre::Engine::EngineInvalidArgException::EngineInvalidArgException(
      pExceptionObject,
      (__int64)v10,
      v11,
      (__int64)v9,
      0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  LOBYTE(v7) = a3;
  return Spectre::Engine::ShaderFamily::SetOption(a1, Option, v7);
}
