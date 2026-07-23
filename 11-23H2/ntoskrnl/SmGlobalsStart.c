/*
 * XREFs of SmGlobalsStart @ 0x140B4D7D4
 * Callers:
 *     SmInitSystem @ 0x140B4D6E0 (SmInitSystem.c)
 * Callees:
 *     RtlQueryRegistryValuesEx @ 0x1406C7A90 (RtlQueryRegistryValuesEx.c)
 */

__int64 __fastcall SmGlobalsStart(_QWORD *a1)
{
  _QWORD *v1; // r8
  _QWORD *v2; // rdx
  _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+30h] [rbp-19h] BYREF
  __int64 v5; // [rsp+68h] [rbp+1Fh]
  int v6; // [rsp+70h] [rbp+27h]
  __int64 v7; // [rsp+78h] [rbp+2Fh]
  __int64 v8; // [rsp+80h] [rbp+37h]
  int v9; // [rsp+88h] [rbp+3Fh]
  __int64 v10; // [rsp+90h] [rbp+47h]
  int v11; // [rsp+98h] [rbp+4Fh]

  v1 = (_QWORD *)a1[2];
  v2 = (_QWORD *)(*((_QWORD *)PspSystemPartition + 3) + 1960LL);
  if ( (_QWORD *)*v1 != a1 + 1 )
    __fastfail(3u);
  *v2 = a1 + 1;
  v2[1] = v1;
  *v1 = v2;
  a1[2] = v2;
  QueryTable.QueryRoutine = 0LL;
  QueryTable.DefaultData = 0LL;
  QueryTable.DefaultLength = 0;
  v5 = 0LL;
  v6 = 0;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0;
  v10 = 0LL;
  v11 = 0;
  QueryTable.EntryContext = a1;
  QueryTable.Flags = 288;
  QueryTable.Name = L"EnableDirtyStores";
  QueryTable.DefaultType = 0x4000000;
  RtlQueryRegistryValuesEx(
    0,
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Memory Management\\StoreParameters",
    &QueryTable,
    0LL,
    0LL);
  return 0LL;
}
