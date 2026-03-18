/*
 * XREFs of SymCryptFdefRawMul @ 0x14040B4A4
 * Callers:
 *     SymCryptFdefIntMulMixedSize @ 0x14040AE3C (SymCryptFdefIntMulMixedSize.c)
 *     SymCryptFdefModMulGeneric @ 0x14040C320 (SymCryptFdefModMulGeneric.c)
 *     SymCryptFdefModMulMontgomery @ 0x14040C3E0 (SymCryptFdefModMulMontgomery.c)
 *     SymCryptFdefModSetPostMontgomery @ 0x14040C740 (SymCryptFdefModSetPostMontgomery.c)
 * Callees:
 *     SymCryptCpuFeaturesNeverPresent @ 0x140259650 (SymCryptCpuFeaturesNeverPresent.c)
 *     SymCryptFdefRawMulAsm @ 0x14040D840 (SymCryptFdefRawMulAsm.c)
 *     SymCryptFdefRawMulMulx @ 0x1404116B0 (SymCryptFdefRawMulMulx.c)
 */

__int64 __fastcall SymCryptFdefRawMul(int a1, int a2, int a3, int a4, __int64 a5)
{
  if ( (((unsigned __int16)g_SymCryptCpuFeaturesNotPresent | (unsigned __int16)SymCryptCpuFeaturesNeverPresent()) & 0x181) != 0 )
    return SymCryptFdefRawMulAsm(a1, a2, a3, a4, a5);
  else
    return SymCryptFdefRawMulMulx(a1, a2, a3, a4, a5);
}
