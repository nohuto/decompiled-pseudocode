/*
 * XREFs of ViDeadlockExReleaseFastMutexUnsafe_Entry @ 0x140AD9100
 * Callers:
 *     <none>
 * Callees:
 *     VfDeadlockReleaseResource @ 0x140AD7EFC (VfDeadlockReleaseResource.c)
 */

PVOID __fastcall ViDeadlockExReleaseFastMutexUnsafe_Entry(__int64 a1)
{
  return VfDeadlockReleaseResource(*(LONG **)(a1 + 8), 4, (__int64)KeGetCurrentThread(), *(void **)a1);
}
