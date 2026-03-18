/*
 * XREFs of SymCryptIntBitsizeOfValue @ 0x140400B44
 * Callers:
 *     SymCryptRsakeySetValue @ 0x1403FF3BC (SymCryptRsakeySetValue.c)
 *     SymCryptEcurveAllocate @ 0x1403FF93C (SymCryptEcurveAllocate.c)
 *     SymCryptRsaCoreEnc @ 0x1404019F4 (SymCryptRsaCoreEnc.c)
 *     SymCryptFdefIntToDivisor @ 0x14040B088 (SymCryptFdefIntToDivisor.c)
 *     SymCryptFdefDecideModulusType @ 0x14040B698 (SymCryptFdefDecideModulusType.c)
 *     HashpVerifyPkcs1Signature @ 0x140A375DC (HashpVerifyPkcs1Signature.c)
 * Callees:
 *     SymCryptFdefIntBitsizeOfValue @ 0x14040D09C (SymCryptFdefIntBitsizeOfValue.c)
 */

__int64 SymCryptIntBitsizeOfValue()
{
  return SymCryptFdefIntBitsizeOfValue();
}
