/*
 * XREFs of sub_140B304E0 @ 0x140B304E0
 * Callers:
 *     sub_140B0433C @ 0x140B0433C (sub_140B0433C.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ObCreateObjectType @ 0x140824B10 (ObCreateObjectType.c)
 */

__int64 sub_140B304E0()
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-39h] BYREF
  _QWORD v2[16]; // [rsp+30h] [rbp-29h] BYREF

  DestinationString = 0LL;
  memset(v2, 0, 0x78uLL);
  BYTE2(v2[0]) |= 0x18u;
  v2[7] = sub_1406C2D20;
  LOWORD(v2[0]) = 120;
  v2[8] = sub_1406EC270;
  LODWORD(v2[1]) = 256;
  v2[9] = sub_1406EAB10;
  *(GENERIC_MAPPING *)((char *)&v2[1] + 4) = stru_140010DA8;
  HIDWORD(v2[3]) = 1024;
  HIDWORD(v2[4]) = 512;
  HIDWORD(v2[5]) = 160;
  RtlInitUnicodeString(&DestinationString, L"EtwConsumer");
  return ObCreateObjectType(&DestinationString, (__int64)v2, 0LL, (__int64)&qword_140D053C0);
}
