/*
 * XREFs of ?CreatePipeline@ShaderFamily@Engine@Spectre@@QEAA?AV?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@_K0_N@Z @ 0x1800602F8
 * Callers:
 *     ?CreatePipeline@ShaderFamily@Engine@Spectre@@QEAA?AV?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@W4ShaderOption@23@@Z @ 0x1800602C0 (-CreatePipeline@ShaderFamily@Engine@Spectre@@QEAA-AV-$shared_ptr@VShaderPipeline@Engine@Spectre@.c)
 *     ?CreatePipelines@ShaderFamily@Engine@Spectre@@QEAA?AV?$vector@V?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@@2@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@5@_K111@Z @ 0x1800603D8 (-CreatePipelines@ShaderFamily@Engine@Spectre@@QEAA-AV-$vector@V-$shared_ptr@VShaderPipeline@Engi.c)
 *     ?AddBackgroundShaderPipelines@StandardShaderExtension@Engine@Spectre@@IEAAXPEAVShaderManager@23@@Z @ 0x18007CC8C (-AddBackgroundShaderPipelines@StandardShaderExtension@Engine@Spectre@@IEAAXPEAVShaderManager@23@.c)
 *     ?AddStochasticTransparencyShaderPipelines@StandardShaderExtension@Engine@Spectre@@IEAAXPEAVShaderManager@23@@Z @ 0x18007D3B0 (-AddStochasticTransparencyShaderPipelines@StandardShaderExtension@Engine@Spectre@@IEAAXPEAVShade.c)
 *     ?OnCreate@ImageProcessingShaderExtension@Engine@Spectre@@UEAAXPEAVShaderManager@23@AEBV?$vector@W4EShaderModel@Engine@Spectre@@V?$allocator@W4EShaderModel@Engine@Spectre@@@std@@@std@@@Z @ 0x18007E880 (-OnCreate@ImageProcessingShaderExtension@Engine@Spectre@@UEAAXPEAVShaderManager@23@AEBV-$vector@.c)
 *     ?OnCreate@SymbolShaderExtension@Engine@Spectre@@UEAAXPEAVShaderManager@23@AEBV?$vector@W4EShaderModel@Engine@Spectre@@V?$allocator@W4EShaderModel@Engine@Spectre@@@std@@@std@@@Z @ 0x18007F3B0 (-OnCreate@SymbolShaderExtension@Engine@Spectre@@UEAAXPEAVShaderManager@23@AEBV-$vector@W4EShader.c)
 *     ?OnCreate@FontShaderExtension@Engine@Spectre@@UEAAXPEAVShaderManager@23@AEBV?$vector@W4EShaderModel@Engine@Spectre@@V?$allocator@W4EShaderModel@Engine@Spectre@@@std@@@std@@@Z @ 0x18007F7A0 (-OnCreate@FontShaderExtension@Engine@Spectre@@UEAAXPEAVShaderManager@23@AEBV-$vector@W4EShaderMo.c)
 *     ?OnCreate@BackgroundUnlitShaderExtension@Engine@Spectre@@UEAAXPEAVShaderManager@23@AEBV?$vector@W4EShaderModel@Engine@Spectre@@V?$allocator@W4EShaderModel@Engine@Spectre@@@std@@@std@@@Z @ 0x180080830 (-OnCreate@BackgroundUnlitShaderExtension@Engine@Spectre@@UEAAXPEAVShaderManager@23@AEBV-$vector@.c)
 *     ?AddBaseShaderPipelines@BaseShaderExtension@Engine@Spectre@@IEAAXPEAVShaderManager@23@AEBV?$vector@_KV?$allocator@_K@std@@@std@@@Z @ 0x180098B0C (-AddBaseShaderPipelines@BaseShaderExtension@Engine@Spectre@@IEAAXPEAVShaderManager@23@AEBV-$vect.c)
 *     ?AddDepthOnlyShaderPipelines@BaseShaderExtension@Engine@Spectre@@IEAAXPEAVShaderManager@23@_N@Z @ 0x180099D68 (-AddDepthOnlyShaderPipelines@BaseShaderExtension@Engine@Spectre@@IEAAXPEAVShaderManager@23@_N@Z.c)
 * Callees:
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ?Output@LevelSettingsWrapper@Trace@@QEAAXW4Level@2@PEBDZZ @ 0x18001DAE8 (-Output@LevelSettingsWrapper@Trace@@QEAAXW4Level@2@PEBDZZ.c)
 *     ??$_Emplace@AEBV?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@@?$list@V?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@@2@@std@@QEAAPEAU?$_List_node@V?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@PEAX@1@QEAU21@AEBV?$shared_ptr@VShaderPipeline@Engine@Spectre@@@1@@Z @ 0x18005EED0 (--$_Emplace@AEBV-$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@@-$list@V-$shared_ptr@VShader.c)
 *     ??$_Try_emplace@AEBW4EShaderModel@Engine@Spectre@@$$V@?$map@W4EShaderModel@Engine@Spectre@@UShaderPipelineCollection@ShaderFamily@23@U?$less@W4EShaderModel@Engine@Spectre@@@std@@V?$allocator@U?$pair@$$CBW4EShaderModel@Engine@Spectre@@UShaderPipelineCollection@ShaderFamily@23@@std@@@7@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBW4EShaderModel@Engine@Spectre@@UShaderPipelineCollection@ShaderFamily@23@@std@@PEAX@std@@_N@1@AEBW4EShaderModel@Engine@Spectre@@@Z @ 0x18005F2F0 (--$_Try_emplace@AEBW4EShaderModel@Engine@Spectre@@$$V@-$map@W4EShaderModel@Engine@Spectre@@UShad.c)
 *     ??$make_shared@VShaderPipeline@Engine@Spectre@@AEAVShaderFamily@23@@std@@YA?AV?$shared_ptr@VShaderPipeline@Engine@Spectre@@@0@AEAVShaderFamily@Engine@Spectre@@@Z @ 0x18005F690 (--$make_shared@VShaderPipeline@Engine@Spectre@@AEAVShaderFamily@23@@std@@YA-AV-$shared_ptr@VShad.c)
 *     ?GetShaderModelActiveDeclaration@ShaderFamily@Engine@Spectre@@QEBA?AW4EShaderModel@23@XZ @ 0x180060D44 (-GetShaderModelActiveDeclaration@ShaderFamily@Engine@Spectre@@QEBA-AW4EShaderModel@23@XZ.c)
 *     ?AddOptionFilter@ShaderPipeline@Engine@Spectre@@QEAAXVShaderOptionFilter@23@@Z @ 0x180086A44 (-AddOptionFilter@ShaderPipeline@Engine@Spectre@@QEAAXVShaderOptionFilter@23@@Z.c)
 *     ?SetShaders@ShaderPipeline@Engine@Spectre@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x1800877CC (-SetShaders@ShaderPipeline@Engine@Spectre@@QEAAXV-$basic_string@DU-$char_traits@D@std@@V-$alloca.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Spectre::Engine::ShaderFamily::CreatePipeline(
        __int64 *a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        char a5)
{
  __int64 v9; // rbx
  _QWORD *v10; // rax
  __int64 v11; // r9
  __int64 v12; // rax
  _QWORD v14[7]; // [rsp+30h] [rbp-38h] BYREF
  int ShaderModelActiveDeclaration; // [rsp+70h] [rbp+8h] BYREF
  _QWORD *v16; // [rsp+78h] [rbp+10h]

  v16 = a2;
  std::make_shared<Spectre::Engine::ShaderPipeline,Spectre::Engine::ShaderFamily &>(
    a2,
    (struct Spectre::Engine::ShaderFamily *)a1);
  v14[0] = a3;
  v14[1] = a4;
  Spectre::Engine::ShaderPipeline::AddOptionFilter(*a2, v14);
  if ( a5 )
  {
    v9 = *a2;
    v10 = std::string::string(v14, (__int64)word_180106082);
    Spectre::Engine::ShaderPipeline::SetShaders(v9, v10);
  }
  ShaderModelActiveDeclaration = Spectre::Engine::ShaderFamily::GetShaderModelActiveDeclaration(a1);
  if ( !ShaderModelActiveDeclaration )
    Trace::LevelSettingsWrapper::Output(
      &gTraceLevelsNativeRenderer,
      2,
      "ShaderFamily::CreatePipeline() -- shaderModel is in invalid state. Pipeline creation must happen during a BeginSha"
      "derModel() / EndShaderModel() block.");
  v12 = std::map<enum Spectre::Engine::EShaderModel,Spectre::Engine::ShaderFamily::ShaderPipelineCollection>::_Try_emplace<enum Spectre::Engine::EShaderModel const &,>(
          a1 + 52,
          (__int64)v14,
          &ShaderModelActiveDeclaration,
          v11);
  std::list<std::shared_ptr<Spectre::Engine::ShaderPipeline>>::_Emplace<std::shared_ptr<Spectre::Engine::ShaderPipeline> const &>(
    *(_QWORD *)v12 + 40LL,
    *(_QWORD *)(*(_QWORD *)v12 + 40LL),
    a2);
  return a2;
}
