/*
 * XREFs of ?Reset@RenderTargetState@Engine@Spectre@@UEAAXXZ @ 0x18009F110
 * Callers:
 *     ?Reset@CommandListState@Engine@Spectre@@UEAAXXZ @ 0x18009FA80 (-Reset@CommandListState@Engine@Spectre@@UEAAXXZ.c)
 * Callees:
 *     ??4?$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800124F8 (--4-$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??4?$array@V?$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@$07@std@@QEAAAEAV01@AEBV01@@Z @ 0x18009EFDC (--4-$array@V-$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@$07@std@@QEAAAEAV01@AEBV01@@Z.c)
 */

void __fastcall Spectre::Engine::RenderTargetState::Reset(Spectre::Engine::RenderTargetState *this)
{
  *((_BYTE *)this + 440) = 1;
  std::array<std::shared_ptr<Spectre::Engine::FrameBuffer>,8>::operator=((__int64 *)this + 1, (__int64)this + 264);
  std::shared_ptr<Spectre::Engine::Light>::operator=((__int64 *)this + 49, (_QWORD *)this + 53);
  Spectre::Engine::RenderTargetState::ClearActiveRenderTargets(this);
}
