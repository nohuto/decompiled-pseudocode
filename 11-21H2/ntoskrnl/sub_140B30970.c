/*
 * XREFs of sub_140B30970 @ 0x140B30970
 * Callers:
 *     sub_140AFD20C @ 0x140AFD20C (sub_140AFD20C.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ObCreateObjectType @ 0x140824B10 (ObCreateObjectType.c)
 */

__int64 sub_140B30970()
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-39h] BYREF
  _QWORD v2[16]; // [rsp+30h] [rbp-29h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"IoRing");
  memset(v2, 0, 0x78uLL);
  BYTE2(v2[0]) |= 6u;
  v2[8] = sub_140658870;
  LOWORD(v2[0]) = 120;
  v2[9] = sub_140938040;
  LODWORD(v2[1]) = 7634;
  HIDWORD(v2[4]) = 512;
  HIDWORD(v2[5]) = 208;
  return ObCreateObjectType(&DestinationString, (__int64)v2, 0LL, (__int64)&ntoskrnl_29);
}
