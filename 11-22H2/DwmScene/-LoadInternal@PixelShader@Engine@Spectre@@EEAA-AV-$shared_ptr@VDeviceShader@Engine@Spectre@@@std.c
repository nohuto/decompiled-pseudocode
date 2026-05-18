/*
 * XREFs of ?LoadInternal@PixelShader@Engine@Spectre@@EEAA?AV?$shared_ptr@VDeviceShader@Engine@Spectre@@@std@@AEBVShaderProgram@23@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@5@@Z @ 0x18008B260
 * Callers:
 *     <none>
 * Callees:
 *     ??$LoadInternalHelper@VDevicePixelShader@Engine@Spectre@@@Shader@Engine@Spectre@@IEAA?AV?$shared_ptr@VDeviceShader@Engine@Spectre@@@std@@AEBVShaderProgram@12@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@4@@Z @ 0x18008A3E4 (--$LoadInternalHelper@VDevicePixelShader@Engine@Spectre@@@Shader@Engine@Spectre@@IEAA-AV-$shared.c)
 */

_QWORD *__fastcall Spectre::Engine::PixelShader::LoadInternal(__int64 a1, _QWORD *a2, __int64 a3, __int64 *a4)
{
  Spectre::Engine::Shader::LoadInternalHelper<Spectre::Engine::DevicePixelShader>(a1, a2, a3, a4);
  return a2;
}
