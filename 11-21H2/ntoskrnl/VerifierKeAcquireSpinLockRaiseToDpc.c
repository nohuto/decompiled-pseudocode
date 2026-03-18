/*
 * XREFs of VerifierKeAcquireSpinLockRaiseToDpc @ 0x140A7F280
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     ViKeIrqlLogAndTrimMemory @ 0x140A96894 (ViKeIrqlLogAndTrimMemory.c)
 *     VfDeadlockAcquireResource @ 0x140A97900 (VfDeadlockAcquireResource.c)
 */

char __fastcall VerifierKeAcquireSpinLockRaiseToDpc(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbx
  char v3; // si
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v1 = a1;
  LOBYTE(a1) = 2;
  v2 = ViKeIrqlLogAndTrimMemory(a1);
  v3 = ((__int64 (__fastcall *)(__int64))pXdvKeAcquireSpinLockRaiseToDpc)(v1);
  if ( v2 )
    *(_WORD *)(v2 + 10) = KeGetPcr()->Prcb.Number;
  VfDeadlockAcquireResource(v1, retaddr);
  return v3;
}
