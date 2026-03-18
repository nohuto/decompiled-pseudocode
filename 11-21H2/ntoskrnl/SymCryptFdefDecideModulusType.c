/*
 * XREFs of SymCryptFdefDecideModulusType @ 0x14040B698
 * Callers:
 *     SymCryptFdefIntToModulus @ 0x14040B7F4 (SymCryptFdefIntToModulus.c)
 * Callees:
 *     SymCryptCpuFeaturesNeverPresent @ 0x140259650 (SymCryptCpuFeaturesNeverPresent.c)
 *     SymCryptDigitsFromBits @ 0x140400AB4 (SymCryptDigitsFromBits.c)
 *     SymCryptIntBitsizeOfValue @ 0x140400B44 (SymCryptIntBitsizeOfValue.c)
 *     SymCryptIntGetValueLsbits32 @ 0x140400C78 (SymCryptIntGetValueLsbits32.c)
 */

__int64 __fastcall SymCryptFdefDecideModulusType(__int64 a1, unsigned int a2, unsigned int a3, char a4)
{
  int v8; // edi
  unsigned int v9; // r14d
  unsigned int *i; // rbx
  unsigned int v11; // esi

  v8 = 0;
  v9 = SymCryptIntBitsizeOfValue();
  if ( (a4 & 3) != 0 && (SymCryptIntGetValueLsbits32(a1) & 1) != 0 )
    v8 = a3 >= 0xA;
  for ( i = (unsigned int *)&SymCryptModulusTypeSelections; ; i += 4 )
  {
    v11 = i[1];
    if ( ((unsigned int)SymCryptCpuFeaturesNeverPresent() & v11) == 0
      && (v11 & g_SymCryptCpuFeaturesNotPresent) == 0
      && (!i[2] || a2 <= (unsigned int)SymCryptDigitsFromBits() && v9 <= i[2])
      && (~v8 & i[3]) == 0 )
    {
      break;
    }
  }
  return *i;
}
