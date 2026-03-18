/*
 * XREFs of ?UpdateInteractionSummary@InteractionTraceProvider@InteractionLatencyTelemetry@@SAXAEBUTouchScenarioInfo@2@_NI@Z @ 0x1801D6114
 * Callers:
 *     ?AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAXPEBUTouchScenarioInfo@2@_NGGAEBVInteractionFrameLatency@2@I@Z @ 0x1801D215C (-AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAXPEBUTo.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180074108 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@4@Z @ 0x1801D13D8 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U2@@-$_tl.c)
 */

void __fastcall InteractionLatencyTelemetry::InteractionTraceProvider::UpdateInteractionSummary(
        const struct InteractionLatencyTelemetry::TouchScenarioInfo *a1)
{
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  int v4; // r10d
  char v5; // r11
  int v6; // [rsp+50h] [rbp-28h] BYREF
  int v7; // [rsp+54h] [rbp-24h] BYREF
  __int64 v8; // [rsp+58h] [rbp-20h] BYREF
  __int64 v9[3]; // [rsp+60h] [rbp-18h] BYREF
  char v10; // [rsp+98h] [rbp+20h] BYREF

  if ( (unsigned int)dword_1803D0EB8 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_1803D0EB8, 8LL) )
    {
      v7 = *(_DWORD *)(v3 + 152);
      v8 = *(_QWORD *)(v3 + 8);
      v6 = v4;
      v10 = v5;
      v9[0] = v3;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
        v1,
        byte_18036E687,
        v2,
        v3,
        (__int64)v9,
        (__int64)&v8,
        (__int64)&v7,
        (__int64)&v10,
        (__int64)&v6);
    }
  }
}
