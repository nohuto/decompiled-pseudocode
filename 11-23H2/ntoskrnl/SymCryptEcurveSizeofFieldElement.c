/*
 * XREFs of SymCryptEcurveSizeofFieldElement @ 0x1403F885C
 * Callers:
 *     SymCryptEckeySetValue @ 0x1403F8A98 (SymCryptEckeySetValue.c)
 *     SymCryptEcDsaVerify @ 0x1403F9B90 (SymCryptEcDsaVerify.c)
 *     SymCryptEcpointGetValue @ 0x1403FF0D0 (SymCryptEcpointGetValue.c)
 *     SymCryptEcpointSetValue @ 0x1403FF260 (SymCryptEcpointSetValue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptEcurveSizeofFieldElement(__int64 a1)
{
  return *(unsigned int *)(a1 + 20);
}
