/*
 * XREFs of ?SetRenderTargetDynamicScaling@RenderDevice@Engine@Spectre@@UEAA_NMM@Z @ 0x1800270E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDefaultOutput@RenderDevice@Engine@Spectre@@QEAAAEAVIRenderOutput@23@XZ @ 0x180026528 (-GetDefaultOutput@RenderDevice@Engine@Spectre@@QEAAAEAVIRenderOutput@23@XZ.c)
 */

__int64 __fastcall Spectre::Engine::RenderDevice::SetRenderTargetDynamicScaling(
        Spectre::Engine::RenderDevice *this,
        float a2,
        float a3)
{
  struct Spectre::Engine::IRenderOutput *DefaultOutput; // rax

  DefaultOutput = Spectre::Engine::RenderDevice::GetDefaultOutput(this);
  return (*(__int64 (__fastcall **)(struct Spectre::Engine::IRenderOutput *))(*(_QWORD *)DefaultOutput + 72LL))(DefaultOutput);
}
