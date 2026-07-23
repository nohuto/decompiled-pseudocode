/*
 * XREFs of SymCryptFdefModElementMaskedCopy @ 0x1404044DC
 * Callers:
 *     SymCryptModElementMaskedCopy @ 0x1403F98C8 (SymCryptModElementMaskedCopy.c)
 * Callees:
 *     SymCryptFdefMaskedCopy @ 0x140405B9C (SymCryptFdefMaskedCopy.c)
 */

__int64 __fastcall SymCryptFdefModElementMaskedCopy(__int64 a1, __int64 a2, __int64 a3)
{
  return SymCryptFdefMaskedCopy(a2, a3, *(unsigned int *)(a1 + 4));
}
