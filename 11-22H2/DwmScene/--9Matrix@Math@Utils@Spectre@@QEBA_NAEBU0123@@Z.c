/*
 * XREFs of ??9Matrix@Math@Utils@Spectre@@QEBA_NAEBU0123@@Z @ 0x180017DB8
 * Callers:
 *     ?SetProjectionMatrix@Camera@Engine@Spectre@@QEAAXAEBUMatrix@Math@Utils@3@@Z @ 0x18001AF10 (-SetProjectionMatrix@Camera@Engine@Spectre@@QEAAXAEBUMatrix@Math@Utils@3@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall Spectre::Utils::Math::Matrix::operator!=(__m128 *a1, __m128 *a2)
{
  __m128 v2; // xmm5
  __m128 v3; // xmm6
  int v4; // eax
  __m128 v5; // xmm7
  char v6; // cl

  v2 = a1[3];
  v3 = a1[2];
  v4 = _mm_movemask_ps(_mm_cmpneq_ps(*a2, *a1));
  v5 = a1[1];
  v6 = 0;
  if ( v4
    || _mm_movemask_ps(_mm_cmpneq_ps(a2[1], v5))
    || _mm_movemask_ps(_mm_cmpneq_ps(a2[2], v3))
    || _mm_movemask_ps(_mm_cmpneq_ps(a2[3], v2)) )
  {
    return 1;
  }
  return v6;
}
