/*
 * XREFs of ?ConnectToRightSubmix@CStreamInstanceProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUISubmixProxy@@@Z @ 0x1800438F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x180016538 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 *     ?OnMfxEffectsChanged@CAudioStream@@QEAAXXZ @ 0x180016884 (-OnMfxEffectsChanged@CAudioStream@@QEAAXXZ.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$com_ptr_t@UISubmixProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUISubmixProxy@@@Z @ 0x180043E58 (--4-$com_ptr_t@UISubmixProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUISubmixProxy@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     wil::details::lambda_call__lambda_b61228f59d6c9b7830a1bce13c4d3e79___::_lambda_call__lambda_b61228f59d6c9b7830a1bce13c4d3e79___ @ 0x1801047F4 (wil--details--lambda_call__lambda_b61228f59d6c9b7830a1bce13c4d3e79___--_lambda_call__lambda_b612.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CStreamInstanceProxy::ConnectToRightSubmix(
        CStreamInstanceProxy *this,
        struct IAudioStreamInfo *a2,
        struct ISubmixProxy *a3)
{
  __int64 v6; // rax
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // eax
  void *v10; // rdx
  __int64 v11; // rcx
  _DWORD *v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v16; // rdx
  struct ISubmixProxy *v17; // [rsp+40h] [rbp-20h] BYREF
  _QWORD v18[2]; // [rsp+48h] [rbp-18h] BYREF
  char v19; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  __int64 v21; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v22; // [rsp+A8h] [rbp+48h] BYREF

  v6 = *(_QWORD *)a3;
  v21 = 0LL;
  v7 = (*(__int64 (__fastcall **)(struct ISubmixProxy *, __int64 *))(v6 + 88))(a3, &v21);
  v8 = v7;
  if ( v7 < 0 )
  {
    v16 = 3961LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_7;
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this - 3) + 72LL))(*((_QWORD *)this - 3), v21);
  v8 = v7;
  if ( v7 < 0 )
  {
    v16 = 3962LL;
    goto LABEL_10;
  }
  v18[0] = (char *)this - 40;
  v18[1] = &v21;
  v19 = 1;
  v9 = (*(__int64 (__fastcall **)(struct ISubmixProxy *, struct IAudioStreamInfo *))(*(_QWORD *)a3 + 128LL))(a3, a2);
  v8 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF7E,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v9);
    wil::details::lambda_call__lambda_b61228f59d6c9b7830a1bce13c4d3e79___::_lambda_call__lambda_b61228f59d6c9b7830a1bce13c4d3e79___(v18);
  }
  else
  {
    CAudioStream::OnMfxEffectsChanged((CAudioStream *)(((unsigned __int64)a2 - 8) & -(__int64)(a2 != 0LL)), v10);
    wil::com_ptr_t<ISubmixProxy,wil::err_returncode_policy>::operator=((char *)this - 16, a3);
    v12 = (_DWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                      v11,
                      _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
    if ( *v12 > 4u )
    {
      v22 = *((_QWORD *)this - 1);
      v17 = a3;
      v18[0] = (char *)this - 40;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        (__int64)v12,
        byte_180192BC3,
        v13,
        v14,
        (__int64)v18,
        (__int64)&v17,
        (__int64)&v22);
    }
    v8 = 0;
  }
LABEL_7:
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v21);
  return v8;
}
