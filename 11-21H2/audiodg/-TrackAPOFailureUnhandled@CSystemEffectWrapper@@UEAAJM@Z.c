/*
 * XREFs of ?TrackAPOFailureUnhandled@CSystemEffectWrapper@@UEAAJM@Z @ 0x14006DAE0
 * Callers:
 *     <none>
 * Callees:
 *     ?TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@M@Z @ 0x140014BD0 (-TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@M@Z.c)
 *     ?get@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6AXXZ@Z @ 0x140019CB0 (-get@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$01@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$01@@@Z @ 0x14006CB38 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$01@@@-$_tlgWri.c)
 */

__int64 __fastcall CSystemEffectWrapper::TrackAPOFailureUnhandled(CSystemEffectWrapper *this, float a2)
{
  unsigned int v2; // edx
  char *v4; // rdi
  __int64 v5; // rcx
  _DWORD *v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int16 *v9; // rax
  __int16 v10; // dx
  __int16 v12; // [rsp+50h] [rbp+8h] BYREF
  int v13; // [rsp+60h] [rbp+18h] BYREF
  char *v14; // [rsp+68h] [rbp+20h] BYREF

  v2 = *((_DWORD *)this + 16);
  if ( v2 - 1 <= 2 )
  {
    v4 = (char *)this + 40;
    TrackSystemEffectBehavior(*((_QWORD *)this + 7), v2, 0, 1, (__int64)this + 40, SLODWORD(a2));
    v6 = (_DWORD *)wil::details::static_lazy<AudioDgTelemetryProvider>::get(
                     v5,
                     _lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_)[1];
    if ( *v6 > 2u )
    {
      v9 = (__int16 *)*((_QWORD *)this + 7);
      v14 = v4;
      v10 = *v9;
      v13 = *((_DWORD *)this + 16);
      v12 = v10;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<2>>(
        (__int64)v6,
        byte_1400A6F3C,
        v7,
        v8,
        (__int64)&v13,
        (__int64 *)&v14,
        (__int64)&v12);
    }
  }
  return 0LL;
}
