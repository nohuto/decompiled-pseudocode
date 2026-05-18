/*
 * XREFs of ??0RenderStateState@Engine@Spectre@@QEAA@AEBVState@12@@Z @ 0x18009EA28
 * Callers:
 *     ??0CommandListState@Engine@Spectre@@QEAA@PEAVRenderDevice@12@AEBVState@12@@Z @ 0x18009F5A4 (--0CommandListState@Engine@Spectre@@QEAA@PEAVRenderDevice@12@AEBVState@12@@Z.c)
 * Callees:
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ?Reset@RenderStateState@Engine@Spectre@@UEAAXXZ @ 0x18009EB00 (-Reset@RenderStateState@Engine@Spectre@@UEAAXXZ.c)
 */

Spectre::Engine::RenderStateState *__fastcall Spectre::Engine::RenderStateState::RenderStateState(
        Spectre::Engine::RenderStateState *this,
        const struct Spectre::Engine::State *a2)
{
  *(_QWORD *)this = &Spectre::Engine::RenderStateState::`vftable';
  std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
    (_QWORD *)this + 1,
    (_QWORD *)a2 + 90);
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *(_QWORD *)((char *)this + 44) = 0LL;
  *(_QWORD *)((char *)this + 52) = 0LL;
  Spectre::Engine::RenderStateState::Reset(this);
  return this;
}
