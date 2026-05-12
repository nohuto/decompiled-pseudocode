/*
 * XREFs of RaidUnitFreeDumpInfo @ 0x1C0017260
 * Callers:
 *     RaUnitStorageFreeDumpInfo @ 0x1C00170BC (RaUnitStorageFreeDumpInfo.c)
 *     RaidUnitCreateDumpInfo @ 0x1C0085228 (RaidUnitCreateDumpInfo.c)
 *     RaUnitStorageGetDumpInfoIoctl @ 0x1C0085844 (RaUnitStorageGetDumpInfoIoctl.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidUnitFreeDumpInfo(PVOID **a1)
{
  PVOID *v2; // rcx

  v2 = *a1;
  if ( v2[6] )
  {
    ExFreePoolWithTag(v2[6], 0x44436152u);
    v2 = *a1;
  }
  ExFreePoolWithTag(v2, 0x44436152u);
  *a1 = 0LL;
}
