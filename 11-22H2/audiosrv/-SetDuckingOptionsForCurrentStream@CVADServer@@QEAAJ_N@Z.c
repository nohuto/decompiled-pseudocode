/*
 * XREFs of ?SetDuckingOptionsForCurrentStream@CVADServer@@QEAAJ_N@Z @ 0x18011F930
 * Callers:
 *     AudioServerSetDuckingOptionsForCurrentStream @ 0x180125260 (AudioServerSetDuckingOptionsForCurrentStream.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009588 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _tlgKeywordOn @ 0x180020530 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180048A20 (-reset@-$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x1800DE620 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CVADServer::SetDuckingOptionsForCurrentStream(CVADServer *this, char a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rdi
  int (__fastcall *v8)(__int64, __int64 *); // rbx
  __int64 v9; // rcx
  __int64 *v10; // rax
  _DWORD *v11; // rbx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 (__fastcall *v16)(__int64, _QWORD); // rdi
  unsigned int v17; // eax
  int v18; // eax
  __int64 v19; // [rsp+40h] [rbp-20h] BYREF
  const WCHAR *v20; // [rsp+48h] [rbp-18h] BYREF
  int v21[2]; // [rsp+50h] [rbp-10h] BYREF
  struct _RTL_CRITICAL_SECTION *v22; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  char v24; // [rsp+90h] [rbp+30h] BYREF
  int v25; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v26; // [rsp+A8h] [rbp+48h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 192);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 192));
  v22 = v4;
  if ( !*((_DWORD *)this + 40) )
  {
    v5 = 2298LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x88890001LL);
    if ( v4 )
      LeaveCriticalSection(v4);
    return 2290679809LL;
  }
  v6 = *((_QWORD *)this + 21);
  if ( !v6 )
  {
    v5 = 2299LL;
    goto LABEL_5;
  }
  v26 = 0LL;
  v8 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(v6 + 8) + 24LL);
  wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>::reset(&v26);
  if ( v8(v6 + 8, &v26) >= 0 )
  {
    v10 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
            v9,
            _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    v11 = (_DWORD *)v10[1];
    if ( *v11 > 4u && tlgKeywordOn(v10[1], 2LL) )
    {
      v24 = a2;
      v25 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26 + 40LL))(v26);
      v20 = (const WCHAR *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 18) + 8LL) + 64LL))(*((_QWORD *)this + 18) + 8LL);
      *(_QWORD *)v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 21) + 8LL) + 80LL))(*((_QWORD *)this + 21) + 8LL);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
        (__int64)v11,
        byte_1801941B6,
        v12,
        v13,
        (__int64)v21,
        &v20,
        (__int64)&v25,
        (__int64)&v24);
    }
    v14 = *(_QWORD *)(*((_QWORD *)this + 21) + 24LL);
    if ( a2 )
      (*(void (**)(void))(v14 + 40))();
    else
      (*(void (**)(void))(v14 + 32))();
    v19 = 0LL;
    (**(void (__fastcall ***)(struct IAudioPolicyManager *, GUID *, __int64 *))g_PolicyManager)(
      g_PolicyManager,
      &GUID_7cd77114_b031_4a63_bf09_9fd46c7629d0,
      &v19);
    v15 = v19;
    v16 = *(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v19 + 120LL);
    v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26 + 48LL))(v26);
    v18 = v16(v15, v17);
    if ( v18 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x914,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v18);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v19);
  }
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v26);
  if ( v4 )
    LeaveCriticalSection(v4);
  return 0LL;
}
