/*
 * XREFs of PartitionIoctlVolumePostOnline @ 0x1C000A4CC
 * Callers:
 *     ?PartitionDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00027E0 (-PartitionDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     PmDecrementPendingPartitionsCount @ 0x1C000253C (PmDecrementPendingPartitionsCount.c)
 */

__int64 __fastcall PartitionIoctlVolumePostOnline(__int64 a1)
{
  __int64 v1; // rbx
  int v2; // edi
  KIRQL v3; // al
  int v4; // ecx

  v1 = *(_QWORD *)(a1 + 64);
  v2 = 0;
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*(_QWORD *)(v1 + 24) + 112LL));
  v4 = *(_DWORD *)(v1 + 40);
  if ( (v4 & 2) != 0 )
  {
    v2 = 1;
    *(_DWORD *)(v1 + 40) = v4 & 0xFFFFFFFD;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(*(_QWORD *)(v1 + 24) + 112LL), v3);
  PmDecrementPendingPartitionsCount(*(_QWORD *)(v1 + 24), v2);
  return 0LL;
}
