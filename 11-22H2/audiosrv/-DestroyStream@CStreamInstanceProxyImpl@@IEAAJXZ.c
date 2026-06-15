/*
 * XREFs of ?DestroyStream@CStreamInstanceProxyImpl@@IEAAJXZ @ 0x180045710
 * Callers:
 *     ?DestroyStream@CStreamInstanceProxy@@UEAAJXZ @ 0x180045700 (-DestroyStream@CStreamInstanceProxy@@UEAAJXZ.c)
 *     ??1CBridgeStreamInstanceProxy@@UEAA@XZ @ 0x1801048A8 (--1CBridgeStreamInstanceProxy@@UEAA@XZ.c)
 *     ?DestroyStream@CBridgeStreamInstanceProxy@@UEAAJXZ @ 0x180106B00 (-DestroyStream@CBridgeStreamInstanceProxy@@UEAAJXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009588 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x1800457A0 (--$Write@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?reset@?$com_ptr_t@UISubmixProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180045820 (-reset@-$com_ptr_t@UISubmixProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CStreamInstanceProxyImpl::DestroyStream(CStreamInstanceProxyImpl *this)
{
  int v2; // eax
  __int64 v3; // rcx
  _DWORD *v4; // rcx
  int v5; // r8d
  int v6; // r9d
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  CStreamInstanceProxyImpl *v10; // [rsp+48h] [rbp+10h] BYREF

  v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 32LL))(*((_QWORD *)this + 2));
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xF1D,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v2);
  wil::com_ptr_t<ISubmixProxy,wil::err_returncode_policy>::reset((char *)this + 16);
  v4 = (_DWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                   v3,
                   _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
  if ( *v4 > 4u )
  {
    v9 = *((_QWORD *)this + 4);
    v10 = this;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      (_DWORD)v4,
      (unsigned int)&unk_180192C51,
      v5,
      v6,
      (__int64)&v10,
      (__int64)&v9);
  }
  return 0LL;
}
