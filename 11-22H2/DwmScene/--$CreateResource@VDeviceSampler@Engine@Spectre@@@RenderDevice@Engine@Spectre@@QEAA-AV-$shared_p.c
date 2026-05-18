/*
 * XREFs of ??$CreateResource@VDeviceSampler@Engine@Spectre@@@RenderDevice@Engine@Spectre@@QEAA?AV?$shared_ptr@VDeviceSampler@Engine@Spectre@@@std@@XZ @ 0x1800540B0
 * Callers:
 *     ?AttachDevice@Sampler@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180054610 (-AttachDevice@Sampler@Engine@Spectre@@UEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@.c)
 *     ?Create@DepthBufferD3D11@D3D11@Engine@Spectre@@UEAAXIIW4Format@34@I@Z @ 0x1800D5E20 (-Create@DepthBufferD3D11@D3D11@Engine@Spectre@@UEAAXIIW4Format@34@I@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?shared_from_this@?$enable_shared_from_this@VScene@Engine@Spectre@@@std@@QEAA?AV?$shared_ptr@VScene@Engine@Spectre@@@2@XZ @ 0x180011D4C (-shared_from_this@-$enable_shared_from_this@VScene@Engine@Spectre@@@std@@QEAA-AV-$shared_ptr@VSc.c)
 *     ?SetDevice@DeviceResource@Engine@Spectre@@IEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x1800296C0 (-SetDevice@DeviceResource@Engine@Spectre@@IEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@s.c)
 *     ??$CreateResource@VDeviceSampler@Engine@Spectre@@@ResourceFactory@Engine@Spectre@@QEBA?AV?$shared_ptr@VDeviceSampler@Engine@Spectre@@@std@@XZ @ 0x180054128 (--$CreateResource@VDeviceSampler@Engine@Spectre@@@ResourceFactory@Engine@Spectre@@QEBA-AV-$share.c)
 */

__int64 *__fastcall Spectre::Engine::RenderDevice::CreateResource<Spectre::Engine::DeviceSampler>(
        __int64 a1,
        __int64 *a2)
{
  __int64 v4; // rbx
  __int64 *v5; // rax
  __int64 v7; // [rsp+28h] [rbp-20h] BYREF
  std::_Ref_count_base *v8; // [rsp+30h] [rbp-18h]

  Spectre::Engine::ResourceFactory::CreateResource<Spectre::Engine::DeviceSampler>(a1 + 496);
  v4 = *a2;
  v5 = (__int64 *)std::enable_shared_from_this<Spectre::Engine::Scene>::shared_from_this(a1 + 8, &v7);
  Spectre::Engine::DeviceResource::SetDevice(v4, v5);
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
  return a2;
}
