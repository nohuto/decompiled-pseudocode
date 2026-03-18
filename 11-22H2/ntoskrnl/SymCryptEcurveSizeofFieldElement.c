/*
 * XREFs of SymCryptEcurveSizeofFieldElement @ 0x1403F81FC
 * Callers:
 *     SymCryptEckeySetValue @ 0x1403F8438 (SymCryptEckeySetValue.c)
 *     SymCryptEcDsaVerify @ 0x1403F9530 (SymCryptEcDsaVerify.c)
 *     SymCryptEcpointGetValue @ 0x1403FEA70 (SymCryptEcpointGetValue.c)
 *     SymCryptEcpointSetValue @ 0x1403FEC00 (SymCryptEcpointSetValue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptEcurveSizeofFieldElement(__int64 a1)
{
  return *(unsigned int *)(a1 + 20);
}
