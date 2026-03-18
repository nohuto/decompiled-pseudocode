/*
 * XREFs of SymCryptEcurveFree @ 0x1403F8834
 * Callers:
 *     HashpVerifyEcdsaSignature @ 0x140A771D4 (HashpVerifyEcdsaSignature.c)
 * Callees:
 *     SymCryptWipe @ 0x1403F6508 (SymCryptWipe.c)
 *     SymCryptCallbackFree @ 0x14067DA18 (SymCryptCallbackFree.c)
 */

__int64 __fastcall SymCryptEcurveFree(__int64 a1)
{
  SymCryptWipe(a1, *(unsigned int *)(a1 + 40));
  return SymCryptCallbackFree(a1);
}
