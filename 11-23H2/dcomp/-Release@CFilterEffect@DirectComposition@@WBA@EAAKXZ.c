/*
 * XREFs of ?Release@CFilterEffect@DirectComposition@@WBA@EAAKXZ @ 0x1800A90B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall DirectComposition::CFilterEffect::Release(__int64 a1)
{
  return DirectComposition::CSynchronousSuperWetInk::Release((DirectComposition::CSynchronousSuperWetInk *)(a1 - 16));
}
