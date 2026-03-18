/*
 * XREFs of ViDeadlockKeReleaseInStackQueuedSpinLockForDpc_Entry @ 0x140AD93F0
 * Callers:
 *     <none>
 * Callees:
 *     VfDeadlockReleaseResource @ 0x140AD7EFC (VfDeadlockReleaseResource.c)
 */

PVOID __fastcall ViDeadlockKeReleaseInStackQueuedSpinLockForDpc_Entry(__int64 a1)
{
  return VfDeadlockReleaseResource(
           (LONG *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) & 0xFFFFFFFFFFFFFFF8uLL),
           6,
           (__int64)KeGetCurrentThread(),
           *(void **)a1);
}
