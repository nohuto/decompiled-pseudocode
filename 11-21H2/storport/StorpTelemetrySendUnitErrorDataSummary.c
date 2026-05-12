/*
 * XREFs of StorpTelemetrySendUnitErrorDataSummary @ 0x1C0003CA8
 * Callers:
 *     StorpLogPerUnitStatistics @ 0x1C00039A4 (StorpLogPerUnitStatistics.c)
 * Callees:
 *     StorpAreTelemetryErrorsEqual @ 0x1C0005F44 (StorpAreTelemetryErrorsEqual.c)
 *     McTemplateK0quuujjqzssszxuqqqqqqqquuuuuuqqiqbr31qbr33_EtwWriteTransfer @ 0x1C00121F8 (McTemplateK0quuujjqzssszxuqqqqqqqquuuuuuqqiqbr31qbr33_EtwWriteTransfer.c)
 *     StorpTelemetryLogUnitErrorDataMeasures @ 0x1C0013718 (StorpTelemetryLogUnitErrorDataMeasures.c)
 *     memset @ 0x1C0024340 (memset.c)
 *     StorpTelemetryLogUnitErrorDataCriticalData @ 0x1C0061260 (StorpTelemetryLogUnitErrorDataCriticalData.c)
 */

__int64 __fastcall StorpTelemetrySendUnitErrorDataSummary(__int64 a1)
{
  __int64 result; // rax
  _WORD *v2; // r12
  __int64 v4; // r8
  __int64 v5; // r9
  char v6; // al
  __int16 v7; // r10
  unsigned __int8 v8; // r11
  __int64 v9; // r14
  void *v10; // rsi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+138h] [rbp-80h] BYREF
  _OWORD v12[2]; // [rsp+150h] [rbp-68h] BYREF
  __int64 v13; // [rsp+170h] [rbp-48h]
  int v14; // [rsp+1A8h] [rbp-10h] BYREF

  result = 0LL;
  v2 = (_WORD *)(a1 + 2344);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v14 = 0;
  if ( *(_DWORD *)(a1 + 2344) )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 2336), &LockHandle);
    LOWORD(v14) = *v2 - 1;
    if ( (unsigned __int16)v14 >= 0xAu )
      LOWORD(v14) = 10;
    v5 = HIWORD(v14);
    LOBYTE(v4) = 0;
    do
    {
      v13 = 0LL;
      memset(v12, 0, sizeof(v12));
      v6 = StorpAreTelemetryErrorsEqual(a1 + 40 * ((unsigned __int8)v4 + 70LL), v12, v4, v5);
      if ( v6 == (_BYTE)v7 )
        break;
      LOWORD(v5) = v7 + v5;
      LOBYTE(v4) = v7 + v4;
    }
    while ( (unsigned __int8)v4 < v8 );
    HIWORD(v14) = v5;
    if ( g_StorpTraceLoggingCriticalEventEnabledSetByRegistry == (_BYTE)v7 && !g_StorpTraceLoggingCriticalEventEnabled
      || g_StorpTraceLoggingCriticalEventsLogged >= (unsigned int)g_StorpTraceLoggingCriticalEventMaximum )
    {
      goto LABEL_16;
    }
    if ( (*(_DWORD *)(a1 + 1992) & 0x20) != 0 )
      g_StorpTraceLoggingCriticalEventEnabled = -1;
    if ( *(_BYTE *)(a1 + 1996) )
      g_StorpTraceLoggingCriticalEventEnabled = -1;
    if ( (*(_BYTE *)(a1 + 450) & 2) != 0 )
      g_StorpTraceLoggingCriticalEventEnabled = -1;
    if ( g_StorpTraceLoggingCriticalEventEnabled )
      StorpTelemetryLogUnitErrorDataCriticalData(a1, &v14);
    else
LABEL_16:
      StorpTelemetryLogUnitErrorDataMeasures(a1, &v14);
    if ( (byte_1C00799E4 & 8) != 0 )
    {
      v9 = *(_QWORD *)(a1 + 24);
      v10 = &unk_1C006A690;
      if ( *(_QWORD *)(v9 + 4952) )
        v10 = *(void **)(v9 + 4952);
      McTemplateK0quuujjqzssszxuqqqqqqqquuuuuuqqiqbr31qbr33_EtwWriteTransfer(
        40 * (unsigned __int16)v14,
        a1 + 2400,
        40 * HIWORD(v14),
        *(_DWORD *)(v9 + 56),
        *(_BYTE *)(a1 + 96),
        *(_BYTE *)(a1 + 97),
        *(_BYTE *)(a1 + 98),
        a1 + 1976,
        v9 + 4936,
        *(_DWORD *)(a1 + 3296),
        *(_QWORD *)(v9 + 4592),
        a1 + 160,
        a1 + 169,
        a1 + 186,
        (__int64)v10);
    }
    memset(v2, 0, 0x1C8uLL);
    memset((void *)(a1 + 2800), 0, 0x190uLL);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    return 0LL;
  }
  return result;
}
