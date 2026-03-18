/*
 * XREFs of LockIntoSharedUserCritDeferredUnlockList @ 0x1C0141650
 * Callers:
 *     ThreadUnlock1 @ 0x1C0030C00 (ThreadUnlock1.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     HMUnlockObjectInternal @ 0x1C0039070 (HMUnlockObjectInternal.c)
 *     ThreadUnlockWorker1 @ 0x1C008DB70 (ThreadUnlockWorker1.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0023390 (W32GetThreadWin32Thread.c)
 *     IS_USERCRIT_OWNED_SHAREDONLY @ 0x1C0030CCC (IS_USERCRIT_OWNED_SHAREDONLY.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct tagKERNELHANDLETABLEENTRY *__fastcall LockIntoSharedUserCritDeferredUnlockList(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rcx
  char *v9; // rbx
  struct tagKERNELHANDLETABLEENTRY *result; // rax

  if ( !gbInDestroyHandleTableObjects && !(unsigned int)IS_USERCRIT_OWNED_SHAREDONLY() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4);
  if ( !W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5, v7);
  v8 = (unsigned __int16)*(_DWORD *)a1;
  v9 = (char *)gpKernelHandleTable + 24 * v8;
  if ( *((_QWORD *)v9 + 2) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, 3 * v8, v7);
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
  result = gpSharedUserCritDeferredUnlockListHead;
  if ( gpSharedUserCritDeferredUnlockListHead )
    *((_QWORD *)v9 + 2) = gpSharedUserCritDeferredUnlockListHead;
  gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)v9;
  return result;
}
