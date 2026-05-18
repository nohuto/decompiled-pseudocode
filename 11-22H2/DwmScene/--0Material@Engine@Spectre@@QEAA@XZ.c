/*
 * XREFs of ??0Material@Engine@Spectre@@QEAA@XZ @ 0x18004391C
 * Callers:
 *     ??$make_shared@VMaterial@Engine@Spectre@@$$V@std@@YA?AV?$shared_ptr@VMaterial@Engine@Spectre@@@0@XZ @ 0x18005F5D4 (--$make_shared@VMaterial@Engine@Spectre@@$$V@std@@YA-AV-$shared_ptr@VMaterial@Engine@Spectre@@@0.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??E?$_Atomic_integral@_K$07@std@@QEAA_KXZ @ 0x180012548 (--E-$_Atomic_integral@_K$07@std@@QEAA_KXZ.c)
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x180028FD4 (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 *     ??0SharedResource@Engine@Spectre@@QEAA@W4EType@RendererResource@12@W4Category@PerformanceManager@12@@Z @ 0x180029210 (--0SharedResource@Engine@Spectre@@QEAA@W4EType@RendererResource@12@W4Category@PerformanceManager.c)
 */

// Hidden C++ exception states: #wind=5
Spectre::Engine::Material *__fastcall Spectre::Engine::Material::Material(Spectre::Engine::Material *this)
{
  unsigned __int64 size_of; // rax
  _QWORD *v3; // rax

  Spectre::Engine::SharedResource::SharedResource(this, 0, 10);
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *(_QWORD *)this = &Spectre::Engine::Material::`vftable';
  *((_WORD *)this + 56) = 2;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_BYTE *)this + 184) = 0;
  *((_DWORD *)this + 47) = 0;
  *((_QWORD *)this + 24) = std::_Atomic_integral<unsigned __int64,8>::operator++((__int64)&Spectre::Engine::Material::m_lastID);
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  size_of = std::_Get_size_of_n<40>(1uLL);
  v3 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *v3 = v3;
  v3[1] = v3;
  v3[2] = v3;
  *((_WORD *)v3 + 12) = 257;
  *((_QWORD *)this + 25) = v3;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 24) |= 0xFFFFFFFF00000000uLL;
  return this;
}
