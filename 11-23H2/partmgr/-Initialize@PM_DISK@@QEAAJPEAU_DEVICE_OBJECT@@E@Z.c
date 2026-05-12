/*
 * XREFs of ?Initialize@PM_DISK@@QEAAJPEAU_DEVICE_OBJECT@@E@Z @ 0x1C002152C
 * Callers:
 *     PmCreateDisk @ 0x1C001E9A4 (PmCreateDisk.c)
 *     PmWritePartitionTable @ 0x1C001ED64 (PmWritePartitionTable.c)
 *     PmReadPartitionTable @ 0x1C0021460 (PmReadPartitionTable.c)
 *     ?PmCollectTelemetry@@YAJPEAU_DEVICE_EXTENSION@@PEAPEAU_DISK_TELEMETRY_INFO@@@Z @ 0x1C0021608 (-PmCollectTelemetry@@YAJPEAU_DEVICE_EXTENSION@@PEAPEAU_DISK_TELEMETRY_INFO@@@Z.c)
 *     PmSetPartition @ 0x1C0024FD8 (PmSetPartition.c)
 * Callees:
 *     ?InitializePartitionCache@SC_DISK@@QEAAJXZ @ 0x1C0008E24 (-InitializePartitionCache@SC_DISK@@QEAAJXZ.c)
 *     ?Initialize@SC_DISK@@UEAAJXZ @ 0x1C00094B0 (-Initialize@SC_DISK@@UEAAJXZ.c)
 */

__int64 __fastcall PM_DISK::Initialize(PM_DISK *this, PDEVICE_OBJECT DeviceObject, char a3)
{
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rax
  __int64 result; // rax

  DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(DeviceObject);
  *((_QWORD *)this + 50) = DeviceObject;
  *((_QWORD *)this + 49) = DeviceAttachmentBaseRef;
  result = SC_DISK::Initialize(this);
  if ( (int)result >= 0 )
  {
    if ( a3 )
      return SC_DISK::InitializePartitionCache(this);
  }
  return result;
}
