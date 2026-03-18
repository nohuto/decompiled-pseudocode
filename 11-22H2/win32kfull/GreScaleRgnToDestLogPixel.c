/*
 * XREFs of GreScaleRgnToDestLogPixel @ 0x1C02A8100
 * Callers:
 *     ?GetWindowRgn@@YAHPEAUtagWND@@PEAUHRGN__@@K@Z @ 0x1C005EE64 (-GetWindowRgn@@YAHPEAUtagWND@@PEAUHRGN__@@K@Z.c)
 *     ?GetLayeredRegion@@YA_NPEAUtagWND@@PEAUHRGN__@@PEA_N@Z @ 0x1C00ECBC8 (-GetLayeredRegion@@YA_NPEAUtagWND@@PEAUHRGN__@@PEA_N@Z.c)
 *     NtUserGetWindowRgnEx @ 0x1C01D47C0 (NtUserGetWindowRgnEx.c)
 *     ?DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z @ 0x1C0220DE4 (-DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z.c)
 * Callees:
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C011BD38 (--1RGNOBJAPI@@QEAA@XZ.c)
 */

__int64 __fastcall GreScaleRgnToDestLogPixel(__int64 a1, HRGN a2)
{
  int ScaledLogPixels; // ebx
  __m128 v5; // xmm0
  _QWORD v6[9]; // [rsp+20h] [rbp-48h] BYREF

  ScaledLogPixels = (unsigned __int16)GreGetScaledLogPixels(a1);
  if ( ScaledLogPixels != 96 )
  {
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v6, a2, 1, 0);
    if ( !v6[0] )
    {
      RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v6);
      return 0LL;
    }
    v5 = (__m128)COERCE_UNSIGNED_INT((float)ScaledLogPixels);
    v5.m128_f32[0] = v5.m128_f32[0] / 96.0;
    RGNOBJ::vScale(v6, _mm_unpacklo_ps(v5, v5).m128_u64[0]);
    RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v6);
  }
  return 1LL;
}
