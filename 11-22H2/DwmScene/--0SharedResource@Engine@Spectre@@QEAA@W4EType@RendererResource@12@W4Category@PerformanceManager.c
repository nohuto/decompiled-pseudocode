/*
 * XREFs of ??0SharedResource@Engine@Spectre@@QEAA@W4EType@RendererResource@12@W4Category@PerformanceManager@12@@Z @ 0x180029210
 * Callers:
 *     ??0FrameBuffer@Engine@Spectre@@QEAA@XZ @ 0x180027E0C (--0FrameBuffer@Engine@Spectre@@QEAA@XZ.c)
 *     ??0Material@Engine@Spectre@@QEAA@XZ @ 0x18004391C (--0Material@Engine@Spectre@@QEAA@XZ.c)
 *     ??0Mesh@Engine@Spectre@@QEAA@XZ @ 0x180047B64 (--0Mesh@Engine@Spectre@@QEAA@XZ.c)
 *     ??0Sampler@Engine@Spectre@@QEAA@XZ @ 0x180054428 (--0Sampler@Engine@Spectre@@QEAA@XZ.c)
 *     ??0Texture@Engine@Spectre@@QEAA@XZ @ 0x180055258 (--0Texture@Engine@Spectre@@QEAA@XZ.c)
 *     ??0DepthBuffer@Engine@Spectre@@QEAA@XZ @ 0x18006EF84 (--0DepthBuffer@Engine@Spectre@@QEAA@XZ.c)
 *     ??0RenderState@Engine@Spectre@@QEAA@XZ @ 0x180088148 (--0RenderState@Engine@Spectre@@QEAA@XZ.c)
 *     ??0ArrayBuffer@Engine@Spectre@@IEAA@W4EType@RendererResource@12@W4Category@PerformanceManager@12@@Z @ 0x18008878C (--0ArrayBuffer@Engine@Spectre@@IEAA@W4EType@RendererResource@12@W4Category@PerformanceManager@12.c)
 *     ??0Shader@Engine@Spectre@@IEAA@W4EShaderType@12@@Z @ 0x18008A82C (--0Shader@Engine@Spectre@@IEAA@W4EShaderType@12@@Z.c)
 *     ??0VertexLayout@Engine@Spectre@@QEAA@XZ @ 0x18008BCDC (--0VertexLayout@Engine@Spectre@@QEAA@XZ.c)
 *     ??0ConstantBuffer@Engine@Spectre@@QEAA@XZ @ 0x18009BBA8 (--0ConstantBuffer@Engine@Spectre@@QEAA@XZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x180028FD4 (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 *     ??0RendererResource@Engine@Spectre@@QEAA@W4EType@012@W4Category@PerformanceManager@12@@Z @ 0x18002918C (--0RendererResource@Engine@Spectre@@QEAA@W4EType@012@W4Category@PerformanceManager@12@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Spectre::Engine::SharedResource::SharedResource(_QWORD *a1, int a2, int a3)
{
  unsigned __int64 size_of; // rax
  _QWORD *v5; // rax

  Spectre::Engine::RendererResource::RendererResource((__int64)a1, a2, a3);
  *a1 = &Spectre::Engine::SharedResource::`vftable';
  a1[9] = 0LL;
  a1[10] = 0LL;
  a1[11] = 0LL;
  size_of = std::_Get_size_of_n<40>(1uLL);
  v5 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *v5 = v5;
  v5[1] = v5;
  v5[2] = v5;
  *((_WORD *)v5 + 12) = 257;
  a1[10] = v5;
  return a1;
}
