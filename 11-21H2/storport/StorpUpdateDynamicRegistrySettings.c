/*
 * XREFs of StorpUpdateDynamicRegistrySettings @ 0x1C003FE30
 * Callers:
 *     DllInitialize @ 0x1C0056DE0 (DllInitialize.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0022BF0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall StorpUpdateDynamicRegistrySettings(__int64 a1)
{
  __int64 v2; // rax
  NTSTATUS result; // eax
  ULONG DestinationString; // [rsp+38h] [rbp-D0h] BYREF
  struct _UNICODE_STRING DestinationString_8; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v7; // [rsp+5Ch] [rbp-ACh]
  __int64 v8; // [rsp+64h] [rbp-A4h]

  DestinationString = 0;
  DestinationString_8 = 0LL;
  RtlInitUnicodeString(&DestinationString_8, L"DeviceQueueIoWaitThreshold");
  if ( ZwQueryValueKey(
         *(HANDLE *)(a1 + 56),
         &DestinationString_8,
         KeyValuePartialInformation,
         KeyValueInformation,
         0x110u,
         &DestinationString) >= 0
    && (_DWORD)v7 == 11
    && DestinationString >= 8
    && v8 )
  {
    _InterlockedExchange64(&DeviceQueueIoWaitThreshold, v8);
  }
  RtlInitUnicodeString(&DestinationString_8, L"HighLatencyIoThreshold");
  if ( ZwQueryValueKey(
         *(HANDLE *)(a1 + 56),
         &DestinationString_8,
         KeyValuePartialInformation,
         KeyValueInformation,
         0x110u,
         &DestinationString) >= 0
    && (_DWORD)v7 == 11
    && DestinationString >= 8
    && v8 )
  {
    _InterlockedExchange64(&HighLatencyIoThreshold, v8);
  }
  RtlInitUnicodeString(&DestinationString_8, L"TelemetryDeviceLogPagesPeriod");
  if ( ZwQueryValueKey(
         *(HANDLE *)(a1 + 56),
         &DestinationString_8,
         KeyValuePartialInformation,
         KeyValueInformation,
         0x110u,
         &DestinationString) >= 0
    && (_DWORD)v7 == 4
    && DestinationString >= 4 )
  {
    v2 = (unsigned int)v8;
    if ( (_DWORD)v8 )
    {
      if ( (unsigned int)v8 >= 0x18uLL )
        v2 = 24LL;
      _InterlockedExchange64(&g_StorpTraceLoggingDeviceLogPagesPeriod, 36000000000LL * v2);
    }
  }
  RtlInitUnicodeString(&DestinationString_8, L"DeviceTelemetryLiveDumpEnable");
  if ( ZwQueryValueKey(
         *(HANDLE *)(a1 + 56),
         &DestinationString_8,
         KeyValuePartialInformation,
         KeyValueInformation,
         0x110u,
         &DestinationString) >= 0
    && (_DWORD)v7 == 4
    && DestinationString >= 4 )
  {
    DeviceTelemetryLiveDumpConfig = v8 != 0;
  }
  RtlInitUnicodeString(&DestinationString_8, L"StorportEtwErrorThrottleLimit");
  if ( ZwQueryValueKey(
         *(HANDLE *)(a1 + 56),
         &DestinationString_8,
         KeyValuePartialInformation,
         KeyValueInformation,
         0x110u,
         &DestinationString) >= 0
    && (_DWORD)v7 == 4
    && DestinationString >= 4
    && (_DWORD)v8 )
  {
    _InterlockedExchange(&StorEtwErrorEventThrottleLimit, v8);
  }
  RtlInitUnicodeString(&DestinationString_8, L"StorportEtwWarningThrottleLimit");
  if ( ZwQueryValueKey(
         *(HANDLE *)(a1 + 56),
         &DestinationString_8,
         KeyValuePartialInformation,
         KeyValueInformation,
         0x110u,
         &DestinationString) >= 0
    && (_DWORD)v7 == 4
    && DestinationString >= 4
    && (_DWORD)v8 )
  {
    _InterlockedExchange(&StorEtwWarningEventThrottleLimit, v8);
  }
  RtlInitUnicodeString(&DestinationString_8, L"StorportEtwInfoThrottleLimit");
  if ( ZwQueryValueKey(
         *(HANDLE *)(a1 + 56),
         &DestinationString_8,
         KeyValuePartialInformation,
         KeyValueInformation,
         0x110u,
         &DestinationString) >= 0
    && (_DWORD)v7 == 4
    && DestinationString >= 4
    && (_DWORD)v8 )
  {
    _InterlockedExchange(&StorEtwInfoEventThrottleLimit, v8);
  }
  RtlInitUnicodeString(&DestinationString_8, L"ReportAllWheaErrorsAsNonFatal");
  if ( ZwQueryValueKey(
         *(HANDLE *)(a1 + 56),
         &DestinationString_8,
         KeyValuePartialInformation,
         KeyValueInformation,
         0x110u,
         &DestinationString) >= 0
    && (_DWORD)v7 == 4
    && DestinationString >= 4 )
  {
    ReportAllWheaErrorsAsNonFatal = (_DWORD)v8 != 0;
  }
  RtlInitUnicodeString(&DestinationString_8, L"DisableExtensionDriver");
  result = ZwQueryValueKey(
             *(HANDLE *)(a1 + 56),
             &DestinationString_8,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x110u,
             &DestinationString);
  if ( result < 0 )
  {
    DisableExtensionDriver = 0;
  }
  else if ( (_DWORD)v7 == 4 && DestinationString >= 4 )
  {
    DisableExtensionDriver = (_DWORD)v8 != 0;
  }
  return result;
}
