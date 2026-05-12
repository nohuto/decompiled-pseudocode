/*
 * XREFs of ?IsUnused@SC_PART_ENTRY@@QEAAEXZ @ 0x1C0006DB0
 * Callers:
 *     PmGetDriveLayoutEx @ 0x1C0002B60 (PmGetDriveLayoutEx.c)
 *     PmSetLegacyRemovableFlag @ 0x1C0002E64 (PmSetLegacyRemovableFlag.c)
 *     ?FindFreeRunGpt@SC_DISK_LAYOUT@@QEAA_K_KEPEA_K@Z @ 0x1C0004C14 (-FindFreeRunGpt@SC_DISK_LAYOUT@@QEAA_K_KEPEA_K@Z.c)
 *     ?WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z @ 0x1C00067B0 (-WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z.c)
 *     ?PmUpdatePartitionsLegacyRemovable@@YAJPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z @ 0x1C000C838 (-PmUpdatePartitionsLegacyRemovable@@YAJPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@.c)
 *     ?AddPartitionMbr@SC_DISK@@IEAAJ_K0EPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x1C0010A30 (-AddPartitionMbr@SC_DISK@@IEAAJ_K0EPEAPEAVSC_DISK_LAYOUT@@@Z.c)
 *     ?FindFreeRunMbr@SC_DISK_LAYOUT@@QEAA_K_KK0EPEA_K@Z @ 0x1C0010AE4 (-FindFreeRunMbr@SC_DISK_LAYOUT@@QEAA_K_KK0EPEA_K@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall SC_PART_ENTRY::IsUnused(SC_PART_ENTRY *this)
{
  char v1; // dl
  __int64 v2; // rax

  v1 = 0;
  if ( !*(_DWORD *)this )
    return *((_BYTE *)this + 32) == 0;
  if ( *(_DWORD *)this == 1 )
  {
    v2 = *((_QWORD *)this + 4) - *(_QWORD *)&GUID_NULL.Data1;
    if ( !v2 )
      v2 = *((_QWORD *)this + 5) - *(_QWORD *)GUID_NULL.Data4;
    if ( !v2 )
      return 1;
  }
  return v1;
}
