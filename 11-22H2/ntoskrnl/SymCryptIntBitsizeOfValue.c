/*
 * XREFs of SymCryptIntBitsizeOfValue @ 0x1403F8C70
 * Callers:
 *     SymCryptRsakeySetValue @ 0x1403F74AC (SymCryptRsakeySetValue.c)
 *     SymCryptEcurveAllocate @ 0x1403F7A4C (SymCryptEcurveAllocate.c)
 *     SymCryptRsaCoreEnc @ 0x1403F9AB4 (SymCryptRsaCoreEnc.c)
 *     SymCryptFdefIntToDivisor @ 0x14040311C (SymCryptFdefIntToDivisor.c)
 *     SymCryptFdefDecideModulusType @ 0x140403730 (SymCryptFdefDecideModulusType.c)
 *     HashpVerifyPkcs1Signature @ 0x140A7737C (HashpVerifyPkcs1Signature.c)
 * Callees:
 *     SymCryptFdefIntBitsizeOfValue @ 0x140405070 (SymCryptFdefIntBitsizeOfValue.c)
 */

__int64 SymCryptIntBitsizeOfValue()
{
  return SymCryptFdefIntBitsizeOfValue();
}
