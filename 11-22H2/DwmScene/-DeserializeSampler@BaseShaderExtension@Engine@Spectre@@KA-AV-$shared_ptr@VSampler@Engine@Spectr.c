/*
 * XREFs of ?DeserializeSampler@BaseShaderExtension@Engine@Spectre@@KA?AV?$shared_ptr@VSampler@Engine@Spectre@@@std@@PEAVRenderDevice@23@PEBUSamplerDefinition@Framework@3@@Z @ 0x18009A1BC
 * Callers:
 *     _lambda_00b1ad2c531e814b011f91a69053b44d_::operator() @ 0x180098A9C (_lambda_00b1ad2c531e814b011f91a69053b44d_--operator().c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ??$CreateResource@VSampler@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA?AV?$shared_ptr@VSampler@Engine@Spectre@@@std@@XZ @ 0x1800161AC (--$CreateResource@VSampler@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA-AV-$shared_ptr_ea_1800161AC.c)
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@QEBD$$QEAV10@@Z @ 0x18001C668 (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_tra_ea_18001C668.c)
 *     ?GetEngine@RenderDevice@Engine@Spectre@@QEBAPEAV223@XZ @ 0x180026598 (-GetEngine@RenderDevice@Engine@Spectre@@QEBAPEAV223@XZ.c)
 *     ?SetName@RendererResource@Engine@Spectre@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x1800297A4 (-SetName@RendererResource@Engine@Spectre@@QEAAXV-$basic_string@DU-$char_traits@D@std@@V-$allocat.c)
 *     ?CreateSampler@Sampler@Engine@Spectre@@UEAAXAEBUSamplerStateDesc@23@PEAVRenderDevice@23@@Z @ 0x1800548D0 (-CreateSampler@Sampler@Engine@Spectre@@UEAAXAEBUSamplerStateDesc@23@PEAVRenderDevice@23@@Z.c)
 *     ??E?$_Atomic_integral@I$03@std@@QEAAIH@Z @ 0x180059D1C (--E-$_Atomic_integral@I$03@std@@QEAAIH@Z.c)
 *     ??$_UIntegral_to_string@DI@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@I@Z @ 0x180073D5C (--$_UIntegral_to_string@DI@std@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@0@I.c)
 */

// Hidden C++ exception states: #wind=2
Spectre::Engine::Sampler **__fastcall Spectre::Engine::BaseShaderExtension::DeserializeSampler(
        Spectre::Engine::Sampler **a1,
        Spectre::Engine::RenderDevice *a2,
        _BYTE *a3)
{
  int v4; // edi
  int v5; // r15d
  int v6; // r14d
  struct Spectre::Engine::Engine *Engine; // rax
  Spectre::Engine::Sampler *v8; // rbx
  unsigned int v9; // eax
  void **v10; // rax
  struct Spectre::Engine::Engine *v11; // rax
  Spectre::Engine::Sampler *v13[4]; // [rsp+20h] [rbp-59h] BYREF
  unsigned __int64 v14; // [rsp+40h] [rbp-39h] BYREF
  int v15; // [rsp+48h] [rbp-31h]
  int v16; // [rsp+4Ch] [rbp-2Dh]
  int v17; // [rsp+50h] [rbp-29h]
  int v18; // [rsp+54h] [rbp-25h]
  int v19; // [rsp+58h] [rbp-21h]
  __int128 v20; // [rsp+5Ch] [rbp-1Dh]
  int v21; // [rsp+6Ch] [rbp-Dh]
  float v22; // [rsp+70h] [rbp-9h]
  _QWORD v23[2]; // [rsp+78h] [rbp-1h] BYREF
  _BYTE v24[32]; // [rsp+88h] [rbp+Fh] BYREF

  v13[3] = (Spectre::Engine::Sampler *)a1;
  v4 = 1;
  if ( a3 )
  {
    if ( *a3 == 1 )
    {
      v4 = 0;
    }
    else if ( *a3 != 2 )
    {
      switch ( *a3 )
      {
        case 3:
          v4 = 2;
          break;
        case 4:
          v4 = 7;
          break;
        case 5:
          v4 = 8;
          break;
        case 6:
          v4 = 9;
          break;
        case 7:
          v4 = 10;
          break;
        case 8:
          v4 = 6;
          break;
      }
    }
    if ( a3[1] == 1 )
      v5 = 2;
    else
      v5 = a3[1] == 3;
    if ( a3[2] == 1 )
      v6 = 2;
    else
      v6 = a3[2] == 3;
    Engine = Spectre::Engine::RenderDevice::GetEngine(a2);
    Spectre::Engine::Engine::CreateResource<Spectre::Engine::Sampler,>((__int64)Engine, v13);
    v8 = v13[0];
    v9 = std::_Atomic_integral<unsigned int,4>::operator++((__int64)&unk_1801D3D90);
    std::_UIntegral_to_string<char,unsigned int>((__int64)v24, v9);
    v10 = (void **)std::operator+<char>(&v14, (__int64)"Deserialized sampler ", v24);
    Spectre::Engine::RendererResource::SetName((__int64)v8, v10);
    std::string::_Tidy_deallocate((__int64)v24);
    v16 = 0;
    v17 = 0;
    v18 = 1;
    v19 = 7;
    v20 = Spectre::Utils::Math::Color::Black;
    v21 = 0;
    v22 = FLOAT_3_4028235e38;
    v14 = __PAIR64__(v5, v4);
    v15 = v6;
    Spectre::Engine::Sampler::CreateSampler(v13[0], (const struct Spectre::Engine::SamplerStateDesc *)&v14, 0LL);
    *a1 = v13[0];
    a1[1] = v13[1];
  }
  else
  {
    v11 = Spectre::Engine::RenderDevice::GetEngine(a2);
    Spectre::Engine::Engine::CreateResource<Spectre::Engine::Sampler,>((__int64)v11, v23);
    *a1 = (Spectre::Engine::Sampler *)v23[0];
    a1[1] = (Spectre::Engine::Sampler *)v23[1];
  }
  return a1;
}
