/*
 * XREFs of ?AddRef@CGaussianBlurEffect@DirectComposition@@W7EAAKXZ @ 0x1800A8390
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall DirectComposition::CGaussianBlurEffect::AddRef(__int64 a1)
{
  return DirectComposition::CArithmeticCompositeEffect::AddRef((DirectComposition::CArithmeticCompositeEffect *)(a1 - 8));
}
