/*
 * XREFs of WheapProcessWaitingETWEvents @ 0x140860F40
 * Callers:
 *     WheaProcessWaitingETWEvents @ 0x140613100 (WheaProcessWaitingETWEvents.c)
 *     WheapEtwEnableCallback @ 0x140860F10 (WheapEtwEnableCallback.c)
 * Callees:
 *     KeSetEvent @ 0x14023C5E0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x140243CE0 (KeWaitForSingleObject.c)
 *     WheaLogInternalEvent @ 0x140380A50 (WheaLogInternalEvent.c)
 *     WheapFreeErrorRecord @ 0x140610E60 (WheapFreeErrorRecord.c)
 *     WheapGenerateETWEvents @ 0x1406132C8 (WheapGenerateETWEvents.c)
 */

LONG WheapProcessWaitingETWEvents()
{
  __int64 *v0; // rbx
  __int64 v1; // rax
  __int64 v2; // rbx
  __int64 v3; // rax
  LONG result; // eax

  while ( 1 )
  {
    KeWaitForSingleObject(&WheapWaitingETWEventLock, Executive, 0, 0, 0LL);
    v0 = (__int64 *)WheapWaitingETWEvents;
    if ( *(__int64 **)(WheapWaitingETWEvents + 8) != &WheapWaitingETWEvents
      || (v1 = *(_QWORD *)WheapWaitingETWEvents,
          *(_QWORD *)(*(_QWORD *)WheapWaitingETWEvents + 8LL) != WheapWaitingETWEvents) )
    {
LABEL_8:
      __fastfail(3u);
    }
    WheapWaitingETWEvents = *(_QWORD *)WheapWaitingETWEvents;
    *(_QWORD *)(v1 + 8) = &WheapWaitingETWEvents;
    KeSetEvent(&WheapWaitingETWEventLock, 0, 0);
    if ( v0 == &WheapWaitingETWEvents )
      break;
    WheapGenerateETWEvents((__int64)(v0 + 5));
    WheapFreeErrorRecord((__int64)v0);
  }
  while ( 1 )
  {
    KeWaitForSingleObject(&WheapDeferredInternalLogsEventLock, Executive, 0, 0, 0LL);
    v2 = *(_QWORD *)&WheapDispatchPtr.Queue.Wcb.NumberOfMapRegisters;
    if ( *(struct _DEVICE_OBJECT **)(*(_QWORD *)&WheapDispatchPtr.Queue.Wcb.NumberOfMapRegisters + 8LL) != (struct _DEVICE_OBJECT *)&WheapDispatchPtr.Queue.Wcb.NumberOfMapRegisters )
      goto LABEL_8;
    v3 = **(_QWORD **)&WheapDispatchPtr.Queue.Wcb.NumberOfMapRegisters;
    if ( *(_QWORD *)(**(_QWORD **)&WheapDispatchPtr.Queue.Wcb.NumberOfMapRegisters + 8LL) != *(_QWORD *)&WheapDispatchPtr.Queue.Wcb.NumberOfMapRegisters )
      goto LABEL_8;
    *(_QWORD *)&WheapDispatchPtr.Queue.Wcb.NumberOfMapRegisters = **(_QWORD **)&WheapDispatchPtr.Queue.Wcb.NumberOfMapRegisters;
    *(_QWORD *)(v3 + 8) = &WheapDispatchPtr.Queue.Wcb.NumberOfMapRegisters;
    result = KeSetEvent(&WheapDeferredInternalLogsEventLock, 0, 0);
    if ( (ULONG *)v2 == &WheapDispatchPtr.Queue.Wcb.NumberOfMapRegisters )
      return result;
    WheaLogInternalEvent((_DWORD *)(v2 + 16));
  }
}
