/*
 * XREFs of ??$static_pointer_cast@VDepthBufferD3D11@D3D11@Engine@Spectre@@VDeviceDepthBuffer@34@@std@@YA?AV?$shared_ptr@VDepthBufferD3D11@D3D11@Engine@Spectre@@@0@AEBV?$shared_ptr@VDeviceDepthBuffer@Engine@Spectre@@@0@@Z @ 0x1800CFA04
 * Callers:
 *     ??$spectre_safe_pointer_cast@VDepthBufferD3D11@D3D11@Engine@Spectre@@VDeviceDepthBuffer@34@@Utils@Spectre@@YA?AV?$shared_ptr@VDepthBufferD3D11@D3D11@Engine@Spectre@@@std@@V?$shared_ptr@VDeviceDepthBuffer@Engine@Spectre@@@3@@Z @ 0x1800CF9AC (--$spectre_safe_pointer_cast@VDepthBufferD3D11@D3D11@Engine@Spectre@@VDeviceDepthBuffer@34@@Util.c)
 * Callees:
 *     ??$?0VDeviceDepthBuffer@Engine@Spectre@@@?$shared_ptr@VDepthBufferD3D11@D3D11@Engine@Spectre@@@std@@QEAA@AEBV?$shared_ptr@VDeviceDepthBuffer@Engine@Spectre@@@1@PEAVDepthBufferD3D11@D3D11@Engine@Spectre@@@Z @ 0x1800CF4F4 (--$-0VDeviceDepthBuffer@Engine@Spectre@@@-$shared_ptr@VDepthBufferD3D11@D3D11@Engine@Spectre@@@s.c)
 */

__int64 __fastcall std::static_pointer_cast<Spectre::Engine::D3D11::DepthBufferD3D11,Spectre::Engine::DeviceDepthBuffer>(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v2; // rcx

  std::shared_ptr<Spectre::Engine::D3D11::DepthBufferD3D11>::shared_ptr<Spectre::Engine::D3D11::DepthBufferD3D11>(
    a1,
    (__int64)a2,
    *a2);
  return v2;
}
