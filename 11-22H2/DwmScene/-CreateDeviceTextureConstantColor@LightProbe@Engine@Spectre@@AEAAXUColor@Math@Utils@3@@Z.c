/*
 * XREFs of ?CreateDeviceTextureConstantColor@LightProbe@Engine@Spectre@@AEAAXUColor@Math@Utils@3@@Z @ 0x1800518C8
 * Callers:
 *     ?SetAmbient@LightProbe@Engine@Spectre@@QEAAXUColor@Math@Utils@3@@Z @ 0x180051B8C (-SetAmbient@LightProbe@Engine@Spectre@@QEAAXUColor@Math@Utils@3@@Z.c)
 *     ?SetSphericalHarmonics@LightProbe@Engine@Spectre@@QEAAXAEBVSphericalHarmonics@23@@Z @ 0x180051C30 (-SetSphericalHarmonics@LightProbe@Engine@Spectre@@QEAAXAEBVSphericalHarmonics@23@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 *     ??1?$unique_ptr@$$BY0A@IU?$default_delete@$$BY0A@I@std@@@std@@QEAA@XZ @ 0x180025A6C (--1-$unique_ptr@$$BY0A@IU-$default_delete@$$BY0A@I@std@@@std@@QEAA@XZ.c)
 *     ?Create@Texture@Engine@Spectre@@QEAAXIIIW4Format@23@W4Usage@23@IPEBXIPEAVRenderDevice@23@@Z @ 0x180055E20 (-Create@Texture@Engine@Spectre@@QEAAXIIIW4Format@23@W4Usage@23@IPEBXIPEAVRenderDevice@23@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Engine::LightProbe::CreateDeviceTextureConstantColor(__m128 *a1, __m128 *a2)
{
  __m128 v4; // xmm0
  __m128i v5; // xmm0
  __m128i v6; // xmm0
  void *v7; // rax
  unsigned int v8; // r9d
  int *v9; // r11
  unsigned int v10; // r8d
  int v11; // esi
  void *v12; // [rsp+50h] [rbp-38h] BYREF
  _DWORD v13[6]; // [rsp+58h] [rbp-30h] BYREF

  if ( !*(_QWORD *)(a1[28].m128_u64[0] + 128) || _mm_movemask_ps(_mm_cmpneq_ps(a1[31], *a2)) )
  {
    v4 = _mm_mul_ps(_mm_min_ps(_mm_max_ps(*a2, DirectX::g_XMZero), DirectX::g_XMOne), DirectX::g_UByteMax);
    v5 = _mm_cvtps_epi32(_mm_shuffle_ps(v4, v4, 198));
    v6 = _mm_packs_epi32(v5, v5);
    v13[0] = _mm_packus_epi16(v6, v6).m128i_u32[0];
    v13[1] = v13[0];
    v13[2] = v13[0];
    v13[3] = v13[0];
    v13[4] = v13[0];
    v13[5] = v13[0];
    v7 = operator new(0x6000uLL);
    v12 = v7;
    v8 = 0;
    v9 = v13;
    do
    {
      v10 = 0;
      v11 = *v9;
      do
        *((_DWORD *)v7 + 1024 * v8 + v10++) = v11;
      while ( v10 < 0x400 );
      ++v8;
      ++v9;
    }
    while ( v8 < 6 );
    Spectre::Engine::Texture::Create(a1[28].m128_u64[0], 32LL, 32LL, 0LL, 16, 0, 17);
    a1[31].m128_i32[0] = a2->m128_i32[0];
    a1[31].m128_i32[1] = a2->m128_i32[1];
    a1[31].m128_i32[2] = a2->m128_i32[2];
    a1[31].m128_i32[3] = a2->m128_i32[3];
    std::unique_ptr<unsigned int [0]>::~unique_ptr<unsigned int [0]>(&v12);
  }
  a1[33].m128_i32[0] = 1065353216;
}
