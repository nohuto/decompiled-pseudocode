/*
 * XREFs of SymCryptIntWipe @ 0x1403F95BC
 * Callers:
 *     SymCryptRsaCoreEnc @ 0x1403FA114 (SymCryptRsaCoreEnc.c)
 *     HashpVerifyPkcs1Signature @ 0x140A7730C (HashpVerifyPkcs1Signature.c)
 * Callees:
 *     SymCryptWipe @ 0x1403F6508 (SymCryptWipe.c)
 */

__int64 __fastcall SymCryptIntWipe(__int64 a1)
{
  return SymCryptWipe(a1, *(unsigned int *)(a1 + 8));
}
