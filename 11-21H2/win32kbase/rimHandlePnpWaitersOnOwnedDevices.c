/*
 * XREFs of rimHandlePnpWaitersOnOwnedDevices @ 0x1C0049594
 * Callers:
 *     rimApcIoUnregisterPlugPlayNotificationExWorker @ 0x1C004949C (rimApcIoUnregisterPlugPlayNotificationExWorker.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqq @ 0x1C007FBC4 (WPP_RECORDER_AND_TRACE_SF_qqq.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall rimHandlePnpWaitersOnOwnedDevices(__int64 a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 *i; // rbx
  __int64 v7; // rax
  int v8; // ecx
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // r14
  __int64 v12; // r9
  __int64 v13; // rcx

  RIMLockExclusive((__int64)&gObListLock);
  for ( i = (__int64 *)gObRimDevList; i != &gObRimDevList; i = (__int64 *)*i )
  {
    v7 = (__int64)(i + 15);
    if ( i == (__int64 *)16 )
      v7 = 48LL;
    v8 = *(unsigned __int8 *)v7;
    if ( v8 == a2 || (_BYTE)v8 == 3 && a2 == 2 )
    {
      v9 = (__int64)(i + 51);
      if ( i == (__int64 *)16 )
        v9 = 336LL;
      if ( *(_QWORD *)v9 == a1 )
      {
        v10 = (__int64)(i + 32);
        if ( i == (__int64 *)16 )
          v10 = 184LL;
        if ( (*(_DWORD *)v10 & 0x10) != 0 )
        {
          v11 = (__int64)(i + 48);
          if ( i == (__int64 *)16 )
            v11 = 312LL;
          if ( !*(_QWORD *)v11 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(336LL, v4, v5);
          LOBYTE(v4) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
          if ( (_BYTE)v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v12 = (__int64)(i + 13);
            if ( i == (__int64 *)16 )
              v12 = 32LL;
            LOBYTE(v5) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_qqq(
              WPP_GLOBAL_Control->AttachedDevice,
              v4,
              v5,
              (_DWORD)gRimLog,
              4,
              1,
              58,
              (__int64)&WPP_3100a0ce65ca3ababb0b99fd70935186_Traceguids,
              a1,
              *(_QWORD *)v12,
              *(_QWORD *)v11);
          }
          *(_DWORD *)v10 &= ~0x10u;
          v13 = (__int64)(i + 53);
          if ( i == (__int64 *)16 )
            v13 = 352LL;
          KeSetEvent(*(PRKEVENT *)v13, 1, 0);
        }
      }
    }
  }
  qword_1C029A118 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
}
