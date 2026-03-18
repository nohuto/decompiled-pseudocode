/*
 * XREFs of SymCryptEckeyFree @ 0x1403F8958
 * Callers:
 *     HashpVerifyEcdsaSignature @ 0x140A771D4 (HashpVerifyEcdsaSignature.c)
 * Callees:
 *     SymCryptEckeyWipe @ 0x1403F8EF0 (SymCryptEckeyWipe.c)
 *     SymCryptCallbackFree @ 0x14067DA18 (SymCryptCallbackFree.c)
 */

__int64 __fastcall SymCryptEckeyFree(__int64 a1)
{
  SymCryptEckeyWipe();
  return SymCryptCallbackFree(a1);
}
