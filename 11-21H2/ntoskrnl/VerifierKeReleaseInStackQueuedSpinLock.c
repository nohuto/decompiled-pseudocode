/*
 * XREFs of VerifierKeReleaseInStackQueuedSpinLock @ 0x140A7F4E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     VfKeIrqlTransitionReserveLogEntry @ 0x140A7F710 (VfKeIrqlTransitionReserveLogEntry.c)
 *     ViKeIrqlLogCommon @ 0x140A7F7DA (ViKeIrqlLogCommon.c)
 *     VfDeadlockReleaseResource @ 0x140A985B4 (VfDeadlockReleaseResource.c)
 */

__int64 __fastcall VerifierKeReleaseInStackQueuedSpinLock(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rbx

  VfDeadlockReleaseResource(*(_DWORD *)(a1 + 8) & 0xFFFFFFFC);
  LOBYTE(v2) = *(_BYTE *)(a1 + 16);
  v3 = VfKeIrqlTransitionReserveLogEntry(KeGetCurrentIrql(), v2);
  ((void (__fastcall *)(__int64))pXdvKeReleaseInStackQueuedSpinLock)(a1);
  return ViKeIrqlLogCommon(v3, 1LL);
}
