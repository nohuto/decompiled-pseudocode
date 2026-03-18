/*
 * XREFs of SymCryptFdefRawSquare @ 0x140403CE8
 * Callers:
 *     SymCryptFdefModSquareGeneric @ 0x140404F90 (SymCryptFdefModSquareGeneric.c)
 *     SymCryptFdefModSquareMontgomery @ 0x140405030 (SymCryptFdefModSquareMontgomery.c)
 * Callees:
 *     SymCryptCpuFeaturesNeverPresent @ 0x14036868C (SymCryptCpuFeaturesNeverPresent.c)
 *     SymCryptFdefRawSquareAsm @ 0x140406070 (SymCryptFdefRawSquareAsm.c)
 *     SymCryptFdefRawSquareMulx @ 0x14040A2E0 (SymCryptFdefRawSquareMulx.c)
 */

__int64 __fastcall SymCryptFdefRawSquare(__int64 a1, unsigned int a2, __int64 a3)
{
  if ( ((g_SymCryptCpuFeaturesNotPresent | (unsigned int)SymCryptCpuFeaturesNeverPresent()) & 0x181) != 0 )
    return SymCryptFdefRawSquareAsm(a1, a2, a3);
  else
    return SymCryptFdefRawSquareMulx(a1, a2, a3);
}
