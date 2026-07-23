/*
 * XREFs of RtlCheckPortableOperatingSystem @ 0x140369230
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     RtlQueryRegistryValuesEx @ 0x1406C7A90 (RtlQueryRegistryValuesEx.c)
 *     RtlCheckRegistryKey @ 0x1407E5680 (RtlCheckRegistryKey.c)
 */

NTSTATUS __cdecl RtlCheckPortableOperatingSystem(PBOOLEAN IsPortable)
{
  NTSTATUS v1; // ebx
  NTSTATUS RegistryValues; // eax
  _RTL_QUERY_REGISTRY_TABLE QueryTable[2]; // [rsp+30h] [rbp-78h] BYREF
  int v6; // [rsp+B8h] [rbp+10h] BYREF

  v1 = 0;
  v6 = 0;
  if ( RtlCheckRegistryKey(2u, (PWSTR)L"MiniNT") >= 0 )
    goto LABEL_6;
  memset(QueryTable, 0, sizeof(QueryTable));
  QueryTable[0].Name = (wchar_t *)L"PortableOperatingSystem";
  QueryTable[0].Flags = 292;
  QueryTable[0].EntryContext = &v6;
  QueryTable[0].DefaultType = 0x4000000;
  RegistryValues = RtlQueryRegistryValuesEx(2u, 0LL, QueryTable, 0LL, 0LL);
  v1 = RegistryValues;
  if ( RegistryValues != -1073741772 )
  {
    if ( RegistryValues < 0 )
      return v1;
LABEL_6:
    *IsPortable = v6 != 0;
    return v1;
  }
  return -1073741275;
}
