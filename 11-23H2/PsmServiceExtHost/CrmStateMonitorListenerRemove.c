/*
 * XREFs of CrmStateMonitorListenerRemove @ 0x18000A7B8
 * Callers:
 *     CrmRegisterToStateMonitor @ 0x180009414 (CrmRegisterToStateMonitor.c)
 *     CrmStateMonitorGPUUsageCleanup @ 0x18000A744 (CrmStateMonitorGPUUsageCleanup.c)
 *     CrmActivityStart @ 0x18002B870 (CrmActivityStart.c)
 *     CrmStateMonitorPostResumeSetAndReset @ 0x180040988 (CrmStateMonitorPostResumeSetAndReset.c)
 *     CrmStateMonitorPostShellReadySetAndReset @ 0x180042FB4 (CrmStateMonitorPostShellReadySetAndReset.c)
 *     CrmStateMonitorAcDcBatteryCleanup @ 0x18006DB84 (CrmStateMonitorAcDcBatteryCleanup.c)
 *     CrmStateMonitorAcDcDisplayCleanup @ 0x18006DBD4 (CrmStateMonitorAcDcDisplayCleanup.c)
 *     CrmStateMonitorCompositeTestCleanup @ 0x18006DC90 (CrmStateMonitorCompositeTestCleanup.c)
 *     CrmStateMonitorCsAcDcCleanup @ 0x18006DD38 (CrmStateMonitorCsAcDcCleanup.c)
 *     CrmStateMonitorDelayedAcCleanup @ 0x18006DD88 (CrmStateMonitorDelayedAcCleanup.c)
 *     CrmStateMonitorDelayedCsCleanup @ 0x18006DE84 (CrmStateMonitorDelayedCsCleanup.c)
 *     CrmStateMonitorDelayedInternetLossCleanup @ 0x18006DFBC (CrmStateMonitorDelayedInternetLossCleanup.c)
 *     CrmStateMonitorDisconnectedStandbyCleanup @ 0x18006E0DC (CrmStateMonitorDisconnectedStandbyCleanup.c)
 *     CrmStateMonitorFanNoiseHysteresisCleanup @ 0x18006E12C (CrmStateMonitorFanNoiseHysteresisCleanup.c)
 *     CrmStateMonitorPostResumeCleanup @ 0x18006E328 (CrmStateMonitorPostResumeCleanup.c)
 *     CrmStateMonitorPostShellReadyCleanup @ 0x18006E3F4 (CrmStateMonitorPostShellReadyCleanup.c)
 *     CrmStateMonitorPowerConstrainedCleanup @ 0x18006E4C4 (CrmStateMonitorPowerConstrainedCleanup.c)
 * Callees:
 *     CrmStateMonitorCleanup @ 0x180008C9C (CrmStateMonitorCleanup.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     CempLockReleaseExclusive @ 0x180052FA4 (CempLockReleaseExclusive.c)
 */

char __fastcall CrmStateMonitorListenerRemove(char *P, __int64 a2, int a3)
{
  __int64 v3; // r13
  char *v4; // rsi
  int *v5; // rdi
  int v8; // r15d
  _QWORD *v9; // rbx
  __int64 v10; // rcx
  _QWORD *v11; // rax
  _QWORD *v12; // r14
  BOOL v13; // ebx
  __int64 v14; // rax
  int v15; // ecx
  bool v17; // [rsp+30h] [rbp-49h] BYREF
  int v18; // [rsp+34h] [rbp-45h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+40h] [rbp-39h] BYREF
  UUID *v20; // [rsp+60h] [rbp-19h]
  int v21; // [rsp+68h] [rbp-11h]
  int v22; // [rsp+6Ch] [rbp-Dh]
  int *v23; // [rsp+70h] [rbp-9h]
  int v24; // [rsp+78h] [rbp-1h]
  int v25; // [rsp+7Ch] [rbp+3h]
  bool *v26; // [rsp+80h] [rbp+7h]
  int v27; // [rsp+88h] [rbp+Fh]
  int v28; // [rsp+8Ch] [rbp+13h]

  v3 = *(int *)P;
  v4 = P + 8;
  v5 = (int *)P;
  v8 = 1;
  RtlAcquireSRWLockExclusive(P + 8);
  v9 = (_QWORD *)(a2 + 8);
  *((_DWORD *)v4 + 2) = GetCurrentThreadId();
  v10 = *v9;
  if ( *(_QWORD **)(*v9 + 8LL) != v9 || (v11 = (_QWORD *)v9[1], (_QWORD *)*v11 != v9) )
    __fastfail(3u);
  *v11 = v10;
  v12 = v5 + 6;
  *(_QWORD *)(v10 + 8) = v11;
  v9[1] = v9;
  *v9 = v9;
  v13 = *v12 == (_QWORD)v12;
  if ( (_QWORD *)*v12 == v12 )
  {
    if ( !a3 )
    {
      CempLockReleaseExclusive(v4);
      v8 = 0;
      RtlAcquireSRWLockExclusive(&CrmGlobals);
      dword_1800DC048 = GetCurrentThreadId();
      if ( *((int **)&CrmGlobals + v3 + 2) != v5 )
      {
        LOBYTE(v11) = CempLockReleaseExclusive(&CrmGlobals);
        v5 = 0LL;
        goto LABEL_15;
      }
      RtlAcquireSRWLockExclusive(v4);
      *((_DWORD *)v4 + 2) = GetCurrentThreadId();
      v13 = *v12 == (_QWORD)v12;
    }
    if ( v13 )
    {
      v14 = *v5;
      if ( *((int **)&CrmGlobals + v14 + 2) == v5 )
        *((_QWORD *)&CrmGlobals + v14 + 2) = 0LL;
    }
    LOBYTE(v11) = CempLockReleaseExclusive(v4);
    v8 = 0;
    if ( !a3 )
      LOBYTE(v11) = CempLockReleaseExclusive(&CrmGlobals);
    if ( v13 )
    {
      CrmStateMonitorCleanup((__int64)v5);
      LOBYTE(v11) = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
    }
  }
LABEL_15:
  if ( (unsigned int)dword_1800DB250 > 5 )
  {
    LOBYTE(v11) = tlgKeywordOn(&dword_1800DB250, 8LL);
    if ( (_BYTE)v11 )
    {
      v22 = 0;
      v25 = 0;
      v20 = &Uuid;
      v21 = 16;
      v17 = v13;
      v23 = &v18;
      v28 = 0;
      v26 = &v17;
      v18 = v3;
      v24 = 4;
      v27 = 1;
      LOBYTE(v11) = tlgWriteTransfer_EventWriteTransfer(v15, (int)&dword_1800BF1CC, 0, 0, 5u, &v19);
    }
  }
  if ( v8 )
    LOBYTE(v11) = CempLockReleaseExclusive(v5 + 2);
  return (char)v11;
}
