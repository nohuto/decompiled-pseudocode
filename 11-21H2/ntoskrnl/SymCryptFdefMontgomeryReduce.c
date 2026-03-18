/*
 * XREFs of SymCryptFdefMontgomeryReduce @ 0x14040CE04
 * Callers:
 *     SymCryptFdefModInvMontgomery @ 0x14040C1C0 (SymCryptFdefModInvMontgomery.c)
 *     SymCryptFdefModMulMontgomery @ 0x14040C3E0 (SymCryptFdefModMulMontgomery.c)
 *     SymCryptFdefModPreGetMontgomery @ 0x14040C640 (SymCryptFdefModPreGetMontgomery.c)
 *     SymCryptFdefModSetPostMontgomery @ 0x14040C740 (SymCryptFdefModSetPostMontgomery.c)
 *     SymCryptFdefModSquareMontgomery @ 0x14040C9E0 (SymCryptFdefModSquareMontgomery.c)
 * Callees:
 *     SymCryptCpuFeaturesNeverPresent @ 0x140259650 (SymCryptCpuFeaturesNeverPresent.c)
 *     SymCryptFdefMontgomeryReduceAsm @ 0x14040DE40 (SymCryptFdefMontgomeryReduceAsm.c)
 *     SymCryptFdefMontgomeryReduceMulx @ 0x140412770 (SymCryptFdefMontgomeryReduceMulx.c)
 */

__int64 __fastcall SymCryptFdefMontgomeryReduce(__int64 a1, __int64 a2, __int64 a3)
{
  if ( ((g_SymCryptCpuFeaturesNotPresent | (unsigned int)SymCryptCpuFeaturesNeverPresent()) & 0x181) != 0 )
    return SymCryptFdefMontgomeryReduceAsm(a1, a2, a3);
  else
    return SymCryptFdefMontgomeryReduceMulx(a1, a2, a3);
}
