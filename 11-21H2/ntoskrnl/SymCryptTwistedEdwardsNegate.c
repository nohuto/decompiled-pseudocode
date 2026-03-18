/*
 * XREFs of SymCryptTwistedEdwardsNegate @ 0x140407E00
 * Callers:
 *     <none>
 * Callees:
 *     SymCryptModElementCreate @ 0x140400F4C (SymCryptModElementCreate.c)
 *     SymCryptModElementMaskedCopy @ 0x140400FC8 (SymCryptModElementMaskedCopy.c)
 *     SymCryptModNeg @ 0x140401210 (SymCryptModNeg.c)
 */

__int64 __fastcall SymCryptTwistedEdwardsNegate(__int64 a1)
{
  _DWORD *v1; // r15

  v1 = *(_DWORD **)(a1 + 616);
  SymCryptModElementCreate();
  SymCryptModNeg(v1);
  SymCryptModElementMaskedCopy();
  SymCryptModNeg(v1);
  return SymCryptModElementMaskedCopy();
}
