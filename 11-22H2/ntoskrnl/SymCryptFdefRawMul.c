/*
 * XREFs of SymCryptFdefRawMul @ 0x14040353C
 * Callers:
 *     SymCryptFdefIntMulMixedSize @ 0x140402ECC (SymCryptFdefIntMulMixedSize.c)
 *     SymCryptFdefModMulGeneric @ 0x140404380 (SymCryptFdefModMulGeneric.c)
 *     SymCryptFdefModMulMontgomery @ 0x140404440 (SymCryptFdefModMulMontgomery.c)
 *     SymCryptFdefModSetPostMontgomery @ 0x140404760 (SymCryptFdefModSetPostMontgomery.c)
 * Callees:
 *     SymCryptCpuFeaturesNeverPresent @ 0x14036803C (SymCryptCpuFeaturesNeverPresent.c)
 *     SymCryptFdefRawMulAsm @ 0x1404057E0 (SymCryptFdefRawMulAsm.c)
 *     SymCryptFdefRawMulMulx @ 0x140409660 (SymCryptFdefRawMulMulx.c)
 */

__int64 __fastcall SymCryptFdefRawMul(int a1, int a2, int a3, int a4, __int64 a5)
{
  if ( (((unsigned __int16)g_SymCryptCpuFeaturesNotPresent | (unsigned __int16)SymCryptCpuFeaturesNeverPresent()) & 0x181) != 0 )
    return SymCryptFdefRawMulAsm(a1, a2, a3, a4, a5);
  else
    return SymCryptFdefRawMulMulx(a1, a2, a3, a4, a5);
}
