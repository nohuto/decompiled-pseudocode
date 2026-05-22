/*
 * XREFs of ?Release@CSaturationEffect@DirectComposition@@W7EAAKXZ @ 0x1800A8ED0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall DirectComposition::CSaturationEffect::Release(__int64 a1)
{
  return DirectComposition::CAffineTransform2DEffect::Release((DirectComposition::CAffineTransform2DEffect *)(a1 - 8));
}
