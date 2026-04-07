/*
 * XREFs of ?_CalculateStaggerDelay@CAnimationEngine@@AEAAXPEAXHHIPEAN@Z @ 0x1800149F0
 * Callers:
 *     ?SetupStoryboard@CAnimationEngine@@AEAAJPEAVCTransitionVisualSet@1@@Z @ 0x180015B1C (-SetupStoryboard@CAnimationEngine@@AEAAJPEAVCTransitionVisualSet@1@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CAnimationEngine::_CalculateStaggerDelay(
        CAnimationEngine *this,
        void *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        double *a6)
{
  double *v6; // rbx
  int ThemeAnimationProperty; // eax
  int v11; // ecx
  int v12; // r8d
  float v13; // xmm2_4
  double v14; // xmm4_8
  bool v15; // r9
  unsigned int v16; // r10d
  unsigned int v17; // edx
  int v18; // ecx
  double v19; // xmm1_8
  float v20; // xmm3_4
  double v21; // xmm1_8
  int v22; // [rsp+40h] [rbp-10h] BYREF
  int v23; // [rsp+44h] [rbp-Ch] BYREF
  float v24; // [rsp+48h] [rbp-8h] BYREF
  int v25; // [rsp+70h] [rbp+20h] BYREF
  int v26; // [rsp+74h] [rbp+24h]

  v26 = HIDWORD(this);
  v6 = a6;
  v22 = 0;
  v23 = 0;
  LODWORD(a6) = 0;
  *v6 = 0.0;
  v25 = 0;
  v24 = 1.0;
  if ( (int)GetThemeAnimationProperty(a2, a3, a4, 0LL, &v22, 4, &v25) >= 0 && (v22 & 5) == 5 )
  {
    if ( (int)GetThemeAnimationProperty(a2, a3, a4, 2LL, &v23, 4, &v25) >= 0 )
    {
      ThemeAnimationProperty = GetThemeAnimationProperty(a2, a3, a4, 3LL, &a6, 4, &v25);
      v11 = (int)a6;
      if ( ThemeAnimationProperty < 0 )
        v11 = 1000;
      LODWORD(a6) = v11;
      GetThemeAnimationProperty(a2, a3, a4, 4LL, &v24, 4, &v25);
    }
    v12 = v23;
    if ( v23 )
    {
      v13 = v24;
      v14 = DOUBLE_1_0;
      v15 = COERCE_FLOAT(LODWORD(v24) & _xmm) >= 0.0000011920929
         && COERCE_FLOAT(COERCE_UNSIGNED_INT(v24 - 1.0) & _xmm) >= 0.0000011920929;
      v16 = a5;
      v17 = 0;
      v18 = (int)a6;
      if ( a5 )
      {
        v19 = *v6;
        v20 = (float)(int)a6;
        do
        {
          if ( v20 <= v19 )
            break;
          *v6 = (double)v12 * v14 + v19;
          v19 = (double)v12 * v14 + v19;
          if ( v15 )
            v14 = v14 * v13;
          ++v17;
        }
        while ( v17 < v16 );
      }
      v21 = *v6;
      if ( v18 )
        v21 = fmin(v21, (double)v18);
      *v6 = v21 / 1000.0;
    }
  }
}
