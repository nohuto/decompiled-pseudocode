/*
 * XREFs of ?EndFrame@RenderDevice@Engine@Spectre@@UEAAXM@Z @ 0x180026480
 * Callers:
 *     ?EndFrame@RenderDeviceD3D11@D3D11@Engine@Spectre@@UEAAXM@Z @ 0x1800C5680 (-EndFrame@RenderDeviceD3D11@D3D11@Engine@Spectre@@UEAAXM@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall Spectre::Engine::RenderDevice::EndFrame(Spectre::Engine::RenderDevice *this, float a2)
{
  Spectre::Engine::RenderDevice::UpdateFrameRate(this, a2);
}
