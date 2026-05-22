/*
 * XREFs of ?AddRef@CSaturationEffect@DirectComposition@@WBI@EAAKXZ @ 0x1800A83B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall DirectComposition::CSaturationEffect::AddRef(__int64 a1)
{
  return DirectComposition::CArithmeticCompositeEffect::AddRef((DirectComposition::CArithmeticCompositeEffect *)(a1 - 24));
}
