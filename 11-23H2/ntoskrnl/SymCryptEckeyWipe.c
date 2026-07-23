/*
 * XREFs of SymCryptEckeyWipe @ 0x1403F90D0
 * Callers:
 *     SymCryptEckeyFree @ 0x1403F8B38 (SymCryptEckeyFree.c)
 * Callees:
 *     SymCryptWipe @ 0x1403F66E8 (SymCryptWipe.c)
 *     SymCryptSizeofEckeyFromCurve @ 0x1403F90FC (SymCryptSizeofEckeyFromCurve.c)
 */

__int64 __fastcall SymCryptEckeyWipe(__int64 a1)
{
  unsigned int v2; // eax

  v2 = SymCryptSizeofEckeyFromCurve(*(_QWORD *)(a1 + 8));
  return SymCryptWipe(a1, v2);
}
