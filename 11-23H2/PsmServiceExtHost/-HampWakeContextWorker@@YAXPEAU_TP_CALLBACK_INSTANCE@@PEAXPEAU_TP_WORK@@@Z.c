/*
 * XREFs of ?HampWakeContextWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18000FE00
 * Callers:
 *     <none>
 * Callees:
 *     CemRcObjectDereference @ 0x18000BFF0 (CemRcObjectDereference.c)
 *     CempLockTrackerClearForThread @ 0x18000E240 (CempLockTrackerClearForThread.c)
 *     ?HampWakeContextReleaseLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x18000FF10 (-HampWakeContextReleaseLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     ?HampWakeContextAcquireLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x18000FF6C (-HampWakeContextAcquireLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     ?HampWakeContextTryUpdateActivityState@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@PEAU_HAM_HOST_WAKE_CONTEXT_WORKER_STATE@@@Z @ 0x18000FFF4 (-HampWakeContextTryUpdateActivityState@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@PEAU_HAM_HOST_WAKE_CONTEX.c)
 *     ?HampWakeContextComputeNextState@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@T_HAM_HOST_WAKE_CONTEXT_EVENTS@@PEAU_HAM_HOST_WAKE_CONTEXT_WORKER_STATE@@@Z @ 0x180010080 (-HampWakeContextComputeNextState@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@T_HAM_HOST_WAKE_CONTEXT_EVENTS@.c)
 *     ?HampWakeContextCommitWorkerState@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@PEAU_HAM_HOST_WAKE_CONTEXT_WORKER_STATE@@@Z @ 0x1800101AC (-HampWakeContextCommitWorkerState@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@PEAU_HAM_HOST_WAKE_CONTEXT_WOR.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x1800288A0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?HampWakeContextDestroy@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x180042794 (-HampWakeContextDestroy@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     ?HampWakeContextCloseActivity@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x180080BF4 (-HampWakeContextCloseActivity@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 */

void __fastcall HampWakeContextWorker(
        struct _TP_CALLBACK_INSTANCE *a1,
        struct _HAM_HOST_WAKE_CONTEXT *a2,
        struct _TP_WORK *a3)
{
  char v4; // di
  __int64 v5; // rdx
  _BYTE v6[48]; // [rsp+20h] [rbp-D8h] BYREF
  _BYTE v7[144]; // [rsp+50h] [rbp-A8h] BYREF

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v7);
  if ( *((_QWORD *)a2 + 3) )
  {
    HampWakeContextAcquireLockExclusive(a2);
    *((_DWORD *)a2 + 45) = GetCurrentThreadId();
    while ( 1 )
    {
      v4 = *((_BYTE *)a2 + 185);
      if ( !v4 )
        break;
      *((_BYTE *)a2 + 185) = 0;
      HampWakeContextReleaseLockExclusive(a2);
      if ( (v4 & 4) != 0 && (*((_BYTE *)a2 + 160) & 2) != 0 )
      {
        HampWakeContextCloseActivity(a2);
        *((_QWORD *)a2 + 16) = 0LL;
      }
      LOBYTE(v5) = v4;
      HampWakeContextComputeNextState(a2, v5, v6);
      HampWakeContextTryUpdateActivityState(a2, (struct _HAM_HOST_WAKE_CONTEXT_WORKER_STATE *)v6);
      HampWakeContextCommitWorkerState(a2, (struct _HAM_HOST_WAKE_CONTEXT_WORKER_STATE *)v6);
      HampWakeContextAcquireLockExclusive(a2);
      if ( (*((_BYTE *)a2 + 160) & 1) != 0 )
      {
        *((_BYTE *)a2 + 184) |= 2u;
        break;
      }
    }
    *((_DWORD *)a2 + 45) = 0;
    *((_BYTE *)a2 + 184) &= ~1u;
    HampWakeContextReleaseLockExclusive(a2);
    CemRcObjectDereference(a2);
  }
  else
  {
    HampWakeContextDestroy(a2);
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
}
