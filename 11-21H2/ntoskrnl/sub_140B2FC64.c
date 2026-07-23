/*
 * XREFs of sub_140B2FC64 @ 0x140B2FC64
 * Callers:
 *     sub_140AFCEF0 @ 0x140AFCEF0 (sub_140AFCEF0.c)
 * Callees:
 *     sub_140261ADC @ 0x140261ADC (sub_140261ADC.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ObCreateObjectType @ 0x140824B10 (ObCreateObjectType.c)
 */

bool sub_140B2FC64()
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-39h] BYREF
  _QWORD v2[16]; // [rsp+30h] [rbp-29h] BYREF

  DestinationString = 0LL;
  sub_140261ADC((__int64)&stru_140C10D60, 0, 1, 0);
  RtlInitUnicodeString(&DestinationString, L"Profile");
  memset(v2, 0, 0x78uLL);
  LOWORD(v2[0]) = 120;
  LODWORD(v2[1]) = 256;
  HIDWORD(v2[4]) = 512;
  HIDWORD(v2[5]) = 336;
  HIDWORD(v2[3]) = 983041;
  *(_OWORD *)((char *)&v2[1] + 4) = xmmword_140B578E0;
  v2[9] = sub_140A06830;
  return (int)ObCreateObjectType(&DestinationString, (__int64)v2, 0LL, (__int64)&qword_140D05318) >= 0;
}
