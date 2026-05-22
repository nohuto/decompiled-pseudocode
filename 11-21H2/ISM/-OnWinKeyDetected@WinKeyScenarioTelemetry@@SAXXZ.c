/*
 * XREFs of ?OnWinKeyDetected@WinKeyScenarioTelemetry@@SAXXZ @ 0x1800FB78C
 * Callers:
 *     ?DetectAndProcessHotKey@HotKeyProcessor@@QEAAJI_N_KPEAEIIU_GUID@@AEAUHotKeyDetectionResult@@@Z @ 0x1801D2828 (-DetectAndProcessHotKey@HotKeyProcessor@@QEAAJI_N_KPEAEIIU_GUID@@AEAUHotKeyDetectionResult@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18009C748 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?UpdateWinKeyScenarioStatusAndLogLatency@WinKeyScenarioTelemetry@@CA_NXZ @ 0x1800FB8B4 (-UpdateWinKeyScenarioStatusAndLogLatency@WinKeyScenarioTelemetry@@CA_NXZ.c)
 */

void WinKeyScenarioTelemetry::OnWinKeyDetected(void)
{
  __int64 v0; // r8
  __int64 v1; // r9
  DWORD LowPart; // [rsp+40h] [rbp+8h] BYREF
  __int64 v3; // [rsp+48h] [rbp+10h] BYREF

  if ( WinKeyScenarioTelemetry::UpdateWinKeyScenarioStatusAndLogLatency()
    && (unsigned int)dword_180240448 > 5
    && (qword_180240458 & 0x400000000000LL) != 0
    && (qword_180240460 & 0x400000000000LL) == qword_180240460 )
  {
    LowPart = WinKeyScenarioTelemetry::s_startTime.LowPart;
    v3 = 0x2000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (__int64)&dword_180240448,
      byte_180203EAA,
      v0,
      v1,
      (__int64)&v3,
      (__int64)&LowPart);
  }
}
