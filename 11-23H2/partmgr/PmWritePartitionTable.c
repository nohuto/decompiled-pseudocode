/*
 * XREFs of PmWritePartitionTable @ 0x1C001ED64
 * Callers:
 *     PmGrowPartition @ 0x1C000F6AC (PmGrowPartition.c)
 *     PmSetSnapshotData @ 0x1C000FD58 (PmSetSnapshotData.c)
 *     PmSetDriveLayoutEx @ 0x1C001ED08 (PmSetDriveLayoutEx.c)
 *     PmUpdateIds @ 0x1C002745C (PmUpdateIds.c)
 *     ?PmCreateSnapshotPartition@@YAJPEAU_DEVICE_EXTENSION@@@Z @ 0x1C0027564 (-PmCreateSnapshotPartition@@YAJPEAU_DEVICE_EXTENSION@@@Z.c)
 * Callees:
 *     ?WritePartitionTable@SC_DISK@@QEAAJPEAVSC_DISK_LAYOUT@@@Z @ 0x1C00066F8 (-WritePartitionTable@SC_DISK@@QEAAJPEAVSC_DISK_LAYOUT@@@Z.c)
 *     __security_check_cookie @ 0x1C000B3D0 (__security_check_cookie.c)
 *     ?Initialize@PM_DISK@@QEAAJPEAU_DEVICE_OBJECT@@E@Z @ 0x1C002152C (-Initialize@PM_DISK@@QEAAJPEAU_DEVICE_OBJECT@@E@Z.c)
 *     ??0PM_DISK@@QEAA@XZ @ 0x1C0021594 (--0PM_DISK@@QEAA@XZ.c)
 *     ??1PM_DISK@@UEAA@XZ @ 0x1C00215C8 (--1PM_DISK@@UEAA@XZ.c)
 */

__int64 __fastcall PmWritePartitionTable(__int64 a1, struct SC_DISK_LAYOUT *a2)
{
  struct _DEVICE_OBJECT *v3; // r9
  int v4; // ebx
  _BYTE v6[416]; // [rsp+20h] [rbp-1B8h] BYREF

  PM_DISK::PM_DISK((PM_DISK *)v6);
  if ( *(_DWORD *)a2 >= 2u )
  {
    v4 = -1073741637;
  }
  else
  {
    v4 = PM_DISK::Initialize((PM_DISK *)v6, v3, 1u);
    if ( v4 >= 0 )
      v4 = SC_DISK::WritePartitionTable((SC_DISK *)v6, a2);
  }
  PM_DISK::~PM_DISK((PM_DISK *)v6);
  return (unsigned int)v4;
}
