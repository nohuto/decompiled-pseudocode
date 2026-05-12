/*
 * XREFs of sub_1C0042F20 @ 0x1C0042F20
 * Callers:
 *     DllInitialize @ 0x1C0064410 (DllInitialize.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_1C0042F20(HANDLE KeyHandle)
{
  __int64 v2; // rax
  NTSTATUS result; // eax
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+50h] [rbp-B0h] BYREF
  int v7; // [rsp+54h] [rbp-ACh]
  __int64 v8; // [rsp+5Ch] [rbp-A4h]

  ResultLength = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"LogControlEnable");
  if ( ZwQueryValueKey(
         KeyHandle,
         &DestinationString,
         KeyValuePartialInformation,
         KeyValueInformation,
         0x110u,
         &ResultLength) >= 0
    && v7 == 11
    && ResultLength >= 8 )
  {
    qword_1C0093468 = v8;
    if ( !v8 )
      dword_1C0093430 = 0;
  }
  RtlInitUnicodeString(&DestinationString, L"LogSize");
  if ( ZwQueryValueKey(
         KeyHandle,
         &DestinationString,
         KeyValuePartialInformation,
         KeyValueInformation,
         0x110u,
         &ResultLength) >= 0
    && v7 == 4
    && ResultLength >= 4 )
  {
    dword_1C0093430 = v8;
    if ( (unsigned int)v8 <= 0x60000 )
    {
      if ( (_DWORD)v8 )
      {
        if ( (unsigned int)v8 < 0x40 )
          dword_1C0093430 = 64;
      }
      else
      {
        qword_1C0093468 = 0LL;
      }
    }
    else
    {
      dword_1C0093430 = 393216;
    }
  }
  RtlInitUnicodeString(&DestinationString, L"DeviceQueueIoWaitThreshold");
  if ( ZwQueryValueKey(
         KeyHandle,
         &DestinationString,
         KeyValuePartialInformation,
         KeyValueInformation,
         0x110u,
         &ResultLength) >= 0
    && v7 == 11
    && ResultLength >= 8
    && v8 )
  {
    _InterlockedExchange64(&qword_1C0093440, v8);
  }
  RtlInitUnicodeString(&DestinationString, L"HighLatencyIoThreshold");
  if ( ZwQueryValueKey(
         KeyHandle,
         &DestinationString,
         KeyValuePartialInformation,
         KeyValueInformation,
         0x110u,
         &ResultLength) >= 0
    && v7 == 11
    && ResultLength >= 8
    && v8 )
  {
    _InterlockedExchange64(&qword_1C0093438, v8);
  }
  RtlInitUnicodeString(&DestinationString, L"TelemetryDeviceLogPagesPeriod");
  if ( ZwQueryValueKey(
         KeyHandle,
         &DestinationString,
         KeyValuePartialInformation,
         KeyValueInformation,
         0x110u,
         &ResultLength) >= 0
    && v7 == 4
    && ResultLength >= 4 )
  {
    v2 = (unsigned int)v8;
    if ( (_DWORD)v8 )
    {
      if ( (unsigned int)v8 >= 0x18uLL )
        v2 = 24LL;
      _InterlockedExchange64(&qword_1C0093480, 36000000000LL * v2);
    }
  }
  RtlInitUnicodeString(&DestinationString, L"DeviceTelemetryLiveDumpEnable");
  if ( ZwQueryValueKey(
         KeyHandle,
         &DestinationString,
         KeyValuePartialInformation,
         KeyValueInformation,
         0x110u,
         &ResultLength) >= 0
    && v7 == 4
    && ResultLength >= 4 )
  {
    dword_1C0093470 = v8 != 0;
  }
  RtlInitUnicodeString(&DestinationString, L"StorportEtwErrorThrottleLimit");
  if ( ZwQueryValueKey(
         KeyHandle,
         &DestinationString,
         KeyValuePartialInformation,
         KeyValueInformation,
         0x110u,
         &ResultLength) >= 0
    && v7 == 4
    && ResultLength >= 4
    && (_DWORD)v8 )
  {
    _InterlockedExchange(&dword_1C009344C, v8);
  }
  RtlInitUnicodeString(&DestinationString, L"StorportEtwWarningThrottleLimit");
  if ( ZwQueryValueKey(
         KeyHandle,
         &DestinationString,
         KeyValuePartialInformation,
         KeyValueInformation,
         0x110u,
         &ResultLength) >= 0
    && v7 == 4
    && ResultLength >= 4
    && (_DWORD)v8 )
  {
    _InterlockedExchange(&dword_1C0093448, v8);
  }
  RtlInitUnicodeString(&DestinationString, L"StorportEtwInfoThrottleLimit");
  if ( ZwQueryValueKey(
         KeyHandle,
         &DestinationString,
         KeyValuePartialInformation,
         KeyValueInformation,
         0x110u,
         &ResultLength) >= 0
    && v7 == 4
    && ResultLength >= 4
    && (_DWORD)v8 )
  {
    _InterlockedExchange(&dword_1C0093478, v8);
  }
  RtlInitUnicodeString(&DestinationString, L"ReportAllWheaErrorsAsNonFatal");
  if ( ZwQueryValueKey(
         KeyHandle,
         &DestinationString,
         KeyValuePartialInformation,
         KeyValueInformation,
         0x110u,
         &ResultLength) >= 0
    && v7 == 4
    && ResultLength >= 4 )
  {
    byte_1C0093CD0 = (_DWORD)v8 != 0;
  }
  RtlInitUnicodeString(&DestinationString, L"DisableExtensionDriver");
  result = ZwQueryValueKey(
             KeyHandle,
             &DestinationString,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x110u,
             &ResultLength);
  if ( result < 0 )
  {
    byte_1C0093BC0 = 0;
  }
  else if ( v7 == 4 && ResultLength >= 4 )
  {
    byte_1C0093BC0 = (_DWORD)v8 != 0;
  }
  return result;
}
