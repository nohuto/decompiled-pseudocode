/*
 * XREFs of sub_1C0007728 @ 0x1C0007728
 * Callers:
 *     sub_1C0007650 @ 0x1C0007650 (sub_1C0007650.c)
 *     sub_1C00077E0 @ 0x1C00077E0 (sub_1C00077E0.c)
 *     sub_1C0016374 @ 0x1C0016374 (sub_1C0016374.c)
 *     sub_1C0037EE0 @ 0x1C0037EE0 (sub_1C0037EE0.c)
 *     sub_1C003C4E0 @ 0x1C003C4E0 (sub_1C003C4E0.c)
 * Callees:
 *     sub_1C0008914 @ 0x1C0008914 (sub_1C0008914.c)
 */

void __fastcall sub_1C0007728(__int64 a1, struct _KLOCK_QUEUE_HANDLE *a2)
{
  if ( *(_DWORD *)(a1 + 752) )
  {
    KeReleaseInStackQueuedSpinLock(a2);
  }
  else
  {
    LOBYTE(a2) = a2->LockQueue.Next;
    sub_1C0008914(a1, a2);
  }
}
