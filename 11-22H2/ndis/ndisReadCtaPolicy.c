/*
 * XREFs of ndisReadCtaPolicy @ 0x1C0121158
 * Callers:
 *     ndisHiveLoadCallback @ 0x1C0121140 (ndisHiveLoadCallback.c)
 * Callees:
 *     ??$WriteNoFence@EX@mem@@YAXPECEE@Z @ 0x1C0006C40 (--$WriteNoFence@EX@mem@@YAXPECEE@Z.c)
 *     __security_check_cookie @ 0x1C0035EF0 (__security_check_cookie.c)
 *     memset @ 0x1C0038580 (memset.c)
 */

void ndisReadCtaPolicy()
{
  char v0; // bl
  UNICODE_STRING String1; // [rsp+30h] [rbp-49h] BYREF
  UNICODE_STRING String2; // [rsp+40h] [rbp-39h] BYREF
  _RTL_QUERY_REGISTRY_TABLE QueryTable[2]; // [rsp+50h] [rbp-29h] BYREF
  char v4; // [rsp+C0h] [rbp+47h] BYREF

  *(_QWORD *)&String1.Length = 0x80000LL;
  String1.Buffer = (wchar_t *)&v4;
  *(_QWORD *)&String2.Length = 393220LL;
  String2.Buffer = L"zh";
  memset(QueryTable, 0, sizeof(QueryTable));
  QueryTable[0].Flags = 292;
  QueryTable[0].Name = L"ActivePolicyCode";
  QueryTable[0].DefaultType = 0x1000000;
  QueryTable[0].EntryContext = &String1;
  if ( RtlQueryRegistryValuesEx(
         0,
         L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\DeviceAccess",
         QueryTable,
         0LL,
         0LL) < 0
    || (v0 = 1, RtlCompareUnicodeString(&String1, &String2, 1u)) )
  {
    v0 = 0;
  }
  mem::WriteNoFence<unsigned char,void>(&ndisCtaPolicyEnabled, v0);
}
