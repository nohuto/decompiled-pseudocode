/*
 * XREFs of ?ContinueTo@CCubicBezierChopper@CThemeAnimationScheduleHelper@@QEAAJNN@Z @ 0x1800AB0A4
 * Callers:
 *     ?AddCubic@CCubicBezierChopper@CThemeAnimationScheduleHelper@@UEAAJNMMMM@Z @ 0x1800AADA0 (-AddCubic@CCubicBezierChopper@CThemeAnimationScheduleHelper@@UEAAJNMMMM@Z.c)
 *     ?End@CCubicBezierChopper@CThemeAnimationScheduleHelper@@UEAAJNM@Z @ 0x1800AB770 (-End@CCubicBezierChopper@CThemeAnimationScheduleHelper@@UEAAJNM@Z.c)
 * Callees:
 *     ?AddTransitionToChoppedValue@CCubicBezierChopper@CThemeAnimationScheduleHelper@@QEAAJNNN@Z @ 0x1800AAE34 (-AddTransitionToChoppedValue@CCubicBezierChopper@CThemeAnimationScheduleHelper@@QEAAJNNN@Z.c)
 *     ?IsWithinRange@CCubicBezierChopper@CThemeAnimationScheduleHelper@@QEAA_NNNN@Z @ 0x1800AB784 (-IsWithinRange@CCubicBezierChopper@CThemeAnimationScheduleHelper@@QEAA_NNNN@Z.c)
 */

__int64 __fastcall CThemeAnimationScheduleHelper::CCubicBezierChopper::ContinueTo(
        CThemeAnimationScheduleHelper::CCubicBezierChopper *this,
        double a2,
        double a3)
{
  double v6; // xmm8_8
  double *v7; // rsi
  double v8; // xmm9_8
  double v9; // xmm1_8
  CThemeAnimationScheduleHelper::CCubicBezierChopper *v10; // rcx
  double v11; // xmm6_8
  double v12; // xmm2_8
  double v13; // xmm11_8
  float v14; // xmm0_4
  double *v15; // rdi
  double v16; // xmm10_8
  int v17; // eax
  double v18; // xmm2_8
  float v19; // xmm1_4
  double v20; // xmm8_8
  bool v21; // sf
  double v22; // xmm1_8
  float v23; // xmm0_4

  v6 = *((double *)this + 9);
  v7 = (double *)((char *)this + 80);
  v8 = *((double *)this + 11);
  v9 = *((double *)this + 8);
  if ( CThemeAnimationScheduleHelper::CCubicBezierChopper::IsWithinRange(0LL, v9, v8, v6)
    || CThemeAnimationScheduleHelper::CCubicBezierChopper::IsWithinRange(v10, v9, v8, *v7) )
  {
    v12 = v6;
    if ( CThemeAnimationScheduleHelper::CCubicBezierChopper::IsWithinRange(v10, v9, v6, a3) )
    {
      v11 = a2 - *((double *)this + 13);
      if ( v11 <= 0.0 )
        return (unsigned int)v10;
LABEL_37:
      LODWORD(v10) = CThemeAnimationScheduleHelper::CCubicBezierChopper::AddTransitionToChoppedValue(this, a3, v12, v11);
      return (unsigned int)v10;
    }
    v13 = *((float *)this + 28);
    if ( CThemeAnimationScheduleHelper::CCubicBezierChopper::IsWithinRange(v10, v9, v6, v13) )
    {
      v14 = *((float *)this + 29);
      if ( v14 == 0.0 )
      {
        v15 = (double *)((char *)this + 104);
        v16 = 0.0;
      }
      else
      {
        v15 = (double *)((char *)this + 104);
        v16 = fmin(a2 - *((double *)this + 13), (v6 - v13) / v14);
        if ( v16 > 0.0 )
        {
          v17 = CThemeAnimationScheduleHelper::CCubicBezierChopper::AddTransitionToChoppedValue(this, v6, v6, v16);
          v10 = (CThemeAnimationScheduleHelper::CCubicBezierChopper *)(unsigned int)v17;
          if ( v17 < 0 )
            return (unsigned int)v10;
        }
      }
      v18 = *v7;
      if ( CThemeAnimationScheduleHelper::CCubicBezierChopper::IsWithinRange(v10, *((double *)this + 8), *v7, a3) )
      {
        v11 = a2 - *v15 - v16;
        if ( v11 <= 0.0 )
          return (unsigned int)v10;
        goto LABEL_36;
      }
      v19 = *((float *)this + 29);
      if ( v19 == 0.0 )
        v20 = 0.0;
      else
        v20 = fmin(a2 - *v15, (v18 - *((float *)this + 28)) / v19);
      if ( v20 - v16 > 0.0 )
        LODWORD(v10) = CThemeAnimationScheduleHelper::CCubicBezierChopper::AddTransitionToChoppedValue(
                         this,
                         *v7,
                         *v7,
                         v20 - v16);
      v21 = (int)v10 < 0;
      goto LABEL_24;
    }
    v22 = *v7;
    if ( CThemeAnimationScheduleHelper::CCubicBezierChopper::IsWithinRange(v10, *v7, v8, v13) )
    {
      v11 = a2 - *((double *)this + 13);
      if ( v11 <= 0.0 )
        return (unsigned int)v10;
      v12 = v22;
      goto LABEL_37;
    }
    if ( !CThemeAnimationScheduleHelper::CCubicBezierChopper::IsWithinRange(v10, v22, v8, a3) )
    {
      v11 = a2 - *((double *)this + 13);
LABEL_36:
      v12 = a3;
      goto LABEL_37;
    }
    v23 = *((float *)this + 29);
    if ( v23 == 0.0 )
    {
      v15 = (double *)((char *)this + 104);
      v20 = 0.0;
    }
    else
    {
      v15 = (double *)((char *)this + 104);
      v20 = fmin(a2 - *((double *)this + 13), (v22 - v13) / v23);
      if ( v20 > 0.0 )
      {
        LODWORD(v10) = CThemeAnimationScheduleHelper::CCubicBezierChopper::AddTransitionToChoppedValue(
                         this,
                         *v7,
                         *v7,
                         v20);
        v21 = (int)v10 < 0;
LABEL_24:
        if ( v21 )
          return (unsigned int)v10;
      }
    }
    v11 = a2 - *v15 - v20;
    if ( v11 <= 0.0 )
      return (unsigned int)v10;
    v12 = *v7;
    goto LABEL_37;
  }
  v11 = a2 - *((double *)this + 13);
  if ( v11 > 0.0 )
  {
    if ( !CThemeAnimationScheduleHelper::CCubicBezierChopper::IsWithinRange(v10, v9, v6, v8) )
      v6 = *v7;
    v12 = v6;
    goto LABEL_37;
  }
  return (unsigned int)v10;
}
