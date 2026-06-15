/*
 * XREFs of ?PopulateMfxsForEffectsDiscovery@CSharedStreamGroupProxy@@AEAAJXZ @ 0x18004B2E0
 * Callers:
 *     wil::init_once__lambda_be556cb3b146703253ec008872e87b88___ @ 0x1800730B8 (wil--init_once__lambda_be556cb3b146703253ec008872e87b88___.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x1800457A0 (--$Write@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSharedStreamGroupProxy::PopulateMfxsForEffectsDiscovery(CSharedStreamGroupProxy *this)
{
  __int64 *v2; // rcx
  __int64 v4; // rax
  int v5; // edi
  __int64 v6; // rcx
  _QWORD *v7; // rdx
  _DWORD *v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // [rsp+30h] [rbp-68h] BYREF
  char *v12; // [rsp+38h] [rbp-60h] BYREF
  _QWORD v13[7]; // [rsp+40h] [rbp-58h] BYREF
  _QWORD *v14; // [rsp+78h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v2 = (__int64 *)*((_QWORD *)this + 226);
  if ( !v2 )
    return 0LL;
  v4 = *v2;
  v13[0] = off_18017C278;
  v13[1] = this;
  v14 = v13;
  v5 = (*(__int64 (__fastcall **)(__int64 *, _QWORD *))(v4 + 40))(v2, v13);
  v6 = (__int64)v14;
  if ( v14 )
  {
    v7 = v13;
    LOBYTE(v7) = v14 != v13;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v14 + 32LL))(v14, v7);
  }
  if ( v5 >= 0 )
  {
    v8 = (_DWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                     v6,
                     _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
    if ( *v8 > 4u )
    {
      v11 = (__int64)(*((_QWORD *)this + 224) - *((_QWORD *)this + 223)) >> 3;
      v12 = (char *)this + 8;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        (__int64)v8,
        byte_1801932E8,
        v9,
        v10,
        (__int64)&v12,
        (__int64)&v11);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x667,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
}
