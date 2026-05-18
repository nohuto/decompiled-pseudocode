/*
 * XREFs of ??0VertexLayout@Engine@Spectre@@QEAA@XZ @ 0x18008BCDC
 * Callers:
 *     ??$CreateResource@VVertexLayout@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA?AV?$shared_ptr@VVertexLayout@Engine@Spectre@@@std@@W4ResourceDevicePolicy@01@@Z @ 0x180086044 (--$CreateResource@VVertexLayout@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA-AV-$shared_ptr@VVertex.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0SharedResource@Engine@Spectre@@QEAA@W4EType@RendererResource@12@W4Category@PerformanceManager@12@@Z @ 0x180029210 (--0SharedResource@Engine@Spectre@@QEAA@W4EType@RendererResource@12@W4Category@PerformanceManager.c)
 *     ??0VertexLayoutBase@Engine@Spectre@@QEAA@XZ @ 0x18008BD68 (--0VertexLayoutBase@Engine@Spectre@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
Spectre::Engine::VertexLayout *__fastcall Spectre::Engine::VertexLayout::VertexLayout(
        Spectre::Engine::VertexLayout *this)
{
  _QWORD *v2; // rax

  Spectre::Engine::SharedResource::SharedResource(this, 12, 0);
  Spectre::Engine::VertexLayoutBase::VertexLayoutBase((Spectre::Engine::VertexLayout *)((char *)this + 96));
  *(_QWORD *)this = &Spectre::Engine::VertexLayout::`vftable';
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  v2 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
  *v2 = v2;
  v2[1] = v2;
  v2[2] = v2;
  *((_WORD *)v2 + 12) = 257;
  *((_QWORD *)this + 18) = v2;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  return this;
}
