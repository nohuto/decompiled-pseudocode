/*
 * XREFs of SymCryptEcpointIsZero @ 0x140402D3C
 * Callers:
 *     SymCryptEckeyPerformPublicKeyValidation @ 0x1403F897C (SymCryptEckeyPerformPublicKeyValidation.c)
 *     SymCryptEcDsaVerify @ 0x1403F9B90 (SymCryptEcDsaVerify.c)
 *     SymCryptEcpointMultiScalarMulWnafWithInterleaving @ 0x1403FE3A0 (SymCryptEcpointMultiScalarMulWnafWithInterleaving.c)
 *     SymCryptEcpointScalarMulFixedWindow @ 0x1403FE8B0 (SymCryptEcpointScalarMulFixedWindow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptEcpointIsZero(__int64 a1)
{
  return ((__int64 (*)(void))qword_140006970[12 * (*(_DWORD *)(a1 + 4) & 3)])();
}
