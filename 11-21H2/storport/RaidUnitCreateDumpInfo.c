/*
 * XREFs of RaidUnitCreateDumpInfo @ 0x1C0085228
 * Callers:
 *     RaUnitStorageGetDumpInfoIoctl @ 0x1C0085844 (RaUnitStorageGetDumpInfoIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C000F8A0 (RaidAllocatePool.c)
 *     RaidUnitFreeDumpInfo @ 0x1C0017260 (RaidUnitFreeDumpInfo.c)
 *     RaidUnitCreateDumpData @ 0x1C0085160 (RaidUnitCreateDumpData.c)
 */

__int64 __fastcall RaidUnitCreateDumpInfo(__int64 a1, __int64 a2, PVOID **a3)
{
  __int64 v3; // r9
  PVOID *Pool; // rax
  PVOID *v7; // rbx
  _QWORD *v8; // rax
  int v9; // edi
  void *v10; // rcx
  void *v12; // [rsp+40h] [rbp+8h] BYREF
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF
  PVOID *v14; // [rsp+50h] [rbp+18h] BYREF

  v13 = a2;
  *a3 = 0LL;
  v3 = *(_QWORD *)(a1 + 8);
  v12 = 0LL;
  LODWORD(v13) = 0;
  Pool = (PVOID *)RaidAllocatePool(64LL, 72LL, 1145266514LL, v3);
  v14 = Pool;
  v7 = Pool;
  if ( Pool )
  {
    v8 = Pool + 1;
    v8[1] = v8;
    *v8 = v8;
    *(_DWORD *)v7 = 72;
    *(_OWORD *)(v7 + 3) = *(_OWORD *)(a1 + 1976);
    v9 = RaidUnitCreateDumpData(a1, &v12, &v13);
    if ( v9 < 0 )
    {
      v10 = v12;
    }
    else
    {
      *((_DWORD *)v7 + 11) = v13;
      v7[6] = v12;
      v10 = 0LL;
      *a3 = v7;
      v7 = 0LL;
      v14 = 0LL;
    }
    if ( v10 )
      ExFreePoolWithTag(v10, 0x44436152u);
    if ( v7 )
      RaidUnitFreeDumpInfo(&v14);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v9;
}
