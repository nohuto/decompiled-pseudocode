/*
 * XREFs of PnpCompareMultiSz @ 0x14096C7C0
 * Callers:
 *     PiCreateDriverSwDeviceCallback @ 0x14081A8C0 (PiCreateDriverSwDeviceCallback.c)
 *     PipMatchPersistentMemory @ 0x140953C08 (PipMatchPersistentMemory.c)
 *     PipMatchPersistentMemoryV1 @ 0x140953CEC (PipMatchPersistentMemoryV1.c)
 *     PiSwDoesCreateChangesRequireReEnum @ 0x140967498 (PiSwDoesCreateChangesRequireReEnum.c)
 * Callees:
 *     RtlCompareUnicodeStrings @ 0x1406DA010 (RtlCompareUnicodeStrings.c)
 *     PnpGetMultiSzLength @ 0x140819A28 (PnpGetMultiSzLength.c)
 */

bool __fastcall PnpCompareMultiSz(PCWCH String1, PCWCH String2, BOOLEAN CaseInSensitive)
{
  char v5; // bl
  SIZE_T String2Length[3]; // [rsp+30h] [rbp-18h] BYREF
  SIZE_T String1Length; // [rsp+68h] [rbp+20h] BYREF

  v5 = 0;
  String1Length = 0LL;
  String2Length[0] = 0LL;
  if ( (int)PnpGetMultiSzLength((__int64)String1, 0x7FFFFFFFLL, &String1Length) >= 0
    && (int)PnpGetMultiSzLength((__int64)String2, 0x7FFFFFFFLL, String2Length) >= 0
    && String1Length == String2Length[0] )
  {
    return RtlCompareUnicodeStrings(String1, String1Length, String2, String2Length[0], CaseInSensitive) == 0;
  }
  return v5;
}
