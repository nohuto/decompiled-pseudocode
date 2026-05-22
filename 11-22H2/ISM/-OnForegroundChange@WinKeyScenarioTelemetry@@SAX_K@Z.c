/*
 * XREFs of ?OnForegroundChange@WinKeyScenarioTelemetry@@SAX_K@Z @ 0x18012567C
 * Callers:
 *     ?OnActivationObjectNotification@ForegroundManager@@AEAAXPEBU_tagActivationObjectNotification@@@Z @ 0x18001D11C (-OnActivationObjectNotification@ForegroundManager@@AEAAXPEBU_tagActivationObjectNotification@@@Z.c)
 * Callees:
 *     ?UpdateWinKeyScenarioStatusAndLogLatency@WinKeyScenarioTelemetry@@CA_NXZ @ 0x18001EA80 (-UpdateWinKeyScenarioStatusAndLogLatency@WinKeyScenarioTelemetry@@CA_NXZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18004B5A4 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 */

void __fastcall WinKeyScenarioTelemetry::OnForegroundChange(__int64 a1)
{
  DWORD LowPart; // [rsp+30h] [rbp-29h] BYREF
  __int64 v3; // [rsp+38h] [rbp-21h] BYREF
  __int64 v4; // [rsp+40h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+50h] [rbp-9h] BYREF
  __int64 *v6; // [rsp+70h] [rbp+17h]
  __int64 v7; // [rsp+78h] [rbp+1Fh]
  __int64 *v8; // [rsp+80h] [rbp+27h]
  __int64 v9; // [rsp+88h] [rbp+2Fh]
  DWORD *p_LowPart; // [rsp+90h] [rbp+37h]
  __int64 v11; // [rsp+98h] [rbp+3Fh]

  if ( WinKeyScenarioTelemetry::UpdateWinKeyScenarioStatusAndLogLatency()
    && (unsigned int)dword_1802754D0 > 5
    && (qword_1802754E0 & 0x400000000000LL) != 0
    && (qword_1802754E8 & 0x400000000000LL) == qword_1802754E8 )
  {
    LowPart = WinKeyScenarioTelemetry::s_startTime.LowPart;
    v3 = a1;
    p_LowPart = &LowPart;
    v4 = 0x2000000LL;
    v8 = &v3;
    v11 = 4LL;
    v6 = &v4;
    v9 = 8LL;
    v7 = 8LL;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1802754D0,
      (unsigned __int8 *)dword_180234774,
      0LL,
      0LL,
      5u,
      &v5);
  }
}
