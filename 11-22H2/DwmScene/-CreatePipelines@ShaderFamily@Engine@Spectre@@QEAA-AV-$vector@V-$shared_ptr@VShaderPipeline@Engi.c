/*
 * XREFs of ?CreatePipelines@ShaderFamily@Engine@Spectre@@QEAA?AV?$vector@V?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@@2@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@5@_K111@Z @ 0x1800603D8
 * Callers:
 *     ?OnCreate@ImageProcessingShaderExtension@Engine@Spectre@@UEAAXPEAVShaderManager@23@AEBV?$vector@W4EShaderModel@Engine@Spectre@@V?$allocator@W4EShaderModel@Engine@Spectre@@@std@@@std@@@Z @ 0x18007E880 (-OnCreate@ImageProcessingShaderExtension@Engine@Spectre@@UEAAXPEAVShaderManager@23@AEBV-$vector@.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@AEBV01@@Z @ 0x180017648 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??0EngineInvalidArgException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBV34@_N@Z @ 0x18003AED8 (--0EngineInvalidArgException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$allo.c)
 *     ??$_Emplace_reallocate@V?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@@?$vector@V?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@VShaderPipeline@Engine@Spectre@@@1@QEAV21@$$QEAV21@@Z @ 0x18005F06C (--$_Emplace_reallocate@V-$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@@-$vector@V-$shared_p.c)
 *     ?CreatePipeline@ShaderFamily@Engine@Spectre@@QEAA?AV?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@_K0_N@Z @ 0x1800602F8 (-CreatePipeline@ShaderFamily@Engine@Spectre@@QEAA-AV-$shared_ptr@VShaderPipeline@En_ea_1800602F8.c)
 *     ?ShaderOptionIterateCombination@Engine@Spectre@@YA_NAEA_K_K@Z @ 0x180061480 (-ShaderOptionIterateCombination@Engine@Spectre@@YA_NAEA_K_K@Z.c)
 *     ?SetShaders@ShaderPipeline@Engine@Spectre@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_K0@Z @ 0x180087868 (-SetShaders@ShaderPipeline@Engine@Spectre@@QEAAXV-$basic_string@DU-$char_traits@D@s_ea_180087868.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Spectre::Engine::ShaderFamily::CreatePipelines(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        unsigned __int64 *a6)
{
  __int64 *v9; // rax
  __int64 v10; // r14
  _QWORD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rdi
  _QWORD *v14; // rbx
  _QWORD *v15; // rax
  unsigned __int64 v16; // r8
  _QWORD *v18; // rax
  __int64 v19; // r8
  __int64 v20; // [rsp+38h] [rbp-C8h] BYREF
  __int64 *v21; // [rsp+40h] [rbp-C0h]
  __int64 v22; // [rsp+50h] [rbp-B0h]
  _QWORD *v23; // [rsp+58h] [rbp-A8h]
  __int64 v24; // [rsp+60h] [rbp-A0h] BYREF
  std::_Ref_count_base *v25; // [rsp+68h] [rbp-98h]
  _QWORD v26[5]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v27[4]; // [rsp+98h] [rbp-68h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+B8h] [rbp-48h] BYREF

  v9 = a1;
  v21 = a1;
  v22 = a2;
  v26[4] = a3;
  if ( (a4 & (unsigned __int64)a6) != 0 )
  {
    std::string::string(
      v27,
      (__int64)"ShaderFamily::CreatePipelines() -- Combination basis options must not be part of required or excluded set");
    v18 = std::string::string(
            v26,
            (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engin"
                     "e\\shaderfamily.cpp");
    Spectre::Engine::EngineInvalidArgException::EngineInvalidArgException(
      pExceptionObject,
      (__int64)v18,
      v19,
      (__int64)v27,
      0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  v10 = 0LL;
  v20 = 0LL;
  while ( 1 )
  {
    v11 = Spectre::Engine::ShaderFamily::CreatePipeline(v9, &v24, v10 | a4, (unsigned __int64)a6 & ~v10, 0);
    v12 = *(_QWORD *)(a2 + 8);
    if ( v12 == *(_QWORD *)(a2 + 16) )
    {
      std::vector<std::shared_ptr<Spectre::Engine::ShaderPipeline>>::_Emplace_reallocate<std::shared_ptr<Spectre::Engine::ShaderPipeline>>(
        (char **)a2,
        (char *)v12,
        v11);
    }
    else
    {
      *(_QWORD *)v12 = 0LL;
      *(_QWORD *)(v12 + 8) = 0LL;
      *(_QWORD *)v12 = *v11;
      *(_QWORD *)(v12 + 8) = v11[1];
      *v11 = 0LL;
      v11[1] = 0LL;
      *(_QWORD *)(a2 + 8) += 16LL;
    }
    if ( v25 )
      std::_Ref_count_base::_Decref(v25);
    v13 = *(_QWORD *)(*(_QWORD *)(a2 + 8) - 16LL);
    v23 = v27;
    v14 = std::string::string(v27, (__int64)word_180106082);
    v15 = std::string::string(v26, a3);
    Spectre::Engine::ShaderPipeline::SetShaders(v13, v15, v10, v14);
    if ( !Spectre::Engine::ShaderOptionIterateCombination((Spectre::Engine *)&v20, a6, v16) )
      break;
    v10 = v20;
    v9 = v21;
  }
  std::string::_Tidy_deallocate(a3);
  return a2;
}
