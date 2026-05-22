/*
 * XREFs of ?WithinAngle@EdgyRecognizer@@AEAA_NUtagPOINT@@0UVector2@Numerics@Foundation@Windows@@M@Z @ 0x1801787F8
 * Callers:
 *     ?OnPointerInfoFrame@EdgyRecognizer@@QEAAJPEAUPointerInputInfo@@AEAUtagPOINTER_INFO@@@Z @ 0x1801785C0 (-OnPointerInfoFrame@EdgyRecognizer@@QEAAJPEAUPointerInputInfo@@AEAUtagPOINTER_INFO@@@Z.c)
 * Callees:
 *     cosf @ 0x180057364 (cosf.c)
 *     ?NormalizedDotProduct@MathHelper@@SANUVector2@Numerics@Foundation@Windows@@0@Z @ 0x1801C8E2C (-NormalizedDotProduct@MathHelper@@SANUVector2@Numerics@Foundation@Windows@@0@Z.c)
 */

bool __fastcall EdgyRecognizer::WithinAngle(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, float a5)
{
  int v5; // eax
  unsigned __int64 v6; // r8
  double v8; // xmm6_8
  __int64 v9; // [rsp+48h] [rbp+10h]

  v5 = a2 - a3;
  v6 = HIDWORD(a3);
  if ( *(float *)&a4 == 0.0 && *((float *)&a4 + 1) == 0.0 )
    return 0;
  if ( (float)v5 == 0.0 && (float)(HIDWORD(a2) - (int)v6) == 0.0 )
    return 1;
  *(float *)&v9 = (float)v5;
  *((float *)&v9 + 1) = (float)(HIDWORD(a2) - (int)v6);
  v8 = MathHelper::NormalizedDotProduct(v9, a4);
  return v8 >= cosf(a5 * 0.017453292);
}
