/*
 * XREFs of sub_140604E78 @ 0x140604E78
 * Callers:
 *     sub_140604DC0 @ 0x140604DC0 (sub_140604DC0.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlQueryRegistryValuesEx @ 0x1406DEF50 (RtlQueryRegistryValuesEx.c)
 */

__int64 sub_140604E78()
{
  WCHAR *v0; // rax
  __int64 v1; // rcx
  wchar_t *Buffer; // rbx
  __int128 v4; // [rsp+30h] [rbp-D0h] BYREF
  _RTL_QUERY_REGISTRY_TABLE QueryTable[4]; // [rsp+40h] [rbp-C0h] BYREF

  v4 = 0LL;
  v0 = word_140C18FE0;
  v1 = 0x7FFFLL;
  while ( *v0 )
  {
    ++v0;
    if ( !--v1 )
      goto LABEL_6;
  }
  *((_QWORD *)&v4 + 1) = word_140C18FE0;
  LOWORD(v4) = -2 - 2 * v1;
LABEL_6:
  Buffer = stru_140D3CEC8.Buffer;
  if ( dword_140D011A8 )
    Buffer = (wchar_t *)off_140C03660;
  WORD1(v4) = 3072;
  memset(QueryTable, 0, sizeof(QueryTable));
  QueryTable[0].DefaultType = 0x1000000;
  QueryTable[0].Flags = 288;
  QueryTable[1].DefaultType = 0x4000000;
  QueryTable[0].Name = (PWSTR)L"VerifyDrivers";
  QueryTable[1].Flags = 288;
  QueryTable[0].EntryContext = &v4;
  QueryTable[2].DefaultType = 0x4000000;
  QueryTable[1].Name = (PWSTR)L"XdvVerifierOptions";
  QueryTable[2].Flags = 288;
  QueryTable[1].EntryContext = &dword_140C18FD0;
  QueryTable[2].Name = L"XdvTipTag";
  QueryTable[2].EntryContext = &dword_140C18FD4;
  RtlQueryRegistryValuesEx(0, Buffer, QueryTable, 0LL, 0LL);
  return 0LL;
}
