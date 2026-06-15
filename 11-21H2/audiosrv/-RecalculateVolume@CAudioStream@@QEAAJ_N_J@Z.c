/*
 * XREFs of ?RecalculateVolume@CAudioStream@@QEAAJ_N_J@Z @ 0x180014050
 * Callers:
 *     ?SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NMIPEAM_J@Z @ 0x180012470 (-SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NMIPEAM_J@Z.c)
 *     ?SetAllStreamVolumes@CAudioStream@@QEAAJIPEBMPEAH@Z @ 0x180012B70 (-SetAllStreamVolumes@CAudioStream@@QEAAJIPEBMPEAH@Z.c)
 *     ?AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x180013D50 (-AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 *     ?SetAllInitialStreamVolumes@CAudioStream@@QEAAJIPEBM_J@Z @ 0x1800E55E0 (-SetAllInitialStreamVolumes@CAudioStream@@QEAAJIPEBM_J@Z.c)
 *     ?SetPolicyVolume@CAudioStream@@QEAAJM_J_N@Z @ 0x1800E56F8 (-SetPolicyVolume@CAudioStream@@QEAAJM_J_N@Z.c)
 *     ?SetStreamChannelVolume@CAudioStream@@QEAAJIMPEAH@Z @ 0x1800E58C8 (-SetStreamChannelVolume@CAudioStream@@QEAAJIMPEAH@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180015934 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?ScalarFromTaper@CVolumeUnit@@QEAANN@Z @ 0x1800437FC (-ScalarFromTaper@CVolumeUnit@@QEAANN@Z.c)
 *     ??1Completer@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x18005DB34 (--1Completer@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x18005EF98 (atexit.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C5F8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800C7E10 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 *     ??$Write@U?$_tlgWrapperArray@$03@@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U5@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperArray@$03@@AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@7@Z @ 0x1800E2F28 (--$Write@U-$_tlgWrapperArray@$03@@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapS.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@3@Z @ 0x1800E30C0 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U1@@-$_tlgWriteTempl.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CAudioStream::RecalculateVolume(CAudioStream *this, char a2, __int64 a3)
{
  unsigned int v4; // r15d
  __int64 v5; // r8
  unsigned int v6; // edx
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rcx
  unsigned __int8 v10; // r14
  __int64 v11; // rdi
  __int64 v12; // r14
  double *v13; // rcx
  __int64 v14; // rax
  float v15; // xmm1_4
  __int64 v16; // rcx
  int v17; // eax
  int v18; // edi
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rcx
  int v22; // eax
  _QWORD *v23; // r12
  _QWORD *i; // r14
  unsigned int v26; // eax
  __int64 v27; // r8
  int v28; // eax
  int v29; // edi
  __int64 v30; // rdi
  int v31; // r8d
  int v32; // r9d
  int v33; // r8d
  int v34; // r9d
  __int64 v35; // rcx
  const wchar_t *v36; // rax
  __int16 v37; // dx
  __int64 v38; // rdx
  int v39; // [rsp+20h] [rbp-69h]
  int v40; // [rsp+50h] [rbp-39h] BYREF
  LPVOID Context; // [rsp+58h] [rbp-31h] BYREF
  __int64 v42; // [rsp+60h] [rbp-29h] BYREF
  __int64 v43; // [rsp+68h] [rbp-21h]
  union _RTL_RUN_ONCE *v44; // [rsp+70h] [rbp-19h] BYREF
  int v45; // [rsp+78h] [rbp-11h]
  const wchar_t *v46; // [rsp+80h] [rbp-9h] BYREF
  __int64 v47; // [rsp+88h] [rbp-1h] BYREF
  __int16 v48; // [rsp+90h] [rbp+7h]
  char *v49; // [rsp+98h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]
  __int64 v51; // [rsp+F0h] [rbp+67h] BYREF
  char v52; // [rsp+F8h] [rbp+6Fh]
  __int64 v53; // [rsp+100h] [rbp+77h]
  char *fPending; // [rsp+108h] [rbp+7Fh] BYREF

  v53 = a3;
  v52 = a2;
  v4 = 0;
  if ( !*((_QWORD *)this + 21) || !*((_QWORD *)this + 22) )
    goto LABEL_42;
  v5 = 0LL;
  v6 = *((_DWORD *)this + 21);
  if ( v6 )
  {
    do
    {
      *(_DWORD *)(*((_QWORD *)this + 14) + 4 * v5) = 1065353216;
      v5 = (unsigned int)(v5 + 1);
      v6 = *((_DWORD *)this + 21);
    }
    while ( (unsigned int)v5 < v6 );
  }
  v7 = *((_QWORD *)this + 14);
  if ( v6 >= 2 )
  {
    v8 = 0LL;
    v26 = ((v6 - 2) >> 1) + 1;
    v27 = v26;
    do
    {
      *(float *)(v7 + 4 * v8) = *(float *)(*((_QWORD *)this + 13) + 4 * v8) * *((float *)this + 23);
      *(float *)(v7 + 4 * v8 + 4) = *(float *)(*((_QWORD *)this + 13) + 4 * v8 + 4) * *((float *)this + 23);
      v8 += 2LL;
      --v27;
    }
    while ( v27 );
    if ( 2 * v26 >= v6 )
      goto LABEL_9;
    goto LABEL_8;
  }
  if ( v6 )
  {
    v8 = 0LL;
LABEL_8:
    *(float *)(v7 + 4 * v8) = *((float *)this + 23) * *(float *)(*((_QWORD *)this + 13) + 4 * v8);
  }
LABEL_9:
  v9 = *((_QWORD *)this + 12);
  v10 = *((_BYTE *)this + 520);
  LOBYTE(v51) = v10;
  if ( v9 < *((_QWORD *)this + 64) )
    v9 = *((_QWORD *)this + 64);
  v43 = v9;
  if ( v6 )
  {
    v11 = 0LL;
    v12 = v6;
    do
    {
      v13 = (double *)*((_QWORD *)this + 66);
      v14 = *((_QWORD *)this + 63);
      if ( v13 )
        v15 = CVolumeUnit::ScalarFromTaper(
                (CVolumeUnit *)v13,
                (v13[4] - v13[3]) * (float)(*(float *)(v11 + v7) * *(float *)(v11 + v14)) + v13[3]);
      else
        v15 = *(float *)(v11 + v7) * *(float *)(v11 + v14);
      *(float *)(v11 + v7) = v15;
      v11 += 4LL;
      --v12;
    }
    while ( v12 );
    v10 = v51;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 128));
  v49 = (char *)this + 128;
  v16 = *((_QWORD *)this + 22);
  if ( v16 )
  {
    v17 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v16 + 24LL))(v16, &v51);
    v18 = v17;
    if ( v17 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3FC,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
        (const char *)(unsigned int)v17,
        v39);
    if ( v18 == -2147417848 )
    {
      LOBYTE(v51) = 0;
      wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset((char *)this + 176);
    }
    v19 = *((_QWORD *)this + 22);
    if ( v19 && !v18 && ((_BYTE)v51 != 0) != (v10 != 0) )
    {
      v28 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v19 + 32LL))(v19, v10, 0LL, 0LL);
      v29 = v28;
      if ( v28 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x409,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
          (const char *)(unsigned int)v28,
          0);
        if ( v29 == -2147417848 )
          wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset((char *)this + 176);
      }
      else if ( *((_QWORD *)this + 8) )
      {
        v30 = *(_QWORD *)(wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                            retaddr,
                            _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                        + 8);
        if ( *(_DWORD *)v30 > 4u
          && (*(_QWORD *)(v30 + 16) & 0x400000000002LL) != 0
          && (*(_QWORD *)(v30 + 24) & 0x400000000002LL) == *(_QWORD *)(v30 + 24) )
        {
          LODWORD(fPending) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 40LL))(*((_QWORD *)this + 9));
          Context = (LPVOID)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 8) + 8LL) + 64LL))(*((_QWORD *)this + 8) + 8LL);
          v42 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 1) + 80LL))((char *)this + 8);
          v40 = v10;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
            v30,
            (unsigned int)&unk_180188E2B,
            v31,
            v32,
            (__int64)&v40,
            (__int64)&v42,
            (__int64)&Context,
            (__int64)&fPending);
        }
      }
    }
  }
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, (PBOOL)&fPending, &Context)
    && (_DWORD)fPending )
  {
    v44 = &`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
    Context = &qword_1801C2788;
    qword_1801C2788 = (__int64)&AudioSrvTelemetryProvider::`vftable';
    qword_1801C27A0 = (__int64)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    v45 = 0;
    wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer(&v44);
  }
  v20 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v20 > 4u && (*(_BYTE *)(v20 + 16) & 2) != 0 && (*(_QWORD *)(v20 + 24) & 2LL) == *(_QWORD *)(v20 + 24) )
  {
    v40 = *((_DWORD *)this + 23);
    LODWORD(v42) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 40LL))(*((_QWORD *)this + 9));
    v35 = *((_QWORD *)this + 8);
    if ( v35 )
      v36 = (const wchar_t *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v35 + 8) + 64LL))(v35 + 8);
    else
      v36 = L"null";
    v46 = v36;
    v44 = (union _RTL_RUN_ONCE *)*((_QWORD *)this + 49);
    LOBYTE(v51) = v10;
    v37 = *((_WORD *)this + 42);
    v47 = *((_QWORD *)this + 14);
    v48 = v37;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperArray<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v20,
      (unsigned int)&unk_180188DB6,
      v33,
      v34,
      (__int64)&v47,
      (__int64)&v51,
      (__int64)&v44,
      (__int64)&v46,
      (__int64)&v42,
      (__int64)&v40);
  }
  v21 = *((_QWORD *)this + 21);
  if ( v21 )
  {
    v51 = 0LL;
    if ( v52 )
    {
      v38 = v53;
      if ( v53 <= v43 )
        v38 = v43;
      v53 = v38;
      v22 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v21 + 48LL))(
              v21,
              *((unsigned int *)this + 21),
              *((_QWORD *)this + 14),
              &v51);
    }
    else
    {
      v22 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v21 + 32LL))(
              v21,
              *((unsigned int *)this + 21),
              *((_QWORD *)this + 14),
              &v51);
    }
    v4 = v22;
    if ( v22 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x449,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
        (const char *)(unsigned int)v22,
        1);
    if ( v4 == -2147417848 )
    {
      wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset((char *)this + 168);
      v4 = 0;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 248));
  fPending = (char *)this + 248;
  LODWORD(v51) = 0;
  (*(void (__fastcall **)(char *, __int64 *))(*((_QWORD *)this + 1) + 88LL))((char *)this + 8, &v51);
  v23 = (_QWORD *)*((_QWORD *)this + 37);
  for ( i = (_QWORD *)*((_QWORD *)this + 36); i != v23; ++i )
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*i + 24LL))(*i, *((_QWORD *)this + 6));
  if ( this != (CAudioStream *)-248LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 248));
  if ( this != (CAudioStream *)-128LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 128));
LABEL_42:
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 64) = 0LL;
  return v4;
}
