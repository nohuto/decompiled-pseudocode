/*
 * XREFs of SymCryptRsakeyWipe @ 0x1403F8004
 * Callers:
 *     HashpVerifyPkcs1Signature @ 0x140A7730C (HashpVerifyPkcs1Signature.c)
 * Callees:
 *     SymCryptWipe @ 0x1403F6508 (SymCryptWipe.c)
 */

__int64 __fastcall SymCryptRsakeyWipe(unsigned int *a1)
{
  return SymCryptWipe((__int64)a1, *a1);
}
