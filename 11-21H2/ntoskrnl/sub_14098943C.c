/*
 * XREFs of sub_14098943C @ 0x14098943C
 * Callers:
 *     sub_1407655BC @ 0x1407655BC (sub_1407655BC.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_1403B1A2C @ 0x1403B1A2C (sub_1403B1A2C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwQueryValueKey @ 0x14041BA40 (ZwQueryValueKey.c)
 *     ZwPowerInformation @ 0x14041C340 (ZwPowerInformation.c)
 */

int __fastcall sub_14098943C(char a1, bool a2, char a3, _DWORD *a4)
{
  bool v6; // bl
  int result; // eax
  NTSTATUS v8; // esi
  int v9; // ecx
  unsigned int v10; // eax
  ULONG ResultLength; // [rsp+38h] [rbp-29h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-21h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-19h] BYREF
  __int128 KeyValueInformation; // [rsp+58h] [rbp-9h] BYREF
  __int128 v15; // [rsp+68h] [rbp+7h]
  _OWORD OutputBuffer[2]; // [rsp+78h] [rbp+17h] BYREF

  KeyHandle = 0LL;
  ResultLength = 0;
  *a4 = 0;
  v6 = a2;
  memset(OutputBuffer, 0, sizeof(OutputBuffer));
  DestinationString = 0LL;
  KeyValueInformation = 0LL;
  v15 = 0LL;
  if ( !a2 )
    v6 = a3 == 0;
  if ( !a1 )
  {
    *a4 = 2 - v6;
    return 0;
  }
  result = sub_1403B1A2C((__int64)&KeyHandle);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"UndockPowerPolicy");
    v8 = ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           &KeyValueInformation,
           0x20u,
           &ResultLength);
    ZwClose(KeyHandle);
    if ( v8 >= 0 )
    {
      if ( DWORD2(KeyValueInformation) < 8 )
        return -1073741492;
      if ( HIDWORD(KeyValueInformation) != 1 )
        return -1073741823;
      if ( DWORD2(KeyValueInformation) < 0x10 || (_DWORD)v15 != DWORD2(KeyValueInformation) )
        return -1073741492;
    }
    else
    {
      if ( v8 != -1073741772 )
        return v8;
      *(_QWORD *)((char *)&v15 + 4) = 10LL;
    }
    result = ZwPowerInformation(SystemBatteryState, 0LL, 0, OutputBuffer, 0x20u);
    v9 = result;
    if ( result >= 0 )
    {
      if ( DWORD2(OutputBuffer[0]) && (unsigned int)(100 * HIDWORD(OutputBuffer[0])) > HIDWORD(OutputBuffer[0]) )
        v10 = (unsigned int)(100 * HIDWORD(OutputBuffer[0])) / DWORD2(OutputBuffer[0]);
      else
        v10 = 0;
      if ( v10 >= DWORD1(v15) && v6 )
      {
        *a4 = 1;
      }
      else if ( a3 )
      {
        *a4 = v10 < DWORD2(v15) ? 5 : 2;
      }
      else
      {
        return -1073741090;
      }
      return v9;
    }
  }
  return result;
}
