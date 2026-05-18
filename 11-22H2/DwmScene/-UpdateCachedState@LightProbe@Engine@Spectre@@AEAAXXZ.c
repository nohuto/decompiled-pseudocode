/*
 * XREFs of ?UpdateCachedState@LightProbe@Engine@Spectre@@AEAAXXZ @ 0x180051CA0
 * Callers:
 *     ?CloneInternal@LightProbe@Engine@Spectre@@UEBAXV?$shared_ptr@VComponent@Engine@Spectre@@@std@@AEBI@Z @ 0x180051790 (-CloneInternal@LightProbe@Engine@Spectre@@UEBAXV-$shared_ptr@VComponent@Engine@Spectre@@@std@@AE.c)
 *     ?SetAmbient@LightProbe@Engine@Spectre@@QEAAXUColor@Math@Utils@3@@Z @ 0x180051B8C (-SetAmbient@LightProbe@Engine@Spectre@@QEAAXUColor@Math@Utils@3@@Z.c)
 *     ?SetSphericalHarmonics@LightProbe@Engine@Spectre@@QEAAXAEBVSphericalHarmonics@23@@Z @ 0x180051C30 (-SetSphericalHarmonics@LightProbe@Engine@Spectre@@QEAAXAEBVSphericalHarmonics@23@@Z.c)
 * Callees:
 *     Spectre::Engine::ColorToLuminance @ 0x180051890 (Spectre--Engine--ColorToLuminance.c)
 */

void __fastcall Spectre::Engine::LightProbe::UpdateCachedState(__m128 *this)
{
  __m128 v1; // xmm2
  __m128 *v2; // rax
  __m128 *v3; // rax
  float v4; // xmm3_4
  float v5; // xmm0_4
  float *v6; // rax
  int v7; // xmm4_4
  __m128 v8; // [rsp+20h] [rbp-18h] BYREF

  v1 = _mm_add_ps(_mm_add_ps(this[20], this[19]), this[21]);
  this[25].m128_i32[0] = v1.m128_i32[0];
  this[25].m128_i32[2] = _mm_shuffle_ps(v1, v1, 170).m128_u32[0];
  this[25].m128_i32[1] = _mm_shuffle_ps(v1, v1, 85).m128_u32[0];
  this[25].m128_i32[3] = _mm_shuffle_ps(v1, v1, 255).m128_u32[0];
  this[25] = _mm_mul_ps((__m128)_xmm, this[25]);
  v8 = this[16];
  Spectre::Engine::ColorToLuminance(v8.m128_f32);
  v8 = v2[17];
  v4 = Spectre::Engine::ColorToLuminance(v8.m128_f32);
  v8 = v3[18];
  v5 = Spectre::Engine::ColorToLuminance(v8.m128_f32);
  *((_DWORD *)v6 + 104) = v7;
  v6[105] = v4;
  v6[106] = v5;
  Spectre::Utils::Math::Vector3::Normalize((Spectre::Utils::Math::Vector3 *)(v6 + 104));
}
