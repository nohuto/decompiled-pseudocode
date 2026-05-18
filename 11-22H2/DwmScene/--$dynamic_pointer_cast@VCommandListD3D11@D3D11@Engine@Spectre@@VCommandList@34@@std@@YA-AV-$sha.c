/*
 * XREFs of ??$dynamic_pointer_cast@VCommandListD3D11@D3D11@Engine@Spectre@@VCommandList@34@@std@@YA?AV?$shared_ptr@VCommandListD3D11@D3D11@Engine@Spectre@@@0@AEBV?$shared_ptr@VCommandList@Engine@Spectre@@@0@@Z @ 0x1800C8AB8
 * Callers:
 *     ?ClearResources@RenderOutputD3D11@D3D11@Engine@Spectre@@UEAAXXZ @ 0x1800C9120 (-ClearResources@RenderOutputD3D11@D3D11@Engine@Spectre@@UEAAXXZ.c)
 *     ?FinalizeSubmit@CommandListD3D11@D3D11@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@@Z @ 0x1800D01E0 (-FinalizeSubmit@CommandListD3D11@D3D11@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VCommandList@Engine.c)
 *     ?Begin@GpuQueryD3D11@D3D11@Engine@Spectre@@UEAAXV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@@Z @ 0x1800D7C80 (-Begin@GpuQueryD3D11@D3D11@Engine@Spectre@@UEAAXV-$shared_ptr@VCommandList@Engine@Spectre@@@std@.c)
 *     ?End@GpuQueryD3D11@D3D11@Engine@Spectre@@UEAAXV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@0@Z @ 0x1800D7E20 (-End@GpuQueryD3D11@D3D11@Engine@Spectre@@UEAAXV-$shared_ptr@VCommandList@Engine@Spectre@@@std@@0.c)
 *     ?ClearResources@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@UEAAXXZ @ 0x1800D8F80 (-ClearResources@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@UEAAXXZ.c)
 * Callees:
 *     ??$?0VCommandList@Engine@Spectre@@@?$shared_ptr@VCommandListD3D11@D3D11@Engine@Spectre@@@std@@QEAA@AEBV?$shared_ptr@VCommandList@Engine@Spectre@@@1@PEAVCommandListD3D11@D3D11@Engine@Spectre@@@Z @ 0x1800C1FD0 (--$-0VCommandList@Engine@Spectre@@@-$shared_ptr@VCommandListD3D11@D3D11@Engine@Spectre@@@std@@QE.c)
 *     __RTDynamicCast_0 @ 0x1800E38E0 (__RTDynamicCast_0.c)
 */

_QWORD *__fastcall std::dynamic_pointer_cast<Spectre::Engine::D3D11::CommandListD3D11,Spectre::Engine::CommandList>(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v4; // rax

  v4 = _RTDynamicCast_0(
         *a2,
         0LL,
         &Spectre::Engine::CommandList `RTTI Type Descriptor',
         &Spectre::Engine::D3D11::CommandListD3D11 `RTTI Type Descriptor',
         0);
  if ( v4 )
  {
    std::shared_ptr<Spectre::Engine::D3D11::CommandListD3D11>::shared_ptr<Spectre::Engine::D3D11::CommandListD3D11>(
      a1,
      (__int64)a2,
      v4);
  }
  else
  {
    *a1 = 0LL;
    a1[1] = 0LL;
  }
  return a1;
}
