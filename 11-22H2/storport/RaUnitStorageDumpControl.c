/*
 * XREFs of RaUnitStorageDumpControl @ 0x1C00A9BD0
 * Callers:
 *     <none>
 * Callees:
 *     RaUnitAcquireRemoveLock @ 0x1C0007014 (RaUnitAcquireRemoveLock.c)
 *     RaUnitReleaseRemoveLock @ 0x1C00070DC (RaUnitReleaseRemoveLock.c)
 *     RaUnitStorageFreeDumpInfo @ 0x1C005FA90 (RaUnitStorageFreeDumpInfo.c)
 *     RaidAdapterPopulateMiniportDumpInfo @ 0x1C00A6B64 (RaidAdapterPopulateMiniportDumpInfo.c)
 */

__int64 __fastcall RaUnitStorageDumpControl(_QWORD *a1, int a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v6; // rsi
  int v7; // ebx

  v3 = a1[6];
  v6 = *(_QWORD *)(v3 + 8);
  if ( a2 == 2 )
  {
    v7 = RaUnitAcquireRemoveLock(*(_QWORD *)(v3 + 8), 0LL, 0LL);
    if ( v7 >= 0 )
    {
      v7 = RaidAdapterPopulateMiniportDumpInfo(*(_QWORD *)(v6 + 24), a1[7], a3);
      RaUnitReleaseRemoveLock(v6);
    }
  }
  else if ( a2 == 7 )
  {
    return (unsigned int)RaUnitStorageFreeDumpInfo(a3, a1);
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)v7;
}
