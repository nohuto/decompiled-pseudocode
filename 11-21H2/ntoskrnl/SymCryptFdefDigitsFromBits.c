/*
 * XREFs of SymCryptFdefDigitsFromBits @ 0x14040CFD4
 * Callers:
 *     SymCryptDigitsFromBits @ 0x140400AB4 (SymCryptDigitsFromBits.c)
 * Callees:
 *     SymCryptFatal @ 0x14056AF38 (SymCryptFatal.c)
 */

__int64 __fastcall SymCryptFdefDigitsFromBits(unsigned int a1)
{
  if ( !a1 )
    return 1LL;
  if ( a1 > 0x100000 )
    SymCryptFatal(1717856116LL);
  return (a1 >> 9) + (((a1 & 0x1FF) + 511) >> 9);
}
