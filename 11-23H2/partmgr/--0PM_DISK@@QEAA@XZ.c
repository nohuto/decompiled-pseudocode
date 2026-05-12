/*
 * XREFs of ??0PM_DISK@@QEAA@XZ @ 0x1C0021594
 * Callers:
 *     PmCreateDisk @ 0x1C001E9A4 (PmCreateDisk.c)
 *     PmWritePartitionTable @ 0x1C001ED64 (PmWritePartitionTable.c)
 *     PmReadPartitionTable @ 0x1C0021460 (PmReadPartitionTable.c)
 *     ?PmCollectTelemetry@@YAJPEAU_DEVICE_EXTENSION@@PEAPEAU_DISK_TELEMETRY_INFO@@@Z @ 0x1C0021608 (-PmCollectTelemetry@@YAJPEAU_DEVICE_EXTENSION@@PEAPEAU_DISK_TELEMETRY_INFO@@@Z.c)
 *     PmSetPartition @ 0x1C0024FD8 (PmSetPartition.c)
 * Callees:
 *     ??0SC_DISK@@QEAA@XZ @ 0x1C00097CC (--0SC_DISK@@QEAA@XZ.c)
 */

PM_DISK *__fastcall PM_DISK::PM_DISK(PM_DISK *this)
{
  PM_DISK *v1; // rcx
  PM_DISK *result; // rax

  SC_DISK::SC_DISK(this);
  *((_QWORD *)v1 + 49) = 0LL;
  *((_QWORD *)v1 + 50) = 0LL;
  result = v1;
  *(_QWORD *)v1 = &PM_DISK::`vftable';
  return result;
}
