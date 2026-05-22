/*
 * XREFs of ?UpdateWinKeyScenarioStatusAndLogLatency@WinKeyScenarioTelemetry@@CA_NXZ @ 0x18001DBAC
 * Callers:
 *     ?UpdateForegroundTarget@DWMInputRouter@@UEAAX_KIII@Z @ 0x180020ED0 (-UpdateForegroundTarget@DWMInputRouter@@UEAAX_KIII@Z.c)
 *     ?OnForegroundChange@WinKeyScenarioTelemetry@@SAX_K@Z @ 0x18011760C (-OnForegroundChange@WinKeyScenarioTelemetry@@SAX_K@Z.c)
 *     ?OnWinKeyAcknowledged@WinKeyScenarioTelemetry@@SAXXZ @ 0x180117708 (-OnWinKeyAcknowledged@WinKeyScenarioTelemetry@@SAXXZ.c)
 *     ?OnWinKeyDetected@WinKeyScenarioTelemetry@@SAXXZ @ 0x18011778C (-OnWinKeyDetected@WinKeyScenarioTelemetry@@SAXXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@33@Z @ 0x180117500 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ?GetTimeElapsedSec@WinKeyScenarioTelemetry@@CA_KXZ @ 0x18011759C (-GetTimeElapsedSec@WinKeyScenarioTelemetry@@CA_KXZ.c)
 */

bool WinKeyScenarioTelemetry::UpdateWinKeyScenarioStatusAndLogLatency(void)
{
  bool result; // al
  unsigned __int64 TimeElapsedSec; // rdx
  int v2; // ecx
  int v3; // r9d
  DWORD LowPart; // [rsp+50h] [rbp+8h] BYREF
  __int64 v5; // [rsp+58h] [rbp+10h] BYREF
  unsigned __int64 v6; // [rsp+60h] [rbp+18h] BYREF
  __int64 v7; // [rsp+68h] [rbp+20h] BYREF

  result = WinKeyScenarioTelemetry::s_winKeyScenarioStarted;
  if ( WinKeyScenarioTelemetry::s_winKeyScenarioStarted )
  {
    TimeElapsedSec = WinKeyScenarioTelemetry::GetTimeElapsedSec();
    if ( TimeElapsedSec < 5 )
    {
      return WinKeyScenarioTelemetry::s_winKeyScenarioStarted;
    }
    else
    {
      if ( (unsigned int)dword_1802664D0 > 5
        && (qword_1802664E0 & 0x400000000000LL) != 0
        && (qword_1802664E8 & 0x400000000000LL) == qword_1802664E8 )
      {
        LowPart = WinKeyScenarioTelemetry::s_startTime.LowPart;
        v6 = TimeElapsedSec;
        v5 = 5LL;
        v7 = 0x2000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
          v2,
          (unsigned int)&unk_1802258C1,
          0,
          v3,
          (__int64)&v7,
          (__int64)&LowPart,
          (__int64)&v6,
          (__int64)&v5);
      }
      result = 0;
      WinKeyScenarioTelemetry::s_winKeyScenarioStarted = 0;
    }
  }
  return result;
}
