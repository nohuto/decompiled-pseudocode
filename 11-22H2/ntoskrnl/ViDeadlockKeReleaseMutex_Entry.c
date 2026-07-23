/*
 * XREFs of ViDeadlockKeReleaseMutex_Entry @ 0x140ADA430
 * Callers:
 *     <none>
 * Callees:
 *     VfDeadlockReleaseResource @ 0x140AD8ECC (VfDeadlockReleaseResource.c)
 */

void __fastcall ViDeadlockKeReleaseMutex_Entry(__int64 a1)
{
  VfDeadlockReleaseResource(*(LONG **)(a1 + 16), 1, (__int64)KeGetCurrentThread(), *(void **)a1);
}
