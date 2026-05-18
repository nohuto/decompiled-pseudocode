/*
 * XREFs of ??0DepthBuffer@Engine@Spectre@@QEAA@XZ @ 0x18006EF84
 * Callers:
 *     ??$make_shared@VDepthBuffer@Engine@Spectre@@$$V@std@@YA?AV?$shared_ptr@VDepthBuffer@Engine@Spectre@@@0@XZ @ 0x180025324 (--$make_shared@VDepthBuffer@Engine@Spectre@@$$V@std@@YA-AV-$shared_ptr@VDepthBuffer@Engine@Spect.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x18000C8C8 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@QEBD$$QEAV10@@Z @ 0x18001C668 (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_tra_ea_18001C668.c)
 *     ??B?$atomic@H@std@@QEBAHXZ @ 0x18001D348 (--B-$atomic@H@std@@QEBAHXZ.c)
 *     ??E?$_Atomic_integral@H$03@std@@QEAAHH@Z @ 0x18002116C (--E-$_Atomic_integral@H$03@std@@QEAAHH@Z.c)
 *     ??$_Integral_to_string@DH@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@H@Z @ 0x180027C00 (--$_Integral_to_string@DH@std@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@0@H@.c)
 *     ??0SharedResource@Engine@Spectre@@QEAA@W4EType@RendererResource@12@W4Category@PerformanceManager@12@@Z @ 0x180029210 (--0SharedResource@Engine@Spectre@@QEAA@W4EType@RendererResource@12@W4Category@PerformanceManager.c)
 *     ?SetName@RendererResource@Engine@Spectre@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x1800297A4 (-SetName@RendererResource@Engine@Spectre@@QEAAXV-$basic_string@DU-$char_traits@D@std@@V-$allocat.c)
 */

// Hidden C++ exception states: #wind=7
Spectre::Engine::DepthBuffer *__fastcall Spectre::Engine::DepthBuffer::DepthBuffer(Spectre::Engine::DepthBuffer *this)
{
  _QWORD *v2; // rax
  int v3; // eax
  void **v4; // rax
  _QWORD v6[4]; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v7[32]; // [rsp+60h] [rbp-38h] BYREF

  Spectre::Engine::SharedResource::SharedResource(this, 7, 3);
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *(_QWORD *)this = &Spectre::Engine::DepthBuffer::`vftable';
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  `eh vector constructor iterator'(
    (char *)this + 128,
    16LL,
    4LL,
    (void (*)(void *))std::shared_ptr<Spectre::Engine::VertexBuffer>::shared_ptr<Spectre::Engine::VertexBuffer>);
  `eh vector constructor iterator'(
    (char *)this + 192,
    16LL,
    4LL,
    (void (*)(void *))std::shared_ptr<Spectre::Engine::VertexBuffer>::shared_ptr<Spectre::Engine::VertexBuffer>);
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  v2 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
  *v2 = v2;
  v2[1] = v2;
  v2[2] = v2;
  *((_WORD *)v2 + 12) = 257;
  *((_QWORD *)this + 32) = v2;
  std::_Atomic_integral<int,4>::operator++((__int64)&unk_1801D3424);
  v3 = std::atomic<int>::operator int();
  std::_Integral_to_string<char,int>((__int64)v7, v3);
  v4 = (void **)std::operator+<char>(v6, (__int64)"DepthBuffer", v7);
  Spectre::Engine::RendererResource::SetName((__int64)this, v4);
  std::string::_Tidy_deallocate((__int64)v7);
  return this;
}
