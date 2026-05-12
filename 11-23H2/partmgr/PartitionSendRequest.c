/*
 * XREFs of PartitionSendRequest @ 0x1C0002A90
 * Callers:
 *     PartitionPassThrough @ 0x1C00027B4 (PartitionPassThrough.c)
 *     ?PartitionDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00027E0 (-PartitionDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     PartitionIoctlVerify @ 0x1C000C72E (PartitionIoctlVerify.c)
 *     PartitionIoctlDsm @ 0x1C001D0A8 (PartitionIoctlDsm.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PartitionSendRequest(__int64 a1, IRP *a2)
{
  __int64 v2; // rdi
  KIRQL v4; // al
  struct _DEVICE_OBJECT *v5; // rsi
  KIRQL v6; // bl
  unsigned int v7; // ebx

  v2 = *(_QWORD *)(a1 + 64);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*(_QWORD *)(v2 + 24) + 112LL));
  v5 = *(struct _DEVICE_OBJECT **)(v2 + 16);
  v6 = v4;
  ObfReferenceObject(v5);
  KeReleaseSpinLock((PKSPIN_LOCK)(*(_QWORD *)(v2 + 24) + 112LL), v6);
  v7 = IofCallDriver(v5, a2);
  ObfDereferenceObject(v5);
  return v7;
}
