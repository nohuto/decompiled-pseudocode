/*
 * XREFs of ?PreStartStream@CVADServer@@UEAAJXZ @ 0x18011EA30
 * Callers:
 *     AudioServerPreStartStream @ 0x1801248F0 (AudioServerPreStartStream.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180015400 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate.c)
 *     _tlgKeywordOn @ 0x180020530 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180048A20 (-reset@-$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CVADServer::PreStartStream(CVADServer *this)
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
  __int64 (__fastcall *v17)(struct IAudioPolicyManager *, __int64, char *); // rbx
  int v18; // eax
  unsigned int v19; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  int v21; // [rsp+80h] [rbp+40h] BYREF
  __int64 v22; // [rsp+88h] [rbp+48h] BYREF
  const WCHAR *v23; // [rsp+90h] [rbp+50h] BYREF
  __int64 v24; // [rsp+98h] [rbp+58h] BYREF

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 192);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 192));
  v22 = 0LL;
  v3 = *((_QWORD *)this + 21);
  if ( v3 )
  {
    v4 = (_QWORD *)((char *)this + 144);
    if ( *((_QWORD *)this + 18) )
    {
      v5 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(v3 + 8) + 24LL);
      wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>::reset(&v22);
      if ( v5(v3 + 8, &v22) >= 0 )
      {
        v7 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
               v6,
               _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
        v8 = (_DWORD *)v7[1];
        if ( *v8 > 4u )
        {
          if ( tlgKeywordOn(v7[1], 512LL) )
          {
            v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 40LL))(v22);
            v10 = *((_QWORD *)this + 18) + 8LL;
            v21 = v9;
            v11 = (const WCHAR *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 64LL))(v10);
            v12 = *((_QWORD *)this + 21) + 8LL;
            v23 = v11;
            v24 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 80LL))(v12);
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
              (int)v8,
              (int)&unk_1801942FD,
              v13,
              v14,
              (__int64)&v24,
              &v23,
              (__int64)&v21);
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
    v15 = 1716LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x88890001LL);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v22);
    if ( v1 )
      LeaveCriticalSection(v1);
    return 2290679809LL;
  }
  if ( !*v4 )
  {
    v15 = 1717LL;
    goto LABEL_14;
  }
  if ( !*((_QWORD *)this + 21) )
  {
    v15 = 1718LL;
    goto LABEL_14;
  }
  wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>::reset((__int64 *)this + 66);
  v17 = *(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, char *))(*(_QWORD *)g_PolicyManager + 224LL);
  wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>::reset((__int64 *)this + 66);
  v18 = v17(
          g_PolicyManager,
          (*((_QWORD *)this + 21) + 8LL) & -(__int64)(*((_QWORD *)this + 21) != 0LL),
          (char *)this + 528);
  v19 = v18;
  if ( v18 >= 0 )
  {
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v22);
    if ( v1 )
      LeaveCriticalSection(v1);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6BC,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v18);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v22);
    if ( v1 )
      LeaveCriticalSection(v1);
    return v19;
  }
}
