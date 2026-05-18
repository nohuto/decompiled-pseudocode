/*
 * XREFs of ?GetPipeline@ShaderFamily@Engine@Spectre@@QEBA?AV?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@_KW4EShaderModel@23@@Z @ 0x180060A74
 * Callers:
 *     ?ApplyState@Material@Engine@Spectre@@QEAA?AU?$pair@V?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@VShaderTypeGroup@Engine@Spectre@@@std@@_KAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@5@_N@Z @ 0x180043F18 (-ApplyState@Material@Engine@Spectre@@QEAA-AU-$pair@V-$shared_ptr@VShaderPipeline@Engine@Spectre@.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Find_lower_bound@_K@?$_Tree@V?$_Tmap_traits@_KV?$function@$$A6A?AV?$shared_ptr@VRendererResource@Engine@Spectre@@@std@@XZ@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$function@$$A6A?AV?$shared_ptr@VRendererResource@Engine@Spectre@@@std@@XZ@std@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CB_KV?$function@$$A6A?AV?$shared_ptr@VRendererResource@Engine@Spectre@@@std@@XZ@std@@@std@@PEAX@std@@@1@AEB_K@Z @ 0x180010AF8 (--$_Find_lower_bound@_K@-$_Tree@V-$_Tmap_traits@_KV-$function@$$A6A-AV-$shared_ptr@VRendererReso.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??4?$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800124F8 (--4-$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??0EngineInvalidArgException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBV34@_N@Z @ 0x18003AED8 (--0EngineInvalidArgException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$allo.c)
 *     ??$_Try_emplace@AEBW4EShaderModel@Engine@Spectre@@$$V@?$map@W4EShaderModel@Engine@Spectre@@UShaderPipelineCollection@ShaderFamily@23@U?$less@W4EShaderModel@Engine@Spectre@@@std@@V?$allocator@U?$pair@$$CBW4EShaderModel@Engine@Spectre@@UShaderPipelineCollection@ShaderFamily@23@@std@@@7@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBW4EShaderModel@Engine@Spectre@@UShaderPipelineCollection@ShaderFamily@23@@std@@PEAX@std@@_N@1@AEBW4EShaderModel@Engine@Spectre@@@Z @ 0x18005F2F0 (--$_Try_emplace@AEBW4EShaderModel@Engine@Spectre@@$$V@-$map@W4EShaderModel@Engine@Spectre@@UShad.c)
 *     ??$_Try_emplace@AEB_K$$V@?$map@_KV?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@@std@@PEAX@std@@_N@1@AEB_K@Z @ 0x18005F3EC (--$_Try_emplace@AEB_K$$V@-$map@_KV-$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@U-$less@_K@.c)
 *     ?GetOptionsSupported@ShaderFamily@Engine@Spectre@@QEBA_KXZ @ 0x180060A68 (-GetOptionsSupported@ShaderFamily@Engine@Spectre@@QEBA_KXZ.c)
 *     ?AcceptsOptions@ShaderPipeline@Engine@Spectre@@QEBA_N_K@Z @ 0x180086A0C (-AcceptsOptions@ShaderPipeline@Engine@Spectre@@QEBA_N_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall Spectre::Engine::ShaderFamily::GetPipeline(
        Spectre::Engine::ShaderFamily *a1,
        _QWORD *a2,
        __int64 a3,
        int a4)
{
  _QWORD *v5; // rax
  __int64 v6; // r8
  unsigned __int64 OptionsSupported; // rax
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // r9
  __int64 *v11; // rsi
  __int64 v12; // r11
  unsigned __int64 v13; // r14
  _QWORD *v14; // rdx
  _QWORD *v15; // r11
  _QWORD *i; // r10
  _QWORD *v17; // rdi
  _QWORD *v18; // r10
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned __int64 v22; // [rsp+30h] [rbp-79h] BYREF
  int v23; // [rsp+38h] [rbp-71h] BYREF
  std::_Ref_count_base *v24[2]; // [rsp+40h] [rbp-69h] BYREF
  _QWORD v25[2]; // [rsp+58h] [rbp-51h] BYREF
  __int64 v26; // [rsp+68h] [rbp-41h]
  _QWORD v27[4]; // [rsp+78h] [rbp-31h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+98h] [rbp-11h] BYREF

  v22 = (unsigned __int64)a2;
  v23 = a4;
  if ( *((_DWORD *)a1 + 108) != 1 )
  {
    std::string::string(
      v27,
      (__int64)"ShaderFamily::GetPipeline() -- shader family declaration must be complete before pipelines can be accessed");
    v5 = std::string::string(
           v25,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine"
                    "\\shaderfamily.cpp");
    Spectre::Engine::EngineInvalidArgException::EngineInvalidArgException(
      pExceptionObject,
      (__int64)v5,
      v6,
      (__int64)v27,
      0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  OptionsSupported = Spectre::Engine::ShaderFamily::GetOptionsSupported(a1);
  v22 = OptionsSupported & v8;
  v11 = (__int64 *)(*(_QWORD *)std::map<enum Spectre::Engine::EShaderModel,Spectre::Engine::ShaderFamily::ShaderPipelineCollection>::_Try_emplace<enum Spectre::Engine::EShaderModel const &,>(
                                 (__int64 *)(v9 + 416),
                                 (__int64)v27,
                                 &v23,
                                 v10)
                  + 56LL);
  std::_Tree<std::_Tmap_traits<unsigned __int64,std::function<std::shared_ptr<Spectre::Engine::RendererResource> (void)>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::function<std::shared_ptr<Spectre::Engine::RendererResource> (void)>>>,0>>::_Find_lower_bound<unsigned __int64>(
    v11,
    (__int64)v25,
    &v22);
  v13 = v22;
  if ( *(_BYTE *)(v26 + 25) || v22 < *(_QWORD *)(v26 + 32) || v26 == *v11 )
  {
    v15 = *(_QWORD **)(v12 + 40);
    for ( i = (_QWORD *)*v15; i != v15; i = (_QWORD *)*v18 )
    {
      v17 = i + 2;
      if ( Spectre::Engine::ShaderPipeline::AcceptsOptions((Spectre::Engine::ShaderPipeline *)i[2], v13) )
      {
        v19 = std::map<unsigned __int64,std::shared_ptr<Spectre::Engine::ShaderPipeline>>::_Try_emplace<unsigned __int64 const &,>(
                v11,
                (__int64)v24,
                &v22);
        std::shared_ptr<Spectre::Engine::Light>::operator=((__int64 *)(*(_QWORD *)v19 + 40LL), v17);
        v14 = v17;
        goto LABEL_7;
      }
    }
    *(_OWORD *)v24 = 0LL;
    v20 = std::map<unsigned __int64,std::shared_ptr<Spectre::Engine::ShaderPipeline>>::_Try_emplace<unsigned __int64 const &,>(
            v11,
            (__int64)v25,
            &v22);
    std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)(*(_QWORD *)v20 + 40LL), (__int64 *)v24);
    if ( v24[1] )
      std::_Ref_count_base::_Decref(v24[1]);
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    v14 = (_QWORD *)(v26 + 40);
LABEL_7:
    std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(a2, v14);
  }
  return a2;
}
