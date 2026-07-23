/*
 * XREFs of SymCryptEcurveSizeofFieldElement @ 0x1403F8A3C
 * Callers:
 *     SymCryptEckeySetValue @ 0x1403F8C78 (SymCryptEckeySetValue.c)
 *     SymCryptEcDsaVerify @ 0x1403F9D70 (SymCryptEcDsaVerify.c)
 *     SymCryptEcpointGetValue @ 0x1403FF2B0 (SymCryptEcpointGetValue.c)
 *     SymCryptEcpointSetValue @ 0x1403FF440 (SymCryptEcpointSetValue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptEcurveSizeofFieldElement(__int64 a1)
{
  return *(unsigned int *)(a1 + 20);
}
