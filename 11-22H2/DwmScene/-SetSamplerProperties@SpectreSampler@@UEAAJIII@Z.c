/*
 * XREFs of ?SetSamplerProperties@SpectreSampler@@UEAAJIII@Z @ 0x18001B8F0
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateSampler@Sampler@Engine@Spectre@@UEAAXAEBUSamplerStateDesc@23@PEAVRenderDevice@23@@Z @ 0x1800548D0 (-CreateSampler@Sampler@Engine@Spectre@@UEAAXAEBUSamplerStateDesc@23@PEAVRenderDevice@23@@Z.c)
 */

__int64 __fastcall SpectreSampler::SetSamplerProperties(SpectreSampler *this, int a2, int a3, int a4)
{
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  Spectre::Engine::Sampler *v9; // rcx
  __int64 result; // rax
  __m128i si128; // [rsp+20h] [rbp-48h] BYREF
  int v12; // [rsp+30h] [rbp-38h]
  int v13; // [rsp+34h] [rbp-34h]
  int v14; // [rsp+38h] [rbp-30h]
  __int128 v15; // [rsp+3Ch] [rbp-2Ch]
  int v16; // [rsp+4Ch] [rbp-1Ch]
  float v17; // [rsp+50h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v12 = 0;
  v13 = 1;
  v14 = 7;
  v15 = Spectre::Utils::Math::Color::Black;
  v16 = 0;
  v17 = FLOAT_3_4028235e38;
  if ( a2 > 5 )
  {
    v6 = a2 - 6;
    if ( !v6 )
    {
      si128.m128i_i32[0] = 6;
      goto LABEL_18;
    }
    v7 = v6 - 1;
    if ( !v7 )
    {
      si128.m128i_i32[0] = 10;
      goto LABEL_18;
    }
    v8 = v7 - 1;
    if ( !v8 )
    {
      si128.m128i_i32[0] = 7;
      goto LABEL_18;
    }
    if ( v8 != 1 )
      goto LABEL_18;
LABEL_14:
    si128.m128i_i32[0] = 0;
    goto LABEL_18;
  }
  if ( a2 == 5 )
  {
    si128.m128i_i32[0] = 8;
    goto LABEL_18;
  }
  if ( !a2 )
    goto LABEL_14;
  v4 = a2 - 1;
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      if ( v5 == 2 )
        si128.m128i_i32[0] = 9;
    }
    else
    {
      si128.m128i_i32[0] = 2;
    }
  }
LABEL_18:
  if ( a3 )
  {
    if ( a3 == 1 )
      si128.m128i_i32[1] = 1;
  }
  else
  {
    si128.m128i_i32[1] = 2;
  }
  if ( a4 )
  {
    if ( a4 == 1 )
      si128.m128i_i32[2] = 1;
  }
  else
  {
    si128.m128i_i32[2] = 2;
  }
  v9 = (Spectre::Engine::Sampler *)*((_QWORD *)this + 2);
  try
  {
    Spectre::Engine::Sampler::CreateSampler(v9, (const struct Spectre::Engine::SamplerStateDesc *)&si128, 0LL);
    result = 0LL;
  }
  catch ( ... )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x65,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectresampler.cpp",
      (const char *)0x80004005LL);
    return 2147500037LL;
  }
  return result;
}
