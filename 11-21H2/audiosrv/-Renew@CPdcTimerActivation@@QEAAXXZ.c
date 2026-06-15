/*
 * XREFs of ?Renew@CPdcTimerActivation@@QEAAXXZ @ 0x1801031B0
 * Callers:
 *     ?Reevaluate@CPowerReference@@QEAAXPEAVCVADServer@@@Z @ 0x180104750 (-Reevaluate@CPowerReference@@QEAAXPEAVCVADServer@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180015934 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     memset_0 @ 0x18005F9D8 (memset_0.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@344@Z @ 0x180102F20 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@U2@U2@@-$_tlgWriteTemplate@$$A6AJP.c)
 */

void __fastcall CPdcTimerActivation::Renew(CPdcTimerActivation *this)
{
  __int64 v2; // rcx
  int v3; // edi
  __int64 v4; // rcx
  __int64 *v5; // rax
  __int64 v6; // r9
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // [rsp+50h] [rbp-B0h] BYREF
  int v11; // [rsp+54h] [rbp-ACh] BYREF
  int v12; // [rsp+58h] [rbp-A8h] BYREF
  int v13; // [rsp+5Ch] [rbp-A4h] BYREF
  __int64 v14; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v15; // [rsp+68h] [rbp-98h] BYREF
  _DWORD v16[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v17; // [rsp+78h] [rbp-88h]
  __int64 v18; // [rsp+80h] [rbp-80h]
  _QWORD *v19; // [rsp+88h] [rbp-78h]
  __int64 v20; // [rsp+90h] [rbp-70h]
  _QWORD v21[3]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v22[152]; // [rsp+B8h] [rbp-48h] BYREF

  v21[1] = *((_QWORD *)this + 2);
  v21[0] = 1LL;
  v21[2] = 576LL;
  memset_0(v22, 0, 0x90uLL);
  v17 = 0LL;
  v18 = 0LL;
  v2 = *(_QWORD *)this;
  v19 = v21;
  v16[0] = 1;
  v16[1] = 300;
  v20 = 0LL;
  if ( v2 )
  {
    v3 = Pdcv2ActivationClientRenewActivation(v2, v16, &v10);
    v5 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
           v4,
           _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    v7 = v5[1];
    if ( *(_DWORD *)v7 > 4u
      && (*(_BYTE *)(v7 + 16) & 0x40) != 0
      && (*(_QWORD *)(v7 + 24) & 0x40LL) == *(_QWORD *)(v7 + 24) )
    {
      v8 = *((_QWORD *)this + 2);
      v9 = v5[1];
      v11 = v10;
      v12 = v3;
      v14 = *(_QWORD *)(v8 + 560);
      v13 = *(_DWORD *)(v8 + 64);
      v15 = v8;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v9,
        byte_18018AD7F,
        v7,
        v6,
        (__int64)&v15,
        (__int64)&v13,
        (__int64)&v14,
        (__int64)&v12,
        (__int64)&v11);
    }
  }
}
