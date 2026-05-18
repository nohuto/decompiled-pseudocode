/*
 * XREFs of ?LoadInternal@VertexShader@Engine@Spectre@@EEAA?AV?$shared_ptr@VDeviceShader@Engine@Spectre@@@std@@AEBVShaderProgram@23@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@5@@Z @ 0x18008B280
 * Callers:
 *     <none>
 * Callees:
 *     ??$LoadInternalHelper@VDeviceVertexShader@Engine@Spectre@@@Shader@Engine@Spectre@@IEAA?AV?$shared_ptr@VDeviceShader@Engine@Spectre@@@std@@AEBVShaderProgram@12@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@4@@Z @ 0x18008A49C (--$LoadInternalHelper@VDeviceVertexShader@Engine@Spectre@@@Shader@Engine@Spectre@@IEAA-AV-$share.c)
 */

_QWORD *__fastcall Spectre::Engine::VertexShader::LoadInternal(__int64 a1, _QWORD *a2, __int64 a3, __int64 *a4)
{
  Spectre::Engine::Shader::LoadInternalHelper<Spectre::Engine::DeviceVertexShader>(a1, a2, a3, a4);
  return a2;
}
