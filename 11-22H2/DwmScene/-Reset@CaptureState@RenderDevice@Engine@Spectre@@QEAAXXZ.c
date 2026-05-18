/*
 * XREFs of ?Reset@CaptureState@RenderDevice@Engine@Spectre@@QEAAXXZ @ 0x1800270B4
 * Callers:
 *     ??0CaptureState@RenderDevice@Engine@Spectre@@QEAA@XZ @ 0x180025428 (--0CaptureState@RenderDevice@Engine@Spectre@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::RenderDevice::CaptureState::Reset(Spectre::Engine::RenderDevice::CaptureState *this)
{
  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 13) = 1065353216;
}
