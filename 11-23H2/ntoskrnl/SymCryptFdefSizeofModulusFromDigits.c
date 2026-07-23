/*
 * XREFs of SymCryptFdefSizeofModulusFromDigits @ 0x14040567C
 * Callers:
 *     SymCryptSizeofModulusFromDigits @ 0x1403F9C80 (SymCryptSizeofModulusFromDigits.c)
 *     SymCryptFdefModulusCreate @ 0x14040547C (SymCryptFdefModulusCreate.c)
 * Callees:
 *     SymCryptFdefSizeofDivisorFromDigits @ 0x140405D40 (SymCryptFdefSizeofDivisorFromDigits.c)
 */

__int64 __fastcall SymCryptFdefSizeofModulusFromDigits(__int64 a1)
{
  if ( (unsigned int)(a1 - 1) > 0x7FF )
    return 0LL;
  else
    return (((_DWORD)a1 + 1) << 6) + (unsigned int)SymCryptFdefSizeofDivisorFromDigits(a1);
}
