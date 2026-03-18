/*
 * XREFs of SymCryptFdefSizeofModulusFromDigits @ 0x14040549C
 * Callers:
 *     SymCryptSizeofModulusFromDigits @ 0x1403F9AA0 (SymCryptSizeofModulusFromDigits.c)
 *     SymCryptFdefModulusCreate @ 0x14040529C (SymCryptFdefModulusCreate.c)
 * Callees:
 *     SymCryptFdefSizeofDivisorFromDigits @ 0x140405B60 (SymCryptFdefSizeofDivisorFromDigits.c)
 */

__int64 __fastcall SymCryptFdefSizeofModulusFromDigits(__int64 a1)
{
  if ( (unsigned int)(a1 - 1) > 0x7FF )
    return 0LL;
  else
    return (((_DWORD)a1 + 1) << 6) + (unsigned int)SymCryptFdefSizeofDivisorFromDigits(a1);
}
