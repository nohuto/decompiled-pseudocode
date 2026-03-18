/*
 * XREFs of SymCryptCallbackFree @ 0x14067DA18
 * Callers:
 *     SymCryptRsakeySetValue @ 0x1403F7B0C (SymCryptRsakeySetValue.c)
 *     SymCryptEcurveAllocate @ 0x1403F80AC (SymCryptEcurveAllocate.c)
 *     SymCryptEcurveFree @ 0x1403F8834 (SymCryptEcurveFree.c)
 *     SymCryptEckeyFree @ 0x1403F8958 (SymCryptEckeyFree.c)
 *     SymCryptEckeySetValue @ 0x1403F8A98 (SymCryptEckeySetValue.c)
 *     SymCryptEcDsaVerify @ 0x1403F9B90 (SymCryptEcDsaVerify.c)
 *     SymCryptRsaPkcs1Verify @ 0x1403FA3B0 (SymCryptRsaPkcs1Verify.c)
 * Callees:
 *     MincryptFree @ 0x140A71D30 (MincryptFree.c)
 */

__int64 __fastcall SymCryptCallbackFree(__int64 a1)
{
  return MincryptFree(a1 - *(unsigned int *)(a1 - 4));
}
