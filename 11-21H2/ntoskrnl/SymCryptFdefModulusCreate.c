/*
 * XREFs of SymCryptFdefModulusCreate @ 0x14040CC4C
 * Callers:
 *     SymCryptModulusCreate @ 0x140401320 (SymCryptModulusCreate.c)
 * Callees:
 *     SymCryptFdefDivisorCreate @ 0x14040D018 (SymCryptFdefDivisorCreate.c)
 *     SymCryptFdefSizeofDivisorFromDigits @ 0x14040D558 (SymCryptFdefSizeofDivisorFromDigits.c)
 *     SymCryptFatal @ 0x14056AF38 (SymCryptFatal.c)
 */

_DWORD *__fastcall SymCryptFdefModulusCreate(_DWORD *a1, unsigned __int64 a2, unsigned int a3)
{
  int v4; // esi
  unsigned __int64 v7; // r14

  v4 = a3 << 6;
  v7 = (a3 << 6) + (unsigned int)SymCryptFdefSizeofDivisorFromDigits(a3) + 64;
  if ( a2 < v7 )
    SymCryptFatal(1836016739LL);
  a1[3] = 0;
  *a1 = 1733099520;
  a1[1] = a3;
  a1[2] = v7;
  a1[4] = v4;
  SymCryptFdefDivisorCreate(a1 + 16, a2 - 64, a3);
  return a1;
}
