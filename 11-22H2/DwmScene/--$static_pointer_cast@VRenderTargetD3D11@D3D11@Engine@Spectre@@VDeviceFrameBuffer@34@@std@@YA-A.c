/*
 * XREFs of ??$static_pointer_cast@VRenderTargetD3D11@D3D11@Engine@Spectre@@VDeviceFrameBuffer@34@@std@@YA?AV?$shared_ptr@VRenderTargetD3D11@D3D11@Engine@Spectre@@@0@AEBV?$shared_ptr@VDeviceFrameBuffer@Engine@Spectre@@@0@@Z @ 0x1800CFA20
 * Callers:
 *     ??$spectre_safe_pointer_cast@VRenderTargetD3D11@D3D11@Engine@Spectre@@VDeviceFrameBuffer@34@@Utils@Spectre@@YA?AV?$shared_ptr@VRenderTargetD3D11@D3D11@Engine@Spectre@@@std@@V?$shared_ptr@VDeviceFrameBuffer@Engine@Spectre@@@3@@Z @ 0x1800CF9D8 (--$spectre_safe_pointer_cast@VRenderTargetD3D11@D3D11@Engine@Spectre@@VDeviceFrameBuffer@34@@Uti.c)
 * Callees:
 *     ??$?0VDeviceFrameBuffer@Engine@Spectre@@@?$shared_ptr@VRenderTargetD3D11@D3D11@Engine@Spectre@@@std@@QEAA@AEBV?$shared_ptr@VDeviceFrameBuffer@Engine@Spectre@@@1@PEAVRenderTargetD3D11@D3D11@Engine@Spectre@@@Z @ 0x1800CF520 (--$-0VDeviceFrameBuffer@Engine@Spectre@@@-$shared_ptr@VRenderTargetD3D11@D3D11@Engine@Spectre@@@.c)
 */

__int64 __fastcall std::static_pointer_cast<Spectre::Engine::D3D11::RenderTargetD3D11,Spectre::Engine::DeviceFrameBuffer>(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v2; // rcx

  std::shared_ptr<Spectre::Engine::D3D11::RenderTargetD3D11>::shared_ptr<Spectre::Engine::D3D11::RenderTargetD3D11>(
    a1,
    (__int64)a2,
    *a2);
  return v2;
}
