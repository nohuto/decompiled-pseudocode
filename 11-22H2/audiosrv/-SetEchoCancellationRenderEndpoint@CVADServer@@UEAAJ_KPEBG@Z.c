/*
 * XREFs of ?SetEchoCancellationRenderEndpoint@CVADServer@@UEAAJ_KPEBG@Z @ 0x18011FC00
 * Callers:
 *     AudioServerSetEchoCancellationRenderEndpoint @ 0x180125370 (AudioServerSetEchoCancellationRenderEndpoint.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U2@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@4AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180005074 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U2@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTempl.c)
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?ValidateStreamHandle@CVADServer@@IEAAJ_K@Z @ 0x180013530 (-ValidateStreamHandle@CVADServer@@IEAAJ_K@Z.c)
 *     _tlgKeywordOn @ 0x180020530 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180048A20 (-reset@-$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetEchoCancellationRenderEndpoint@CAudioStream@@QEAAJPEBG@Z @ 0x1800ED94C (-SetEchoCancellationRenderEndpoint@CAudioStream@@QEAAJPEBG@Z.c)
 */

__int64 __fastcall CVADServer::SetEchoCancellationRenderEndpoint(CVADServer *this, __int64 a2, char *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rsi
  __int64 v7; // rdx
  int v9; // eax
  __int64 v10; // r8
  const char *v11; // r9
  int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // rdi
  int (__fastcall *v15)(__int64, __int64 *); // rbx
  __int64 v16; // rcx
  __int64 *v17; // rax
  _DWORD *v18; // rbx
  int v19; // eax
  __int64 v20; // rcx
  const WCHAR *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  const WCHAR *v25; // [rsp+40h] [rbp-20h] BYREF
  const WCHAR *v26; // [rsp+48h] [rbp-18h] BYREF
  __int64 v27; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  int v29; // [rsp+90h] [rbp+30h] BYREF
  __int64 v30; // [rsp+A8h] [rbp+48h] BYREF

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 192);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 192));
  if ( !*((_DWORD *)this + 40) )
  {
    v7 = 5412LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x88890001LL);
    if ( v3 )
      LeaveCriticalSection(v3);
    return 2290679809LL;
  }
  if ( !*((_QWORD *)this + 18) )
  {
    v7 = 5413LL;
    goto LABEL_5;
  }
  v9 = CVADServer::ValidateStreamHandle(this, a2);
  v12 = v9;
  if ( v9 < 0 )
  {
    if ( v9 == -2005139336 )
    {
      if ( v3 )
        LeaveCriticalSection(v3);
      return 2289827960LL;
    }
    v13 = 5414LL;
    goto LABEL_14;
  }
  v12 = CAudioStream::SetEchoCancellationRenderEndpoint(*((CAudioStream **)this + 21), a3, v10, v11);
  if ( v12 < 0 )
  {
    v13 = 5416LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v12);
    if ( v3 )
      LeaveCriticalSection(v3);
    return (unsigned int)v12;
  }
  v14 = *((_QWORD *)this + 21);
  v30 = 0LL;
  v15 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(v14 + 8) + 24LL);
  wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>::reset(&v30);
  if ( v15(v14 + 8, &v30) >= 0 )
  {
    v17 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
            v16,
            _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    v18 = (_DWORD *)v17[1];
    if ( *v18 > 4u )
    {
      if ( tlgKeywordOn(v17[1], 512LL) )
      {
        v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v30 + 40LL))(v30);
        v20 = *((_QWORD *)this + 18) + 8LL;
        v29 = v19;
        v21 = (const WCHAR *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 64LL))(v20);
        v22 = *((_QWORD *)this + 21) + 8LL;
        v25 = v21;
        v26 = (const WCHAR *)a3;
        v27 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 80LL))(v22);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
          (int)v18,
          (int)&unk_180193E0E,
          v23,
          v24,
          (__int64)&v27,
          &v26,
          &v25,
          (__int64)&v29);
      }
    }
  }
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v30);
  if ( v3 )
    LeaveCriticalSection(v3);
  return 0LL;
}
