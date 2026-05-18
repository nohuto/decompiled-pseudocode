/*
 * XREFs of ??0Texture@Engine@Spectre@@QEAA@XZ @ 0x180055258
 * Callers:
 *     ??$make_shared@VTexture@Engine@Spectre@@$$V@std@@YA?AV?$shared_ptr@VTexture@Engine@Spectre@@@0@XZ @ 0x180017544 (--$make_shared@VTexture@Engine@Spectre@@$$V@std@@YA-AV-$shared_ptr@VTexture@Engine@Spectre@@@0@X.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??E?$_Atomic_integral@_K$07@std@@QEAA_KXZ @ 0x180012548 (--E-$_Atomic_integral@_K$07@std@@QEAA_KXZ.c)
 *     ??0SharedResource@Engine@Spectre@@QEAA@W4EType@RendererResource@12@W4Category@PerformanceManager@12@@Z @ 0x180029210 (--0SharedResource@Engine@Spectre@@QEAA@W4EType@RendererResource@12@W4Category@PerformanceManager.c)
 */

// Hidden C++ exception states: #wind=2
Spectre::Engine::Texture *__fastcall Spectre::Engine::Texture::Texture(Spectre::Engine::Texture *this)
{
  _QWORD *v2; // rax
  int v3; // eax

  Spectre::Engine::SharedResource::SharedResource(this, 1, 11);
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *(_QWORD *)this = &Spectre::Engine::Texture::`vftable';
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  v2 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
  *v2 = v2;
  v2[1] = v2;
  v2[2] = v2;
  *((_WORD *)v2 + 12) = 257;
  *((_QWORD *)this + 14) = v2;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_DWORD *)this + 36) = 0;
  *((_DWORD *)this + 37) = 0;
  v3 = std::_Atomic_integral<unsigned __int64,8>::operator++((__int64)&Spectre::Engine::Texture::s_lastID);
  *((_BYTE *)this + 160) = 0;
  *((_QWORD *)this + 19) = *(_QWORD *)&v3 | 0xFFFFFFFF00000000uLL;
  return this;
}
