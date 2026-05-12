/*
 * XREFs of PortGetBusyRetryCountValue @ 0x1C00AF414
 * Callers:
 *     RaidInitializeAdapter @ 0x1C00A7724 (RaidInitializeAdapter.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     _wcsnicmp_0 @ 0x1C002219A (_wcsnicmp_0.c)
 *     PortpOpenParametersKey @ 0x1C00AFAA4 (PortpOpenParametersKey.c)
 */

void __fastcall PortGetBusyRetryCountValue(__int64 a1, _DWORD *a2)
{
  void *v3; // rbx
  int v4; // ecx
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD KeyValueInformation[5]; // [rsp+50h] [rbp-B0h] BYREF
  wchar_t Str1[246]; // [rsp+64h] [rbp-9Ch] BYREF

  if ( a2 )
  {
    ResultLength = 0;
    DestinationString = 0LL;
    v3 = (void *)PortpOpenParametersKey();
    if ( v3 )
    {
      RtlInitUnicodeString(&DestinationString, L"BusyRetryCount");
      if ( ZwQueryValueKey(v3, &DestinationString, KeyValueFullInformation, KeyValueInformation, 0x200u, &ResultLength) >= 0
        && KeyValueInformation[1] == 4
        && KeyValueInformation[3] == 4
        && !wcsnicmp_0(Str1, L"BusyRetryCount", (unsigned __int64)KeyValueInformation[4] >> 1) )
      {
        v4 = *(_DWORD *)((char *)KeyValueInformation + KeyValueInformation[2]);
        if ( v4 )
          *a2 = v4;
      }
      ZwClose(v3);
    }
  }
}
