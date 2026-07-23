/*
 * XREFs of SymCryptCallbackFree @ 0x14067DF68
 * Callers:
 *     SymCryptRsakeySetValue @ 0x1403F7CEC (SymCryptRsakeySetValue.c)
 *     SymCryptEcurveAllocate @ 0x1403F828C (SymCryptEcurveAllocate.c)
 *     SymCryptEcurveFree @ 0x1403F8A14 (SymCryptEcurveFree.c)
 *     SymCryptEckeyFree @ 0x1403F8B38 (SymCryptEckeyFree.c)
 *     SymCryptEckeySetValue @ 0x1403F8C78 (SymCryptEckeySetValue.c)
 *     SymCryptEcDsaVerify @ 0x1403F9D70 (SymCryptEcDsaVerify.c)
 *     SymCryptRsaPkcs1Verify @ 0x1403FA590 (SymCryptRsaPkcs1Verify.c)
 * Callees:
 *     MincryptFree @ 0x140A71FE0 (MincryptFree.c)
 */

__int64 __fastcall SymCryptCallbackFree(__int64 a1)
{
  return MincryptFree(a1 - *(unsigned int *)(a1 - 4));
}
