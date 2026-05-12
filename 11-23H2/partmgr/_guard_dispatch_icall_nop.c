/*
 * XREFs of _guard_dispatch_icall_nop @ 0x1C000B6C0
 * Callers:
 *     ?PmIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C0001010 (-PmIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?PmWrite@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00017A0 (-PmWrite@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?PmIo@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C0001B10 (-PmIo@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?PmGlobalDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C0001F00 (-PmGlobalDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     PmEnumerateOverlaps @ 0x1C0004060 (PmEnumerateOverlaps.c)
 *     ?ZeroMetadata@SC_DRIVE@@QEAAJXZ @ 0x1C0005388 (-ZeroMetadata@SC_DRIVE@@QEAAJXZ.c)
 *     ?WriteHeader@SC_DRIVE@@QEAAJPEAVSC_DRIVE_HEADER@@@Z @ 0x1C0005474 (-WriteHeader@SC_DRIVE@@QEAAJPEAVSC_DRIVE_HEADER@@@Z.c)
 *     ?WriteSectors@SC_DISK@@QEAAJK_KPEAX@Z @ 0x1C0006D68 (-WriteSectors@SC_DISK@@QEAAJK_KPEAX@Z.c)
 *     ?UpdateControl@SC_DISK@@QEAAJXZ @ 0x1C0007024 (-UpdateControl@SC_DISK@@QEAAJXZ.c)
 *     ?ReadSectors@SC_DISK@@QEAAJK_KPEAX@Z @ 0x1C0008F10 (-ReadSectors@SC_DISK@@QEAAJK_KPEAX@Z.c)
 *     ?GetStorageProperty@SC_DEVICE@@QEAAJW4_STORAGE_PROPERTY_ID@@PEAPEAU_STORAGE_DESCRIPTOR_HEADER@@@Z @ 0x1C0008F54 (-GetStorageProperty@SC_DEVICE@@QEAAJW4_STORAGE_PROPERTY_ID@@PEAPEAU_STORAGE_DESCRIPTOR_HEADER@@@.c)
 *     ?GenerateId@SC_DISK@@AEAAJXZ @ 0x1C0009094 (-GenerateId@SC_DISK@@AEAAJXZ.c)
 *     ?UpdateStorageProperty@SC_DEVICE@@QEAAJW4_STORAGE_PROPERTY_ID@@@Z @ 0x1C0009124 (-UpdateStorageProperty@SC_DEVICE@@QEAAJW4_STORAGE_PROPERTY_ID@@@Z.c)
 *     ?Initialize@SC_DEVICE@@UEAAJXZ @ 0x1C0009410 (-Initialize@SC_DEVICE@@UEAAJXZ.c)
 *     ?Initialize@SC_DISK@@UEAAJXZ @ 0x1C00094B0 (-Initialize@SC_DISK@@UEAAJXZ.c)
 *     PartitionReleaseRundownExclusive @ 0x1C000A258 (PartitionReleaseRundownExclusive.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1C000B6E0 (_guard_xfg_dispatch_icall_nop.c)
 *     _tlgEnableCallback @ 0x1C0023530 (_tlgEnableCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall guard_dispatch_icall_nop()
{
  __int64 (*v0)(void); // rax

  return v0();
}
