/*
 * XREFs of ?EnsureAcrylicAccentColor@CAcrylicSheet@@AEAAJXZ @ 0x1800A3078
 * Callers:
 *     ?EnsureBackgroundEffects@CAcrylicSheet@@AEAAJXZ @ 0x1800A3110 (-EnsureBackgroundEffects@CAcrylicSheet@@AEAAJXZ.c)
 *     ?ValidateVisual@CAcrylicSheet@@EEAAJXZ @ 0x1800A40D0 (-ValidateVisual@CAcrylicSheet@@EEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateAcrylicBlurBehind@CAccentAcrylicBlurBehind@@QEAAJAEBUACCENT_POLICY@@K_NPEBN@Z @ 0x1800A137C (-UpdateAcrylicBlurBehind@CAccentAcrylicBlurBehind@@QEAAJAEBUACCENT_POLICY@@K_NPEBN@Z.c)
 */

__int64 __fastcall CAcrylicSheet::EnsureAcrylicAccentColor(CAcrylicSheet *this)
{
  __m128d *v1; // rax
  const struct ACCENT_POLICY *v2; // rdx
  __m128d v3; // xmm1
  double *v4; // rax
  unsigned int v5; // r8d
  CAccentAcrylicBlurBehind *v6; // rcx
  int updated; // eax
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = (__m128d *)&CAcrylicSheet::COLOR_LIGHT;
  if ( !*((_BYTE *)this + 465) )
    v1 = (__m128d *)&CAcrylicSheet::COLOR_DARK;
  v2 = (CAcrylicSheet *)((char *)this + 472);
  v3 = *v1;
  v4 = (double *)((char *)this + 488);
  *((_DWORD *)this + 118) = 4;
  v5 = _mm_cvtsi128_si32((__m128i)v3);
  *((_QWORD *)this + 61) = *(_OWORD *)&_mm_unpackhi_pd(v3, v3);
  *((_DWORD *)this + 120) = v5;
  v6 = (CAccentAcrylicBlurBehind *)*((_QWORD *)this + 39);
  if ( !v6 )
    return 0LL;
  updated = CAccentAcrylicBlurBehind::UpdateAcrylicBlurBehind(v6, v2, v5, 0, v4);
  v8 = updated;
  if ( updated >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x53,
    (__int64)"clientcore\\windows\\dwm\\udwm\\acrylicsheet.cpp",
    (const char *)(unsigned int)updated);
  return v8;
}
