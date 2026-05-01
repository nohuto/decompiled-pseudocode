/*
 * XREFs of ?HampWakeContextNotificationCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x18000FD50
 * Callers:
 *     <none>
 * Callees:
 *     CemRcObjectDereference @ 0x18000BFF0 (CemRcObjectDereference.c)
 *     CempLockTrackerClearForThread @ 0x18000E240 (CempLockTrackerClearForThread.c)
 *     ?HampWakeContextReleaseLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x18000FF10 (-HampWakeContextReleaseLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     ?HampWakeContextAcquireLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x18000FF6C (-HampWakeContextAcquireLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     ?HampWakeContextQueueWorker@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x180017704 (-HampWakeContextQueueWorker@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x1800288A0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 */

__int64 __fastcall HampWakeContextNotificationCallback(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        _QWORD *a4)
{
  signed __int64 v5; // rax
  unsigned __int64 i; // rcx
  signed __int64 v7; // rtt
  _BYTE v9[144]; // [rsp+20h] [rbp-A8h] BYREF

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v9);
  _m_prefetchw(a4 + 3);
  v5 = a4[3];
  for ( i = v5 + 1; i > 1; i = v5 + 1 )
  {
    v7 = v5;
    v5 = _InterlockedCompareExchange64(a4 + 3, i, v5);
    if ( v7 == v5 )
    {
      HampWakeContextAcquireLockExclusive((struct _HAM_HOST_WAKE_CONTEXT *)a4);
      *((_BYTE *)a4 + 185) |= 1u;
      HampWakeContextQueueWorker((struct _HAM_HOST_WAKE_CONTEXT *)a4);
      HampWakeContextReleaseLockExclusive((struct _HAM_HOST_WAKE_CONTEXT *)a4);
      CemRcObjectDereference(a4);
      goto LABEL_5;
    }
  }
  if ( i != 1 )
    __fastfail(0xEu);
LABEL_5:
  CempLockTrackerClearForThread(HampLockTrackerId);
  return 0LL;
}
