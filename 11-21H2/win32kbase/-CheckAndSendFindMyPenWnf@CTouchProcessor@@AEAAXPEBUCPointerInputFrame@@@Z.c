/*
 * XREFs of ?CheckAndSendFindMyPenWnf@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C01BFC68
 * Callers:
 *     ?ProcessInput@CTouchProcessor@@QEAAXPEAX0KHH@Z @ 0x1C01D1824 (-ProcessInput@CTouchProcessor@@QEAAXPEAX0KHH@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::CheckAndSendFindMyPenWnf(LARGE_INTEGER *this, const struct CPointerInputFrame *a2)
{
  __int64 v2; // r8
  bool v4; // r8
  __int64 v5; // rax
  LARGE_INTEGER PerformanceCounter; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8

  v2 = *((_QWORD *)a2 + 32);
  v4 = (*(_DWORD *)(v2 + 360) & 8) == 0 || (*(_DWORD *)(*(_QWORD *)(v2 + 16) + 184LL) & 0x8000) != 0;
  if ( *((_DWORD *)a2 + 12) )
  {
    v5 = *((_QWORD *)a2 + 30);
    if ( v5 )
    {
      if ( *(_DWORD *)(v5 + 168) == 3 && v4 )
      {
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        if ( this[15].QuadPart + 5000 * gliQpcFreq.QuadPart / 0x3E8uLL < PerformanceCounter.QuadPart )
        {
          this[15] = PerformanceCounter;
          if ( (int)ZwUpdateWnfStateData(&WNF_ISM_INPUT_UPDATE_AFTER_TRACK_INTERVAL, 0LL, 0LL, 0LL, &gSessionId) < 0 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9);
        }
      }
    }
  }
}
