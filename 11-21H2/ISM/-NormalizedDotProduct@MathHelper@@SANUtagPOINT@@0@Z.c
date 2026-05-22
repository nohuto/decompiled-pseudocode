/*
 * XREFs of ?NormalizedDotProduct@MathHelper@@SANUtagPOINT@@0@Z @ 0x18019D468
 * Callers:
 *     ?CheckForTwoFingerPan@MagnifierRecognizer@@AEAAXXZ @ 0x1801B0274 (-CheckForTwoFingerPan@MagnifierRecognizer@@AEAAXXZ.c)
 * Callees:
 *     sqrt @ 0x18004A8B8 (sqrt.c)
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
