/*
 * XREFs of TtmInit @ 0x140802F88
 * Callers:
 *     PoInitSystem @ 0x140B50B30 (PoInitSystem.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x140207480 (ExInitializeResourceLite.c)
 *     KeInitializeTimerEx @ 0x1402BE630 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x1402BF970 (KeInitializeDpc.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     memset @ 0x140435400 (memset.c)
 *     TtmIsEnabled @ 0x1407A65A0 (TtmIsEnabled.c)
 *     ExSubscribeWnfStateChange @ 0x1407DB2B0 (ExSubscribeWnfStateChange.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1408034B4 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     ObCreateObjectTypeEx @ 0x140821770 (ObCreateObjectTypeEx.c)
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
  _QWORD v8[15]; // [rsp+40h] [rbp-39h] BYREF
  char v9; // [rsp+E0h] [rbp+67h] BYREF

  if ( TtmIsEnabled() )
  {
    memset(v8, 0, sizeof(v8));
    LOWORD(v8[0]) = 120;
    LODWORD(v8[1]) = 400;
    BYTE2(v8[0]) = BYTE2(v8[0]) & 0xF1 | 2;
    v1 = 0x7FFFLL;
    HIDWORD(v8[3]) = 2031619;
    v8[7] = TtmpOpenQueueHandle;
    v8[8] = TtmpCloseQueueHandle;
    *(_OWORD *)((char *)&v8[1] + 4) = TtmpQueueMapping;
    v8[9] = TtmpDeleteQueue;
    v2 = L"TerminalEventQueue";
    HIDWORD(v8[4]) = 512;
    HIDWORD(v8[5]) = 176;
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
    v3 = ObCreateObjectTypeEx(&SourceString, (__int64)&TtmpQueueObjectType);
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
    memset(v8, 0, sizeof(v8));
    LOWORD(v8[0]) = 120;
    LODWORD(v8[1]) = 400;
    BYTE2(v8[0]) = BYTE2(v8[0]) & 0xF1 | 6;
    v4 = 0x7FFFLL;
    HIDWORD(v8[3]) = 2031619;
    v8[7] = TtmpOpenTerminalHandle;
    v8[8] = TtmpCloseTerminalHandle;
    *(_OWORD *)((char *)&v8[1] + 4) = TtmpTerminalMapping;
    v8[9] = TtmpDeleteTerminal;
    v5 = L"Terminal";
    HIDWORD(v8[4]) = 512;
    HIDWORD(v8[5]) = 288;
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
    v6 = ObCreateObjectTypeEx(&SourceString, (__int64)&TtmpTerminalObjectType);
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
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_140D53948);
  return TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_140D53910);
}
