/*
 * XREFs of SymCryptIntBitsizeOfValue @ 0x1403F94B0
 * Callers:
 *     SymCryptRsakeySetValue @ 0x1403F7CEC (SymCryptRsakeySetValue.c)
 *     SymCryptEcurveAllocate @ 0x1403F828C (SymCryptEcurveAllocate.c)
 *     SymCryptRsaCoreEnc @ 0x1403FA2F4 (SymCryptRsaCoreEnc.c)
 *     SymCryptFdefIntToDivisor @ 0x14040395C (SymCryptFdefIntToDivisor.c)
 *     SymCryptFdefDecideModulusType @ 0x140403F70 (SymCryptFdefDecideModulusType.c)
 *     HashpVerifyPkcs1Signature @ 0x140A775BC (HashpVerifyPkcs1Signature.c)
 * Callees:
 *     SymCryptFdefIntBitsizeOfValue @ 0x1404058B0 (SymCryptFdefIntBitsizeOfValue.c)
 */

__int64 SymCryptIntBitsizeOfValue()
{
  return SymCryptFdefIntBitsizeOfValue();
}
