/*
 * XREFs of EtwpLogger @ 0x1407732F0
 * Callers:
 *     <none>
 * Callees:
 *     EtwpRequestFlushTimer @ 0x140227BD0 (EtwpRequestFlushTimer.c)
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x140243DB0 (KeWaitForSingleObject.c)
 *     EtwEventEnabled @ 0x1402584E0 (EtwEventEnabled.c)
 *     KeResetEvent @ 0x1402AFE30 (KeResetEvent.c)
 *     KeSetActualBasePriorityThread @ 0x1402B98F0 (KeSetActualBasePriorityThread.c)
 *     EtwpResetFlushTimer @ 0x1403107BC (EtwpResetFlushTimer.c)
 *     KeWaitForMultipleObjects @ 0x140311430 (KeWaitForMultipleObjects.c)
 *     PsDetachSiloFromCurrentThread @ 0x14031CF20 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14031CF40 (PsAttachSiloToCurrentThread.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     EtwpRealtimeSaveState @ 0x140682854 (EtwpRealtimeSaveState.c)
 *     EtwpAdjustFreeBuffers @ 0x1406BDDDC (EtwpAdjustFreeBuffers.c)
 *     EtwpFlushActiveBuffers @ 0x1406BDE48 (EtwpFlushActiveBuffers.c)
 *     PsTerminateSystemThread @ 0x140700FC0 (PsTerminateSystemThread.c)
 *     EtwpRealtimeUpdateConsumers @ 0x140772DD4 (EtwpRealtimeUpdateConsumers.c)
 *     EtwpRealtimeCreateLogfile @ 0x140772F38 (EtwpRealtimeCreateLogfile.c)
 *     EtwpRealtimeFlushSavedBuffers @ 0x1407731C8 (EtwpRealtimeFlushSavedBuffers.c)
 *     EtwpFreeLoggerContext @ 0x14078DE8C (EtwpFreeLoggerContext.c)
 *     EtwpRealtimeDisconnectAllConsumers @ 0x14078E380 (EtwpRealtimeDisconnectAllConsumers.c)
 *     EtwpFinalizeHeader @ 0x1407F6108 (EtwpFinalizeHeader.c)
 *     EtwpStopLoggerInstance @ 0x1407F6644 (EtwpStopLoggerInstance.c)
 *     EtwpRealtimeNotifyConsumers @ 0x1407F6788 (EtwpRealtimeNotifyConsumers.c)
 *     EtwpCreateLogFile @ 0x1407F69A0 (EtwpCreateLogFile.c)
 *     EtwpEventWriteTemplateAdmin @ 0x1409E3C50 (EtwpEventWriteTemplateAdmin.c)
 *     EtwpEventWriteTemplateSession @ 0x1409E3E94 (EtwpEventWriteTemplateSession.c)
 *     EtwpEventWriteTemplateSessionEnd @ 0x1409E4090 (EtwpEventWriteTemplateSessionEnd.c)
 */

NTSTATUS __fastcall EtwpLogger(__int64 a1)
{
  __int64 v1; // rbx
  struct _LIST_ENTRY *v2; // r14
  struct _KEVENT *v3; // rsi
  struct _KEVENT *v4; // rbp
  volatile signed __int32 *v5; // r15
  int v6; // r12d
  __int64 v7; // rdx
  int v8; // r13d
  int Logfile; // edi
  int *v10; // r14
  int active; // eax
  int v12; // esi
  int v13; // eax
  NTSTATUS v14; // edi
  bool v16; // si
  int v17; // eax
  int v18; // edx
  int v19; // r8d
  int v20; // ebp
  int v21; // ecx
  int v22; // r8d
  int v23; // eax
  __int64 v24; // rcx
  PKWAIT_BLOCK WaitBlockArray; // [rsp+38h] [rbp-40h]
  PVOID Object; // [rsp+40h] [rbp-38h] BYREF
  __int64 v27; // [rsp+48h] [rbp-30h]
  struct _LIST_ENTRY *v28; // [rsp+80h] [rbp+8h]

  v1 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(v1 + 32) = KeGetCurrentThread();
  v2 = PsAttachSiloToCurrentThread(*(struct _LIST_ENTRY **)a1);
  v28 = v2;
  KeSetActualBasePriorityThread((ULONG_PTR)KeGetCurrentThread(), 15);
  v3 = (struct _KEVENT *)(v1 + 456);
  KeSetEvent((PRKEVENT)(v1 + 456), 0, 0);
  v4 = (struct _KEVENT *)(v1 + 480);
  v27 = v1 + 504;
  v5 = (volatile signed __int32 *)(v1 + 816);
  Object = (PVOID)(v1 + 480);
  if ( *(_DWORD *)(v1 + 320) )
  {
    while ( 1 )
    {
      v6 = 0;
      if ( KeWaitForMultipleObjects((*(_DWORD *)(v1 + 208) != 0) + 1, &Object, WaitAny, Executive, 0, 0, 0LL, 0LL) == 1 )
      {
        if ( (*(_DWORD *)(v1 + 824) & 0x400) != 0 )
          _interlockedbittestandreset((volatile signed __int32 *)(v1 + 824), 0xAu);
        KeResetEvent(v4);
        v6 = 1;
      }
      if ( (unsigned __int8)EtwpBootPhase > 3u )
        _InterlockedOr(v5, 4u);
      EtwpAdjustFreeBuffers(v1);
      v8 = *(_DWORD *)(v1 + 824) & 4;
      if ( v8 )
      {
        Logfile = 0;
        if ( *(_DWORD *)(v1 + 208) )
          EtwpResetFlushTimer(v1, 1);
        v6 = 1;
      }
      else
      {
        Logfile = 0;
      }
      if ( (*v5 & 4) != 0 )
        break;
      EtwpFlushActiveBuffers((unsigned int *)v1, v6);
LABEL_31:
      if ( !*(_DWORD *)(v1 + 320) )
      {
        v2 = v28;
        goto LABEL_33;
      }
    }
    if ( (*(_DWORD *)(v1 + 824) & 0x80u) != 0 )
    {
      _InterlockedAnd((volatile signed __int32 *)(v1 + 824), 0xFFFFFF7F);
      if ( *(_QWORD *)(v1 + 800) )
      {
        LOBYTE(v7) = 1;
        EtwpFinalizeHeader(v1, v7);
      }
    }
    if ( (*(_DWORD *)(v1 + 12) & 0x100) != 0 )
      _InterlockedOr(v5, 8u);
    else
      _InterlockedAnd(v5, 0xFFFFFFF7);
    if ( (*v5 & 8) != 0 )
    {
      Logfile = EtwpRealtimeCreateLogfile(v1);
      if ( Logfile < 0 && (*(_DWORD *)(v1 + 12) & 0x40) == 0 )
      {
        v10 = (int *)(v1 + 40);
LABEL_60:
        if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_SESSION_END_FAILED) )
        {
          LODWORD(WaitBlockArray) = *(_DWORD *)(v1 + 44);
          EtwpEventWriteTemplateSessionEnd(
            v1 + 152,
            v18,
            v19,
            v1 + 136,
            v1 + 152,
            Logfile,
            *(_DWORD *)(v1 + 12),
            WaitBlockArray,
            Object,
            v27);
        }
        *v10 = Logfile;
        EtwpStopLoggerInstance(v1);
        goto LABEL_31;
      }
      EtwpRealtimeUpdateConsumers(v1);
      EtwpRealtimeFlushSavedBuffers(v1);
      Logfile = 0;
      if ( *(_DWORD *)(v1 + 344) && *(_DWORD *)(v1 + 424) )
        EtwpRequestFlushTimer(v1, 0);
    }
    if ( (*(_DWORD *)(v1 + 824) & 0x40) != 0 )
    {
      _InterlockedAnd((volatile signed __int32 *)(v1 + 824), 0xFFFFFFBF);
      EtwpRealtimeNotifyConsumers(v1);
    }
    if ( (*(_DWORD *)(v1 + 824) & 8) != 0 )
    {
      EtwpRealtimeDisconnectAllConsumers(v1);
      _InterlockedAnd((volatile signed __int32 *)(v1 + 824), 0xFFFFFFF7);
      v10 = (int *)(v1 + 40);
      *(_DWORD *)(v1 + 40) = 0;
      KeSetEvent(v3, 0, 0);
    }
    else
    {
      v10 = (int *)(v1 + 40);
    }
    if ( (*(_DWORD *)(v1 + 824) & 3) != 0 )
    {
      v16 = 1;
      if ( (*(_DWORD *)(v1 + 824) & 2) != 0 )
        v16 = *(_QWORD *)(v1 + 800) == 0LL;
      LOBYTE(v7) = 1;
      v17 = EtwpCreateLogFile(v1, v7, 0LL);
      *v10 = v17;
      Logfile = v17;
      if ( v17 < 0 )
      {
        v20 = *(_DWORD *)(v1 + 12);
        if ( (v20 & 8) != 0 && EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_SWITCH_TO_NEW_FILE_FAILED) )
          EtwpEventWriteTemplateAdmin(
            v21,
            (unsigned int)&ETW_EVENT_SWITCH_TO_NEW_FILE_FAILED,
            v22,
            v1 + 136,
            v1 + 152,
            Logfile,
            v20);
        v4 = (struct _KEVENT *)(v1 + 480);
      }
      KeSetEvent((PRKEVENT)(v1 + 456), 0, 0);
      if ( Logfile < 0 && v16 )
      {
        v3 = (struct _KEVENT *)(v1 + 456);
        goto LABEL_60;
      }
      Logfile = 0;
    }
    active = EtwpFlushActiveBuffers((unsigned int *)v1, v6);
    v12 = active;
    if ( (*(_DWORD *)(v1 + 824) & 1) != 0 && active >= 0 && !v6 )
      v12 = EtwpFlushActiveBuffers((unsigned int *)v1, 1);
    if ( (*(_DWORD *)(v1 + 824) & 0x1000) != 0 )
    {
      _InterlockedAnd((volatile signed __int32 *)(v1 + 824), 0xFFFFEFFF);
      if ( *(_QWORD *)(v1 + 800) )
      {
        v23 = EtwpFinalizeHeader(v1, 0LL);
        v12 = v23;
        if ( v23 >= 0 )
        {
          ZwClose(*(HANDLE *)(v1 + 800));
          *(_QWORD *)(v1 + 800) = 0LL;
        }
        else
        {
          *v10 = v23;
        }
      }
    }
    if ( (*(_DWORD *)(v1 + 12) & 0x40) == 0 )
      Logfile = v12;
    v3 = (struct _KEVENT *)(v1 + 456);
    if ( v8 )
    {
      _InterlockedAnd((volatile signed __int32 *)(v1 + 824), 0xFFFFFFFB);
      *v10 = Logfile;
      KeSetEvent((PRKEVENT)(v1 + 456), 0, 0);
    }
    if ( Logfile >= 0 )
      goto LABEL_31;
    goto LABEL_60;
  }
LABEL_33:
  while ( 1 )
  {
    v13 = EtwpFlushActiveBuffers((unsigned int *)v1, 1);
    v14 = v13;
    if ( v13 < 0 )
      break;
    if ( v13 == 259 )
    {
      if ( (*v5 & 8) == 0 || (v14 = 0, *(_QWORD *)(v1 + 360)) )
        v14 = -1073741823;
      break;
    }
    if ( *(int *)(v1 + 232) <= 0 || *(_DWORD *)(v1 + 232) <= *(_DWORD *)(v1 + 228) )
      break;
    KeWaitForSingleObject(v4, Executive, 0, 0, (PLARGE_INTEGER)&EtwpOneSecond);
  }
  if ( *(_QWORD *)(v1 + 800) )
  {
    EtwpFinalizeHeader(v1, 0LL);
    ZwClose(*(HANDLE *)(v1 + 800));
    *(_QWORD *)(v1 + 800) = 0LL;
  }
  if ( *(_QWORD *)(v1 + 360) )
  {
    EtwpRealtimeSaveState(v1);
    ZwClose(*(HANDLE *)(v1 + 360));
    *(_QWORD *)(v1 + 360) = 0LL;
  }
  *(_DWORD *)(v1 + 40) = v14;
  KeSetEvent(v3, 0, 0);
  if ( v14 < 0 && EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_STOP_TRACE) )
    EtwpEventWriteTemplateSession(v24, &ETW_EVENT_STOP_TRACE, v1);
  EtwpFreeLoggerContext((PVOID)v1);
  PsDetachSiloFromCurrentThread(v2);
  return PsTerminateSystemThread(v14);
}
