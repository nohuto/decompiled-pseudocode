/*
 * XREFs of ??0ArrayBuffer@Engine@Spectre@@IEAA@W4EType@RendererResource@12@W4Category@PerformanceManager@12@@Z @ 0x18008878C
 * Callers:
 *     ??0VertexBuffer@Engine@Spectre@@QEAA@W4Attribute@DeviceVertexBuffer@12@@Z @ 0x180089450 (--0VertexBuffer@Engine@Spectre@@QEAA@W4Attribute@DeviceVertexBuffer@12@@Z.c)
 *     ??0IndexBuffer@Engine@Spectre@@QEAA@XZ @ 0x180089AC8 (--0IndexBuffer@Engine@Spectre@@QEAA@XZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0SharedResource@Engine@Spectre@@QEAA@W4EType@RendererResource@12@W4Category@PerformanceManager@12@@Z @ 0x180029210 (--0SharedResource@Engine@Spectre@@QEAA@W4EType@RendererResource@12@W4Category@PerformanceManager.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall Spectre::Engine::ArrayBuffer::ArrayBuffer(_QWORD *a1, int a2, int a3)
{
  _QWORD *v4; // rax

  Spectre::Engine::SharedResource::SharedResource(a1, a2, a3);
  a1[12] = 0LL;
  a1[13] = 0LL;
  *a1 = &Spectre::Engine::ArrayBuffer::`vftable';
  a1[14] = 0LL;
  a1[15] = 0LL;
  a1[16] = 0LL;
  v4 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
  *v4 = v4;
  v4[1] = v4;
  v4[2] = v4;
  *((_WORD *)v4 + 12) = 257;
  a1[15] = v4;
  a1[17] = 0LL;
  a1[18] = 0LL;
  return a1;
}
