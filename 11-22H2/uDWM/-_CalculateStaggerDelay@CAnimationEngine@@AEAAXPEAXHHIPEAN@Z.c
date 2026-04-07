/*
 * XREFs of ?_CalculateStaggerDelay@CAnimationEngine@@AEAAXPEAXHHIPEAN@Z @ 0x18004586C
 * Callers:
 *     ?SetupStoryboard@CAnimationEngine@@AEAAJPEAVCTransitionVisualSet@1@@Z @ 0x180044A80 (-SetupStoryboard@CAnimationEngine@@AEAAJPEAVCTransitionVisualSet@1@@Z.c)
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
  float v13; // xmm1_4
  double v14; // xmm2_8
  bool v15; // r9
  unsigned int v16; // r10d
  unsigned int v17; // edx
  int i; // ecx
  int v19; // [rsp+40h] [rbp-10h] BYREF
  int v20; // [rsp+44h] [rbp-Ch] BYREF
  float v21; // [rsp+48h] [rbp-8h] BYREF
  int v22; // [rsp+70h] [rbp+20h] BYREF
  int v23; // [rsp+74h] [rbp+24h]

  v23 = HIDWORD(this);
  v6 = a6;
  v19 = 0;
  v20 = 0;
  LODWORD(a6) = 0;
  *v6 = 0.0;
  v22 = 0;
  v21 = 1.0;
  if ( (int)GetThemeAnimationProperty(a2, a3, a4, 0LL, &v19, 4, &v22) >= 0 && (v19 & 5) == 5 )
  {
    if ( (int)GetThemeAnimationProperty(a2, a3, a4, 2LL, &v20, 4, &v22) >= 0 )
    {
      ThemeAnimationProperty = GetThemeAnimationProperty(a2, a3, a4, 3LL, &a6, 4, &v22);
      v11 = (int)a6;
      if ( ThemeAnimationProperty < 0 )
        v11 = 1000;
      LODWORD(a6) = v11;
      GetThemeAnimationProperty(a2, a3, a4, 4LL, &v21, 4, &v22);
    }
    v12 = v20;
    if ( v20 )
    {
      v13 = v21;
      v14 = DOUBLE_1_0;
      v15 = COERCE_FLOAT(LODWORD(v21) & _xmm) >= 0.0000011920929
         && COERCE_FLOAT(COERCE_UNSIGNED_INT(v21 - 1.0) & _xmm) >= 0.0000011920929;
      v16 = a5;
      v17 = 0;
      for ( i = (int)a6; v17 < v16; ++v17 )
      {
        if ( (float)i <= *v6 )
          break;
        *v6 = (double)v12 * v14 + *v6;
        if ( v15 )
          v14 = v14 * v13;
      }
      if ( i )
        *v6 = fmin(*v6, (double)i);
      *v6 = *v6 / 1000.0;
    }
  }
}
