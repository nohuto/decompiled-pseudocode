/*
 * XREFs of sub_1403D35C8 @ 0x1403D35C8
 * Callers:
 *     sub_14062CA70 @ 0x14062CA70 (sub_14062CA70.c)
 *     sub_140851114 @ 0x140851114 (sub_140851114.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_1403D3808 @ 0x1403D3808 (sub_1403D3808.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlQueryRegistryValuesEx @ 0x1406DEF50 (RtlQueryRegistryValuesEx.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     RtlUnicodeToUTF8N @ 0x140759F40 (RtlUnicodeToUTF8N.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1403D35C8(_OWORD *a1, PVOID *a2, _WORD *a3, _DWORD *a4, _QWORD *a5, _OWORD *a6)
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
    QueryTable[0].QueryRoutine = (PRTL_QUERY_REGISTRY_ROUTINE)&sub_1408166C0;
    QueryTable[0].EntryContext = &v22;
    QueryTable[1].QueryRoutine = (PRTL_QUERY_REGISTRY_ROUTINE)&sub_1408166C0;
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
    QueryTable[2].QueryRoutine = (PRTL_QUERY_REGISTRY_ROUTINE)&sub_1408166C0;
    QueryTable[2].DefaultType = 1;
    v26 = 1;
    p_UnicodeString = &UnicodeString;
    RegistryValues = RtlQueryRegistryValuesEx(0x40000000u, (PCWSTR)KeyHandle, QueryTable, 0LL, 0LL);
    if ( RegistryValues >= 0 )
    {
      *a5 = 0LL;
      if ( (unsigned int)sub_1403D3808(UnicodeStringSource, a1) )
        *a1 = *(_OWORD *)&xmmword_140010DE8;
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
      RegistryValues = sub_1403D3808(&UnicodeString, a6);
      if ( RegistryValues )
      {
        RegistryValues = 0;
        *a6 = *(_OWORD *)&xmmword_140010DE8;
      }
    }
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  RtlFreeUnicodeString((PUNICODE_STRING)UnicodeStringSource);
  RtlFreeUnicodeString(&UnicodeString);
  return (unsigned int)RegistryValues;
}
