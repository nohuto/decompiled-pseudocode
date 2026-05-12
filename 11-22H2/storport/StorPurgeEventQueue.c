/*
 * XREFs of StorPurgeEventQueue @ 0x1C003FE40
 * Callers:
 *     RaidCompletionDpcRoutine @ 0x1C003A6A0 (RaidCompletionDpcRoutine.c)
 * Callees:
 *     RaidCompleteMiniportRequestCallback @ 0x1C00587A8 (RaidCompleteMiniportRequestCallback.c)
 */

__int64 __fastcall StorPurgeEventQueue(_DWORD *a1, __int64 a2, int a3)
{
  unsigned int v3; // esi
  unsigned int v6; // edi
  _QWORD *v7; // rbx
  _QWORD *v8; // r15
  int v9; // r9d
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF

  v3 = 0;
  v6 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a1[2] )
  {
    do
    {
      v7 = &a1[16 * v6 + 16];
      KeAcquireInStackQueuedSpinLock(v7 + 5, &LockHandle);
      v8 = (_QWORD *)*v7;
      while ( v8 != v7 )
      {
        v9 = (int)v8;
        v8 = (_QWORD *)*v8;
        ++v3;
        RaidCompleteMiniportRequestCallback((_DWORD)v7, a3, *a1, v9, (__int64)StorRemoveEventQueueInternal);
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      ++v6;
    }
    while ( v6 < a1[2] );
  }
  return v3;
}
