/*
 * XREFs of ?RecreateColorSampler@ShadowMapCamera@Engine@Spectre@@AEAAXXZ @ 0x18008E7D8
 * Callers:
 *     ?CreateResources@ShadowMapCamera@Engine@Spectre@@UEAAXXZ @ 0x18008E0E0 (-CreateResources@ShadowMapCamera@Engine@Spectre@@UEAAXXZ.c)
 * Callees:
 *     ?CreateSampler@Sampler@Engine@Spectre@@UEAAXAEBUSamplerStateDesc@23@PEAVRenderDevice@23@@Z @ 0x1800548D0 (-CreateSampler@Sampler@Engine@Spectre@@UEAAXAEBUSamplerStateDesc@23@PEAVRenderDevice@23@@Z.c)
 */

void __fastcall Spectre::Engine::ShadowMapCamera::RecreateColorSampler(Spectre::Engine::ShadowMapCamera *this)
{
  Spectre::Engine::Sampler *v1; // rcx
  __m128i si128; // [rsp+20h] [rbp-48h] BYREF
  int v3; // [rsp+30h] [rbp-38h]
  int v4; // [rsp+34h] [rbp-34h]
  int v5; // [rsp+38h] [rbp-30h]
  __int128 v6; // [rsp+3Ch] [rbp-2Ch]
  int v7; // [rsp+4Ch] [rbp-1Ch]
  float v8; // [rsp+50h] [rbp-18h]

  v3 = 0;
  v7 = 0;
  v4 = 0;
  v1 = (Spectre::Engine::Sampler *)*((_QWORD *)this + 237);
  v6 = Spectre::Utils::Math::Color::Black;
  v5 = 7;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v8 = FLOAT_3_4028235e38;
  Spectre::Engine::Sampler::CreateSampler(v1, (const struct Spectre::Engine::SamplerStateDesc *)&si128, 0LL);
}
