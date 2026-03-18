/*
 * XREFs of SymCryptFdefDivisorCreate @ 0x14040D018
 * Callers:
 *     SymCryptDivisorCreate @ 0x140400ACC (SymCryptDivisorCreate.c)
 *     SymCryptFdefModulusCreate @ 0x14040CC4C (SymCryptFdefModulusCreate.c)
 * Callees:
 *     SymCryptIntCreate @ 0x140400BBC (SymCryptIntCreate.c)
 *     SymCryptSizeofDivisorFromDigits @ 0x140401338 (SymCryptSizeofDivisorFromDigits.c)
 *     SymCryptFatal @ 0x14056AF38 (SymCryptFatal.c)
 */

_DWORD *__fastcall SymCryptFdefDivisorCreate(_DWORD *a1, unsigned __int64 a2, int a3)
{
  unsigned int v6; // eax

  v6 = SymCryptSizeofDivisorFromDigits();
  if ( a2 < v6 )
    SymCryptFatal(1684633187LL);
  *a1 = 1732509696;
  a1[1] = a3;
  a1[2] = v6;
  SymCryptIntCreate();
  return a1;
}
