/*
 * XREFs of CarReadRegistry @ 0x1405D57DC
 * Callers:
 *     CarLoadConfig @ 0x1405D5724 (CarLoadConfig.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     memset @ 0x140435400 (memset.c)
 *     RtlQueryRegistryValuesEx @ 0x1406C7B10 (RtlQueryRegistryValuesEx.c)
 */

__int64 CarReadRegistry()
{
  size_t *v0; // rcx
  __int64 v1; // rdx
  wchar_t *Buffer; // rbx
  __int128 v4; // [rsp+30h] [rbp-D0h] BYREF
  _RTL_QUERY_REGISTRY_TABLE QueryTable[4]; // [rsp+40h] [rbp-C0h] BYREF

  v0 = CarDrivers;
  v4 = 0LL;
  v1 = 0x7FFFLL;
  while ( *(_WORD *)v0 )
  {
    v0 = (size_t *)((char *)v0 + 2);
    if ( !--v1 )
      goto LABEL_6;
  }
  *((_QWORD *)&v4 + 1) = CarDrivers;
  LOWORD(v4) = 2 * (0x7FFF - v1);
LABEL_6:
  Buffer = CmRegistryMachineSystemCurrentControlSetControlSessionManagerMemoryManagement.Buffer;
  if ( CmStateSeparationEnabled )
    Buffer = (wchar_t *)off_140C034E0;
  WORD1(v4) = 3072;
  memset(QueryTable, 0, sizeof(QueryTable));
  QueryTable[0].DefaultType = 0x1000000;
  QueryTable[0].Flags = 288;
  QueryTable[1].DefaultType = 0x4000000;
  QueryTable[0].Name = (wchar_t *)L"VerifyDrivers";
  QueryTable[1].Flags = 288;
  QueryTable[0].EntryContext = &v4;
  QueryTable[2].DefaultType = 0x4000000;
  QueryTable[1].Name = (wchar_t *)L"XdvVerifierOptions";
  QueryTable[2].Flags = 288;
  QueryTable[1].EntryContext = &CarXdvOptions;
  QueryTable[2].Name = L"XdvTipTag";
  QueryTable[2].EntryContext = &CarTipTag;
  RtlQueryRegistryValuesEx(0, Buffer, QueryTable, 0LL, 0LL);
  return 0LL;
}
