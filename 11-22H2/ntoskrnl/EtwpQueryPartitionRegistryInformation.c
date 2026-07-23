/*
 * XREFs of EtwpQueryPartitionRegistryInformation @ 0x140398B74
 * Callers:
 *     EtwpContainerStateWnfCallback @ 0x1405FC010 (EtwpContainerStateWnfCallback.c)
 *     EtwpInitializeSiloState @ 0x14083D0F4 (EtwpInitializeSiloState.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E1D0 (RtlInitUnicodeString.c)
 *     StringToGuidNoBrackets @ 0x140398DB4 (StringToGuidNoBrackets.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     ZwClose @ 0x14041A880 (ZwClose.c)
 *     ZwOpenKey @ 0x14041A8E0 (ZwOpenKey.c)
 *     memset @ 0x140435400 (memset.c)
 *     RtlQueryRegistryValuesEx @ 0x1406C7B10 (RtlQueryRegistryValuesEx.c)
 *     RtlUnicodeToUTF8N @ 0x140758D10 (RtlUnicodeToUTF8N.c)
 *     RtlFreeUnicodeString @ 0x14076F8E0 (RtlFreeUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpQueryPartitionRegistryInformation(
        GUID *a1,
        PVOID *a2,
        _WORD *a3,
        _DWORD *a4,
        _QWORD *a5,
        GUID *a6)
{
  NTSTATUS RegistryValues; // ebx
  ULONG v12; // ebx
  CHAR *Pool2; // rax
  NTSTATUS v14; // eax
  _WORD v15[2]; // [rsp+30h] [rbp-D0h] BYREF
  ULONG UTF8StringActualByteCount; // [rsp+34h] [rbp-CCh] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  PCWCH UnicodeStringSource[2]; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-90h] BYREF
  int v22; // [rsp+A0h] [rbp-60h] BYREF
  _DWORD *v23; // [rsp+A8h] [rbp-58h]
  int v24; // [rsp+B0h] [rbp-50h] BYREF
  PCWCH *v25; // [rsp+B8h] [rbp-48h]
  int v26; // [rsp+C0h] [rbp-40h] BYREF
  UNICODE_STRING *p_UnicodeString; // [rsp+C8h] [rbp-38h]
  _RTL_QUERY_REGISTRY_TABLE QueryTable[4]; // [rsp+E0h] [rbp-20h] BYREF

  KeyHandle = 0LL;
  UTF8StringActualByteCount = 0;
  v15[0] = 0;
  *a4 = 0;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  DestinationString = 0LL;
  *(_OWORD *)UnicodeStringSource = 0LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  UnicodeString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  RegistryValues = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( RegistryValues >= 0 )
  {
    memset(QueryTable, 0, sizeof(QueryTable));
    v23 = a4;
    QueryTable[1].DefaultType = 1;
    QueryTable[0].QueryRoutine = (int (__fastcall *)(wchar_t *, unsigned int, void *, unsigned int, void *, void *))&EtwpQueryRegistryCallback;
    QueryTable[0].EntryContext = &v22;
    QueryTable[1].QueryRoutine = (int (__fastcall *)(wchar_t *, unsigned int, void *, unsigned int, void *, void *))&EtwpQueryRegistryCallback;
    QueryTable[0].Name = L"ContainerType";
    v24 = 1;
    QueryTable[0].DefaultType = 4;
    v22 = 4;
    QueryTable[1].EntryContext = &v24;
    QueryTable[1].Name = L"ContainerId";
    QueryTable[1].DefaultData = v15;
    v25 = UnicodeStringSource;
    QueryTable[2].EntryContext = &v26;
    QueryTable[2].Name = L"ContainerCorrelationId";
    QueryTable[2].DefaultData = v15;
    QueryTable[2].QueryRoutine = (int (__fastcall *)(wchar_t *, unsigned int, void *, unsigned int, void *, void *))&EtwpQueryRegistryCallback;
    QueryTable[2].DefaultType = 1;
    v26 = 1;
    p_UnicodeString = &UnicodeString;
    RegistryValues = RtlQueryRegistryValuesEx(0x40000000u, (PCWSTR)KeyHandle, QueryTable, 0LL, 0LL);
    if ( RegistryValues >= 0 )
    {
      *a5 = 0LL;
      if ( (unsigned int)StringToGuidNoBrackets(UnicodeStringSource, a1) )
        *a1 = NullGuid;
      if ( !RtlUnicodeToUTF8N(
              0LL,
              0,
              &UTF8StringActualByteCount,
              UnicodeStringSource[1],
              LOWORD(UnicodeStringSource[0])) )
      {
        v12 = UTF8StringActualByteCount;
        if ( UTF8StringActualByteCount < 0xFFFF )
        {
          Pool2 = (CHAR *)ExAllocatePool2(72LL, UTF8StringActualByteCount, 1635218501LL);
          *a2 = Pool2;
          if ( Pool2 )
          {
            v14 = RtlUnicodeToUTF8N(
                    Pool2,
                    v12,
                    &UTF8StringActualByteCount,
                    UnicodeStringSource[1],
                    LOWORD(UnicodeStringSource[0]));
            if ( !v14 || v14 == 263 )
            {
              *a3 = UTF8StringActualByteCount;
            }
            else
            {
              ExFreePoolWithTag(*a2, 0x61777445u);
              *a2 = 0LL;
            }
          }
        }
      }
      RegistryValues = StringToGuidNoBrackets(&UnicodeString, a6);
      if ( RegistryValues )
      {
        RegistryValues = 0;
        *a6 = NullGuid;
      }
    }
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  RtlFreeUnicodeString((PUNICODE_STRING)UnicodeStringSource);
  RtlFreeUnicodeString(&UnicodeString);
  return (unsigned int)RegistryValues;
}
