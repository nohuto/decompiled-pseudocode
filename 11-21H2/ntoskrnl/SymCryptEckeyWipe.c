/*
 * XREFs of SymCryptEckeyWipe @ 0x140400770
 * Callers:
 *     SymCryptEckeyFree @ 0x1404001EC (SymCryptEckeyFree.c)
 * Callees:
 *     SymCryptWipe @ 0x1403FDDE8 (SymCryptWipe.c)
 *     SymCryptSizeofEckeyFromCurve @ 0x14040079C (SymCryptSizeofEckeyFromCurve.c)
 */

__int64 __fastcall SymCryptEckeyWipe(__int64 a1)
{
  unsigned int v2; // eax

  v2 = SymCryptSizeofEckeyFromCurve(*(_QWORD *)(a1 + 8));
  return SymCryptWipe(a1, v2);
}
