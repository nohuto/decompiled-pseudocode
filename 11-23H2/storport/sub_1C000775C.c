/*
 * XREFs of sub_1C000775C @ 0x1C000775C
 * Callers:
 *     sub_1C0007650 @ 0x1C0007650 (sub_1C0007650.c)
 *     sub_1C00077E0 @ 0x1C00077E0 (sub_1C00077E0.c)
 *     StorPortExtendedFunction @ 0x1C000B9D0 (StorPortExtendedFunction.c)
 *     sub_1C0016374 @ 0x1C0016374 (sub_1C0016374.c)
 *     sub_1C0037EE0 @ 0x1C0037EE0 (sub_1C0037EE0.c)
 *     sub_1C003C4E0 @ 0x1C003C4E0 (sub_1C003C4E0.c)
 * Callees:
 *     sub_1C000889C @ 0x1C000889C (sub_1C000889C.c)
 */

void __fastcall sub_1C000775C(__int64 a1, struct _KLOCK_QUEUE_HANDLE *a2)
{
  if ( *(_DWORD *)(a1 + 752) )
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 744), a2);
  else
    LOBYTE(a2->LockQueue.Next) = sub_1C000889C();
}
