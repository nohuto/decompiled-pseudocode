/*
 * XREFs of SymCryptRsakeyWipe @ 0x1403F81E4
 * Callers:
 *     HashpVerifyPkcs1Signature @ 0x140A775BC (HashpVerifyPkcs1Signature.c)
 * Callees:
 *     SymCryptWipe @ 0x1403F66E8 (SymCryptWipe.c)
 */

__int64 __fastcall SymCryptRsakeyWipe(unsigned int *a1)
{
  return SymCryptWipe((__int64)a1, *a1);
}
