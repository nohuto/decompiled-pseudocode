/*
 * XREFs of SymCryptFdefMontgomeryReduce @ 0x140405624
 * Callers:
 *     SymCryptFdefModInvMontgomery @ 0x140404A60 (SymCryptFdefModInvMontgomery.c)
 *     SymCryptFdefModMulMontgomery @ 0x140404C80 (SymCryptFdefModMulMontgomery.c)
 *     SymCryptFdefModPreGetMontgomery @ 0x140404EE0 (SymCryptFdefModPreGetMontgomery.c)
 *     SymCryptFdefModSetPostMontgomery @ 0x140404FA0 (SymCryptFdefModSetPostMontgomery.c)
 *     SymCryptFdefModSquareMontgomery @ 0x140405210 (SymCryptFdefModSquareMontgomery.c)
 * Callees:
 *     SymCryptCpuFeaturesNeverPresent @ 0x14036882C (SymCryptCpuFeaturesNeverPresent.c)
 *     SymCryptFdefMontgomeryReduceAsm @ 0x140406610 (SymCryptFdefMontgomeryReduceAsm.c)
 *     SymCryptFdefMontgomeryReduceMulx @ 0x14040AF50 (SymCryptFdefMontgomeryReduceMulx.c)
 */

__int64 __fastcall SymCryptFdefMontgomeryReduce(__int64 a1, __int64 a2, __int64 a3)
{
  if ( ((g_SymCryptCpuFeaturesNotPresent | (unsigned int)SymCryptCpuFeaturesNeverPresent()) & 0x181) != 0 )
    return SymCryptFdefMontgomeryReduceAsm(a1, a2, a3);
  else
    return SymCryptFdefMontgomeryReduceMulx(a1, a2, a3);
}
