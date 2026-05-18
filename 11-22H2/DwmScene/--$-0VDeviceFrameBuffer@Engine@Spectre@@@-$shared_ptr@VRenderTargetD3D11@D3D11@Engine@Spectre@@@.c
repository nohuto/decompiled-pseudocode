/*
 * XREFs of ??$?0VDeviceFrameBuffer@Engine@Spectre@@@?$shared_ptr@VRenderTargetD3D11@D3D11@Engine@Spectre@@@std@@QEAA@AEBV?$shared_ptr@VDeviceFrameBuffer@Engine@Spectre@@@1@PEAVRenderTargetD3D11@D3D11@Engine@Spectre@@@Z @ 0x1800CF520
 * Callers:
 *     ??$dynamic_pointer_cast@VRenderTargetD3D11@D3D11@Engine@Spectre@@VDeviceFrameBuffer@34@@std@@YA?AV?$shared_ptr@VRenderTargetD3D11@D3D11@Engine@Spectre@@@0@AEBV?$shared_ptr@VDeviceFrameBuffer@Engine@Spectre@@@0@@Z @ 0x1800CF7B4 (--$dynamic_pointer_cast@VRenderTargetD3D11@D3D11@Engine@Spectre@@VDeviceFrameBuffer@34@@std@@YA-.c)
 *     ??$static_pointer_cast@VRenderTargetD3D11@D3D11@Engine@Spectre@@VDeviceFrameBuffer@34@@std@@YA?AV?$shared_ptr@VRenderTargetD3D11@D3D11@Engine@Spectre@@@0@AEBV?$shared_ptr@VDeviceFrameBuffer@Engine@Spectre@@@0@@Z @ 0x1800CFA20 (--$static_pointer_cast@VRenderTargetD3D11@D3D11@Engine@Spectre@@VDeviceFrameBuffer@34@@std@@YA-A.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::shared_ptr<Spectre::Engine::D3D11::RenderTargetD3D11>::shared_ptr<Spectre::Engine::D3D11::RenderTargetD3D11>(
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
