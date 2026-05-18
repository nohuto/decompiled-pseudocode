/*
 * XREFs of ??$CreateResource@VDeviceDomainShader@Engine@Spectre@@@RenderDevice@Engine@Spectre@@QEAA?AV?$shared_ptr@VDeviceDomainShader@Engine@Spectre@@@std@@XZ @ 0x180089B7C
 * Callers:
 *     ??$LoadInternalHelper@VDeviceDomainShader@Engine@Spectre@@@Shader@Engine@Spectre@@IEAA?AV?$shared_ptr@VDeviceShader@Engine@Spectre@@@std@@AEBVShaderProgram@12@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@4@@Z @ 0x18008A1BC (--$LoadInternalHelper@VDeviceDomainShader@Engine@Spectre@@@Shader@Engine@Spectre@@IEAA-AV-$share.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?shared_from_this@?$enable_shared_from_this@VScene@Engine@Spectre@@@std@@QEAA?AV?$shared_ptr@VScene@Engine@Spectre@@@2@XZ @ 0x180011D4C (-shared_from_this@-$enable_shared_from_this@VScene@Engine@Spectre@@@std@@QEAA-AV-$shared_ptr@VSc.c)
 *     ?SetDevice@DeviceResource@Engine@Spectre@@IEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x1800296C0 (-SetDevice@DeviceResource@Engine@Spectre@@IEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@s.c)
 *     ??$CreateResource@VDeviceDomainShader@Engine@Spectre@@@ResourceFactory@Engine@Spectre@@QEBA?AV?$shared_ptr@VDeviceDomainShader@Engine@Spectre@@@std@@XZ @ 0x180089BF4 (--$CreateResource@VDeviceDomainShader@Engine@Spectre@@@ResourceFactory@Engine@Spectre@@QEBA-AV-$.c)
 */

__int64 *__fastcall Spectre::Engine::RenderDevice::CreateResource<Spectre::Engine::DeviceDomainShader>(
        __int64 a1,
        __int64 *a2)
{
  __int64 v4; // rbx
  __int64 *v5; // rax
  __int64 v7; // [rsp+28h] [rbp-20h] BYREF
  std::_Ref_count_base *v8; // [rsp+30h] [rbp-18h]

  Spectre::Engine::ResourceFactory::CreateResource<Spectre::Engine::DeviceDomainShader>(a1 + 496);
  v4 = *a2;
  v5 = (__int64 *)std::enable_shared_from_this<Spectre::Engine::Scene>::shared_from_this(a1 + 8, &v7);
  Spectre::Engine::DeviceResource::SetDevice(v4, v5);
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
  return a2;
}
