/*
 * XREFs of SymCryptIntFromModulus @ 0x1403F959C
 * Callers:
 *     SymCryptRsakeyCalculatePrivateFields @ 0x1403F77A8 (SymCryptRsakeyCalculatePrivateFields.c)
 *     SymCryptRsakeySetValue @ 0x1403F7CEC (SymCryptRsakeySetValue.c)
 *     SymCryptEcurveAllocate @ 0x1403F828C (SymCryptEcurveAllocate.c)
 *     SymCryptEckeyPerformPublicKeyValidation @ 0x1403F8B5C (SymCryptEckeyPerformPublicKeyValidation.c)
 *     SymCryptEckeySetValue @ 0x1403F8C78 (SymCryptEckeySetValue.c)
 *     SymCryptEcDsaVerify @ 0x1403F9D70 (SymCryptEcDsaVerify.c)
 *     SymCryptRsaCoreVerifyInput @ 0x1403FA4CC (SymCryptRsaCoreVerifyInput.c)
 *     SymCryptCrtGenerateForTwoCoprimes @ 0x1403FDD40 (SymCryptCrtGenerateForTwoCoprimes.c)
 *     SymCryptEcpointScalarMulFixedWindow @ 0x1403FEA90 (SymCryptEcpointScalarMulFixedWindow.c)
 *     SymCryptEcpointSetValue @ 0x1403FF440 (SymCryptEcpointSetValue.c)
 *     SymCryptFdefModInvGeneric @ 0x1404046C0 (SymCryptFdefModInvGeneric.c)
 * Callees:
 *     SymCryptFdefIntFromModulus @ 0x140404028 (SymCryptFdefIntFromModulus.c)
 */

__int64 SymCryptIntFromModulus()
{
  return SymCryptFdefIntFromModulus();
}
