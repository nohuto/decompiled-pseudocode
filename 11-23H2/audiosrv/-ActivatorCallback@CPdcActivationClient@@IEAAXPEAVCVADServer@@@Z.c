/*
 * XREFs of ?ActivatorCallback@CPdcActivationClient@@IEAAXPEAVCVADServer@@@Z @ 0x180111AAC
 * Callers:
 *     ?PdcTimerActivatorCallback@CPdcActivationClient@@KAXPEAXW4_PDC_ACTIVATOR_ERROR_DETAIL@@00@Z @ 0x1800834B0 (-PdcTimerActivatorCallback@CPdcActivationClient@@KAXPEAXW4_PDC_ACTIVATOR_ERROR_DETAIL@@00@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180020530 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x180025144 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     ?ReevaluateTimerActivationRequest@CVADServer@@QEAAXXZ @ 0x18011ED5C (-ReevaluateTimerActivationRequest@CVADServer@@QEAAXXZ.c)
 */

void __fastcall CPdcActivationClient::ActivatorCallback(CPdcActivationClient *this, struct CVADServer *a2)
{
  int v4; // eax
  __int64 v5; // rcx
  _DWORD *v6; // rcx
  __int64 v7; // rcx
  CVADServer **i; // rcx
  struct CVADServer *v9; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v10[32]; // [rsp+38h] [rbp-40h] BYREF
  struct CVADServer **v11; // [rsp+58h] [rbp-20h]
  int v12; // [rsp+60h] [rbp-18h]
  int v13; // [rsp+64h] [rbp-14h]

  v4 = _Mtx_lock((CPdcActivationClient *)((char *)this + 32));
  if ( v4 )
  {
    std::_Throw_C_error(v4);
    __debugbreak();
  }
  v6 = (_DWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                   v5,
                   _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
  if ( *v6 > 4u && tlgKeywordOn((__int64)v6, 64LL) )
  {
    v13 = 0;
    v11 = &v9;
    v9 = a2;
    v12 = 8;
    tlgWriteTransfer_EtwEventWriteTransfer(v7, byte_18019394E, 0LL, 0LL, 3, (__int64)v10);
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
