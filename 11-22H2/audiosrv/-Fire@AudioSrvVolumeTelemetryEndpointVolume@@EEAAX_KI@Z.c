/*
 * XREFs of ?Fire@AudioSrvVolumeTelemetryEndpointVolume@@EEAAX_KI@Z @ 0x1800F1300
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x180020530 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$07@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$07@@5@Z @ 0x1800F11BC (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapperByVal@$07@@U3@@-$_t.c)
 */

void __fastcall AudioSrvVolumeTelemetryEndpointVolume::Fire(
        AudioSrvVolumeTelemetryEndpointVolume *this,
        __int64 a2,
        unsigned int a3)
{
  __int64 v4; // rdi
  _DWORD *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // [rsp+68h] [rbp+27h] BYREF
  int v11; // [rsp+6Ch] [rbp+2Bh] BYREF
  int v12; // [rsp+70h] [rbp+2Fh] BYREF
  int v13; // [rsp+74h] [rbp+33h] BYREF
  __int64 v14; // [rsp+78h] [rbp+37h] BYREF
  __int64 v15; // [rsp+80h] [rbp+3Fh] BYREF
  const WCHAR *v16; // [rsp+88h] [rbp+47h] BYREF
  int v17; // [rsp+C0h] [rbp+7Fh] BYREF

  v4 = a3;
  v6 = (_DWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                   (__int64)this,
                   _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
  if ( *v6 > 4u )
  {
    if ( tlgKeywordOn((__int64)v6, 0x400000000002LL) )
    {
      v17 = *((_DWORD *)this + 24);
      v16 = (const WCHAR *)*((_QWORD *)this + 11);
      v10 = *((_DWORD *)this + 21);
      v11 = *((_DWORD *)this + 20);
      v12 = *((_DWORD *)this + 19);
      v13 = *((_DWORD *)this + 18);
      v14 = a2;
      v15 = v4;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        v7,
        byte_180191D5C,
        v8,
        v9,
        (__int64)&v13,
        (__int64)&v12,
        (__int64)&v11,
        (__int64)&v10,
        &v16,
        (__int64)&v17,
        (__int64)&v15,
        (__int64)&v14);
    }
  }
}
