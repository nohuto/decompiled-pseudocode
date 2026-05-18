/*
 * XREFs of ??0Mesh@Engine@Spectre@@QEAA@XZ @ 0x180047B64
 * Callers:
 *     ??$make_shared@VMesh@Engine@Spectre@@$$V@std@@YA?AV?$shared_ptr@VMesh@Engine@Spectre@@@0@XZ @ 0x180017288 (--$make_shared@VMesh@Engine@Spectre@@$$V@std@@YA-AV-$shared_ptr@VMesh@Engine@Spectre@@@0@XZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0SharedResource@Engine@Spectre@@QEAA@W4EType@RendererResource@12@W4Category@PerformanceManager@12@@Z @ 0x180029210 (--0SharedResource@Engine@Spectre@@QEAA@W4EType@RendererResource@12@W4Category@PerformanceManager.c)
 */

// Hidden C++ exception states: #wind=2
Spectre::Engine::Mesh *__fastcall Spectre::Engine::Mesh::Mesh(Spectre::Engine::Mesh *this)
{
  _QWORD *v2; // rax

  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  Spectre::Engine::SharedResource::SharedResource(this, 5, 12);
  *(_QWORD *)this = &Spectre::Engine::Mesh::`vftable';
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
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 1LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_DWORD *)this + 76) = 1;
  *((_WORD *)this + 154) = 0;
  *((_BYTE *)this + 310) = 0;
  return this;
}
