/*
 * XREFs of ?ComputeCubicBezierProgress@AnimationCoordinationHelper@KeyboardHosting@@CAN_NM@Z @ 0x18052F3C4
 * Callers:
 *     ?ComputePrimaryViewAnimationDurations@AnimationCoordinationHelper@KeyboardHosting@@SA?AV?$tuple@II@std@@_N0AEBUtagRECT@@@Z @ 0x18052F5D8 (-ComputePrimaryViewAnimationDurations@AnimationCoordinationHelper@KeyboardHosting@@SA-AV-$tuple@.c)
 * Callees:
 *     pow @ 0x1801C74A0 (pow.c)
 */

double __fastcall KeyboardHosting::AnimationCoordinationHelper::ComputeCubicBezierProgress(
        unsigned __int8 a1,
        float a2)
{
  int v2; // ebx
  __int128 v3; // xmm13
  __int128 v4; // xmm8
  double v5; // xmm6_8
  double v6; // xmm9_8
  double v7; // xmm9_8
  double v8; // xmm1_8
  float v9; // xmm0_4
  double v10; // xmm9_8
  __int128 v11; // xmm1
  double v12; // xmm0_8
  double v13; // xmm6_8
  double v14; // xmm6_8
  double v16; // [rsp+D0h] [rbp+18h]

  v2 = 0;
  v3 = 0LL;
  *(double *)&v3 = a2;
  v4 = v3;
  v16 = (double)(a1 ^ 1u);
  do
  {
    v5 = pow(1.0 - *(double *)&v4, 2.0) * 3.0;
    v6 = pow(*(double *)&v4, 2.0) * ((1.0 - *(double *)&v4) * 3.0) + v5 * *(double *)&v4 * 0.0;
    v7 = v6 + pow(*(double *)&v4, 3.0);
    v8 = pow(*(double *)&v4, 2.0) * 3.0 * 0.0 + (1.0 - *(double *)&v4) * 6.0 * *(double *)&v4 + v5 * 0.0;
    v9 = v8;
    if ( COERCE_FLOAT(LODWORD(v9) & _xmm) < 0.0000011920929 )
      break;
    v10 = (v7 - *(double *)&v3) / v8;
    *((_QWORD *)&v11 + 1) = *((_QWORD *)&v4 + 1);
    *(double *)&v11 = *(double *)&v4 - v10;
    v12 = *(double *)&v4 - (*(double *)&v4 - v10);
    v4 = v11;
    *(float *)&v11 = v12;
    if ( COERCE_FLOAT(v11 & _xmm) < 0.0000011920929 )
      break;
    ++v2;
  }
  while ( v2 < 30 );
  v13 = pow(*(double *)&v4, 2.0) * ((1.0 - *(double *)&v4) * 3.0) * v16;
  v14 = v13 + pow(1.0 - *(double *)&v4, 2.0) * 3.0 * *(double *)&v4 * v16;
  return pow(*(double *)&v4, 3.0) + v14;
}
