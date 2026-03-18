/*
 * XREFs of PopCalculateIdleInformation @ 0x14039AD4C
 * Callers:
 *     PopCalculateCsSummary @ 0x140397424 (PopCalculateCsSummary.c)
 *     PopCaptureSleepStudyStatistics @ 0x14039A210 (PopCaptureSleepStudyStatistics.c)
 *     PopSleepstudyStartNextSession @ 0x140809838 (PopSleepstudyStartNextSession.c)
 *     PopDripsWatchdogCallbackWorker @ 0x1409962E0 (PopDripsWatchdogCallbackWorker.c)
 *     PopDripsWatchdogDiagnosticWorker @ 0x1409965B0 (PopDripsWatchdogDiagnosticWorker.c)
 *     PopDripsWatchdogStartWatchdog @ 0x140996854 (PopDripsWatchdogStartWatchdog.c)
 *     PopSleepstudySnapModernStandbySessionData @ 0x140997DE0 (PopSleepstudySnapModernStandbySessionData.c)
 * Callees:
 *     PpmConvertTime @ 0x14029394C (PpmConvertTime.c)
 *     PpmQueryPlatformStateResidency @ 0x14039A1C4 (PpmQueryPlatformStateResidency.c)
 */

unsigned __int64 __fastcall PopCalculateIdleInformation(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  __int64 v3; // rsi
  unsigned int v4; // r15d
  int v5; // r12d
  unsigned __int64 PlatformStateResidency; // rbp
  int v7; // r13d
  unsigned int v8; // r14d
  unsigned __int64 result; // rax
  unsigned __int64 *v10; // rsi
  int v11; // edi
  unsigned __int64 v12; // rax
  unsigned __int64 v14; // [rsp+68h] [rbp+10h]
  unsigned __int64 v15; // [rsp+70h] [rbp+18h]

  v1 = 0LL;
  v2 = a1;
  if ( PpmPlatformStates )
  {
    v3 = *(_QWORD *)(PpmPlatformStates + 48);
    v4 = *(_DWORD *)(v3 + 4);
    v5 = *(_DWORD *)(v3 + 8);
  }
  else
  {
    v3 = 0LL;
    v4 = 0;
    v5 = 0;
  }
  v15 = 0LL;
  PlatformStateResidency = PpmQueryPlatformStateResidency(dword_140C542C0);
  if ( PlatformStateResidency != -1LL )
    PlatformStateResidency /= 0xAuLL;
  v7 = 0;
  v8 = 0;
  if ( v4 )
  {
    v10 = (unsigned __int64 *)(v3 + 56);
    v11 = dword_140C542C0;
    do
    {
      v14 = PopQpcFrequency;
      v1 += PpmConvertTime(*v10, PopQpcFrequency, 0xF4240uLL);
      if ( v11 != -1 && v8 == v11 )
      {
        v12 = PpmConvertTime(*v10, v14, 0xF4240uLL);
        v7 = *((_DWORD *)v10 - 6);
        v15 = v12;
      }
      ++v8;
      v10 += 126;
    }
    while ( v8 < v4 );
    v2 = a1;
  }
  result = v15;
  *(_QWORD *)v2 = v1;
  *(_QWORD *)(v2 + 8) = v15;
  *(_QWORD *)(v2 + 16) = PlatformStateResidency;
  *(_DWORD *)(v2 + 24) = v7;
  *(_DWORD *)(v2 + 28) = v5;
  return result;
}
