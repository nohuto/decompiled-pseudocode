/*
 * XREFs of EtwpGetCurrentSiloMaxLoggers @ 0x1403B392C
 * Callers:
 *     EtwpGetPmcSessions @ 0x1405FC234 (EtwpGetPmcSessions.c)
 *     EtwInitializeSiloState @ 0x1409E1ED8 (EtwInitializeSiloState.c)
 *     EtwpInitialize @ 0x140B4B150 (EtwpInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E1D0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14041A880 (ZwClose.c)
 *     ZwOpenKey @ 0x14041A8E0 (ZwOpenKey.c)
 *     memset @ 0x140435400 (memset.c)
 *     RtlQueryRegistryValuesEx @ 0x1406C7B10 (RtlQueryRegistryValuesEx.c)
 */

__int64 EtwpGetCurrentSiloMaxLoggers()
{
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-79h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-69h] BYREF
  int v3; // [rsp+70h] [rbp-39h] BYREF
  unsigned int *v4; // [rsp+78h] [rbp-31h]
  _RTL_QUERY_REGISTRY_TABLE QueryTable[2]; // [rsp+90h] [rbp-19h] BYREF
  unsigned int v6; // [rsp+110h] [rbp+67h] BYREF
  HANDLE KeyHandle; // [rsp+118h] [rbp+6Fh] BYREF

  KeyHandle = 0LL;
  *(&ObjectAttributes.Attributes + 1) = 0;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  DestinationString = 0LL;
  v6 = 80;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\WMI");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    memset(QueryTable, 0, sizeof(QueryTable));
    QueryTable[0].QueryRoutine = (int (__fastcall *)(wchar_t *, unsigned int, void *, unsigned int, void *, void *))&EtwpQueryRegistryCallback;
    QueryTable[0].EntryContext = &v3;
    QueryTable[0].Name = L"EtwMaxLoggers";
    QueryTable[0].DefaultType = 4;
    v3 = 4;
    v4 = &v6;
    RtlQueryRegistryValuesEx(0x40000000u, (PCWSTR)KeyHandle, QueryTable, 0LL, 0LL);
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return v6;
}
