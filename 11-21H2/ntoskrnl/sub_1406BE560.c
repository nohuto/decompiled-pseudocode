/*
 * XREFs of sub_1406BE560 @ 0x1406BE560
 * Callers:
 *     sub_1402D1DA4 @ 0x1402D1DA4 (sub_1402D1DA4.c)
 *     sub_1402D7DE0 @ 0x1402D7DE0 (sub_1402D7DE0.c)
 *     sub_140660F7C @ 0x140660F7C (sub_140660F7C.c)
 *     RtlCreateUnicodeString @ 0x14066A0F0 (RtlCreateUnicodeString.c)
 *     RtlFormatCurrentUserKeyPath @ 0x14066B5D0 (RtlFormatCurrentUserKeyPath.c)
 *     RtlDuplicateUnicodeString @ 0x1406A9D20 (RtlDuplicateUnicodeString.c)
 *     sub_1406D09CC @ 0x1406D09CC (sub_1406D09CC.c)
 *     sub_140742C78 @ 0x140742C78 (sub_140742C78.c)
 *     sub_140742E3C @ 0x140742E3C (sub_140742E3C.c)
 *     sub_1407454A8 @ 0x1407454A8 (sub_1407454A8.c)
 *     sub_1407459F4 @ 0x1407459F4 (sub_1407459F4.c)
 *     sub_1407460F8 @ 0x1407460F8 (sub_1407460F8.c)
 *     sub_1407468A0 @ 0x1407468A0 (sub_1407468A0.c)
 *     sub_140746B5C @ 0x140746B5C (sub_140746B5C.c)
 *     sub_140746CCC @ 0x140746CCC (sub_140746CCC.c)
 *     RtlUnicodeStringToAnsiString @ 0x140759C40 (RtlUnicodeStringToAnsiString.c)
 *     sub_140826270 @ 0x140826270 (sub_140826270.c)
 *     sub_1408264C0 @ 0x1408264C0 (sub_1408264C0.c)
 *     sub_1408268AC @ 0x1408268AC (sub_1408268AC.c)
 *     sub_14094A7D4 @ 0x14094A7D4 (sub_14094A7D4.c)
 *     sub_14094E74C @ 0x14094E74C (sub_14094E74C.c)
 *     sub_14095A750 @ 0x14095A750 (sub_14095A750.c)
 *     sub_14095BFCC @ 0x14095BFCC (sub_14095BFCC.c)
 *     sub_14095C12C @ 0x14095C12C (sub_14095C12C.c)
 *     sub_14095CC40 @ 0x14095CC40 (sub_14095CC40.c)
 *     sub_14095D038 @ 0x14095D038 (sub_14095D038.c)
 *     sub_14095DC2C @ 0x14095DC2C (sub_14095DC2C.c)
 *     sub_1409B9B50 @ 0x1409B9B50 (sub_1409B9B50.c)
 *     sub_1409BAE18 @ 0x1409BAE18 (sub_1409BAE18.c)
 *     RtlUTF8StringToUnicodeString @ 0x1409BEC80 (RtlUTF8StringToUnicodeString.c)
 *     RtlUnicodeStringToUTF8String @ 0x1409BED90 (RtlUnicodeStringToUTF8String.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall sub_1406BE560(SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x67727453u);
}
