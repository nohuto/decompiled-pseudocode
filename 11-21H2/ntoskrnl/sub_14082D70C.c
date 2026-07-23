/*
 * XREFs of sub_14082D70C @ 0x14082D70C
 * Callers:
 *     sub_14082D3F8 @ 0x14082D3F8 (sub_14082D3F8.c)
 *     sub_140B0E000 @ 0x140B0E000 (sub_140B0E000.c)
 * Callees:
 *     RtlTimeFieldsToTime @ 0x14022D4D0 (RtlTimeFieldsToTime.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwQueryLicenseValue @ 0x14041E2C0 (ZwQueryLicenseValue.c)
 */

__int64 __fastcall sub_14082D70C(PLARGE_INTEGER Time)
{
  NTSTATUS v2; // ebx
  __int64 v3; // rcx
  ULONG ResultDataSize; // [rsp+34h] [rbp-5h] BYREF
  ULONG Type; // [rsp+38h] [rbp-1h] BYREF
  _TIME_FIELDS TimeFields; // [rsp+40h] [rbp+7h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp+17h] BYREF
  __int128 Data; // [rsp+60h] [rbp+27h] BYREF
  __int128 v10; // [rsp+70h] [rbp+37h]

  *(_DWORD *)&TimeFields.Milliseconds = 0;
  Type = 0;
  ResultDataSize = 0;
  DestinationString = 0LL;
  Data = 0LL;
  v10 = 0LL;
  if ( !Time )
    return (unsigned int)-1073741811;
  RtlInitUnicodeString(&DestinationString, L"Kernel-ExpirationDate");
  v2 = ZwQueryLicenseValue(&DestinationString, &Type, &Data, 0x10u, &ResultDataSize);
  if ( v2 < 0 )
    goto LABEL_8;
  v3 = v10 - Data;
  if ( (_QWORD)v10 == (_QWORD)Data )
    v3 = *((_QWORD *)&v10 + 1) - *((_QWORD *)&Data + 1);
  if ( !v3 )
    goto LABEL_8;
  TimeFields.Year = Data;
  *(_DWORD *)&TimeFields.Month = *(_DWORD *)((char *)&Data + 2);
  TimeFields.Hour = WORD3(Data);
  *(_DWORD *)&TimeFields.Minute = DWORD2(Data);
  if ( !RtlTimeFieldsToTime(&TimeFields, Time) )
  {
    v2 = -1073741823;
LABEL_8:
    Time->QuadPart = 0LL;
  }
  return (unsigned int)v2;
}
