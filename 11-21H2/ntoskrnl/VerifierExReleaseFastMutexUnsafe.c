/*
 * XREFs of VerifierExReleaseFastMutexUnsafe @ 0x140A9C360
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     VfDeadlockReleaseResource @ 0x140A985B4 (VfDeadlockReleaseResource.c)
 */

__int64 __fastcall VerifierExReleaseFastMutexUnsafe(LONG *a1)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  VfDeadlockReleaseResource(a1, 4, (__int64)KeGetCurrentThread(), retaddr);
  return ((__int64 (__fastcall *)(LONG *))pXdvExReleaseFastMutexUnsafe)(a1);
}
