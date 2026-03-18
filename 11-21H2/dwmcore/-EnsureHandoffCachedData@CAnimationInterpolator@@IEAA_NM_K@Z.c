/*
 * XREFs of ?EnsureHandoffCachedData@CAnimationInterpolator@@IEAA_NM_K@Z @ 0x180270874
 * Callers:
 *     ?GetAdjustedHandoffValue@CAnimationInterpolator@@IEAA_N_JMW4Enum@DwmAnimationHandoffType@@M_KPEAM@Z @ 0x180270964 (-GetAdjustedHandoffValue@CAnimationInterpolator@@IEAA_N_JMW4Enum@DwmAnimationHandoffType@@M_KPEA.c)
 * Callees:
 *     ?GetInterpolatedValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z @ 0x1800CD75C (-GetInterpolatedValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z.c)
 */

bool __fastcall CAnimationInterpolator::EnsureHandoffCachedData(CAnimationInterpolator *this, float a2, __int64 a3)
{
  bool InterpolatedValue; // di
  char v6; // al
  float v7; // xmm6_4
  float v9; // xmm0_4
  float v10; // xmm2_4
  float v11; // xmm0_4
  float v12; // [rsp+40h] [rbp+8h] BYREF

  InterpolatedValue = 1;
  if ( (*((_BYTE *)this + 24) & 2) == 0 )
  {
    v12 = 0.0;
    InterpolatedValue = CAnimationInterpolator::GetInterpolatedValue(this, 0LL, &v12, 0LL);
    if ( InterpolatedValue )
    {
      InterpolatedValue = CAnimationInterpolator::GetInterpolatedValue(this, a3, (float *)this + 4, 0LL);
      if ( InterpolatedValue )
      {
        v6 = *((_BYTE *)this + 24);
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 4) - v12) & _xmm) >= 0.0000011920929 )
        {
          v9 = *((float *)this + 4);
          v10 = v9 - v12;
          *((_BYTE *)this + 24) = v6 | 1;
          v11 = (float)(v9 - a2) / v10;
          *((float *)this + 5) = v11;
          if ( !_finite(v11) )
            return 0;
        }
        else
        {
          *((_BYTE *)this + 24) = v6 & 0xFE;
        }
        v7 = a2 - v12;
        *((_BYTE *)this + 24) |= 2u;
        *((float *)this + 3) = v7;
      }
    }
  }
  return InterpolatedValue;
}
