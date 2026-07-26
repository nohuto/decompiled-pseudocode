/*
 * XREFs of InitializeTelemetryAssertsKM @ 0x1C0032AF4
 * Callers:
 *     DriverEntry @ 0x1C0153778 (DriverEntry.c)
 * Callees:
 *     InitializeTelemetryAssertsKMWorkerInternal @ 0x1C0032CB8 (InitializeTelemetryAssertsKMWorkerInternal.c)
 *     memmove @ 0x1C0036080 (memmove.c)
 *     memset @ 0x1C0036340 (memset.c)
 */

__int64 __fastcall InitializeTelemetryAssertsKM(const void **a1)
{
  NTSTATUS RegistryValues; // ebx
  WCHAR *Pool2; // rax
  WCHAR *v4; // rdi
  __int64 v5; // rcx
  bool v6; // zf
  _STRING DestinationString; // [rsp+38h] [rbp-59h] BYREF
  _UNICODE_STRING SourceString; // [rsp+48h] [rbp-49h] BYREF
  _STRING v10; // [rsp+58h] [rbp-39h] BYREF
  _STRING v11; // [rsp+68h] [rbp-29h] BYREF
  _RTL_QUERY_REGISTRY_TABLE QueryTable[2]; // [rsp+78h] [rbp-19h] BYREF

  DestinationString = 0LL;
  RegistryValues = -1073741801;
  if ( _InterlockedExchangeAdd(&g_AssertsOperational, 0) )
    return 0LL;
  RtlInitAnsiString(&DestinationString, 0LL);
  Pool2 = (WCHAR *)ExAllocatePool2(64LL, *(unsigned __int16 *)a1 + 2LL, 1953657665);
  v4 = Pool2;
  if ( Pool2 )
  {
    memmove(Pool2, a1[1], *(unsigned __int16 *)a1);
    SourceString = 0LL;
    RtlInitUnicodeString(&SourceString, 0LL);
    memset(QueryTable, 0, sizeof(QueryTable));
    QueryTable[0].Name = L"ImagePath";
    QueryTable[0].Flags = 32;
    QueryTable[0].EntryContext = &SourceString;
    QueryTable[0].DefaultType = 2;
    RegistryValues = RtlQueryRegistryValuesEx(0, v4, QueryTable, 0LL, 0LL);
    if ( RegistryValues >= 0 )
    {
      RegistryValues = RtlUnicodeStringToAnsiString(&DestinationString, &SourceString, 1u);
      ExFreePoolWithTag(SourceString.Buffer, 0);
      if ( RegistryValues >= 0 )
      {
        v5 = (unsigned int)DestinationString.Length - 1;
        if ( DestinationString.Length != 1 )
        {
          while ( DestinationString.Buffer[v5] != 92 )
          {
            v6 = (_DWORD)v5 == 1;
            v5 = (unsigned int)(v5 - 1);
            if ( v6 )
              goto LABEL_11;
          }
          if ( (_DWORD)v5 != DestinationString.Length )
          {
            v10 = 0LL;
            RtlInitAnsiString(&v10, &DestinationString.Buffer[(unsigned int)(v5 + 1)]);
            v11 = v10;
            RegistryValues = InitializeTelemetryAssertsKMWorkerInternal(&v11);
          }
        }
LABEL_11:
        RtlFreeAnsiString(&DestinationString);
      }
    }
    ExFreePoolWithTag(v4, 0x74727341u);
  }
  return (unsigned int)RegistryValues;
}
