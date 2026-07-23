/*
 * XREFs of SymCryptEckeyFree @ 0x1403F8B38
 * Callers:
 *     HashpVerifyEcdsaSignature @ 0x140A77484 (HashpVerifyEcdsaSignature.c)
 * Callees:
 *     SymCryptEckeyWipe @ 0x1403F90D0 (SymCryptEckeyWipe.c)
 *     SymCryptCallbackFree @ 0x14067DF68 (SymCryptCallbackFree.c)
 */

__int64 __fastcall SymCryptEckeyFree(__int64 a1)
{
  SymCryptEckeyWipe();
  return SymCryptCallbackFree(a1);
}
