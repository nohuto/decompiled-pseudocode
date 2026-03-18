/*
 * XREFs of LockIntoExclusiveUserCritDeferredUnlockList @ 0x1C00C3088
 * Callers:
 *     ThreadUnlock1 @ 0x1C0030C00 (ThreadUnlock1.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     HMUnlockObjectInternal @ 0x1C0039070 (HMUnlockObjectInternal.c)
 *     ThreadUnlockWorker1 @ 0x1C008DB70 (ThreadUnlockWorker1.c)
 * Callees:
 *     UserIsUserCritSecInExclusive @ 0x1C002A1D0 (UserIsUserCritSecInExclusive.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall LockIntoExclusiveUserCritDeferredUnlockList(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  char *v4; // rdi
  __int64 result; // rax

  v2 = (unsigned __int16)*(_DWORD *)a1;
  v3 = 3 * v2;
  v4 = (char *)gpKernelHandleTable + 24 * v2;
  if ( !gphePrimaryDestroyTarget )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, v2, v3);
  if ( !gbInDestroyHandleTableObjects && !UserIsUserCritSecInExclusive() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, v2, v3);
  if ( *(_DWORD *)(a1 + 8) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, v2, v3);
  if ( *((_QWORD *)v4 + 2) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, v2, v3);
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
  *((_QWORD *)v4 + 2) = gpExclusiveUserCritDeferredUnlockListHead;
  gpExclusiveUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)v4;
  result = ++gcDeferredDestroyTargets;
  if ( gcDeferredDestroyTargets > gcSecondaryDestroyTargets )
    return MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, v2, v3);
  return result;
}
