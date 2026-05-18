/*
 * XREFs of ?LoadInternal@DomainShader@Engine@Spectre@@EEAA?AV?$shared_ptr@VDeviceShader@Engine@Spectre@@@std@@AEBVShaderProgram@23@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@5@@Z @ 0x18008B200
 * Callers:
 *     <none>
 * Callees:
 *     ??$LoadInternalHelper@VDeviceDomainShader@Engine@Spectre@@@Shader@Engine@Spectre@@IEAA?AV?$shared_ptr@VDeviceShader@Engine@Spectre@@@std@@AEBVShaderProgram@12@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@4@@Z @ 0x18008A1BC (--$LoadInternalHelper@VDeviceDomainShader@Engine@Spectre@@@Shader@Engine@Spectre@@IEAA-AV-$share.c)
 */

_QWORD *__fastcall Spectre::Engine::DomainShader::LoadInternal(__int64 a1, _QWORD *a2, __int64 a3, __int64 *a4)
{
  Spectre::Engine::Shader::LoadInternalHelper<Spectre::Engine::DeviceDomainShader>(a1, a2, a3, a4);
  return a2;
}
