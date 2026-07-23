/*
 * XREFs of sub_140B2F410 @ 0x140B2F410
 * Callers:
 *     sub_140B0433C @ 0x140B0433C (sub_140B0433C.c)
 * Callees:
 *     sub_140261ADC @ 0x140261ADC (sub_140261ADC.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ObCreateObjectType @ 0x140824B10 (ObCreateObjectType.c)
 */

__int64 sub_140B2F410()
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-39h] BYREF
  _QWORD v2[16]; // [rsp+30h] [rbp-29h] BYREF

  DestinationString = 0LL;
  sub_140261ADC((__int64)&stru_140C15DC0, 0, 1, 0);
  qword_140C15DB0 = 0LL;
  qword_140C15DA8 = (__int64)&qword_140C15DA0;
  qword_140C15DA0 = (__int64)&qword_140C15DA0;
  memset(v2, 0, 0x78uLL);
  BYTE2(v2[0]) |= 0x18u;
  v2[7] = sub_1406C2D20;
  LOWORD(v2[0]) = 120;
  v2[8] = sub_1406B75F0;
  LODWORD(v2[1]) = 256;
  v2[9] = sub_140796530;
  *(GENERIC_MAPPING *)((char *)&v2[1] + 4) = stru_140010DA8;
  HIDWORD(v2[3]) = 2052;
  HIDWORD(v2[4]) = 512;
  HIDWORD(v2[5]) = 112;
  RtlInitUnicodeString(&DestinationString, L"EtwRegistration");
  return ObCreateObjectType(&DestinationString, (__int64)v2, 0LL, (__int64)&qword_140D06AE8);
}
