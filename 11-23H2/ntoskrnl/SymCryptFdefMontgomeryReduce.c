/*
 * XREFs of SymCryptFdefMontgomeryReduce @ 0x140405444
 * Callers:
 *     SymCryptFdefModInvMontgomery @ 0x140404880 (SymCryptFdefModInvMontgomery.c)
 *     SymCryptFdefModMulMontgomery @ 0x140404AA0 (SymCryptFdefModMulMontgomery.c)
 *     SymCryptFdefModPreGetMontgomery @ 0x140404D00 (SymCryptFdefModPreGetMontgomery.c)
 *     SymCryptFdefModSetPostMontgomery @ 0x140404DC0 (SymCryptFdefModSetPostMontgomery.c)
 *     SymCryptFdefModSquareMontgomery @ 0x140405030 (SymCryptFdefModSquareMontgomery.c)
 * Callees:
 *     SymCryptCpuFeaturesNeverPresent @ 0x14036868C (SymCryptCpuFeaturesNeverPresent.c)
 *     SymCryptFdefMontgomeryReduceAsm @ 0x140406430 (SymCryptFdefMontgomeryReduceAsm.c)
 *     SymCryptFdefMontgomeryReduceMulx @ 0x14040AD70 (SymCryptFdefMontgomeryReduceMulx.c)
 */

__int64 __fastcall SymCryptFdefMontgomeryReduce(__int64 a1, __int64 a2, __int64 a3)
{
  if ( ((g_SymCryptCpuFeaturesNotPresent | (unsigned int)SymCryptCpuFeaturesNeverPresent()) & 0x181) != 0 )
    return SymCryptFdefMontgomeryReduceAsm(a1, a2, a3);
  else
    return SymCryptFdefMontgomeryReduceMulx(a1, a2, a3);
}
