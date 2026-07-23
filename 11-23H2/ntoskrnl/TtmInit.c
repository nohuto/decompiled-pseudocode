/*
 * XREFs of TtmInit @ 0x140821184
 * Callers:
 *     PoInitSystem @ 0x140B50BBC (PoInitSystem.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x140207480 (ExInitializeResourceLite.c)
 *     KeInitializeTimerEx @ 0x1402BE8F0 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x1402BFC30 (KeInitializeDpc.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     TtmIsEnabled @ 0x1407A6280 (TtmIsEnabled.c)
 *     ExSubscribeWnfStateChange @ 0x1407DB000 (ExSubscribeWnfStateChange.c)
 *     ObCreateObjectTypeEx @ 0x14081F4F0 (ObCreateObjectTypeEx.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1408220DC (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

__int64 TtmInit()
{
  __int64 v1; // rcx
  const wchar_t *v2; // rax
  int v3; // eax
  __int64 v4; // rcx
  const wchar_t *v5; // rax
  int v6; // eax
  UNICODE_STRING SourceString; // [rsp+30h] [rbp-49h] BYREF
  __int128 v8[8]; // [rsp+40h] [rbp-39h] BYREF
  char v9; // [rsp+E0h] [rbp+67h] BYREF

  if ( TtmIsEnabled() )
  {
    memset(v8, 0, 0x78uLL);
    LOWORD(v8[0]) = 120;
    DWORD2(v8[0]) = 400;
    BYTE2(v8[0]) = BYTE2(v8[0]) & 0xF1 | 2;
    v1 = 0x7FFFLL;
    HIDWORD(v8[1]) = 2031619;
    *((_QWORD *)&v8[3] + 1) = TtmpOpenQueueHandle;
    *(_QWORD *)&v8[4] = TtmpCloseQueueHandle;
    *(__int128 *)((char *)v8 + 12) = TtmpQueueMapping;
    *((_QWORD *)&v8[4] + 1) = TtmpDeleteQueue;
    v2 = L"TerminalEventQueue";
    DWORD1(v8[2]) = 512;
    HIDWORD(v8[2]) = 176;
    SourceString = 0LL;
    while ( *v2 )
    {
      ++v2;
      if ( !--v1 )
        goto LABEL_11;
    }
    SourceString.Buffer = L"TerminalEventQueue";
    SourceString.Length = 2 * (0x7FFF - v1);
    SourceString.MaximumLength = SourceString.Length + 2;
LABEL_11:
    v3 = ObCreateObjectTypeEx(&SourceString, v8, 0LL, (__int16 *)0x80, &TtmpQueueObjectType);
    if ( v3 < 0 )
      KeBugCheckEx(0x19Bu, 2uLL, v3, 0LL, 0LL);
  }
  else
  {
    TtmpQueueObjectType = 0LL;
  }
  ExInitializeResourceLite(&TtmpSessionLock);
  TtmpSession = 0LL;
  if ( TtmIsEnabled() )
  {
    if ( !TtmpProximityEscapeMsec )
      TtmpProximityEscapeMsec = 3000;
    TtmpTerminalInactivityTimeout = -300000000LL;
    ExInitializeResourceLite(&TtmpTerminalInactivityLock);
    KeInitializeTimerEx(&TtmpTerminalInactivityTimer, NotificationTimer);
    KeInitializeDpc(&TtmpTerminalInactivityTimerDpc, (PKDEFERRED_ROUTINE)TtmpTerminalInactivityTimerDpcRoutine, 0LL);
    TtmpTerminalInactivityWorkItem.Parameter = 0LL;
    TtmpTerminalInactivityWorkItem.WorkerRoutine = (void (__fastcall *)(void *))TtmpTerminalInactivityWorkerRoutine;
    TtmpTerminalInactivityWorkItem.List.Flink = 0LL;
    memset(v8, 0, 0x78uLL);
    LOWORD(v8[0]) = 120;
    DWORD2(v8[0]) = 400;
    BYTE2(v8[0]) = BYTE2(v8[0]) & 0xF1 | 6;
    v4 = 0x7FFFLL;
    HIDWORD(v8[1]) = 2031619;
    *((_QWORD *)&v8[3] + 1) = TtmpOpenTerminalHandle;
    *(_QWORD *)&v8[4] = TtmpCloseTerminalHandle;
    *(__int128 *)((char *)v8 + 12) = TtmpTerminalMapping;
    *((_QWORD *)&v8[4] + 1) = TtmpDeleteTerminal;
    v5 = L"Terminal";
    DWORD1(v8[2]) = 512;
    HIDWORD(v8[2]) = 288;
    SourceString = 0LL;
    while ( *v5 )
    {
      ++v5;
      if ( !--v4 )
        goto LABEL_20;
    }
    SourceString.Buffer = L"Terminal";
    SourceString.Length = 2 * (0x7FFF - v4);
    SourceString.MaximumLength = SourceString.Length + 2;
LABEL_20:
    v6 = ObCreateObjectTypeEx(&SourceString, v8, 0LL, 0LL, &TtmpTerminalObjectType);
    if ( v6 < 0 )
      KeBugCheckEx(0x19Bu, 1uLL, v6, 0LL, 0LL);
    ExSubscribeWnfStateChange(
      (__int64)&v9,
      (__int64)&WNF_SHEL_INACTIVITY_TIMEOUT_IN_MS,
      1,
      0,
      (__int64)TtmpWnfInactivityTimeoutCallback,
      0LL);
  }
  else
  {
    TtmpTerminalObjectType = 0LL;
  }
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_140D53918);
  return TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_140D538E0);
}
