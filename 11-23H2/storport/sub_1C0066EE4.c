/*
 * XREFs of sub_1C0066EE4 @ 0x1C0066EE4
 * Callers:
 *     sub_1C001F308 @ 0x1C001F308 (sub_1C001F308.c)
 *     sub_1C0038FB0 @ 0x1C0038FB0 (sub_1C0038FB0.c)
 *     sub_1C00A82EC @ 0x1C00A82EC (sub_1C00A82EC.c)
 *     sub_1C00AEFFC @ 0x1C00AEFFC (sub_1C00AEFFC.c)
 * Callees:
 *     <none>
 */

int __fastcall sub_1C0066EE4(__int64 a1, struct _KEVENT *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rbp
  __int64 v6; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = 0;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 48) + 904LL) )
  {
    while ( 1 )
    {
      v5 = a1 + 320LL * v4;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v5, &LockHandle);
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 192), 0, 0) )
        break;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( ++v4 >= *(_DWORD *)(*(_QWORD *)(a1 + 48) + 904LL) )
        goto LABEL_6;
    }
    *(_QWORD *)(v5 + 200) = a2;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
LABEL_6:
  v6 = *(_QWORD *)(a1 + 48);
  if ( v4 >= *(_DWORD *)(v6 + 904) )
    LODWORD(v6) = KeSetEvent(a2, 0, 0);
  return v6;
}
