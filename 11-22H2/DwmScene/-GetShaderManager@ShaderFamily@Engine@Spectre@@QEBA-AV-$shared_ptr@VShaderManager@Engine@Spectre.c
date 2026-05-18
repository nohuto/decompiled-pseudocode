/*
 * XREFs of ?GetShaderManager@ShaderFamily@Engine@Spectre@@QEBA?AV?$shared_ptr@VShaderManager@Engine@Spectre@@@std@@XZ @ 0x180060D1C
 * Callers:
 *     ?SetOption@Material@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z @ 0x180044658 (-SetOption@Material@Engine@Spectre@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@.c)
 *     ?SetRenderState@Material@Engine@Spectre@@QEAAXW4BlendMode@23@W4DepthMode@23@W4CullMode@23@@Z @ 0x180044718 (-SetRenderState@Material@Engine@Spectre@@QEAAXW4BlendMode@23@W4DepthMode@23@W4CullMode@23@@Z.c)
 *     ?DetachDevice@ShaderFamily@Engine@Spectre@@QEAAXW4RenderDeviceID@23@@Z @ 0x180060590 (-DetachDevice@ShaderFamily@Engine@Spectre@@QEAAXW4RenderDeviceID@23@@Z.c)
 *     ?FindOption@ShaderFamily@Engine@Spectre@@QEBA?AW4ShaderOption@23@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x180060910 (-FindOption@ShaderFamily@Engine@Spectre@@QEBA-AW4ShaderOption@23@AEBV-$basic_string@DU-$char_tra.c)
 *     ?AttachDevice@ShaderPipeline@Engine@Spectre@@QEAAXV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180086B60 (-AttachDevice@ShaderPipeline@Engine@Spectre@@QEAAXV-$shared_ptr@VRenderDevice@Engine@Spectre@@@s.c)
 *     ?GetShader@ShaderPipeline@Engine@Spectre@@QEBA?AV?$shared_ptr@VShader@Engine@Spectre@@@std@@W4EShaderType@23@@Z @ 0x1800873D4 (-GetShader@ShaderPipeline@Engine@Spectre@@QEBA-AV-$shared_ptr@VShader@Engine@Spectre@@@std@@W4ES.c)
 *     ?SetShaders@ShaderPipeline@Engine@Spectre@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_K0@Z @ 0x180087868 (-SetShaders@ShaderPipeline@Engine@Spectre@@QEAAXV-$basic_string@DU-$char_traits@D@s_ea_180087868.c)
 *     ?ApplyBlur@ImageProcessingEffectBlur@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@V?$shared_ptr@VTexture@Engine@Spectre@@@5@V?$shared_ptr@VFrameBuffer@Engine@Spectre@@@5@@Z @ 0x18009C150 (-ApplyBlur@ImageProcessingEffectBlur@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VRenderDevice@Engine@.c)
 * Callees:
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 */

__int64 __fastcall Spectre::Engine::ShaderFamily::GetShaderManager(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8

  std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
    a2,
    (_QWORD *)(a1 + 440));
  return v2;
}
