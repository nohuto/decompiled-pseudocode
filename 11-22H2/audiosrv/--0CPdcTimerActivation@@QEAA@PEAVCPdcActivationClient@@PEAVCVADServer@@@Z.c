/*
 * XREFs of ??0CPdcTimerActivation@@QEAA@PEAVCPdcActivationClient@@PEAVCVADServer@@@Z @ 0x18003A814
 * Callers:
 *     ??$make_shared@VCPdcTimerActivation@@PEAVCPdcActivationClient@@AEAPEAVCVADServer@@@std@@YA?AV?$shared_ptr@VCPdcTimerActivation@@@0@$$QEAPEAVCPdcActivationClient@@AEAPEAVCVADServer@@@Z @ 0x18003A3B8 (--$make_shared@VCPdcTimerActivation@@PEAVCPdcActivationClient@@AEAPEAVCVADServer@@@std@@YA-AV-$s.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180020530 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?GetClientFriendlyName@CAudioStream@@QEAAPEBGXZ @ 0x18003AC34 (-GetClientFriendlyName@CAudioStream@@QEAAPEBGXZ.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     memset_0 @ 0x180067A54 (memset_0.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@344@Z @ 0x180083432 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@U2@U2@@-$_tlgWriteTemplate@$$A6AJP.c)
 */

CPdcTimerActivation *__fastcall CPdcTimerActivation::CPdcTimerActivation(
        CPdcTimerActivation *this,
        struct CPdcActivationClient *a2,
        CAudioStream **a3)
{
  const unsigned __int16 *ClientFriendlyName; // rdx
  const wchar_t *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  int v9; // edi
  _DWORD *v10; // rcx
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  __int64 v15; // rdx
  int v16; // [rsp+50h] [rbp-B0h] BYREF
  int v17; // [rsp+54h] [rbp-ACh] BYREF
  int v18; // [rsp+58h] [rbp-A8h] BYREF
  int v19; // [rsp+5Ch] [rbp-A4h] BYREF
  __int64 v20; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v21; // [rsp+68h] [rbp-98h] BYREF
  _DWORD v22[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v23; // [rsp+78h] [rbp-88h]
  const wchar_t *v24; // [rsp+80h] [rbp-80h]
  _QWORD *v25; // [rsp+88h] [rbp-78h]
  __int64 v26; // [rsp+90h] [rbp-70h]
  _QWORD v27[3]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v28[152]; // [rsp+B8h] [rbp-48h] BYREF

  *((_QWORD *)this + 1) = a2;
  *((_QWORD *)this + 2) = a3;
  *(_QWORD *)this = 0LL;
  v27[1] = a3;
  v27[2] = 608LL;
  v27[0] = 1LL;
  memset_0(v28, 0, 0x90uLL);
  ClientFriendlyName = CAudioStream::GetClientFriendlyName(a3[21]);
  v22[0] = 1;
  v22[1] = 300;
  v25 = v27;
  v6 = L"Unknown";
  v23 = 0LL;
  v24 = L"Unknown";
  v26 = 0LL;
  if ( ClientFriendlyName )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( ClientFriendlyName[v7] );
    if ( v7 )
      v6 = ClientFriendlyName;
    v24 = v6;
  }
  v9 = Pdcv2ActivationClientActivate(
         **((_QWORD **)this + 1),
         v22,
         *((_QWORD *)this + 2),
         2LL,
         L"TimerForAudioPlayback",
         0,
         this,
         &v16);
  if ( v9 >= 0 )
    Pdcv2ActivationClientSetBrokeredProcessId(*(_QWORD *)this, *((unsigned int *)a3 + 10));
  v10 = (_DWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                    v8,
                    _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
  if ( *v10 > 4u && tlgKeywordOn((__int64)v10, 64LL) )
  {
    v15 = *((_QWORD *)this + 2);
    v17 = v16;
    v18 = v9;
    v20 = *(_QWORD *)(v15 + 552);
    v19 = *(_DWORD *)(v15 + 40);
    v21 = v15;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v11,
      (unsigned int)&unk_1801938E9,
      v12,
      v13,
      (__int64)&v21,
      (__int64)&v19,
      (__int64)&v20,
      (__int64)&v18,
      (__int64)&v17);
  }
  return this;
}
