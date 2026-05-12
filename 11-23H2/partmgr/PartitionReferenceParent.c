/*
 * XREFs of PartitionReferenceParent @ 0x1C00043DC
 * Callers:
 *     PartitionForwardIrpSynchronously @ 0x1C001DBB8 (PartitionForwardIrpSynchronously.c)
 * Callees:
 *     <none>
 */

void *__fastcall PartitionReferenceParent(__int64 a1)
{
  KIRQL v2; // al
  void *v3; // rdi
  KIRQL v4; // bl

  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*(_QWORD *)(a1 + 24) + 112LL));
  v3 = *(void **)(a1 + 16);
  v4 = v2;
  ObfReferenceObject(v3);
  KeReleaseSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 24) + 112LL), v4);
  return v3;
}
