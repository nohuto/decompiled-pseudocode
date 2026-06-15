/*
 * XREFs of ?SendRemoteDisconnectionRequest@CAudioStream@@UEAAJXZ @ 0x1800ED0B0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x180020530 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800CE024 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 */

__int64 __fastcall CAudioStream::SendRemoteDisconnectionRequest(CAudioStream *this)
{
  __int64 *v2; // rax
  _DWORD *v3; // rbx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rcx
  bool v7; // al
  unsigned int v8; // eax
  int MediaEvent; // eax
  unsigned int v10; // ebx
  int v12; // [rsp+30h] [rbp-78h] BYREF
  int v13[2]; // [rsp+38h] [rbp-70h] BYREF
  _DWORD v14[12]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v15; // [rsp+70h] [rbp-38h]
  __int16 v16; // [rsp+88h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  v2 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
         (__int64)this,
         _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  v3 = (_DWORD *)v2[1];
  if ( *v3 > 4u && tlgKeywordOn(v2[1], 512LL) )
  {
    v12 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 40LL))(*((_QWORD *)this + 8));
    *(_QWORD *)v13 = *((_QWORD *)this + 51);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (__int64)v3,
      byte_18019186A,
      v4,
      v5,
      (__int64)v13,
      (__int64)&v12);
  }
  v6 = *((_QWORD *)this + 8);
  v7 = *((_BYTE *)this + 128) != 0;
  v14[0] = 80;
  *((_BYTE *)this + 512) = v7;
  v15 = *((_QWORD *)this + 51);
  v14[6] = 2;
  v14[1] = 0x8000;
  v16 = 0;
  v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 40LL))(v6);
  MediaEvent = GenerateMediaEvent(v14, v8);
  v10 = MediaEvent;
  if ( MediaEvent >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x534,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
    (const char *)(unsigned int)MediaEvent);
  return v10;
}
