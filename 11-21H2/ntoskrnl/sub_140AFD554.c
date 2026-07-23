/*
 * XREFs of sub_140AFD554 @ 0x140AFD554
 * Callers:
 *     sub_140AFCEF0 @ 0x140AFCEF0 (sub_140AFCEF0.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ObCreateObjectType @ 0x140824B10 (ObCreateObjectType.c)
 */

bool sub_140AFD554()
{
  int v0; // eax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-39h] BYREF
  _QWORD v3[16]; // [rsp+30h] [rbp-29h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"WindowStation");
  memset(v3, 0, 0x78uLL);
  LOWORD(v3[0]) = 120;
  v3[8] = sub_1406C1740;
  HIDWORD(v3[4]) = 512;
  v3[9] = sub_1406D5120;
  LODWORD(v3[1]) = 304;
  v3[13] = sub_1406C0100;
  HIDWORD(v3[3]) = 983040;
  v3[10] = sub_1406CB660;
  v3[7] = sub_1406F5D60;
  BYTE2(v3[0]) = BYTE2(v3[0]) & 0xA7 | 0x18;
  *(_OWORD *)((char *)&v3[1] + 4) = xmmword_140B57950;
  if ( (int)ObCreateObjectType(&DestinationString, (__int64)v3, 0LL, (__int64)&ExWindowStationObjectType) < 0 )
    return 0;
  RtlInitUnicodeString(&DestinationString, L"Desktop");
  BYTE2(v3[0]) |= 0x40u;
  v3[10] = 0LL;
  *(_OWORD *)((char *)&v3[1] + 4) = xmmword_140B57960;
  if ( (int)ObCreateObjectType(&DestinationString, (__int64)v3, 0LL, (__int64)&ExDesktopObjectType) < 0 )
    return 0;
  RtlInitUnicodeString(&DestinationString, L"Composition");
  v3[10] = 0LL;
  HIDWORD(v3[0]) = 1024;
  BYTE2(v3[0]) = BYTE2(v3[0]) & 0xBD | 2;
  *(_OWORD *)((char *)&v3[1] + 4) = xmmword_140B57970;
  v0 = ObCreateObjectType(&DestinationString, (__int64)v3, 0LL, (__int64)&ExCompositionObjectType);
  HIDWORD(v3[0]) = 0;
  if ( v0 < 0 )
    return 0;
  RtlInitUnicodeString(&DestinationString, L"RawInputManager");
  v3[10] = 0LL;
  BYTE2(v3[0]) = BYTE2(v3[0]) & 0xBD | 2;
  *(_OWORD *)((char *)&v3[1] + 4) = xmmword_140B57980;
  if ( (int)ObCreateObjectType(&DestinationString, (__int64)v3, 0LL, (__int64)&ExRawInputManagerObjectType) < 0 )
    return 0;
  RtlInitUnicodeString(&DestinationString, L"CoreMessaging");
  v3[10] = 0LL;
  BYTE2(v3[0]) = BYTE2(v3[0]) & 0xBD | 2;
  *(_OWORD *)((char *)&v3[1] + 4) = xmmword_140B57990;
  if ( (int)ObCreateObjectType(&DestinationString, (__int64)v3, 0LL, (__int64)&ExCoreMessagingObjectType) < 0 )
    return 0;
  RtlInitUnicodeString(&DestinationString, L"ActivationObject");
  v3[10] = 0LL;
  HIDWORD(v3[4]) = 545;
  BYTE2(v3[0]) = BYTE2(v3[0]) & 0xB9 | 6;
  *(_OWORD *)((char *)&v3[1] + 4) = xmmword_140B579A0;
  return (int)ObCreateObjectType(&DestinationString, (__int64)v3, 0LL, (__int64)&ExActivationObjectType) >= 0;
}
