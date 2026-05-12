/*
 * XREFs of RaidUnitCreateDumpInfo @ 0x1C00AA958
 * Callers:
 *     RaUnitStorageGetDumpInfoIoctl @ 0x1C00A9C60 (RaUnitStorageGetDumpInfoIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0007B34 (RaidAllocatePool.c)
 *     RaidUnitFreeDumpInfo @ 0x1C00613A8 (RaidUnitFreeDumpInfo.c)
 *     RaidUnitCreateDumpData @ 0x1C00AA828 (RaidUnitCreateDumpData.c)
 */

__int64 __fastcall RaidUnitCreateDumpInfo(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // r9
  _QWORD *Pool; // rax
  _QWORD *v7; // rbx
  int v8; // edi
  _QWORD *v9; // rax
  PVOID v10; // rcx
  PVOID P; // [rsp+40h] [rbp+8h] BYREF
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF
  PVOID v14; // [rsp+50h] [rbp+18h] BYREF

  v13 = a2;
  *a3 = 0LL;
  v3 = *(_QWORD *)(a1 + 8);
  P = 0LL;
  LODWORD(v13) = 0;
  Pool = (_QWORD *)RaidAllocatePool(64LL, 72LL, 1145266514LL, v3);
  v14 = Pool;
  v7 = Pool;
  if ( Pool )
  {
    v9 = Pool + 1;
    v9[1] = v9;
    *v9 = v9;
    *(_DWORD *)v7 = 72;
    *(_OWORD *)(v7 + 3) = *(_OWORD *)(a1 + 2024);
    v8 = RaidUnitCreateDumpData(a1, &P, &v13);
    if ( v8 < 0 )
    {
      v10 = P;
    }
    else
    {
      *((_DWORD *)v7 + 11) = v13;
      v7[6] = P;
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
  return (unsigned int)v8;
}
