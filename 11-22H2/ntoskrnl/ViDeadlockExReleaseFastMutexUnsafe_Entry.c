/*
 * XREFs of ViDeadlockExReleaseFastMutexUnsafe_Entry @ 0x140ADA0D0
 * Callers:
 *     <none>
 * Callees:
 *     VfDeadlockReleaseResource @ 0x140AD8ECC (VfDeadlockReleaseResource.c)
 */

void __fastcall ViDeadlockExReleaseFastMutexUnsafe_Entry(__int64 a1)
{
  VfDeadlockReleaseResource(*(LONG **)(a1 + 8), 4, (__int64)KeGetCurrentThread(), *(void **)a1);
}
