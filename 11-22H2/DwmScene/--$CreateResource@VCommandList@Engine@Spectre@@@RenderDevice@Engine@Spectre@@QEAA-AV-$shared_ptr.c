/*
 * XREFs of ??$CreateResource@VCommandList@Engine@Spectre@@@RenderDevice@Engine@Spectre@@QEAA?AV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@XZ @ 0x1800246D0
 * Callers:
 *     ?CreateCommandList@RenderDevice@Engine@Spectre@@QEAA?AV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@AEBVState@23@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@5@@Z @ 0x18002612C (-CreateCommandList@RenderDevice@Engine@Spectre@@QEAA-AV-$shared_ptr@VCommandList@Engine@Spectre@.c)
 *     ?InitializeRenderer@RenderDeviceD3D11@D3D11@Engine@Spectre@@MEAAXXZ @ 0x1800C5CA0 (-InitializeRenderer@RenderDeviceD3D11@D3D11@Engine@Spectre@@MEAAXXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?shared_from_this@?$enable_shared_from_this@VScene@Engine@Spectre@@@std@@QEAA?AV?$shared_ptr@VScene@Engine@Spectre@@@2@XZ @ 0x180011D4C (-shared_from_this@-$enable_shared_from_this@VScene@Engine@Spectre@@@std@@QEAA-AV-$shared_ptr@VSc.c)
 *     ??$CreateResource@VCommandList@Engine@Spectre@@@ResourceFactory@Engine@Spectre@@QEBA?AV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@XZ @ 0x180024748 (--$CreateResource@VCommandList@Engine@Spectre@@@ResourceFactory@Engine@Spectre@@QEBA-AV-$shared_.c)
 *     ?SetDevice@DeviceResource@Engine@Spectre@@IEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x1800296C0 (-SetDevice@DeviceResource@Engine@Spectre@@IEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@s.c)
 */

__int64 *__fastcall Spectre::Engine::RenderDevice::CreateResource<Spectre::Engine::CommandList>(
        __int64 a1,
        __int64 *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v7; // [rsp+28h] [rbp-20h] BYREF
  std::_Ref_count_base *v8; // [rsp+30h] [rbp-18h]

  Spectre::Engine::ResourceFactory::CreateResource<Spectre::Engine::CommandList>(a1 + 496);
  v4 = *a2;
  v5 = std::enable_shared_from_this<Spectre::Engine::Scene>::shared_from_this(a1 + 8, &v7);
  Spectre::Engine::DeviceResource::SetDevice(v4, v5);
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
  return a2;
}
