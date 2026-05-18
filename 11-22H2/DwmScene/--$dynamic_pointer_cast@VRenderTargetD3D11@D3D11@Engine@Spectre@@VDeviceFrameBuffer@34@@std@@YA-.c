/*
 * XREFs of ??$dynamic_pointer_cast@VRenderTargetD3D11@D3D11@Engine@Spectre@@VDeviceFrameBuffer@34@@std@@YA?AV?$shared_ptr@VRenderTargetD3D11@D3D11@Engine@Spectre@@@0@AEBV?$shared_ptr@VDeviceFrameBuffer@Engine@Spectre@@@0@@Z @ 0x1800CF7B4
 * Callers:
 *     ?SubmitRenderTargets@CommandListD3D11@D3D11@Engine@Spectre@@MEAAXAEBV?$array@V?$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@$07@std@@AEBV?$shared_ptr@VDepthBuffer@Engine@Spectre@@@6@@Z @ 0x1800D15E0 (-SubmitRenderTargets@CommandListD3D11@D3D11@Engine@Spectre@@MEAAXAEBV-$array@V-$shared_ptr@VFram.c)
 * Callees:
 *     ??$?0VDeviceFrameBuffer@Engine@Spectre@@@?$shared_ptr@VRenderTargetD3D11@D3D11@Engine@Spectre@@@std@@QEAA@AEBV?$shared_ptr@VDeviceFrameBuffer@Engine@Spectre@@@1@PEAVRenderTargetD3D11@D3D11@Engine@Spectre@@@Z @ 0x1800CF520 (--$-0VDeviceFrameBuffer@Engine@Spectre@@@-$shared_ptr@VRenderTargetD3D11@D3D11@Engine@Spectre@@@.c)
 *     __RTDynamicCast_0 @ 0x1800E38E0 (__RTDynamicCast_0.c)
 */

_QWORD *__fastcall std::dynamic_pointer_cast<Spectre::Engine::D3D11::RenderTargetD3D11,Spectre::Engine::DeviceFrameBuffer>(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v4; // rax

  v4 = _RTDynamicCast_0(
         *a2,
         0LL,
         &Spectre::Engine::DeviceFrameBuffer `RTTI Type Descriptor',
         &Spectre::Engine::D3D11::RenderTargetD3D11 `RTTI Type Descriptor',
         0);
  if ( v4 )
  {
    std::shared_ptr<Spectre::Engine::D3D11::RenderTargetD3D11>::shared_ptr<Spectre::Engine::D3D11::RenderTargetD3D11>(
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
