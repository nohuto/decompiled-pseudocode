/*
 * XREFs of RaidUnitFreeDumpInfo @ 0x1C00613A8
 * Callers:
 *     RaUnitStorageFreeDumpInfo @ 0x1C005FA90 (RaUnitStorageFreeDumpInfo.c)
 *     RaUnitStorageGetDumpInfoIoctl @ 0x1C00A9C60 (RaUnitStorageGetDumpInfoIoctl.c)
 *     RaidUnitCreateDumpInfo @ 0x1C00AA958 (RaidUnitCreateDumpInfo.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidUnitFreeDumpInfo(PVOID *a1)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)*a1 + 6);
  if ( v2 )
    ExFreePoolWithTag(v2, 0x44436152u);
  ExFreePoolWithTag(*a1, 0x44436152u);
  *a1 = 0LL;
}
