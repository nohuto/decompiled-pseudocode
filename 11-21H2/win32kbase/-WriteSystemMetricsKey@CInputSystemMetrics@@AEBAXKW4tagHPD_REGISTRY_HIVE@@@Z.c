/*
 * XREFs of ?WriteSystemMetricsKey@CInputSystemMetrics@@AEBAXKW4tagHPD_REGISTRY_HIVE@@@Z @ 0x1C0053874
 * Callers:
 *     ?Initialize@CInputSystemMetrics@@SAJXZ @ 0x1C0053784 (-Initialize@CInputSystemMetrics@@SAJXZ.c)
 *     ForceUpdatePointerDeviceSystemMetrics @ 0x1C0053830 (ForceUpdatePointerDeviceSystemMetrics.c)
 *     ?UpdatePointerDeviceSystemMetrics@CInputSystemMetrics@@QEAAXPEBUDEVICEINFO@@_N@Z @ 0x1C01F8448 (-UpdatePointerDeviceSystemMetrics@CInputSystemMetrics@@QEAAXPEBUDEVICEINFO@@_N@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

NTSTATUS __fastcall CInputSystemMetrics::WriteSystemMetricsKey(void *a1, __int64 a2, int a3)
{
  NTSTATUS result; // eax
  __int64 v4; // r8
  const WCHAR *v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  NTSTATUS v9; // ebx
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp+7h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+58h] [rbp+17h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp+27h] BYREF
  void *KeyHandle; // [rsp+A8h] [rbp+67h] BYREF
  int Data; // [rsp+B0h] [rbp+6Fh] BYREF

  Data = a2;
  KeyHandle = a1;
  result = 0xFFFF;
  if ( gProtocolType != -1 )
  {
    if ( a3 )
    {
      v4 = (unsigned int)(a3 - 1);
      if ( (_DWORD)v4 )
      {
        if ( (_DWORD)v4 != 2 )
          return MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, v4);
        v5 = L"\\Registry\\Machine\\Software\\WowAA32Node\\Microsoft\\Windows\\Tablet PC";
      }
      else
      {
        v5 = L"\\Registry\\Machine\\Software\\Wow6432Node\\Microsoft\\Windows\\Tablet PC";
      }
    }
    else
    {
      v5 = L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\Tablet PC";
    }
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, v5);
    *(&ObjectAttributes.Length + 1) = 0;
    memset(&ObjectAttributes.Attributes + 1, 0, 20);
    ObjectAttributes.RootDirectory = 0LL;
    KeyHandle = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    if ( ZwCreateKey(&KeyHandle, 0x20006u, &ObjectAttributes, 0, 0LL, 1u, 0LL) < 0 )
      return MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8);
    ValueName = 0LL;
    RtlInitUnicodeString(&ValueName, L"IsTabletPC");
    v9 = ZwSetValueKey(KeyHandle, &ValueName, 0, 4u, &Data, 4u);
    result = ZwClose(KeyHandle);
    if ( v9 < 0 )
      return MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8);
  }
  return result;
}
