/*
 * XREFs of ??1PM_DISK@@UEAA@XZ @ 0x1C00215C8
 * Callers:
 *     ??_EPM_DISK@@UEAAPEAXI@Z @ 0x1C000E460 (--_EPM_DISK@@UEAAPEAXI@Z.c)
 *     PmCreateDisk @ 0x1C001E9A4 (PmCreateDisk.c)
 *     PmWritePartitionTable @ 0x1C001ED64 (PmWritePartitionTable.c)
 *     PmReadPartitionTable @ 0x1C0021460 (PmReadPartitionTable.c)
 *     ?PmCollectTelemetry@@YAJPEAU_DEVICE_EXTENSION@@PEAPEAU_DISK_TELEMETRY_INFO@@@Z @ 0x1C0021608 (-PmCollectTelemetry@@YAJPEAU_DEVICE_EXTENSION@@PEAPEAU_DISK_TELEMETRY_INFO@@@Z.c)
 *     PmSetPartition @ 0x1C0024FD8 (PmSetPartition.c)
 * Callees:
 *     ??1SC_DISK@@UEAA@XZ @ 0x1C0009618 (--1SC_DISK@@UEAA@XZ.c)
 */

void __fastcall PM_DISK::~PM_DISK(PM_DISK *this)
{
  void *v2; // rcx

  *(_QWORD *)this = &PM_DISK::`vftable';
  v2 = (void *)*((_QWORD *)this + 49);
  if ( v2 )
    ObfDereferenceObject(v2);
  SC_DISK::~SC_DISK(this);
}
