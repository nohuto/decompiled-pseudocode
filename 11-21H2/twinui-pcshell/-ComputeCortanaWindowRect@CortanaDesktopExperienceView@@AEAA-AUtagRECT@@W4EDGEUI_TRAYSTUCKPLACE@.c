/*
 * XREFs of ?ComputeCortanaWindowRect@CortanaDesktopExperienceView@@AEAA?AUtagRECT@@W4EDGEUI_TRAYSTUCKPLACE@@HHU2@_N@Z @ 0x1803A68C0
 * Callers:
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x1803AB1F8 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 * Callees:
 *     ?IsBiDiLocale@@YAHK@Z @ 0x180073E70 (-IsBiDiLocale@@YAHK@Z.c)
 */

int *__fastcall CortanaDesktopExperienceView::ComputeCortanaWindowRect(
        __int64 a1,
        int *a2,
        int a3,
        int a4,
        int a5,
        _DWORD *a6,
        char a7)
{
  int v9; // r8d
  __m128 v10; // xmm1
  int v11; // ebx
  LANGID ThreadUILanguage; // ax
  int v13; // ebx
  int v14; // ecx
  int v15; // ecx
  _DWORD *v16; // rax
  __m128 v17; // xmm1
  int v18; // ebx
  LANGID v19; // ax
  int *result; // rax

  if ( !a3 )
  {
    v16 = a6;
    v13 = a6[2];
    goto LABEL_17;
  }
  v9 = a3 - 1;
  if ( v9 )
  {
    if ( v9 != 1 )
    {
      v10 = (__m128)_mm_loadu_si128((const __m128i *)(a1 + 196));
      v11 = (int)(float)(_mm_shuffle_ps(v10, v10, 170).m128_f32[0] + v10.m128_f32[0]);
      ThreadUILanguage = GetThreadUILanguage();
      if ( (unsigned int)IsBiDiLocale(ThreadUILanguage) )
        v13 = v11 - a4;
      else
        v13 = (int)v10.m128_f32[0];
      *a2 = v13;
      if ( a7 )
        v14 = a6[3];
      else
        v14 = a6[1];
      v15 = v14 - a5;
      goto LABEL_18;
    }
    v16 = a6;
    v13 = *a6 - a4;
LABEL_17:
    v15 = v16[1];
    *a2 = v13;
    goto LABEL_18;
  }
  v17 = (__m128)_mm_loadu_si128((const __m128i *)(a1 + 196));
  v18 = (int)(float)(_mm_shuffle_ps(v17, v17, 170).m128_f32[0] + v17.m128_f32[0]);
  v19 = GetThreadUILanguage();
  if ( (unsigned int)IsBiDiLocale(v19) )
    v13 = v18 - a4;
  else
    v13 = (int)v17.m128_f32[0];
  *a2 = v13;
  v15 = a6[3];
LABEL_18:
  a2[1] = v15;
  a2[2] = v13 + a4;
  result = a2;
  a2[3] = a5 + v15;
  return result;
}
