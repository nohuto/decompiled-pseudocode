/*
 * XREFs of SymCryptIntBitsizeOfValue @ 0x1403F92D0
 * Callers:
 *     SymCryptRsakeySetValue @ 0x1403F7B0C (SymCryptRsakeySetValue.c)
 *     SymCryptEcurveAllocate @ 0x1403F80AC (SymCryptEcurveAllocate.c)
 *     SymCryptRsaCoreEnc @ 0x1403FA114 (SymCryptRsaCoreEnc.c)
 *     SymCryptFdefIntToDivisor @ 0x14040377C (SymCryptFdefIntToDivisor.c)
 *     SymCryptFdefDecideModulusType @ 0x140403D90 (SymCryptFdefDecideModulusType.c)
 *     HashpVerifyPkcs1Signature @ 0x140A7730C (HashpVerifyPkcs1Signature.c)
 * Callees:
 *     SymCryptFdefIntBitsizeOfValue @ 0x1404056D0 (SymCryptFdefIntBitsizeOfValue.c)
 */

__int64 SymCryptIntBitsizeOfValue()
{
  return SymCryptFdefIntBitsizeOfValue();
}
