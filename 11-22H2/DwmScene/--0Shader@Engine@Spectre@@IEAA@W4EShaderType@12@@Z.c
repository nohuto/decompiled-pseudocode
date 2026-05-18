/*
 * XREFs of ??0Shader@Engine@Spectre@@IEAA@W4EShaderType@12@@Z @ 0x18008A82C
 * Callers:
 *     ??$make_shared@VDomainShader@Engine@Spectre@@$$V@std@@YA?AV?$shared_ptr@VDomainShader@Engine@Spectre@@@0@XZ @ 0x18004DED8 (--$make_shared@VDomainShader@Engine@Spectre@@$$V@std@@YA-AV-$shared_ptr@VDomainShader@Engine@Spe.c)
 *     ??$make_shared@VGeometryShader@Engine@Spectre@@$$V@std@@YA?AV?$shared_ptr@VGeometryShader@Engine@Spectre@@@0@XZ @ 0x18004DFC0 (--$make_shared@VGeometryShader@Engine@Spectre@@$$V@std@@YA-AV-$shared_ptr@VGeometryShader@Engine.c)
 *     ??$make_shared@VHullShader@Engine@Spectre@@$$V@std@@YA?AV?$shared_ptr@VHullShader@Engine@Spectre@@@0@XZ @ 0x18004E0A8 (--$make_shared@VHullShader@Engine@Spectre@@$$V@std@@YA-AV-$shared_ptr@VHullShader@Engine@Spectre.c)
 *     ??$make_shared@VPixelShader@Engine@Spectre@@$$V@std@@YA?AV?$shared_ptr@VPixelShader@Engine@Spectre@@@0@XZ @ 0x18004E190 (--$make_shared@VPixelShader@Engine@Spectre@@$$V@std@@YA-AV-$shared_ptr@VPixelShader@Engine@Spect.c)
 *     ??$make_shared@VVertexShader@Engine@Spectre@@$$V@std@@YA?AV?$shared_ptr@VVertexShader@Engine@Spectre@@@0@XZ @ 0x18004E544 (--$make_shared@VVertexShader@Engine@Spectre@@$$V@std@@YA-AV-$shared_ptr@VVertexShader@Engine@Spe.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0SharedResource@Engine@Spectre@@QEAA@W4EType@RendererResource@12@W4Category@PerformanceManager@12@@Z @ 0x180029210 (--0SharedResource@Engine@Spectre@@QEAA@W4EType@RendererResource@12@W4Category@PerformanceManager.c)
 *     ?SetOption@RendererResource@Engine@Spectre@@QEAAXW4EResourceOption@123@_N@Z @ 0x1800297F0 (-SetOption@RendererResource@Engine@Spectre@@QEAAXW4EResourceOption@123@_N@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Spectre::Engine::Shader::Shader(__int64 a1, int a2)
{
  _QWORD *v4; // rax

  Spectre::Engine::SharedResource::SharedResource((_QWORD *)a1, 2, 8);
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)a1 = &Spectre::Engine::Shader::`vftable';
  *(_DWORD *)(a1 + 112) = a2;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  v4 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
  *v4 = v4;
  v4[1] = v4;
  v4[2] = v4;
  *((_WORD *)v4 + 12) = 257;
  *(_QWORD *)(a1 + 136) = v4;
  *(_BYTE *)(a1 + 152) = 0;
  Spectre::Engine::RendererResource::SetOption(a1, 2, 0);
  return a1;
}
