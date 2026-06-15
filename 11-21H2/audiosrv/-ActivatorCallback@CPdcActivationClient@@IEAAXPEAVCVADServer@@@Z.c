/*
 * XREFs of ?ActivatorCallback@CPdcActivationClient@@IEAAXPEAVCVADServer@@@Z @ 0x180103048
 * Callers:
 *     ?PdcTimerActivatorCallback@CPdcActivationClient@@KAXPEAXW4_PDC_ACTIVATOR_ERROR_DETAIL@@00@Z @ 0x180103190 (-PdcTimerActivatorCallback@CPdcActivationClient@@KAXPEAXW4_PDC_ACTIVATOR_ERROR_DETAIL@@00@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180015934 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x1800464AC (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     ?ReevaluateTimerActivationRequest@CVADServer@@QEAAXXZ @ 0x1800EF720 (-ReevaluateTimerActivationRequest@CVADServer@@QEAAXXZ.c)
 */

void __fastcall CPdcActivationClient::ActivatorCallback(CPdcActivationClient *this, struct CVADServer *a2)
{
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rcx
  CVADServer **i; // rcx
  struct CVADServer *v8; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v9[32]; // [rsp+38h] [rbp-40h] BYREF
  struct CVADServer **v10; // [rsp+58h] [rbp-20h]
  int v11; // [rsp+60h] [rbp-18h]
  int v12; // [rsp+64h] [rbp-14h]

  v4 = _Mtx_lock((CPdcActivationClient *)((char *)this + 32));
  if ( v4 )
  {
    std::_Throw_C_error(v4);
    __debugbreak();
  }
  v6 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
         v5,
         _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v6 > 4u
    && (*(_BYTE *)(v6 + 16) & 0x40) != 0
    && (*(_QWORD *)(v6 + 24) & 0x40LL) == *(_QWORD *)(v6 + 24) )
  {
    v12 = 0;
    v10 = &v8;
    v8 = a2;
    v11 = 8;
    tlgWriteTransfer_EtwEventWriteTransfer(v6, byte_18018AE9F, 0LL, 0LL, 3, (__int64)v9);
  }
  for ( i = (CVADServer **)*((_QWORD *)this + 1); i != *((CVADServer ***)this + 2); ++i )
  {
    if ( *i == a2 )
    {
      CVADServer::ReevaluateTimerActivationRequest(*i);
      break;
    }
  }
  _Mtx_unlock((CPdcActivationClient *)((char *)this + 32));
}
