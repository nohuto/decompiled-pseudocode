/*
 * XREFs of ??0CCrossProcessBaseEndpoint@@IEAA@XZ @ 0x140006B9C
 * Callers:
 *     ??0CCrossProcessBaseServerEndpoint@@QEAA@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x140005DA8 (--0CCrossProcessBaseServerEndpoint@@QEAA@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z.c)
 *     ??0CCrossProcessBaseClientEndpoint@@QEAA@XZ @ 0x14008FB74 (--0CCrossProcessBaseClientEndpoint@@QEAA@XZ.c)
 * Callees:
 *     ??0?$CAggregateTelemetryClustered@W4CpGlitchEvent@@PEAI$0A@$0A@@@QEAA@PEAV?$CAggregateValuesClusteredBase@W4CpGlitchEvent@@PEAI@@_K11@Z @ 0x140006038 (--0-$CAggregateTelemetryClustered@W4CpGlitchEvent@@PEAI$0A@$0A@@@QEAA@PEAV-$CAggregateValuesClus.c)
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x1400068BC (--0CCriticalSection@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=3
CCrossProcessBaseEndpoint *__fastcall CCrossProcessBaseEndpoint::CCrossProcessBaseEndpoint(
        CCrossProcessBaseEndpoint *this)
{
  *(_QWORD *)this = &CCrossProcessBaseEndpoint::`vftable'{for `IAudioEndpoint'};
  *((_QWORD *)this + 1) = &CCrossProcessBaseEndpoint::`vftable'{for `IAudioEndpointRT'};
  ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)((char *)this + 16));
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 25) = &CCrossProcessEndpointTraceLogger::`vftable';
  *((GUID *)this + 13) = GUID_00000000_0000_0000_0000_000000000000;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = &g_CrossProcessTelemetryProvider;
  *((_QWORD *)this + 33) = (char *)this + 208;
  *((_OWORD *)this + 17) = 0LL;
  *((_OWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 28) = &CCrossProcessEndpointTraceLogger::CCrossProcessEndpointGlitchValues::`vftable';
  CAggregateTelemetryClustered<enum CpGlitchEvent,unsigned int *,0,0>::CAggregateTelemetryClustered<enum CpGlitchEvent,unsigned int *,0,0>(
    (__int64)this + 304,
    (__int64)this + 224);
  *((_BYTE *)this + 400) = 1;
  *((_DWORD *)this + 14) = 0;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 22) = 0;
  *((_DWORD *)this + 24) = 0;
  *((_DWORD *)this + 26) = 0;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_DWORD *)this + 40) = 1;
  *((_DWORD *)this + 44) = 0;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  return this;
}
