/*
 * XREFs of sub_140957E34 @ 0x140957E34
 * Callers:
 *     sub_140941CFC @ 0x140941CFC (sub_140941CFC.c)
 *     sub_140941DDC @ 0x140941DDC (sub_140941DDC.c)
 *     sub_14095353C @ 0x14095353C (sub_14095353C.c)
 *     sub_14095A750 @ 0x14095A750 (sub_14095A750.c)
 * Callees:
 *     sub_1407648E4 @ 0x1407648E4 (sub_1407648E4.c)
 *     RtlCompareUnicodeStrings @ 0x1407CD7A0 (RtlCompareUnicodeStrings.c)
 */

bool __fastcall sub_140957E34(PCWCH String1, PCWCH String2, BOOLEAN CaseInSensitive)
{
  char v5; // bl
  SIZE_T String2Length[3]; // [rsp+30h] [rbp-18h] BYREF
  SIZE_T String1Length; // [rsp+68h] [rbp+20h] BYREF

  v5 = 0;
  String1Length = 0LL;
  String2Length[0] = 0LL;
  if ( (int)sub_1407648E4((__int64)String1, 0x7FFFFFFFLL, &String1Length) >= 0
    && (int)sub_1407648E4((__int64)String2, 0x7FFFFFFFLL, String2Length) >= 0
    && String1Length == String2Length[0] )
  {
    return RtlCompareUnicodeStrings(String1, String1Length, String2, String2Length[0], CaseInSensitive) == 0;
  }
  return v5;
}
