/*
 * XREFs of SymCryptRsakeySizeofModulus @ 0x1403FF880
 * Callers:
 *     SymCryptRsaCoreVerifyInput @ 0x140401BCC (SymCryptRsaCoreVerifyInput.c)
 *     SymCryptRsaPkcs1Verify @ 0x140401C90 (SymCryptRsaPkcs1Verify.c)
 *     HashpVerifyPkcs1Signature @ 0x140A375DC (HashpVerifyPkcs1Signature.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptRsakeySizeofModulus(__int64 a1)
{
  return (unsigned int)(*(_DWORD *)(a1 + 12) + 7) >> 3;
}
