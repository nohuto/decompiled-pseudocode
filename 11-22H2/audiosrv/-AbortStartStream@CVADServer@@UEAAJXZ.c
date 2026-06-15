/*
 * XREFs of ?AbortStartStream@CVADServer@@UEAAJXZ @ 0x18011CA10
 * Callers:
 *     AudioServerStartStreamAborted @ 0x180125710 (AudioServerStartStreamAborted.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180015400 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate.c)
 *     _tlgKeywordOn @ 0x180020530 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180048A20 (-reset@-$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CVADServer::AbortStartStream(CVADServer *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rsi
  __int64 v3; // rdi
  _QWORD *v4; // r15
  int (__fastcall *v5)(__int64, __int64 *); // rbx
  __int64 v6; // rcx
  __int64 *v7; // rax
  _DWORD *v8; // rbx
  int v9; // eax
  __int64 v10; // rcx
  const WCHAR *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  int v18; // [rsp+80h] [rbp+40h] BYREF
  __int64 v19; // [rsp+88h] [rbp+48h] BYREF
  const WCHAR *v20; // [rsp+90h] [rbp+50h] BYREF
  __int64 v21; // [rsp+98h] [rbp+58h] BYREF

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 192);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 192));
  v19 = 0LL;
  v3 = *((_QWORD *)this + 21);
  if ( v3 )
  {
    v4 = (_QWORD *)((char *)this + 144);
    if ( *((_QWORD *)this + 18) )
    {
      v5 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(v3 + 8) + 24LL);
      wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>::reset(&v19);
      if ( v5(v3 + 8, &v19) >= 0 )
      {
        v7 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
               v6,
               _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
        v8 = (_DWORD *)v7[1];
        if ( *v8 > 4u )
        {
          if ( tlgKeywordOn(v7[1], 512LL) )
          {
            v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 40LL))(v19);
            v10 = *((_QWORD *)this + 18) + 8LL;
            v18 = v9;
            v11 = (const WCHAR *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 64LL))(v10);
            v12 = *((_QWORD *)this + 21) + 8LL;
            v20 = v11;
            v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 80LL))(v12);
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
              (int)v8,
              (int)&unk_180194295,
              v13,
              v14,
              (__int64)&v21,
              &v20,
              (__int64)&v18);
          }
        }
      }
    }
  }
  else
  {
    v4 = (_QWORD *)((char *)this + 144);
  }
  if ( !*((_DWORD *)this + 40) )
  {
    v15 = 1751LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x88890001LL);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v19);
    if ( v1 )
      LeaveCriticalSection(v1);
    return 2290679809LL;
  }
  if ( !*v4 )
  {
    v15 = 1752LL;
    goto LABEL_14;
  }
  if ( !*((_QWORD *)this + 21) )
  {
    v15 = 1753LL;
    goto LABEL_14;
  }
  wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>::reset((__int64 *)this + 66);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v19);
  if ( v1 )
    LeaveCriticalSection(v1);
  return 0LL;
}
