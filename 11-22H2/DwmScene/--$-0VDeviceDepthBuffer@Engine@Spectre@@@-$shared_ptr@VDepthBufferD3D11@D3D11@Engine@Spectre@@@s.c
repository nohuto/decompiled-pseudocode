/*
 * XREFs of ??$?0VDeviceDepthBuffer@Engine@Spectre@@@?$shared_ptr@VDepthBufferD3D11@D3D11@Engine@Spectre@@@std@@QEAA@AEBV?$shared_ptr@VDeviceDepthBuffer@Engine@Spectre@@@1@PEAVDepthBufferD3D11@D3D11@Engine@Spectre@@@Z @ 0x1800CF4F4
 * Callers:
 *     ??$dynamic_pointer_cast@VDepthBufferD3D11@D3D11@Engine@Spectre@@VDeviceDepthBuffer@34@@std@@YA?AV?$shared_ptr@VDepthBufferD3D11@D3D11@Engine@Spectre@@@0@AEBV?$shared_ptr@VDeviceDepthBuffer@Engine@Spectre@@@0@@Z @ 0x1800CF54C (--$dynamic_pointer_cast@VDepthBufferD3D11@D3D11@Engine@Spectre@@VDeviceDepthBuffer@34@@std@@YA-A.c)
 *     ??$static_pointer_cast@VDepthBufferD3D11@D3D11@Engine@Spectre@@VDeviceDepthBuffer@34@@std@@YA?AV?$shared_ptr@VDepthBufferD3D11@D3D11@Engine@Spectre@@@0@AEBV?$shared_ptr@VDeviceDepthBuffer@Engine@Spectre@@@0@@Z @ 0x1800CFA04 (--$static_pointer_cast@VDepthBufferD3D11@D3D11@Engine@Spectre@@VDeviceDepthBuffer@34@@std@@YA-AV.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::shared_ptr<Spectre::Engine::D3D11::DepthBufferD3D11>::shared_ptr<Spectre::Engine::D3D11::DepthBufferD3D11>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v3 = *(_QWORD *)(a2 + 8);
  if ( v3 )
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
  *a1 = a3;
  a1[1] = *(_QWORD *)(a2 + 8);
  return a1;
}
