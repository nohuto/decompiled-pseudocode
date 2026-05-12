/*
 * XREFs of PmInitializeSnapshotDataCache @ 0x1C000FCA0
 * Callers:
 *     ?PmStartDeviceInternal@@YAJPEAU_DEVICE_EXTENSION@@PEAU_IRP@@@Z @ 0x1C0008570 (-PmStartDeviceInternal@@YAJPEAU_DEVICE_EXTENSION@@PEAU_IRP@@@Z.c)
 * Callees:
 *     PmGetDeviceParameterBinary @ 0x1C0026A1C (PmGetDeviceParameterBinary.c)
 *     ?PmVerifySnapshotData@@YAEPEAU_DISK_SNAPSHOT_DATA@@KE@Z @ 0x1C0027830 (-PmVerifySnapshotData@@YAEPEAU_DISK_SNAPSHOT_DATA@@KE@Z.c)
 */

__int64 __fastcall PmInitializeSnapshotDataCache(__int64 a1)
{
  int DeviceParameterBinary; // edi
  KIRQL v3; // al

  DeviceParameterBinary = PmGetDeviceParameterBinary((struct _DEVICE_EXTENSION *)a1);
  if ( DeviceParameterBinary >= 0 )
  {
    if ( PmVerifySnapshotData(0LL, 0, 1u) )
    {
      v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 112));
      *(_QWORD *)(a1 + 1136) = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 112), v3);
    }
    else
    {
      return (unsigned int)-1073739509;
    }
  }
  return (unsigned int)DeviceParameterBinary;
}
