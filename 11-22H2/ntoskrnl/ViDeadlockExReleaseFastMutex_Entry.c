/*
 * XREFs of ViDeadlockExReleaseFastMutex_Entry @ 0x140ADA100
 * Callers:
 *     <none>
 * Callees:
 *     VfDeadlockReleaseResource @ 0x140AD8ECC (VfDeadlockReleaseResource.c)
 */

void __fastcall ViDeadlockExReleaseFastMutex_Entry(__int64 a1)
{
  VfDeadlockReleaseResource(*(LONG **)(a1 + 8), 3, (__int64)KeGetCurrentThread(), *(void **)a1);
}
