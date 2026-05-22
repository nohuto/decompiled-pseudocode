/*
 * XREFs of ?Release@CLinearTransferEffect@DirectComposition@@WBI@EAAKXZ @ 0x1800A8EF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall DirectComposition::CLinearTransferEffect::Release(__int64 a1)
{
  return DirectComposition::CAffineTransform2DEffect::Release((DirectComposition::CAffineTransform2DEffect *)(a1 - 24));
}
