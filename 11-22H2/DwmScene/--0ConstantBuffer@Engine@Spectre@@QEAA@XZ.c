/*
 * XREFs of ??0ConstantBuffer@Engine@Spectre@@QEAA@XZ @ 0x18009BBA8
 * Callers:
 *     ??$make_shared@VConstantBuffer@Engine@Spectre@@$$V@std@@YA?AV?$shared_ptr@VConstantBuffer@Engine@Spectre@@@0@XZ @ 0x180084348 (--$make_shared@VConstantBuffer@Engine@Spectre@@$$V@std@@YA-AV-$shared_ptr@VConstantBuffer@Engine.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0SharedResource@Engine@Spectre@@QEAA@W4EType@RendererResource@12@W4Category@PerformanceManager@12@@Z @ 0x180029210 (--0SharedResource@Engine@Spectre@@QEAA@W4EType@RendererResource@12@W4Category@PerformanceManager.c)
 */

// Hidden C++ exception states: #wind=2
Spectre::Engine::ConstantBuffer *__fastcall Spectre::Engine::ConstantBuffer::ConstantBuffer(
        Spectre::Engine::ConstantBuffer *this)
{
  _QWORD *v2; // rax

  Spectre::Engine::SharedResource::SharedResource(this, 6, 7);
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *(_QWORD *)this = &Spectre::Engine::ConstantBuffer::`vftable';
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  v2 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
  *v2 = v2;
  v2[1] = v2;
  v2[2] = v2;
  *((_WORD *)v2 + 12) = 257;
  *((_QWORD *)this + 14) = v2;
  return this;
}
