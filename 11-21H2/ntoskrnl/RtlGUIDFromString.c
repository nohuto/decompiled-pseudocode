/*
 * XREFs of RtlGUIDFromString @ 0x1407814E0
 * Callers:
 *     sub_1402012BC @ 0x1402012BC (sub_1402012BC.c)
 *     RtlQueryPackageClaims @ 0x140204330 (RtlQueryPackageClaims.c)
 *     sub_140561C2C @ 0x140561C2C (sub_140561C2C.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x1405EDBA0 (RtlRaiseCustomSystemEventTrigger.c)
 *     sub_1406618A4 @ 0x1406618A4 (sub_1406618A4.c)
 *     IoVolumeDeviceToGuid @ 0x14068B980 (IoVolumeDeviceToGuid.c)
 *     sub_140698AAC @ 0x140698AAC (sub_140698AAC.c)
 *     sub_1406E67F0 @ 0x1406E67F0 (sub_1406E67F0.c)
 *     sub_1406E87E8 @ 0x1406E87E8 (sub_1406E87E8.c)
 *     sub_1407452A0 @ 0x1407452A0 (sub_1407452A0.c)
 *     sub_14076BE08 @ 0x14076BE08 (sub_14076BE08.c)
 *     sub_14076E9B8 @ 0x14076E9B8 (sub_14076E9B8.c)
 *     sub_1407772C8 @ 0x1407772C8 (sub_1407772C8.c)
 *     sub_140779F10 @ 0x140779F10 (sub_140779F10.c)
 *     sub_14077A624 @ 0x14077A624 (sub_14077A624.c)
 *     sub_14077B594 @ 0x14077B594 (sub_14077B594.c)
 *     sub_14077ED0C @ 0x14077ED0C (sub_14077ED0C.c)
 *     sub_14077F150 @ 0x14077F150 (sub_14077F150.c)
 *     sub_140785B98 @ 0x140785B98 (sub_140785B98.c)
 *     sub_14078600C @ 0x14078600C (sub_14078600C.c)
 *     sub_140787558 @ 0x140787558 (sub_140787558.c)
 *     sub_14080285C @ 0x14080285C (sub_14080285C.c)
 *     sub_140813500 @ 0x140813500 (sub_140813500.c)
 *     sub_140817CD8 @ 0x140817CD8 (sub_140817CD8.c)
 *     sub_1408226C0 @ 0x1408226C0 (sub_1408226C0.c)
 *     sub_140826EF0 @ 0x140826EF0 (sub_140826EF0.c)
 *     sub_14083F908 @ 0x14083F908 (sub_14083F908.c)
 *     sub_14083FC00 @ 0x14083FC00 (sub_14083FC00.c)
 *     sub_14083FE80 @ 0x14083FE80 (sub_14083FE80.c)
 *     sub_14084028C @ 0x14084028C (sub_14084028C.c)
 *     IoVolumeDeviceNameToGuid @ 0x1409392D0 (IoVolumeDeviceNameToGuid.c)
 *     sub_140941588 @ 0x140941588 (sub_140941588.c)
 *     sub_14094B864 @ 0x14094B864 (sub_14094B864.c)
 *     sub_14094CBE0 @ 0x14094CBE0 (sub_14094CBE0.c)
 *     sub_14095A750 @ 0x14095A750 (sub_14095A750.c)
 *     sub_1409CFF00 @ 0x1409CFF00 (sub_1409CFF00.c)
 *     sub_1409DAD00 @ 0x1409DAD00 (sub_1409DAD00.c)
 *     sub_1409FD160 @ 0x1409FD160 (sub_1409FD160.c)
 *     sub_140A1CC78 @ 0x140A1CC78 (sub_140A1CC78.c)
 *     sub_140A1E6EC @ 0x140A1E6EC (sub_140A1E6EC.c)
 *     sub_140A1E890 @ 0x140A1E890 (sub_140A1E890.c)
 *     sub_140A202A4 @ 0x140A202A4 (sub_140A202A4.c)
 *     sub_140A28700 @ 0x140A28700 (sub_140A28700.c)
 *     sub_140A295FC @ 0x140A295FC (sub_140A295FC.c)
 *     sub_140A6B1E0 @ 0x140A6B1E0 (sub_140A6B1E0.c)
 *     sub_140B0046C @ 0x140B0046C (sub_140B0046C.c)
 *     sub_140B0BE8C @ 0x140B0BE8C (sub_140B0BE8C.c)
 *     sub_140B0CCAC @ 0x140B0CCAC (sub_140B0CCAC.c)
 *     sub_140B4FCB0 @ 0x140B4FCB0 (sub_140B4FCB0.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1407815C0 @ 0x1407815C0 (sub_1407815C0.c)
 */

NTSTATUS __stdcall RtlGUIDFromString(PCUNICODE_STRING GuidString, GUID *Guid)
{
  unsigned __int16 *p_Data2; // r8
  unsigned __int16 *p_Data3; // rax
  unsigned int Length; // edx
  wchar_t *Buffer; // rcx
  unsigned int v7; // ecx
  unsigned __int8 *Data4; // rdx
  unsigned __int8 *v9; // r8
  __int128 v11; // [rsp+70h] [rbp-28h] BYREF

  p_Data2 = &Guid->Data2;
  p_Data3 = &Guid->Data3;
  Length = GuidString->Length;
  Buffer = GuidString->Buffer;
  v11 = 0LL;
  if ( (unsigned int)sub_1407815C0(
                       Buffer,
                       Length >> 1,
                       L"{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
                       Guid,
                       p_Data2,
                       p_Data3,
                       &v11,
                       (char *)&v11 + 2,
                       (char *)&v11 + 4,
                       (char *)&v11 + 6,
                       (char *)&v11 + 8,
                       (char *)&v11 + 10,
                       (char *)&v11 + 12,
                       (char *)&v11 + 14) == -1 )
    return -1073741811;
  v7 = 0;
  Data4 = Guid->Data4;
  v9 = (unsigned __int8 *)&v11;
  do
  {
    ++v7;
    *Data4 = *v9;
    v9 += 2;
    ++Data4;
  }
  while ( v7 < 8 );
  return 0;
}
