/*
 * XREFs of ??1CCrossProcessEndpointTraceLogger@@UEAA@XZ @ 0x140021BAC
 * Callers:
 *     ??1CCrossProcessBaseEndpoint@@UEAA@XZ @ 0x140021BE0 (--1CCrossProcessBaseEndpoint@@UEAA@XZ.c)
 *     ??_GCCrossProcessEndpointTraceLogger@@UEAAPEAXI@Z @ 0x140089C00 (--_GCCrossProcessEndpointTraceLogger@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$CAggregateTelemetryClustered@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAA@XZ @ 0x140021B58 (--1-$CAggregateTelemetryClustered@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAA@XZ.c)
 */

void __fastcall CCrossProcessEndpointTraceLogger::~CCrossProcessEndpointTraceLogger(
        CCrossProcessEndpointTraceLogger *this)
{
  *(_QWORD *)this = &CCrossProcessEndpointTraceLogger::`vftable';
  CAggregateTelemetryClustered<enum CpGlitchEvent,unsigned int *,0,0>::~CAggregateTelemetryClustered<enum CpGlitchEvent,unsigned int *,0,0>((__int64)this + 104);
  *((_QWORD *)this + 3) = &CAggregateValuesBase<enum CpGlitchEvent,unsigned int *>::`vftable';
}
