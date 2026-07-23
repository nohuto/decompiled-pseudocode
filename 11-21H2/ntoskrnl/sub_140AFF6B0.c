/*
 * XREFs of sub_140AFF6B0 @ 0x140AFF6B0
 * Callers:
 *     sub_140AFCEF0 @ 0x140AFCEF0 (sub_140AFCEF0.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_140363220 @ 0x140363220 (sub_140363220.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ObCreateObjectType @ 0x140824B10 (ObCreateObjectType.c)
 */

bool sub_140AFF6B0()
{
  int v0; // ebx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-39h] BYREF
  _QWORD v3[16]; // [rsp+30h] [rbp-29h] BYREF

  qword_140C11720 = 0LL;
  qword_140C11738 = (__int64)&qword_140C11730;
  qword_140C11730 = (__int64)&qword_140C11730;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"Timer");
  memset(v3, 0, 0x78uLL);
  LOWORD(v3[0]) = 120;
  LODWORD(v3[1]) = 256;
  HIDWORD(v3[4]) = 512;
  HIDWORD(v3[5]) = 328;
  HIDWORD(v3[3]) = 2031619;
  *(_OWORD *)((char *)&v3[1] + 4) = xmmword_140B57940;
  v3[9] = sub_140356E00;
  v0 = ObCreateObjectType(&DestinationString, (__int64)v3, 0LL, (__int64)&ExTimerObjectType);
  if ( v0 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"IRTimer");
    HIDWORD(v3[5]) = 168;
    v3[9] = sub_14074F4D0;
    v0 = ObCreateObjectType(&DestinationString, (__int64)v3, 0LL, (__int64)&qword_140D06C78);
    byte_140D06991 = sub_140363220(0);
  }
  return v0 >= 0;
}
