/*
 * XREFs of SymCryptTwistedEdwardsNegate @ 0x140400700
 * Callers:
 *     <none>
 * Callees:
 *     SymCryptModElementCreate @ 0x1403F984C (SymCryptModElementCreate.c)
 *     SymCryptModElementMaskedCopy @ 0x1403F98C8 (SymCryptModElementMaskedCopy.c)
 *     SymCryptModNeg @ 0x1403F9B10 (SymCryptModNeg.c)
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
