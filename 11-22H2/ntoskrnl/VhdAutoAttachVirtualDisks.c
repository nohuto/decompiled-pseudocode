/*
 * XREFs of VhdAutoAttachVirtualDisks @ 0x140B35A9C
 * Callers:
 *     IopInitializeBootDrivers @ 0x140B405B4 (IopInitializeBootDrivers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E1D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     ZwClose @ 0x14041A880 (ZwClose.c)
 *     ZwEnumerateKey @ 0x14041ACE0 (ZwEnumerateKey.c)
 *     memset @ 0x140435400 (memset.c)
 *     VhdiAutoAttachOneVhd @ 0x140681468 (VhdiAutoAttachOneVhd.c)
 *     RtlQueryRegistryValuesEx @ 0x1406C7B10 (RtlQueryRegistryValuesEx.c)
 *     RtlGUIDFromString @ 0x1406CF770 (RtlGUIDFromString.c)
 *     RtlFreeUnicodeString @ 0x14076F8E0 (RtlFreeUnicodeString.c)
 *     IopOpenRegistryKeyEx @ 0x1408135F0 (IopOpenRegistryKeyEx.c)
 */

int VhdAutoAttachVirtualDisks()
{
  int result; // eax
  int v1; // ebx
  ULONG v2; // edi
  ULONG v3; // edx
  NTSTATUS v4; // eax
  ULONG ResultLength[2]; // [rsp+38h] [rbp-D0h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-C8h] BYREF
  WCHAR *GuidString; // [rsp+48h] [rbp-C0h] BYREF
  UNICODE_STRING GuidString_8; // [rsp+50h] [rbp-B8h] BYREF
  UNICODE_STRING UnicodeString_8; // [rsp+60h] [rbp-A8h] BYREF
  UNICODE_STRING DestinationString_8; // [rsp+70h] [rbp-98h] BYREF
  GUID Guid_8; // [rsp+80h] [rbp-88h] BYREF
  _DWORD KeyInformation[28]; // [rsp+98h] [rbp-70h] BYREF
  _RTL_QUERY_REGISTRY_TABLE QueryTable[3]; // [rsp+108h] [rbp+0h] BYREF

  KeyHandle = 0LL;
  qword_140CF8328 = (__int64)&qword_140CF8320;
  qword_140CF8320 = &qword_140CF8320;
  DestinationString_8 = 0LL;
  RtlInitUnicodeString(
    &DestinationString_8,
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\AutoAttachVirtualDisks");
  result = IopOpenRegistryKeyEx(&KeyHandle, 0LL, &DestinationString_8, 8u);
  if ( result >= 0 )
  {
    v1 = 0;
    v2 = 0;
    memset(KeyInformation, 0, 0x68uLL);
    ResultLength[0] = 0;
    GuidString = 0LL;
    v3 = 0;
    while ( 1 )
    {
      Guid_8 = 0LL;
      GuidString_8 = 0LL;
      v4 = ZwEnumerateKey(KeyHandle, v3, KeyBasicInformation, KeyInformation, 0x68u, ResultLength);
      if ( v4 == -2147483622 )
        break;
      if ( v4 != -2147483643 )
      {
        if ( v4 >= 0 )
        {
          GuidString_8.Buffer = (wchar_t *)&KeyInformation[4];
          GuidString_8.Length = KeyInformation[3];
          GuidString_8.MaximumLength = KeyInformation[3];
          if ( RtlGUIDFromString(&GuidString_8, &Guid_8) >= 0
            && IopOpenRegistryKeyEx((HANDLE *)&GuidString, KeyHandle, &GuidString_8, 1u) >= 0 )
          {
            memset(QueryTable, 0, sizeof(QueryTable));
            ResultLength[1] = 0;
            QueryTable[0].Name = L"Path";
            QueryTable[0].Flags = 292;
            QueryTable[0].EntryContext = &UnicodeString_8;
            QueryTable[0].DefaultType = 0x1000000;
            QueryTable[1].Name = L"Flags";
            QueryTable[1].EntryContext = &ResultLength[1];
            UnicodeString_8 = 0LL;
            QueryTable[1].Flags = 288;
            QueryTable[1].DefaultType = 0x4000000;
            if ( RtlQueryRegistryValuesEx(0x40000000u, GuidString, QueryTable, 0LL, 0LL) >= 0 )
              VhdiAutoAttachOneVhd(UnicodeString_8.Buffer, &Guid_8, ResultLength[1]);
            RtlFreeUnicodeString(&UnicodeString_8);
            ZwClose(GuidString);
          }
        }
        else if ( (unsigned int)++v1 > 0x3E8 )
        {
          return ZwClose(KeyHandle);
        }
      }
      ++v2;
      memset(KeyInformation, 0, 0x68uLL);
      ResultLength[0] = 0;
      v3 = v2;
      GuidString = 0LL;
    }
    return ZwClose(KeyHandle);
  }
  return result;
}
