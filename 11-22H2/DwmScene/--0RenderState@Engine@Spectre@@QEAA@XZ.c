/*
 * XREFs of ??0RenderState@Engine@Spectre@@QEAA@XZ @ 0x180088148
 * Callers:
 *     ??$make_shared@VRenderState@Engine@Spectre@@$$V@std@@YA?AV?$shared_ptr@VRenderState@Engine@Spectre@@@0@XZ @ 0x18004375C (--$make_shared@VRenderState@Engine@Spectre@@$$V@std@@YA-AV-$shared_ptr@VRenderState@Engine@Spect.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0SharedResource@Engine@Spectre@@QEAA@W4EType@RendererResource@12@W4Category@PerformanceManager@12@@Z @ 0x180029210 (--0SharedResource@Engine@Spectre@@QEAA@W4EType@RendererResource@12@W4Category@PerformanceManager.c)
 */

// Hidden C++ exception states: #wind=3
Spectre::Engine::RenderState *__fastcall Spectre::Engine::RenderState::RenderState(Spectre::Engine::RenderState *this)
{
  _QWORD *v2; // rax

  Spectre::Engine::SharedResource::SharedResource(this, 9, 4);
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *(_QWORD *)this = &Spectre::Engine::RenderState::`vftable';
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  v2 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
  *v2 = v2;
  v2[1] = v2;
  v2[2] = v2;
  *((_WORD *)v2 + 12) = 257;
  *((_QWORD *)this + 16) = v2;
  return this;
}
