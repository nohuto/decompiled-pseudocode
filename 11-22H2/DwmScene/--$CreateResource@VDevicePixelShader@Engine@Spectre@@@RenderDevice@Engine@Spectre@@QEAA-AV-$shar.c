/*
 * XREFs of ??$CreateResource@VDevicePixelShader@Engine@Spectre@@@RenderDevice@Engine@Spectre@@QEAA?AV?$shared_ptr@VDevicePixelShader@Engine@Spectre@@@std@@XZ @ 0x180089F3C
 * Callers:
 *     ??$LoadInternalHelper@VDevicePixelShader@Engine@Spectre@@@Shader@Engine@Spectre@@IEAA?AV?$shared_ptr@VDeviceShader@Engine@Spectre@@@std@@AEBVShaderProgram@12@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@4@@Z @ 0x18008A3E4 (--$LoadInternalHelper@VDevicePixelShader@Engine@Spectre@@@Shader@Engine@Spectre@@IEAA-AV-$shared.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?shared_from_this@?$enable_shared_from_this@VScene@Engine@Spectre@@@std@@QEAA?AV?$shared_ptr@VScene@Engine@Spectre@@@2@XZ @ 0x180011D4C (-shared_from_this@-$enable_shared_from_this@VScene@Engine@Spectre@@@std@@QEAA-AV-$shared_ptr@VSc.c)
 *     ?SetDevice@DeviceResource@Engine@Spectre@@IEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x1800296C0 (-SetDevice@DeviceResource@Engine@Spectre@@IEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@s.c)
 *     ??$CreateResource@VDevicePixelShader@Engine@Spectre@@@ResourceFactory@Engine@Spectre@@QEBA?AV?$shared_ptr@VDevicePixelShader@Engine@Spectre@@@std@@XZ @ 0x180089FB4 (--$CreateResource@VDevicePixelShader@Engine@Spectre@@@ResourceFactory@Engine@Spectre@@QEBA-AV-$s.c)
 */

__int64 *__fastcall Spectre::Engine::RenderDevice::CreateResource<Spectre::Engine::DevicePixelShader>(
        __int64 a1,
        __int64 *a2)
{
  __int64 v4; // rbx
  __int64 *v5; // rax
  __int64 v7; // [rsp+28h] [rbp-20h] BYREF
  std::_Ref_count_base *v8; // [rsp+30h] [rbp-18h]

  Spectre::Engine::ResourceFactory::CreateResource<Spectre::Engine::DevicePixelShader>(a1 + 496);
  v4 = *a2;
  v5 = (__int64 *)std::enable_shared_from_this<Spectre::Engine::Scene>::shared_from_this(a1 + 8, &v7);
  Spectre::Engine::DeviceResource::SetDevice(v4, v5);
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
  return a2;
}
