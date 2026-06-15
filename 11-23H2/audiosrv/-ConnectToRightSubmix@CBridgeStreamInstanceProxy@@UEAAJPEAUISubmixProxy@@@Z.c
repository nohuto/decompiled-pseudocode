/*
 * XREFs of ?ConnectToRightSubmix@CBridgeStreamInstanceProxy@@UEAAJPEAUISubmixProxy@@@Z @ 0x180105E10
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x180016538 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$com_ptr_t@UISubmixProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUISubmixProxy@@@Z @ 0x180043E58 (--4-$com_ptr_t@UISubmixProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUISubmixProxy@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     wil::details::lambda_call__lambda_b61228f59d6c9b7830a1bce13c4d3e79___::_lambda_call__lambda_b61228f59d6c9b7830a1bce13c4d3e79___ @ 0x1801047F4 (wil--details--lambda_call__lambda_b61228f59d6c9b7830a1bce13c4d3e79___--_lambda_call__lambda_b612.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CBridgeStreamInstanceProxy::ConnectToRightSubmix(unsigned __int64 this, struct ISubmixProxy *a2)
{
  __int64 v4; // rax
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // rcx
  _DWORD *v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  struct ISubmixProxy *v15; // [rsp+40h] [rbp-20h] BYREF
  _QWORD v16[2]; // [rsp+48h] [rbp-18h] BYREF
  char v17; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  __int64 v19; // [rsp+98h] [rbp+38h] BYREF
  __int64 v20; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v21; // [rsp+A8h] [rbp+48h] BYREF

  v4 = *(_QWORD *)a2;
  v20 = 0LL;
  v5 = (*(__int64 (__fastcall **)(struct ISubmixProxy *, __int64 *))(v4 + 88))(a2, &v20);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 4116LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_11;
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(this - 24) + 72LL))(*(_QWORD *)(this - 24), v20);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 4117LL;
    goto LABEL_5;
  }
  v16[0] = this - 40;
  v16[1] = &v20;
  v17 = 1;
  v8 = *(_QWORD *)a2;
  v19 = 0LL;
  (*(void (__fastcall **)(struct ISubmixProxy *, __int64 *))(v8 + 80))(a2, &v19);
  v9 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v19 + 416LL))(
         v19,
         this & -(__int64)(this != 40));
  v6 = v9;
  if ( v9 >= 0 )
  {
    wil::com_ptr_t<ISubmixProxy,wil::err_returncode_policy>::operator=((__int64 *)(this - 16), (__int64)a2);
    v11 = (_DWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                      v10,
                      _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
    if ( *v11 > 4u )
    {
      v21 = *(_QWORD *)(this - 8);
      v15 = a2;
      v16[0] = this - 40;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        (__int64)v11,
        byte_180192A40,
        v12,
        v13,
        (__int64)v16,
        (__int64)&v15,
        (__int64)&v21);
    }
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v19);
    v6 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x101B,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v9);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v19);
    wil::details::lambda_call__lambda_b61228f59d6c9b7830a1bce13c4d3e79___::_lambda_call__lambda_b61228f59d6c9b7830a1bce13c4d3e79___(v16);
  }
LABEL_11:
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v20);
  return v6;
}
