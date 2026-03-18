/*
 * XREFs of SymCryptRsakeySizeofModulus @ 0x1403F7FF0
 * Callers:
 *     SymCryptRsaCoreVerifyInput @ 0x1403FA2EC (SymCryptRsaCoreVerifyInput.c)
 *     SymCryptRsaPkcs1Verify @ 0x1403FA3B0 (SymCryptRsaPkcs1Verify.c)
 *     HashpVerifyPkcs1Signature @ 0x140A7730C (HashpVerifyPkcs1Signature.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptRsakeySizeofModulus(__int64 a1)
{
  return (unsigned int)(*(_DWORD *)(a1 + 12) + 7) >> 3;
}
