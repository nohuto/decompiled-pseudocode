/*
 * XREFs of SymCryptEcurveFree @ 0x1403F8A14
 * Callers:
 *     HashpVerifyEcdsaSignature @ 0x140A77484 (HashpVerifyEcdsaSignature.c)
 * Callees:
 *     SymCryptWipe @ 0x1403F66E8 (SymCryptWipe.c)
 *     SymCryptCallbackFree @ 0x14067DF68 (SymCryptCallbackFree.c)
 */

__int64 __fastcall SymCryptEcurveFree(__int64 a1)
{
  SymCryptWipe(a1, *(unsigned int *)(a1 + 40));
  return SymCryptCallbackFree(a1);
}
