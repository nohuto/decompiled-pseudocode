/*
 * XREFs of ?GetName@Shader@Engine@Spectre@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ @ 0x18008B008
 * Callers:
 *     ?AttachDevice@ShaderPipeline@Engine@Spectre@@QEAAXV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180086B60 (-AttachDevice@ShaderPipeline@Engine@Spectre@@QEAAXV-$shared_ptr@VRenderDevice@Engine@Spectre@@@s.c)
 *     ??$LoadInternalHelper@VDeviceDomainShader@Engine@Spectre@@@Shader@Engine@Spectre@@IEAA?AV?$shared_ptr@VDeviceShader@Engine@Spectre@@@std@@AEBVShaderProgram@12@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@4@@Z @ 0x18008A1BC (--$LoadInternalHelper@VDeviceDomainShader@Engine@Spectre@@@Shader@Engine@Spectre@@IEAA-AV-$share.c)
 *     ??$LoadInternalHelper@VDeviceGeometryShader@Engine@Spectre@@@Shader@Engine@Spectre@@IEAA?AV?$shared_ptr@VDeviceShader@Engine@Spectre@@@std@@AEBVShaderProgram@12@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@4@@Z @ 0x18008A274 (--$LoadInternalHelper@VDeviceGeometryShader@Engine@Spectre@@@Shader@Engine@Spectre@@IEAA-AV-$sha.c)
 *     ??$LoadInternalHelper@VDeviceHullShader@Engine@Spectre@@@Shader@Engine@Spectre@@IEAA?AV?$shared_ptr@VDeviceShader@Engine@Spectre@@@std@@AEBVShaderProgram@12@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@4@@Z @ 0x18008A32C (--$LoadInternalHelper@VDeviceHullShader@Engine@Spectre@@@Shader@Engine@Spectre@@IEAA-AV-$shared_.c)
 *     ??$LoadInternalHelper@VDevicePixelShader@Engine@Spectre@@@Shader@Engine@Spectre@@IEAA?AV?$shared_ptr@VDeviceShader@Engine@Spectre@@@std@@AEBVShaderProgram@12@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@4@@Z @ 0x18008A3E4 (--$LoadInternalHelper@VDevicePixelShader@Engine@Spectre@@@Shader@Engine@Spectre@@IEAA-AV-$shared.c)
 *     ??$LoadInternalHelper@VDeviceVertexShader@Engine@Spectre@@@Shader@Engine@Spectre@@IEAA?AV?$shared_ptr@VDeviceShader@Engine@Spectre@@@std@@AEBVShaderProgram@12@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@4@@Z @ 0x18008A49C (--$LoadInternalHelper@VDeviceVertexShader@Engine@Spectre@@@Shader@Engine@Spectre@@IEAA-AV-$share.c)
 * Callees:
 *     ?GetName@RendererResource@Engine@Spectre@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ @ 0x1800295BC (-GetName@RendererResource@Engine@Spectre@@QEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$alloca.c)
 */

_QWORD *__fastcall Spectre::Engine::Shader::GetName(__int64 a1, _QWORD *a2)
{
  Spectre::Engine::RendererResource::GetName(a1, a2);
  return a2;
}
