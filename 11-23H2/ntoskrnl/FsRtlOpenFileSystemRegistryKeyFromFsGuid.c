/*
 * XREFs of FsRtlOpenFileSystemRegistryKeyFromFsGuid @ 0x14067E670
 * Callers:
 *     <none>
 * Callees:
 *     RtlUnicodeStringPrintf @ 0x1403C4CCC (RtlUnicodeStringPrintf.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B330 (ZwOpenKey.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlQueryRegistryValuesEx @ 0x1406C7A90 (RtlQueryRegistryValuesEx.c)
 */

__int64 __fastcall FsRtlOpenFileSystemRegistryKeyFromFsGuid(
        unsigned int *a1,
        _OWORD *a2,
        ACCESS_MASK a3,
        __int64 a4,
        HANDLE *a5)
{
  bool v7; // zf
  NTSTATUS RegistryValues; // ebx
  HANDLE v9; // rcx
  int Environment; // [rsp+20h] [rbp-E0h]
  int v12; // [rsp+28h] [rbp-D8h]
  int v13; // [rsp+30h] [rbp-D0h]
  int v14; // [rsp+38h] [rbp-C8h]
  int v15; // [rsp+40h] [rbp-C0h]
  int v16; // [rsp+48h] [rbp-B8h]
  int v17; // [rsp+50h] [rbp-B0h]
  int v18; // [rsp+58h] [rbp-A8h]
  int v19; // [rsp+60h] [rbp-A0h]
  HANDLE KeyHandle; // [rsp+70h] [rbp-90h] BYREF
  ACCESS_MASK DesiredAccess; // [rsp+78h] [rbp-88h]
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-80h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-70h] BYREF
  _RTL_QUERY_REGISTRY_TABLE QueryTable[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v25; // [rsp+130h] [rbp+30h] BYREF
  char v26; // [rsp+140h] [rbp+40h] BYREF

  DesiredAccess = a3;
  KeyHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  *(_QWORD *)&DestinationString.Length = 14155776LL;
  DestinationString.Buffer = (wchar_t *)&v26;
  memset(QueryTable, 0, sizeof(QueryTable));
  *a5 = 0LL;
  v7 = *(_QWORD *)a1 == *(_QWORD *)&NullGuid.Data1;
  v25 = 0LL;
  if ( v7 && *((_QWORD *)a1 + 1) == *(_QWORD *)NullGuid.Data4 )
    return (unsigned int)-1073740602;
  v19 = *((unsigned __int8 *)a1 + 15);
  v18 = *((unsigned __int8 *)a1 + 14);
  v17 = *((unsigned __int8 *)a1 + 13);
  v16 = *((unsigned __int8 *)a1 + 12);
  v15 = *((unsigned __int8 *)a1 + 11);
  v14 = *((unsigned __int8 *)a1 + 10);
  v13 = *((unsigned __int8 *)a1 + 9);
  v12 = *((unsigned __int8 *)a1 + 8);
  Environment = *((unsigned __int16 *)a1 + 3);
  RtlUnicodeStringPrintf(
    &DestinationString,
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\FileSystemVolumes\\{%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
    *a1,
    *((unsigned __int16 *)a1 + 2),
    Environment,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Attributes = 1600;
  RegistryValues = ZwOpenKey(&KeyHandle, DesiredAccess, &ObjectAttributes);
  if ( RegistryValues >= 0 )
  {
    QueryTable[0].Name = L"FsGuid";
    QueryTable[0].Flags = 308;
    QueryTable[0].EntryContext = &v25;
    QueryTable[0].DefaultType = 50331648;
    LODWORD(v25) = -16;
    RegistryValues = RtlQueryRegistryValuesEx(0x40000000u, (PCWSTR)KeyHandle, QueryTable, 0LL, 0LL);
    if ( RegistryValues >= 0 )
    {
      if ( *a2 == v25 )
      {
        v9 = 0LL;
        *a5 = KeyHandle;
        KeyHandle = 0LL;
        goto LABEL_10;
      }
      RegistryValues = -1073740578;
    }
  }
  v9 = KeyHandle;
LABEL_10:
  if ( v9 )
    ZwClose(v9);
  return (unsigned int)RegistryValues;
}
