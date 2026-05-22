/*
 * XREFs of ?IsPointInHorizontalQuadrant@@YA_NNUfloat2@Numerics@Foundation@Windows@@@Z @ 0x1801BFE0C
 * Callers:
 *     ?UpdatePoint@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1801C21EC (-UpdatePoint@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z.c)
 * Callees:
 *     _o_atan2f_0 @ 0x18004A84C (_o_atan2f_0.c)
 */

bool __fastcall IsPointInHorizontalQuadrant(double a1, __int64 a2)
{
  float v3; // xmm0_4
  double v4; // xmm6_8
  double v5; // xmm1_8

  v3 = *((float *)&a2 + 1);
  v4 = a1 * 0.5;
  o_atan2f_0();
  *(_QWORD *)&v5 = COERCE_UNSIGNED_INT64(v3) & _xmm;
  return v4 > v5 || v5 > 3.141592741012573 - v4;
}
