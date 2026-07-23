/*
 * XREFs of ViDeadlockKeReleaseMutex_Entry @ 0x140AD9450
 * Callers:
 *     <none>
 * Callees:
 *     VfDeadlockReleaseResource @ 0x140AD7EEC (VfDeadlockReleaseResource.c)
 */

PVOID __fastcall ViDeadlockKeReleaseMutex_Entry(__int64 a1)
{
  return VfDeadlockReleaseResource(*(LONG **)(a1 + 16), 1, (__int64)KeGetCurrentThread(), *(void **)a1);
}
