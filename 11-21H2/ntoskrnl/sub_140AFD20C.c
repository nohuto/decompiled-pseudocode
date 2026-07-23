/*
 * XREFs of sub_140AFD20C @ 0x140AFD20C
 * Callers:
 *     sub_140AFBDF4 @ 0x140AFBDF4 (sub_140AFBDF4.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ObCreateObjectType @ 0x140824B10 (ObCreateObjectType.c)
 *     ObCreateObjectTypeEx @ 0x140824B30 (ObCreateObjectTypeEx.c)
 *     sub_140B30970 @ 0x140B30970 (sub_140B30970.c)
 */

bool sub_140AFD20C()
{
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-39h] BYREF
  __int128 v2[8]; // [rsp+48h] [rbp-29h] BYREF

  DestinationString = 0LL;
  memset(v2, 0, 0x78uLL);
  BYTE2(v2[0]) |= 4u;
  LOWORD(v2[0]) = 120;
  *(GENERIC_MAPPING *)((char *)v2 + 12) = stru_140A38030;
  DWORD2(v2[0]) = 256;
  DWORD1(v2[2]) = 512;
  HIDWORD(v2[1]) = 2032127;
  RtlInitUnicodeString(&DestinationString, L"Adapter");
  if ( (int)ObCreateObjectType(&DestinationString, (__int64)v2, 0LL, (__int64)&IoAdapterObjectType) < 0 )
    return 0;
  RtlInitUnicodeString(&DestinationString, L"Controller");
  HIDWORD(v2[2]) = 72;
  if ( (int)ObCreateObjectType(&DestinationString, (__int64)v2, 0LL, (__int64)&qword_140D07000) < 0 )
    return 0;
  RtlInitUnicodeString(&DestinationString, L"Device");
  WORD1(v2[0]) |= 0x101u;
  *(_QWORD *)&v2[5] = sub_14072B8B0;
  *((_QWORD *)&v2[5] + 1) = sub_14071E8F0;
  *((_QWORD *)&v2[4] + 1) = sub_140774EC0;
  HIDWORD(v2[2]) = 336;
  *(_QWORD *)&v2[6] = 0LL;
  if ( (int)ObCreateObjectType(&DestinationString, (__int64)v2, 0LL, (__int64)&IoDeviceObjectType) < 0 )
    return 0;
  RtlInitUnicodeString(&DestinationString, L"Driver");
  BYTE3(v2[0]) &= ~1u;
  HIDWORD(v2[2]) = 336;
  *((_QWORD *)&v2[4] + 1) = sub_14085D640;
  memset(&v2[5], 0, 24);
  if ( dword_140C1B2A0 && ((qword_140D01450 & 0xFFA9F6E6) != 0 || (qword_140D01450 & 0x200000000LL) != 0) )
    BYTE2(v2[0]) |= 0x20u;
  if ( (int)ObCreateObjectType(&DestinationString, (__int64)v2, 0LL, (__int64)&IoDriverObjectType) < 0 )
    return 0;
  RtlInitUnicodeString(&DestinationString, L"IoCompletion");
  DWORD2(v2[0]) = 272;
  *(_QWORD *)&v2[4] = sub_1406ACB40;
  HIDWORD(v2[1]) = 2031619;
  *((_QWORD *)&v2[4] + 1) = sub_1406ACB20;
  HIDWORD(v2[2]) = 80;
  BYTE2(v2[0]) = BYTE2(v2[0]) & 0x7B | 0x80;
  *(__int128 *)((char *)v2 + 12) = xmmword_140B57AC0;
  if ( (int)ObCreateObjectType(&DestinationString, (__int64)v2, 0LL, (__int64)&IoCompletionObjectType) < 0 )
    return 0;
  RtlInitUnicodeString(&DestinationString, L"WaitCompletionPacket");
  HIDWORD(v2[2]) = 112;
  *(_QWORD *)&v2[4] = sub_1402EE2D0;
  DWORD2(v2[0]) = 272;
  HIDWORD(v2[1]) = 983041;
  BYTE2(v2[0]) = BYTE2(v2[0]) & 0x7B | 4;
  *((_QWORD *)&v2[4] + 1) = 0LL;
  *(__int128 *)((char *)v2 + 12) = xmmword_140B57AD0;
  if ( (int)ObCreateObjectType(&DestinationString, (__int64)v2, 0LL, (__int64)&ObjectType) < 0 )
    return 0;
  RtlInitUnicodeString(&DestinationString, L"File");
  BYTE3(v2[0]) |= 1u;
  *(_QWORD *)&v2[4] = sub_14072E9E0;
  *((_QWORD *)&v2[2] + 1) = 0x11800000400LL;
  *((_QWORD *)&v2[4] + 1) = sub_14072B630;
  *(_QWORD *)&v2[5] = sub_1406B4800;
  *(_QWORD *)&v2[6] = sub_14070F710;
  *(_QWORD *)((char *)v2 + 4) = 0x13000000001LL;
  HIDWORD(v2[1]) = 2032127;
  BYTE2(v2[0]) = BYTE2(v2[0]) & 0xEB | 0x10;
  *(GENERIC_MAPPING *)((char *)v2 + 12) = stru_140A38030;
  *((_QWORD *)&v2[5] + 1) = sub_14071E8F0;
  *(_QWORD *)&v2[7] = 0x20005010000000LL;
  return (int)ObCreateObjectTypeEx(&DestinationString, v2, 0LL, (__int16 *)0x9B, &IoFileObjectType) >= 0
      && (int)sub_140B30970() >= 0;
}
