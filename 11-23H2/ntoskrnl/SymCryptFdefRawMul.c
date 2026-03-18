/*
 * XREFs of SymCryptFdefRawMul @ 0x140403B9C
 * Callers:
 *     SymCryptFdefIntMulMixedSize @ 0x14040352C (SymCryptFdefIntMulMixedSize.c)
 *     SymCryptFdefModMulGeneric @ 0x1404049E0 (SymCryptFdefModMulGeneric.c)
 *     SymCryptFdefModMulMontgomery @ 0x140404AA0 (SymCryptFdefModMulMontgomery.c)
 *     SymCryptFdefModSetPostMontgomery @ 0x140404DC0 (SymCryptFdefModSetPostMontgomery.c)
 * Callees:
 *     SymCryptCpuFeaturesNeverPresent @ 0x14036868C (SymCryptCpuFeaturesNeverPresent.c)
 *     SymCryptFdefRawMulAsm @ 0x140405E40 (SymCryptFdefRawMulAsm.c)
 *     SymCryptFdefRawMulMulx @ 0x140409CC0 (SymCryptFdefRawMulMulx.c)
 */

__int64 __fastcall SymCryptFdefRawMul(int a1, int a2, int a3, int a4, __int64 a5)
{
  if ( (((unsigned __int16)g_SymCryptCpuFeaturesNotPresent | (unsigned __int16)SymCryptCpuFeaturesNeverPresent()) & 0x181) != 0 )
    return SymCryptFdefRawMulAsm(a1, a2, a3, a4, a5);
  else
    return SymCryptFdefRawMulMulx(a1, a2, a3, a4, a5);
}
