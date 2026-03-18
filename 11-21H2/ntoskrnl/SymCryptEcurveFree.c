/*
 * XREFs of SymCryptEcurveFree @ 0x1404000C8
 * Callers:
 *     HashpVerifyEcdsaSignature @ 0x140A374B0 (HashpVerifyEcdsaSignature.c)
 * Callees:
 *     SymCryptWipe @ 0x1403FDDE8 (SymCryptWipe.c)
 *     SymCryptCallbackFree @ 0x140656BA8 (SymCryptCallbackFree.c)
 */

__int64 __fastcall SymCryptEcurveFree(__int64 a1)
{
  SymCryptWipe(a1, *(unsigned int *)(a1 + 40));
  return SymCryptCallbackFree(a1);
}
