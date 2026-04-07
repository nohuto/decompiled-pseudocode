/*
 * XREFs of ?EnsureAcrylicAccentColor@CAcrylicSheet@@AEAAJXZ @ 0x18009A134
 * Callers:
 *     ?EnsureBackgroundEffects@CAcrylicSheet@@AEAAJXZ @ 0x18009A1C4 (-EnsureBackgroundEffects@CAcrylicSheet@@AEAAJXZ.c)
 *     ?ValidateVisual@CAcrylicSheet@@EEAAJXZ @ 0x18009BA00 (-ValidateVisual@CAcrylicSheet@@EEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateAcrylicBlurBehind@CAccentAcrylicBlurBehind@@QEAAJAEBUACCENT_POLICY@@_NPEBN@Z @ 0x1800552C8 (-UpdateAcrylicBlurBehind@CAccentAcrylicBlurBehind@@QEAAJAEBUACCENT_POLICY@@_NPEBN@Z.c)
 */

__int64 __fastcall CAcrylicSheet::EnsureAcrylicAccentColor(CAcrylicSheet *this)
{
  double *v1; // r9
  const char *v2; // rax
  const struct ACCENT_POLICY *v3; // rdx
  __m128d v4; // xmm1
  CAccentAcrylicBlurBehind *v5; // rcx
  int updated; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (double *)((char *)this + 520);
  v2 = (const char *)&CAcrylicSheet::COLOR_LIGHT;
  if ( !*((_BYTE *)this + 493) )
    v2 = "TTT";
  v3 = (CAcrylicSheet *)((char *)this + 500);
  v4 = *(__m128d *)v2;
  *((_DWORD *)this + 125) = 4;
  *((_DWORD *)this + 127) = _mm_cvtsi128_si32((__m128i)v4);
  v5 = (CAccentAcrylicBlurBehind *)*((_QWORD *)this + 41);
  *(_QWORD *)v1 = *(_OWORD *)&_mm_unpackhi_pd(v4, v4);
  if ( !v5 )
    return 0LL;
  updated = CAccentAcrylicBlurBehind::UpdateAcrylicBlurBehind(v5, v3, 0, v1);
  v7 = updated;
  if ( updated >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x48,
    (int)"clientcore\\windows\\dwm\\udwm\\acrylicsheet.cpp",
    (const char *)(unsigned int)updated);
  return v7;
}
