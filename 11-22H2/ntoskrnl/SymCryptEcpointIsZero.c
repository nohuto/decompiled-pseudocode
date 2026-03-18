/*
 * XREFs of SymCryptEcpointIsZero @ 0x1404026DC
 * Callers:
 *     SymCryptEckeyPerformPublicKeyValidation @ 0x1403F831C (SymCryptEckeyPerformPublicKeyValidation.c)
 *     SymCryptEcDsaVerify @ 0x1403F9530 (SymCryptEcDsaVerify.c)
 *     SymCryptEcpointMultiScalarMulWnafWithInterleaving @ 0x1403FDD40 (SymCryptEcpointMultiScalarMulWnafWithInterleaving.c)
 *     SymCryptEcpointScalarMulFixedWindow @ 0x1403FE250 (SymCryptEcpointScalarMulFixedWindow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptEcpointIsZero(__int64 a1)
{
  return ((__int64 (*)(void))qword_140006970[12 * (*(_DWORD *)(a1 + 4) & 3)])();
}
