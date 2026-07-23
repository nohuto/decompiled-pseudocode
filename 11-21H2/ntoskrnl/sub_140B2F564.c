/*
 * XREFs of sub_140B2F564 @ 0x140B2F564
 * Callers:
 *     sub_140AFCEF0 @ 0x140AFCEF0 (sub_140AFCEF0.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ObCreateObjectType @ 0x140824B10 (ObCreateObjectType.c)
 */

bool sub_140B2F564()
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-39h] BYREF
  _QWORD v2[16]; // [rsp+30h] [rbp-29h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"Mutant");
  memset(v2, 0, 0x78uLL);
  memset((void *)(*((_QWORD *)KeGetCurrentThread() + 23) + 40LL), 0, (unsigned int)dword_140C158E8);
  LOWORD(v2[0]) = 120;
  HIDWORD(v2[0]) = 64;
  LODWORD(v2[1]) = 256;
  HIDWORD(v2[4]) = 512;
  HIDWORD(v2[5]) = 56;
  *(_OWORD *)((char *)&v2[1] + 4) = xmmword_140B578F0;
  HIDWORD(v2[3]) = 2031617;
  v2[9] = sub_140234B10;
  return (int)ObCreateObjectType(&DestinationString, (__int64)v2, 0LL, (__int64)&qword_140D05288) >= 0;
}
