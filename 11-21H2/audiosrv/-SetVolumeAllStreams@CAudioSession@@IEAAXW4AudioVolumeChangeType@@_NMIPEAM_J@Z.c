/*
 * XREFs of ?SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NMIPEAM_J@Z @ 0x180012470
 * Callers:
 *     ?UpdateAudioVolume@CPerStreamVolumeAudioSession@@EEAAJW4AudioVolumeChangeType@@_NMIPEAM_J@Z @ 0x180012430 (-UpdateAudioVolume@CPerStreamVolumeAudioSession@@EEAAJW4AudioVolumeChangeType@@_NMIPEAM_J@Z.c)
 *     ?UpdateAudioVolume@CPerEndpointVolumeAudioSession@@EEAAJW4AudioVolumeChangeType@@_NMIPEAM_J@Z @ 0x1800DB090 (-UpdateAudioVolume@CPerEndpointVolumeAudioSession@@EEAAJW4AudioVolumeChangeType@@_NMIPEAM_J@Z.c)
 * Callees:
 *     ?UpdateStreamPriority@CAudioStream@@QEAAJXZ @ 0x1800122E8 (-UpdateStreamPriority@CAudioStream@@QEAAJXZ.c)
 *     ?RecalculateVolume@CAudioStream@@QEAAJ_N_J@Z @ 0x180014050 (-RecalculateVolume@CAudioStream@@QEAAJ_N_J@Z.c)
 *     ?GetPolicyVolumeForAudioStream@@YAXPEAUIAudioPolicyManager@@PEAUIAudioStreamPolicyVolumeClient@@PEBU_tlgProvider_t@@PEAMPEA_JW4GPV_REASON@@@Z @ 0x1800143F0 (-GetPolicyVolumeForAudioStream@@YAXPEAUIAudioPolicyManager@@PEAUIAudioStreamPolicyVolumeClient@@.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180015934 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??1Completer@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x18005DB34 (--1Completer@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x18005EF98 (atexit.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C5F8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_q @ 0x1800C9BAC (WPP_SF_q.c)
 *     WPP_SF_qq @ 0x1800DB994 (WPP_SF_qq.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@3@Z @ 0x1800E30C0 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U1@@-$_tlgWriteTempl.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CAudioSession::SetVolumeAllStreams(__int64 a1, int a2, char a3, float a4, unsigned int a5, float *a6)
{
  struct _RTL_CRITICAL_SECTION *v9; // rbx
  CAudioStream **v10; // rsi
  CAudioStream **v11; // r14
  float *v12; // rbx
  CAudioStream *v13; // r15
  char *v14; // rdx
  CAudioStream *v15; // r15
  __int64 v16; // r8
  unsigned int v17; // r10d
  float v18; // xmm0_4
  int v19; // r15d
  wil::details::in1diag3 *v20; // rcx
  CAudioStream *v21; // r9
  __int64 v22; // rdx
  unsigned int v23; // eax
  __int64 v24; // rdx
  int v25; // eax
  int updated; // eax
  __int64 v27; // rax
  int v28; // r8d
  int v29; // r9d
  int v30; // eax
  __int64 v31; // rdx
  float v32; // xmm1_4
  float *v33; // rax
  __int64 v34; // rcx
  __int64 i; // rcx
  int *v36; // [rsp+28h] [rbp-81h]
  int v37; // [rsp+48h] [rbp-61h] BYREF
  __int64 v38; // [rsp+50h] [rbp-59h]
  WINBOOL fPending; // [rsp+58h] [rbp-51h] BYREF
  int v40; // [rsp+5Ch] [rbp-4Dh] BYREF
  int v41; // [rsp+60h] [rbp-49h] BYREF
  int v42[2]; // [rsp+68h] [rbp-41h] BYREF
  __int64 v43; // [rsp+70h] [rbp-39h] BYREF
  __int64 v44; // [rsp+78h] [rbp-31h] BYREF
  __int64 v45; // [rsp+80h] [rbp-29h]
  struct _RTL_CRITICAL_SECTION *v46; // [rsp+88h] [rbp-21h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+90h] [rbp-19h] BYREF
  union _RTL_RUN_ONCE *v48; // [rsp+98h] [rbp-11h] BYREF
  int v49; // [rsp+A0h] [rbp-9h]
  __int64 v50; // [rsp+A8h] [rbp-1h]
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+47h]
  LPVOID Context; // [rsp+F8h] [rbp+4Fh] BYREF

  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 66LL, &WPP_d4601149da203bf03f1316021d4590fb_Traceguids, a1);
  }
  (*(void (__fastcall **)(struct IAudioPolicyManager *, LPCRITICAL_SECTION *))(*(_QWORD *)g_PolicyManager + 192LL))(
    g_PolicyManager,
    &lpCriticalSection);
  v9 = (struct _RTL_CRITICAL_SECTION *)(a1 + 64);
  v46 = (struct _RTL_CRITICAL_SECTION *)(a1 + 64);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 64));
  v50 = a1 + 64;
  v10 = *(CAudioStream ***)(a1 + 112);
  v11 = *(CAudioStream ***)(a1 + 120);
  if ( v10 != v11 )
  {
    v12 = a6;
    while ( 1 )
    {
      v13 = *v10;
      v37 = 1065353216;
      *(_QWORD *)v42 = 0LL;
      Context = 0LL;
      if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context)
        && fPending )
      {
        v48 = &`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
        Context = &qword_1801C2788;
        qword_1801C2788 = (__int64)&AudioSrvTelemetryProvider::`vftable';
        qword_1801C27A0 = (__int64)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(_lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
        v49 = 0;
        wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer(&v48);
      }
      if ( v13 )
        v14 = (char *)v13 + 16;
      else
        v14 = 0LL;
      v36 = v42;
      GetPolicyVolumeForAudioStream(g_PolicyManager, v14, *((_QWORD *)Context + 1), &v37);
      if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
      {
        WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), 67LL, &WPP_d4601149da203bf03f1316021d4590fb_Traceguids, a1, *v10);
      }
      v15 = *v10;
      if ( a2 == 3 )
      {
        v16 = *((_BYTE *)v15 + 240) != 0 ? 0x3D0900 : 0;
      }
      else if ( a2 == 4 )
      {
        v16 = *((_BYTE *)v15 + 240) != 0 ? 0x2710 : 0;
      }
      else
      {
        v16 = *(_QWORD *)v42;
      }
      v38 = v16;
      v17 = a5;
      LOBYTE(Context) = a5 == 0;
      v18 = *(float *)&v37;
      *((_QWORD *)v15 + 12) = v16;
      if ( v18 == *((float *)v15 + 23) )
        goto LABEL_20;
      *((float *)v15 + 23) = v18;
      if ( *((_QWORD *)v15 + 8) )
      {
        v27 = *(_QWORD *)(wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                            (unsigned int)(a2 - 3),
                            _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                        + 8);
        v45 = v27;
        if ( *(_DWORD *)v27 > 4u
          && (*(_BYTE *)(v27 + 16) & 2) != 0
          && (*(_QWORD *)(v27 + 24) & 2LL) == *(_QWORD *)(v27 + 24) )
        {
          v40 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v15 + 9) + 40LL))(*((_QWORD *)v15 + 9));
          v43 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)v15 + 8) + 8LL) + 64LL))(*((_QWORD *)v15 + 8) + 8LL);
          v44 = (*(__int64 (__fastcall **)(__int64))(*((_QWORD *)v15 + 1) + 80LL))((__int64)v15 + 8);
          v41 = v37;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
            v45,
            (unsigned int)&unk_180188E86,
            v28,
            v29,
            (__int64)&v41,
            (__int64)&v44,
            (__int64)&v43,
            (__int64)&v40);
        }
        v16 = v38;
        v17 = a5;
      }
      if ( !(_BYTE)Context )
        goto LABEL_20;
      v30 = CAudioStream::RecalculateVolume(v15, 0, 0LL);
      v19 = v30;
      if ( v30 >= 0 )
        break;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x376,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
        (const char *)(unsigned int)v30,
        (int)v36);
      v16 = v38;
      v17 = a5;
LABEL_21:
      v20 = retaddr;
      if ( v19 < 0 )
      {
        v31 = 3824LL;
      }
      else
      {
        if ( !v17 )
          goto LABEL_31;
        *((_BYTE *)*v10 + 520) = a3;
        v21 = *v10;
        v22 = 0LL;
        v23 = *((_DWORD *)*v10 + 21);
        if ( v23 )
        {
          do
          {
            *(float *)(*((_QWORD *)v21 + 63) + 4 * v22) = a4;
            v22 = (unsigned int)(v22 + 1);
            v23 = *((_DWORD *)v21 + 21);
          }
          while ( (unsigned int)v22 < v23 );
        }
        if ( v17 < v23 )
        {
          v32 = 0.0;
          v33 = v12;
          v34 = v17;
          do
          {
            v32 = fmaxf(v32, *v33++);
            --v34;
          }
          while ( v34 );
          for ( i = 0LL; (unsigned int)i < *((_DWORD *)v21 + 21); i = (unsigned int)(i + 1) )
            *(float *)(*((_QWORD *)v21 + 63) + 4 * i) = v32 * *(float *)(*((_QWORD *)v21 + 63) + 4 * i);
        }
        else
        {
          v24 = 0LL;
          if ( v23 )
          {
            do
            {
              *(float *)(*((_QWORD *)v21 + 63) + 4 * v24) = v12[v24] * *(float *)(*((_QWORD *)v21 + 63) + 4 * v24);
              v24 = (unsigned int)(v24 + 1);
            }
            while ( (unsigned int)v24 < *((_DWORD *)v21 + 21) );
          }
        }
        *((_QWORD *)v21 + 64) = v16;
        v25 = CAudioStream::RecalculateVolume(v21, 0, 0LL);
        v19 = v25;
        if ( v25 < 0 )
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x568,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
            (const char *)(unsigned int)v25,
            (int)v36);
        else
          v19 = 0;
        v20 = retaddr;
        if ( v19 >= 0 )
          goto LABEL_31;
        v31 = 3832LL;
      }
      wil::details::in1diag3::_Log_Hr(
        v20,
        (void *)v31,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
        (const char *)(unsigned int)v19,
        (int)v36);
LABEL_31:
      updated = CAudioStream::UpdateStreamPriority(*v10);
      if ( updated < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xEFE,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
          (const char *)(unsigned int)updated,
          (int)v36);
      if ( ++v10 == v11 )
      {
        v9 = v46;
        goto LABEL_4;
      }
    }
    v16 = v38;
    v17 = a5;
LABEL_20:
    v19 = 0;
    goto LABEL_21;
  }
LABEL_4:
  if ( v9 )
    LeaveCriticalSection(v9);
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
}
