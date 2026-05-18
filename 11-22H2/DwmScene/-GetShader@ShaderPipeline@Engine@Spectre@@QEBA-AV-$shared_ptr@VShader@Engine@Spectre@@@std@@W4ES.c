/*
 * XREFs of ?GetShader@ShaderPipeline@Engine@Spectre@@QEBA?AV?$shared_ptr@VShader@Engine@Spectre@@@std@@W4EShaderType@23@@Z @ 0x1800873D4
 * Callers:
 *     ?ApplyState@Material@Engine@Spectre@@QEAA?AU?$pair@V?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@VShaderTypeGroup@Engine@Spectre@@@std@@_KAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@5@_N@Z @ 0x180043F18 (-ApplyState@Material@Engine@Spectre@@QEAA-AU-$pair@V-$shared_ptr@VShaderPipeline@Engine@Spectre@.c)
 *     ?AttachDevice@ShaderPipeline@Engine@Spectre@@QEAAXV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180086B60 (-AttachDevice@ShaderPipeline@Engine@Spectre@@QEAAXV-$shared_ptr@VRenderDevice@Engine@Spectre@@@s.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$?8VScene@Engine@Spectre@@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z @ 0x180011DD0 (--$-8VScene@Engine@Spectre@@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@AEBV01@@Z @ 0x180017648 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?empty@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEBA_NXZ @ 0x18001F7CC (-empty@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEBA_NXZ.c)
 *     ?GetShader@ShaderManager@Engine@Spectre@@QEBA?AV?$shared_ptr@VShader@Engine@Spectre@@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@5@@Z @ 0x18004FE4C (-GetShader@ShaderManager@Engine@Spectre@@QEBA-AV-$shared_ptr@VShader@Engine@Spectre@@@std@@V-$ba.c)
 *     ?GetShaderManager@ShaderFamily@Engine@Spectre@@QEBA?AV?$shared_ptr@VShaderManager@Engine@Spectre@@@std@@XZ @ 0x180060D1C (-GetShaderManager@ShaderFamily@Engine@Spectre@@QEBA-AV-$shared_ptr@VShaderManager@Engine@Spectre.c)
 *     ?SetShader@ShaderPipeline@Engine@Spectre@@QEAAXW4EShaderType@23@V?$shared_ptr@VShader@Engine@Spectre@@@std@@@Z @ 0x180087774 (-SetShader@ShaderPipeline@Engine@Spectre@@QEAAXW4EShaderType@23@V-$shared_ptr@VShader@Engine@Spe.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Spectre::Engine::ShaderPipeline::GetShader(__int64 a1, _QWORD *a2, unsigned int a3)
{
  _QWORD *v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // r9
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  std::_Ref_count_base *v12; // [rsp+28h] [rbp-48h] BYREF
  std::_Ref_count_base *v13; // [rsp+30h] [rbp-40h]
  __int64 v14; // [rsp+38h] [rbp-38h] BYREF
  std::_Ref_count_base *v15; // [rsp+40h] [rbp-30h]
  _QWORD v16[5]; // [rsp+48h] [rbp-28h] BYREF

  v6 = (_QWORD *)(a1 + 16 * ((int)a3 + 24LL));
  if ( *v6 )
  {
    std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(a2, v6);
  }
  else if ( std::string::empty(a1 + 32 * ((int)a3 + 6LL)) )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    v7 = *(_QWORD *)Spectre::Engine::ShaderFamily::GetShaderManager(*(_QWORD *)(a1 + 16), &v14);
    v9 = std::string::string(v16, v8);
    Spectre::Engine::ShaderManager::GetShader(v7, &v12, (__int64)v9);
    if ( v15 )
      std::_Ref_count_base::_Decref(v15);
    if ( std::operator==<Spectre::Engine::Scene>(&v12) )
    {
      *a2 = 0LL;
      a2[1] = 0LL;
      if ( v13 )
        std::_Ref_count_base::_Decref(v13);
    }
    else
    {
      v10 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
              &v14,
              &v12);
      Spectre::Engine::ShaderPipeline::SetShader(a1, a3, v10);
      *a2 = v12;
      a2[1] = v13;
    }
  }
  return a2;
}
