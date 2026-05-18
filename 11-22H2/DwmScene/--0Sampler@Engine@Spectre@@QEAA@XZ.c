/*
 * XREFs of ??0Sampler@Engine@Spectre@@QEAA@XZ @ 0x180054428
 * Callers:
 *     ??$make_shared@VSampler@Engine@Spectre@@$$V@std@@YA?AV?$shared_ptr@VSampler@Engine@Spectre@@@0@XZ @ 0x180017478 (--$make_shared@VSampler@Engine@Spectre@@$$V@std@@YA-AV-$shared_ptr@VSampler@Engine@Spectre@@@0@X.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0SharedResource@Engine@Spectre@@QEAA@W4EType@RendererResource@12@W4Category@PerformanceManager@12@@Z @ 0x180029210 (--0SharedResource@Engine@Spectre@@QEAA@W4EType@RendererResource@12@W4Category@PerformanceManager.c)
 *     ??$make_shared@USamplerStateDesc@Engine@Spectre@@$$V@std@@YA?AV?$shared_ptr@USamplerStateDesc@Engine@Spectre@@@0@XZ @ 0x180054350 (--$make_shared@USamplerStateDesc@Engine@Spectre@@$$V@std@@YA-AV-$shared_ptr@USamplerStateDesc@En.c)
 */

// Hidden C++ exception states: #wind=3
Spectre::Engine::Sampler *__fastcall Spectre::Engine::Sampler::Sampler(Spectre::Engine::Sampler *this)
{
  _QWORD *v2; // rax

  Spectre::Engine::SharedResource::SharedResource(this, 4, 11);
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *(_QWORD *)this = &Spectre::Engine::Sampler::`vftable';
  std::make_shared<Spectre::Engine::SamplerStateDesc,>((_QWORD *)this + 14);
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
