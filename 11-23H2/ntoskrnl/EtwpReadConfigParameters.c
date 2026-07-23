/*
 * XREFs of EtwpReadConfigParameters @ 0x140B72A44
 * Callers:
 *     EtwpInitialize @ 0x140B47A50 (EtwpInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B330 (ZwOpenKey.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlQueryRegistryValuesEx @ 0x1406C7A90 (RtlQueryRegistryValuesEx.c)
 */

NTSTATUS EtwpReadConfigParameters()
{
  NTSTATUS result; // eax
  int v1; // ecx
  unsigned int v2; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v3; // [rsp+34h] [rbp-CCh] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B0h] BYREF
  int v7; // [rsp+80h] [rbp-80h] BYREF
  unsigned int *v8; // [rsp+88h] [rbp-78h]
  int v9; // [rsp+90h] [rbp-70h] BYREF
  unsigned int *v10; // [rsp+98h] [rbp-68h]
  _RTL_QUERY_REGISTRY_TABLE QueryTable[3]; // [rsp+B0h] [rbp-50h] BYREF

  KeyHandle = 0LL;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v3 = 0;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  DestinationString = 0LL;
  v2 = 10;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\WMI");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0 )
    goto LABEL_14;
  memset(QueryTable, 0, sizeof(QueryTable));
  QueryTable[0].DefaultType = 4;
  QueryTable[0].QueryRoutine = (int (__fastcall *)(wchar_t *, unsigned int, void *, unsigned int, void *, void *))EtwpQueryRegistryCallback;
  QueryTable[0].EntryContext = &v7;
  v7 = 4;
  QueryTable[0].Name = L"MaxNonPagedPoolUsage";
  QueryTable[1].QueryRoutine = (int (__fastcall *)(wchar_t *, unsigned int, void *, unsigned int, void *, void *))EtwpQueryRegistryCallback;
  v8 = &v2;
  QueryTable[1].DefaultType = 4;
  QueryTable[1].EntryContext = &v9;
  QueryTable[1].Name = L"StackCaptureTimeout";
  v9 = 4;
  v10 = &v3;
  if ( RtlQueryRegistryValuesEx(0x40000000u, (PCWSTR)KeyHandle, QueryTable, 0LL, 0LL) < 0 )
  {
LABEL_14:
    result = v2;
    v1 = v3;
  }
  else
  {
    result = 50;
    if ( v2 <= 0x32 )
    {
      result = v2;
      if ( v2 < 0xA )
        result = 10;
    }
    v1 = v3;
    v2 = result;
    if ( v3 > 0x2BF20 )
      v1 = 180000;
    v3 = v1;
  }
  EtwpMaxNonPagedPoolUsage = result;
  if ( v1 )
    EtwpStackCaptureTimeout = v1;
  if ( KeyHandle )
    return ZwClose(KeyHandle);
  return result;
}
