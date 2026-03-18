/*
 * XREFs of DeferSysPeekMsg @ 0x1C00015E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qiqdd @ 0x1C0001790 (WPP_RECORDER_AND_TRACE_SF_qiqdd.c)
 *     ?UpdateISODState@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z @ 0x1C000187C (-UpdateISODState@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z.c)
 *     ?_BeginKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@AEAAXI@Z @ 0x1C00018E8 (-_BeginKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@AEAAXI@Z.c)
 */

void __fastcall DeferSysPeekMsg(__int64 a1, int a2)
{
  char v2; // si
  __int64 v4; // rbx
  unsigned int v5; // ebp
  int v6; // r8d
  int v7; // edx
  unsigned int ThreadId; // eax

  v2 = 1;
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 432) + 80LL);
  v5 = *(_DWORD *)(v4 + 24) - 256;
  switch ( a2 )
  {
    case 1:
      goto LABEL_23;
    case 3:
      if ( v5 > 9 )
      {
LABEL_22:
        *(_DWORD *)(v4 + 100) |= 0x10000u;
        break;
      }
LABEL_23:
      *(_DWORD *)(a1 + 1256) |= 0x20000000u;
      if ( a2 == 1 )
      {
        *(_DWORD *)(v4 + 100) |= 0x2000u;
        break;
      }
      goto LABEL_22;
    case 2:
      *(_DWORD *)(v4 + 100) |= 0x4000u;
      break;
  }
  InputTraceLogging::Delivery::UpdateISODState((const struct tagQMSG *)v4);
  *(_QWORD *)(v4 + 104) = a1;
  --*(_DWORD *)(*(_QWORD *)(a1 + 432) + 40LL);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40000) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v2 = 0;
  }
  if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v7 = 10;
    LOBYTE(v7) = v2;
    LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_qiqdd(WPP_GLOBAL_Control->AttachedDevice, v7, v6, WPP_MAIN_CB.Queue.ListEntry.Flink);
  }
  if ( (*(_DWORD *)(a1 + 1256) & 0x1000000) == 0 && v5 <= 9 )
  {
    if ( !*(_QWORD *)(v4 + 136) )
    {
      *(LARGE_INTEGER *)(v4 + 136) = KeQueryPerformanceCounter(0LL);
      ThreadId = (unsigned int)PsGetThreadId(*(PETHREAD *)a1);
      KeyboardInputTelemetry::_BeginKeyboardEventProcessingByInputService(
        (KeyboardInputTelemetry *)&`KeyboardInputTelemetry::_GetInstance'::`2'::instance,
        ThreadId);
    }
    if ( (*(_DWORD *)(v4 + 100) & 0x10000) == 0 && dword_1C029E3FC )
    {
      if ( !dword_1C029E348 )
        `KeyboardInputTelemetry::_GetInstance'::`2'::instance = *(_QWORD *)(v4 + 136);
      ++dword_1C029E348;
    }
  }
}
