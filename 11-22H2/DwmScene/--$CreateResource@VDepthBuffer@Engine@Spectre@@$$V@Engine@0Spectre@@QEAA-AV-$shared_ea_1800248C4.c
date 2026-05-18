/*
 * XREFs of ??$CreateResource@VDepthBuffer@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA?AV?$shared_ptr@VDepthBuffer@Engine@Spectre@@@std@@XZ @ 0x1800248C4
 * Callers:
 *     ?CreateBuffers@ImageProcessingManager@Engine@Spectre@@QEAAXPEAVRenderDevice@23@AEBUImageProcessingConfiguration@23@@Z @ 0x180072BE8 (-CreateBuffers@ImageProcessingManager@Engine@Spectre@@QEAAXPEAVRenderDevice@23@AEBUImageProcessi.c)
 *     ?GetOffscreenDepthBuffer@ImageProcessingManager@Engine@Spectre@@QEAA?AV?$shared_ptr@VDepthBuffer@Engine@Spectre@@@std@@W4OffscreenTargetSize@123@@Z @ 0x180073374 (-GetOffscreenDepthBuffer@ImageProcessingManager@Engine@Spectre@@QEAA-AV-$shared_ptr@VDepthBuffer.c)
 *     ?RecreateDepthBuffer@ShadowMapCamera@Engine@Spectre@@AEAAXXZ @ 0x18008E838 (-RecreateDepthBuffer@ShadowMapCamera@Engine@Spectre@@AEAAXXZ.c)
 *     ?CreateDepthBuffer@RenderOutputD3D11@D3D11@Engine@Spectre@@MEAAXXZ @ 0x1800C92E0 (-CreateDepthBuffer@RenderOutputD3D11@D3D11@Engine@Spectre@@MEAAXXZ.c)
 *     ?UpdateLocalDisplayState@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VIHolographicDisplayProvider@Holographic@D3D11@Engine@Spectre@@@std@@AEBV?$shared_ptr@UHolographicDisplayState@Holographic@D3D11@Engine@Spectre@@@7@@Z @ 0x1800D9A70 (-UpdateLocalDisplayState@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@AEAAXAEB.c)
 * Callees:
 *     ??$CreateResource@VDepthBuffer@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA?AV?$shared_ptr@VDepthBuffer@Engine@Spectre@@@std@@W4ResourceDevicePolicy@01@@Z @ 0x180024810 (--$CreateResource@VDepthBuffer@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA-AV-$shared_ptr@VDepthBu.c)
 */

_QWORD *__fastcall Spectre::Engine::Engine::CreateResource<Spectre::Engine::DepthBuffer,>(__int64 a1, _QWORD *a2)
{
  Spectre::Engine::Engine::CreateResource<Spectre::Engine::DepthBuffer,>(a1, a2);
  return a2;
}
