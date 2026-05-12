/*
 * XREFs of ?PmInvalidateSnapshotDataCache@@YAXPEAU_DEVICE_EXTENSION@@@Z @ 0x1C000FC2C
 * Callers:
 *     PmSetSnapshotData @ 0x1C000FD58 (PmSetSnapshotData.c)
 * Callees:
 *     <none>
 */

void __fastcall PmInvalidateSnapshotDataCache(KSPIN_LOCK *a1)
{
  KIRQL v2; // al
  void *v3; // rcx
  KIRQL v4; // si

  v2 = KeAcquireSpinLockRaiseToDpc(a1 + 14);
  v3 = (void *)a1[142];
  v4 = v2;
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0);
    a1[142] = 0LL;
  }
  KeReleaseSpinLock(a1 + 14, v4);
}
