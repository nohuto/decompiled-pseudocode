/*
 * XREFs of ?HampWakeContextNotificationCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180007C70
 * Callers:
 *     <none>
 * Callees:
 *     ?HampWakeContextQueueWorker@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x180007DD8 (-HampWakeContextQueueWorker@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     CempLockTrackerMarkReleased @ 0x180010300 (CempLockTrackerMarkReleased.c)
 *     CemRcObjectDereference @ 0x180036410 (CemRcObjectDereference.c)
 *     CempLockTrackerClearForThread @ 0x180039F70 (CempLockTrackerClearForThread.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     memset_0 @ 0x18005023A (memset_0.c)
 */

__int64 __fastcall HampWakeContextNotificationCallback(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        _QWORD *a4)
{
  DWORD v5; // ebx
  signed __int64 v6; // rax
  unsigned __int64 i; // rcx
  signed __int64 v8; // rtt
  DWORD v9; // esi
  _QWORD *Value; // rbx
  __int64 v11; // rdx
  _BYTE TlsValue[144]; // [rsp+20h] [rbp-A8h] BYREF

  memset_0(TlsValue, 0, 0x88uLL);
  v5 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v5, TlsValue);
  }
  _m_prefetchw(a4 + 3);
  v6 = a4[3];
  for ( i = v6 + 1; i > 1; i = v6 + 1 )
  {
    v8 = v6;
    v6 = _InterlockedCompareExchange64(a4 + 3, i, v6);
    if ( v8 == v6 )
    {
      v9 = HampLockTrackerId;
      if ( HampLockTrackerId != -1 )
      {
        Value = TlsGetValue(HampLockTrackerId);
        if ( (*(_QWORD *)TlsGetValue(v9) & 0xFFFFFFFFFFFFF800uLL) != 0 )
          __int2c();
        *Value |= 0x800uLL;
        ++Value[12];
      }
      RtlAcquireSRWLockExclusive(a4 + 5);
      *((_DWORD *)a4 + 12) = GetCurrentThreadId();
      *((_BYTE *)a4 + 185) |= 1u;
      HampWakeContextQueueWorker((struct _HAM_HOST_WAKE_CONTEXT *)a4);
      CempLockTrackerMarkReleased(HampLockTrackerId, v11, 11LL);
      *((_DWORD *)a4 + 12) = 0;
      RtlReleaseSRWLockExclusive(a4 + 5);
      CemRcObjectDereference(a4);
      goto LABEL_13;
    }
  }
  if ( i != 1 )
    __fastfail(0xEu);
LABEL_13:
  CempLockTrackerClearForThread(HampLockTrackerId);
  return 0LL;
}
