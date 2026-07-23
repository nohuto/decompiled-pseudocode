/*
 * XREFs of sub_1403D3830 @ 0x1403D3830
 * Callers:
 *     sub_140851114 @ 0x140851114 (sub_140851114.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlQueryRegistryValuesEx @ 0x1406DEF50 (RtlQueryRegistryValuesEx.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void __fastcall sub_1403D3830(__int64 a1)
{
  _WORD *v2; // rbx
  HANDLE v3; // rcx
  _WORD *Pool2; // rax
  unsigned __int64 v5; // rax
  UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-D0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B0h] BYREF
  int v9; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING *p_UnicodeString; // [rsp+88h] [rbp-78h]
  _RTL_QUERY_REGISTRY_TABLE QueryTable[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int16 v12; // [rsp+130h] [rbp+30h] BYREF
  HANDLE KeyHandle; // [rsp+138h] [rbp+38h] BYREF

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  KeyHandle = 0LL;
  v12 = 0;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  v2 = 0LL;
  DestinationString = 0LL;
  UnicodeString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\WMI");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    memset(QueryTable, 0, sizeof(QueryTable));
    QueryTable[0].DefaultType = 1;
    QueryTable[0].QueryRoutine = (PRTL_QUERY_REGISTRY_ROUTINE)&sub_1408166C0;
    v9 = 1;
    QueryTable[0].EntryContext = &v9;
    QueryTable[0].Name = L"RTBacklogRoot";
    QueryTable[0].DefaultData = &v12;
    p_UnicodeString = &UnicodeString;
    if ( RtlQueryRegistryValuesEx(0x40000000u, (PCWSTR)KeyHandle, QueryTable, 0LL, 0LL) >= 0 )
    {
      if ( UnicodeString.Buffer )
      {
        if ( UnicodeString.Length >= 4u )
        {
          Pool2 = (_WORD *)ExAllocatePool2(256LL, UnicodeString.MaximumLength + 2LL, 1350005829LL);
          v2 = Pool2;
          if ( Pool2 )
          {
            memmove(Pool2, UnicodeString.Buffer, UnicodeString.MaximumLength);
            v5 = (unsigned __int64)UnicodeString.Length >> 1;
            if ( v2[v5 - 1] != 92 )
            {
              v2[v5] = 92;
              v2[((unsigned __int64)UnicodeString.Length >> 1) + 1] = 0;
            }
          }
        }
      }
    }
  }
  v3 = KeyHandle;
  *(_QWORD *)(a1 + 4112) = v2;
  if ( v3 )
    ZwClose(v3);
  RtlFreeUnicodeString(&UnicodeString);
}
