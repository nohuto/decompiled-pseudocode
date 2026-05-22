/*
 * XREFs of ?EnsureHandoffCachedData@CAnimationInterpolator@@IEAA_NM_K@Z @ 0x1801B24F0
 * Callers:
 *     ?GetAdjustedHandoffValue@CAnimationInterpolator@@IEAA_N_JMW4Enum@DwmAnimationHandoffType@@M_KPEAM@Z @ 0x1801B2658 (-GetAdjustedHandoffValue@CAnimationInterpolator@@IEAA_N_JMW4Enum@DwmAnimationHandoffType@@M_KPEA.c)
 * Callees:
 *     ?GetInterpolatedValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z @ 0x1801B282C (-GetInterpolatedValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z.c)
 */

bool __fastcall CAnimationInterpolator::EnsureHandoffCachedData(
        CAnimationInterpolator *this,
        float a2,
        __int64 a3,
        bool *a4)
{
  bool InterpolatedValue; // di
  bool *v7; // r9
  float v8; // xmm2_4
  float v9; // xmm3_4
  char v10; // al
  float v11; // xmm6_4
  float v13; // xmm2_4
  float v14; // [rsp+40h] [rbp+8h] BYREF

  InterpolatedValue = 1;
  if ( (*((_BYTE *)this + 24) & 2) == 0 )
  {
    v14 = 0.0;
    InterpolatedValue = CAnimationInterpolator::GetInterpolatedValue(this, 0LL, &v14, a4);
    if ( InterpolatedValue )
    {
      InterpolatedValue = CAnimationInterpolator::GetInterpolatedValue(this, a3, (float *)this + 4, v7);
      if ( InterpolatedValue )
      {
        v8 = *((float *)this + 4);
        v9 = v8 - v14;
        v10 = *((_BYTE *)this + 24);
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v8 - v14) & _xmm) >= 0.0000011920929 )
        {
          *((_BYTE *)this + 24) = v10 | 1;
          v13 = (float)(v8 - a2) / v9;
          *((float *)this + 5) = v13;
          if ( !_finite(v13) )
            return 0;
        }
        else
        {
          *((_BYTE *)this + 24) = v10 & 0xFE;
        }
        v11 = a2 - v14;
        *((_BYTE *)this + 24) |= 2u;
        *((float *)this + 3) = v11;
      }
    }
  }
  return InterpolatedValue;
}
