/*
 * XREFs of PoLatencySensitivityHint @ 0x14036D860
 * Callers:
 *     PopPowerRequestCallbackPerfBoostRequired @ 0x1407E9780 (PopPowerRequestCallbackPerfBoostRequired.c)
 *     PopPowerInformationInternal @ 0x1407ED06C (PopPowerInformationInternal.c)
 * Callees:
 *     EtwWrite @ 0x1402578A0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x140258420 (EtwEventEnabled.c)
 *     ExQueueWorkItem @ 0x1402B7C30 (ExQueueWorkItem.c)
 *     PpmInterlockedUpdateTimeNoFence @ 0x14031313C (PpmInterlockedUpdateTimeNoFence.c)
 *     PpmCheckCustomRun @ 0x14032B63C (PpmCheckCustomRun.c)
 *     PpmTryAcquireLock @ 0x14036D9F8 (PpmTryAcquireLock.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 */

void __fastcall PoLatencySensitivityHint(int a1)
{
  int v2; // r8d
  _BYTE *i; // rax
  REGHANDLE v4; // rsi
  unsigned __int64 v5; // rdx
  bool v6; // r11
  signed __int32 v7[8]; // [rsp+0h] [rbp-60h] BYREF
  int v8; // [rsp+30h] [rbp-30h] BYREF
  unsigned __int64 v9; // [rsp+38h] [rbp-28h] BYREF
  unsigned __int64 v10; // [rsp+40h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-18h] BYREF

  v9 = 0LL;
  if ( a1 != 4 || !PpmPerfMultimediaQosSupported )
  {
    v2 = 0;
    for ( i = (char *)&PpmCurrentProfile[55 * dword_140C3D86C + 14] + 5; !*i; ++i )
    {
      if ( (unsigned int)++v2 >= 2 )
        return;
    }
    v8 = a1;
    if ( PpmEtwRegistered )
    {
      v4 = PpmEtwHandle;
      if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_LATENCY_SENSITIVITY_HINT) )
      {
        *(_QWORD *)&UserData.Size = 4LL;
        UserData.Ptr = (ULONGLONG)&v8;
        EtwWrite(v4, &PPM_ETW_LATENCY_SENSITIVITY_HINT, 0LL, 1u, &UserData);
      }
    }
    v10 = 0LL;
    v6 = PpmInterlockedUpdateTimeNoFence(
           &PpmPerfLatencyBoostExpiration,
           PpmCheckPeriod + MEMORY[0xFFFFF78000000008],
           &v9) != 0;
    if ( a1 == 4 && PpmInterlockedUpdateTimeNoFence(&PpmPerfDeadlineBoostExpiration, v5, &v10) || v6 )
    {
      _InterlockedOr(v7, 0);
      if ( a1 == 4 && v10 <= PpmCheckLastEffectiveExecutionTime || v9 <= PpmCheckLastEffectiveExecutionTime )
      {
        if ( (unsigned __int8)PpmTryAcquireLock() )
        {
          PpmCheckCustomRun(3u);
        }
        else if ( !_InterlockedExchange(&PpmPerfLatencyBoostQueued, 1) )
        {
          ExQueueWorkItem(&PpmPerfLatencyBoostWorkItem, CustomPriorityWorkQueue|NormalWorkQueue|0x18);
        }
      }
    }
  }
}
