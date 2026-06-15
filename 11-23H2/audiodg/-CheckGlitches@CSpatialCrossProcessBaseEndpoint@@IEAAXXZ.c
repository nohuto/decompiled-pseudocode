/*
 * XREFs of ?CheckGlitches@CSpatialCrossProcessBaseEndpoint@@IEAAXXZ @ 0x14009CF74
 * Callers:
 *     ?ReleaseInputDataPointer@CSpatialCrossProcessServerInputEndpoint@@UEAAXI_K@Z @ 0x1400A0D00 (-ReleaseInputDataPointer@CSpatialCrossProcessServerInputEndpoint@@UEAAXI_K@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x14009AC40 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_.c)
 */

void __fastcall CSpatialCrossProcessBaseEndpoint::CheckGlitches(
        CSpatialCrossProcessBaseEndpoint *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int32 v5; // eax
  __int64 v6; // rcx
  BOOL v7; // esi
  BOOL v8; // ebx
  BOOL v9; // [rsp+60h] [rbp+8h] BYREF
  BOOL v10; // [rsp+68h] [rbp+10h] BYREF
  __int64 v11; // [rsp+70h] [rbp+18h] BYREF

  v5 = _InterlockedExchange((volatile __int32 *)(*((_QWORD *)this + 162) + 68LL), 0);
  v6 = *((_QWORD *)this + 162);
  v7 = v5 != 0;
  v8 = _InterlockedExchange((volatile __int32 *)(v6 + 72), 0) != 0;
  if ( (v5 || v8)
    && (unsigned int)dword_1400CE090 > 5
    && (byte_1400CE0A0 & 1) != 0
    && (qword_1400CE0A8 & 1) == qword_1400CE0A8 )
  {
    v9 = v8;
    v10 = v5 != 0;
    v11 = (__int64)this + 792;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v6,
      byte_1400B462E,
      (const GUID *)((char *)this + 792),
      a4,
      &v11,
      (__int64)&v10,
      (__int64)&v9);
  }
  CSpatialCrossProcessEndpointTraceLogger::RegisterGlitches(
    (CSpatialCrossProcessBaseEndpoint *)((char *)this + 784),
    v7,
    v8);
}
