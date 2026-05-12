/*
 * XREFs of StorpUpdateDynamicRegistrySettings @ 0x1C0042950
 * Callers:
 *     DllInitialize @ 0x1C0063C00 (DllInitialize.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall StorpUpdateDynamicRegistrySettings(HANDLE KeyHandle)
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
    qword_1C0092468 = v8;
    if ( !v8 )
      RaidLogListSize = 0;
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
    RaidLogListSize = v8;
    if ( (unsigned int)v8 <= 0x60000 )
    {
      if ( (_DWORD)v8 )
      {
        if ( (unsigned int)v8 < 0x40 )
          RaidLogListSize = 64;
      }
      else
      {
        qword_1C0092468 = 0LL;
      }
    }
    else
    {
      RaidLogListSize = 393216;
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
    _InterlockedExchange64(&DeviceQueueIoWaitThreshold, v8);
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
    _InterlockedExchange64(&HighLatencyIoThreshold, v8);
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
      _InterlockedExchange64(&g_StorpTraceLoggingDeviceLogPagesPeriod, 36000000000LL * v2);
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
    DeviceTelemetryLiveDumpConfig = v8 != 0;
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
    _InterlockedExchange(&StorEtwErrorEventThrottleLimit, v8);
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
    _InterlockedExchange(&StorEtwWarningEventThrottleLimit, v8);
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
    _InterlockedExchange(&StorEtwInfoEventThrottleLimit, v8);
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
    ReportAllWheaErrorsAsNonFatal = (_DWORD)v8 != 0;
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
    DisableExtensionDriver = 0;
  }
  else if ( v7 == 4 && ResultLength >= 4 )
  {
    DisableExtensionDriver = (_DWORD)v8 != 0;
  }
  return result;
}
