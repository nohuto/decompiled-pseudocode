/*
 * XREFs of ?NormalizedDotProduct@MathHelper@@SANUtagPOINT@@0@Z @ 0x1801C8EF8
 * Callers:
 *     ?CheckForTwoFingerPan@MagnifierRecognizer@@AEAAXXZ @ 0x1801DBF1C (-CheckForTwoFingerPan@MagnifierRecognizer@@AEAAXXZ.c)
 * Callees:
 *     sqrt @ 0x1800573B8 (sqrt.c)
 */

double __fastcall MathHelper::NormalizedDotProduct(struct tagPOINT a1, struct tagPOINT a2)
{
  LONG x; // ebx
  LONG y; // edi
  double v4; // xmm7_8
  double v5; // xmm6_8

  x = a1.x;
  y = a1.y;
  v4 = (double)(a1.x * a2.x + a2.y * a1.y);
  v5 = sqrt((double)(a2.x * a2.x + a2.y * a2.y));
  return v4 / (v5 * sqrt((double)(x * x + y * y)));
}
