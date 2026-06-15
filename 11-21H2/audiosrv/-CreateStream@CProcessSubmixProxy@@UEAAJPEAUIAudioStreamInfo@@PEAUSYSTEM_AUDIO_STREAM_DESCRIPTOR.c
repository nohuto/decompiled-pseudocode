/*
 * XREFs of ?CreateStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@KPEAUSystemAudioStream@@@Z @ 0x18001A2C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180002C20 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18000ABEC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCrossProcessBaseMemory@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000CCB0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCrossPro.c)
 *     ?AddStream@CProcessSubmixProxy@@IEAAJPEAUIAudioStreamInfo@@PEAUSystemAudioStream@@K@Z @ 0x180018E70 (-AddStream@CProcessSubmixProxy@@IEAAJPEAUIAudioStreamInfo@@PEAUSystemAudioStream@@K@Z.c)
 *     ??1Completer@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x18005DB34 (--1Completer@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     atexit @ 0x18005EF98 (atexit.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18005EFFC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18005F9D8 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C5F8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$MakeAllocator@VAvoidEndpointPolicyRule@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800C6A24 (--1-$MakeAllocator@VAvoidEndpointPolicyRule@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??_G_WorkTask@@QEAAPEAXI@Z @ 0x1800C6CEC (--_G_WorkTask@@QEAAPEAXI@Z.c)
 *     ??$MakeAndInitialize@VCStandardEvent@@UICrossProcessEvent@@PEAX@Details@WRL@Microsoft@@YAJPEAPEAUICrossProcessEvent@@$$QEAPEAX@Z @ 0x1800ECD44 (--$MakeAndInitialize@VCStandardEvent@@UICrossProcessEvent@@PEAX@Details@WRL@Microsoft@@YAJPEAPEA.c)
 *     ?close_reset@?$resource_policy@PEAXP6AHPEAX@Z$1?CloseHandle@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@SAXPEAX@Z @ 0x1800F09D8 (-close_reset@-$resource_policy@PEAXP6AHPEAX@Z$1-CloseHandle@@YAH0@ZU-$integral_constant@_K$0A@@w.c)
 *     ?UpdateCountOfFormatSensitiveClients@CProcessSubmixProxy@@IEAAXH@Z @ 0x1800FABDC (-UpdateCountOfFormatSensitiveClients@CProcessSubmixProxy@@IEAAXH@Z.c)
 *     ?UpdateCountOfLazyRequestClients@CProcessSubmixProxy@@IEAAXH@Z @ 0x1800FACCC (-UpdateCountOfLazyRequestClients@CProcessSubmixProxy@@IEAAXH@Z.c)
 *     ?UpdateCountOfPeriodicitySensitiveClients@CProcessSubmixProxy@@IEAAXH@Z @ 0x1800FADB8 (-UpdateCountOfPeriodicitySensitiveClients@CProcessSubmixProxy@@IEAAXH@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CProcessSubmixProxy::CreateStream(
        CProcessSubmixProxy *this,
        struct IAudioStreamInfo *a2,
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a3,
        struct IAudioGraphCallback *a4,
        unsigned int a5,
        struct SystemAudioStream *a6)
{
  int v10; // eax
  unsigned int v11; // r15d
  int v12; // eax
  unsigned int v13; // edi
  __int64 v14; // rcx
  _OWORD *v15; // rcx
  int *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  _OWORD *v19; // rcx
  int *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  _OWORD *v23; // rcx
  int *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  _QWORD *v27; // rax
  __int64 v28; // rsi
  unsigned int Interface; // edi
  int v30; // eax
  __int64 v31; // rdi
  char *v32; // rcx
  __int64 v33; // rsi
  CProcessSubmixProxy *v34; // rdi
  CProcessSubmixProxy *v35; // rax
  CProcessSubmixProxy *v36; // rcx
  __int64 v37; // rsi
  CProcessSubmixProxy *v38; // rsi
  __int64 v39; // rbx
  int v40; // edi
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // r14
  signed int v44; // edi
  _QWORD *v45; // rax
  _QWORD *v46; // rsi
  HANDLE ProcessHeap; // rax
  _DWORD *v48; // rax
  _DWORD *v49; // rdi
  _DWORD *v50; // rdx
  std::_Ref_count_base *v51; // rcx
  _BYTE *v52; // rdx
  struct _TP_WORK *ThreadpoolWork; // r14
  _QWORD *v54; // rdx
  int v56; // eax
  __int64 v57; // rdx
  int v58; // eax
  int v59; // eax
  unsigned __int64 v60; // r9
  __int64 v61; // rdx
  _OWORD *v62; // rcx
  _OWORD *v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // rcx
  PTP_POOL Threadpool; // rax
  signed int LastError; // eax
  signed int v69; // eax
  signed int v70; // eax
  int v71; // [rsp+20h] [rbp-E0h]
  int v72; // [rsp+20h] [rbp-E0h]
  int v73; // [rsp+20h] [rbp-E0h]
  __int64 v74; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v75; // [rsp+38h] [rbp-C8h] BYREF
  WINBOOL fPending; // [rsp+40h] [rbp-C0h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v78[2]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD *v79; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v80; // [rsp+68h] [rbp-98h] BYREF
  __int64 v81; // [rsp+70h] [rbp-90h] BYREF
  CProcessSubmixProxy *v82; // [rsp+78h] [rbp-88h] BYREF
  union _RTL_RUN_ONCE *v83; // [rsp+80h] [rbp-80h] BYREF
  int v84; // [rsp+88h] [rbp-78h]
  _QWORD v85[7]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD *v86; // [rsp+C8h] [rbp-38h]
  _BYTE v87[56]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE *v88; // [rsp+108h] [rbp+8h]
  __int128 v89; // [rsp+110h] [rbp+10h] BYREF
  int v90; // [rsp+120h] [rbp+20h]
  __int64 v91; // [rsp+128h] [rbp+28h]
  __int64 v92; // [rsp+130h] [rbp+30h]
  int v93; // [rsp+140h] [rbp+40h] BYREF
  __int64 v94; // [rsp+148h] [rbp+48h]
  int v95; // [rsp+268h] [rbp+168h] BYREF
  __int64 v96; // [rsp+270h] [rbp+170h]
  int v97; // [rsp+390h] [rbp+290h] BYREF
  __int64 v98; // [rsp+398h] [rbp+298h]
  int v99; // [rsp+4B8h] [rbp+3B8h]
  _DWORD v100[80]; // [rsp+4C0h] [rbp+3C0h] BYREF
  unsigned __int16 *v101; // [rsp+600h] [rbp+500h] BYREF
  int v102; // [rsp+608h] [rbp+508h]
  int v103; // [rsp+60Ch] [rbp+50Ch]
  void *v104; // [rsp+610h] [rbp+510h]
  int v105; // [rsp+618h] [rbp+518h]
  int v106; // [rsp+61Ch] [rbp+51Ch]
  CProcessSubmixProxy **v107; // [rsp+620h] [rbp+520h]
  __int64 v108; // [rsp+628h] [rbp+528h]
  __int64 *v109; // [rsp+630h] [rbp+530h]
  __int64 v110; // [rsp+638h] [rbp+538h]
  __int64 *v111; // [rsp+640h] [rbp+540h]
  __int64 v112; // [rsp+648h] [rbp+548h]
  wil::details::in1diag3 *retaddr; // [rsp+6A8h] [rbp+5A8h]

  v10 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 24) + 288LL))(*((_QWORD *)this + 24));
  v11 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x98D,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v10,
      v71);
    return v11;
  }
  memset_0(&v89, 0, 0x4E8uLL);
  v12 = (*(__int64 (__fastcall **)(_QWORD, struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *, struct IAudioGraphCallback *, __int128 *))(**((_QWORD **)this + 5) + 24LL))(
          *((_QWORD *)this + 5),
          a3,
          a4,
          &v89);
  v13 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x990,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v12,
      v71);
    return v13;
  }
  v14 = *((_QWORD *)a6 + 82);
  *((_QWORD *)a6 + 82) = 0LL;
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  if ( v97 == 1 )
  {
    v75 = v98;
    v56 = Microsoft::WRL::Details::MakeAndInitialize<CStandardEvent,ICrossProcessEvent,void *>((char *)a6 + 656, &v75);
    Interface = v56;
    if ( v56 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x61,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v56,
        v71);
      v57 = 133LL;
      goto LABEL_108;
    }
  }
  else
  {
    v15 = (_OWORD *)((char *)a6 + 664);
    v16 = &v97;
    v17 = 2LL;
    do
    {
      *v15 = *(_OWORD *)v16;
      v15[1] = *((_OWORD *)v16 + 1);
      v15[2] = *((_OWORD *)v16 + 2);
      v15[3] = *((_OWORD *)v16 + 3);
      v15[4] = *((_OWORD *)v16 + 4);
      v15[5] = *((_OWORD *)v16 + 5);
      v15[6] = *((_OWORD *)v16 + 6);
      v15 += 8;
      *(v15 - 1) = *((_OWORD *)v16 + 7);
      v16 += 32;
      --v17;
    }
    while ( v17 );
    *v15 = *(_OWORD *)v16;
    v15[1] = *((_OWORD *)v16 + 1);
    *((_QWORD *)v15 + 4) = *((_QWORD *)v16 + 4);
  }
  v97 = 0;
  v18 = *((_QWORD *)a6 + 44);
  *((_QWORD *)a6 + 44) = 0LL;
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  if ( v95 == 1 )
  {
    v74 = v96;
    v58 = Microsoft::WRL::Details::MakeAndInitialize<CStandardEvent,ICrossProcessEvent,void *>((char *)a6 + 352, &v74);
    Interface = v58;
    if ( v58 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x61,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v58,
        v71);
      v57 = 134LL;
      goto LABEL_108;
    }
  }
  else
  {
    v19 = (_OWORD *)((char *)a6 + 360);
    v20 = &v95;
    v21 = 2LL;
    do
    {
      *v19 = *(_OWORD *)v20;
      v19[1] = *((_OWORD *)v20 + 1);
      v19[2] = *((_OWORD *)v20 + 2);
      v19[3] = *((_OWORD *)v20 + 3);
      v19[4] = *((_OWORD *)v20 + 4);
      v19[5] = *((_OWORD *)v20 + 5);
      v19[6] = *((_OWORD *)v20 + 6);
      v19 += 8;
      *(v19 - 1) = *((_OWORD *)v20 + 7);
      v20 += 32;
      --v21;
    }
    while ( v21 );
    *v19 = *(_OWORD *)v20;
    v19[1] = *((_OWORD *)v20 + 1);
    *((_QWORD *)v19 + 4) = *((_QWORD *)v20 + 4);
  }
  v95 = 0;
  v22 = *((_QWORD *)a6 + 6);
  *((_QWORD *)a6 + 6) = 0LL;
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  if ( v93 != 1 )
  {
    v23 = (_OWORD *)((char *)a6 + 56);
    v24 = &v93;
    v25 = 2LL;
    do
    {
      *v23 = *(_OWORD *)v24;
      v23[1] = *((_OWORD *)v24 + 1);
      v23[2] = *((_OWORD *)v24 + 2);
      v23[3] = *((_OWORD *)v24 + 3);
      v23[4] = *((_OWORD *)v24 + 4);
      v23[5] = *((_OWORD *)v24 + 5);
      v23[6] = *((_OWORD *)v24 + 6);
      v23 += 8;
      *(v23 - 1) = *((_OWORD *)v24 + 7);
      v24 += 32;
      --v25;
    }
    while ( v25 );
    *v23 = *(_OWORD *)v24;
    v23[1] = *((_OWORD *)v24 + 1);
    *((_QWORD *)v23 + 4) = *((_QWORD *)v24 + 4);
LABEL_21:
    v93 = 0;
    v26 = *((_QWORD *)a6 + 121);
    *((_QWORD *)a6 + 121) = 0LL;
    if ( v26 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
    if ( v100[0] != 1 )
    {
      v62 = (_OWORD *)((char *)a6 + 976);
      v63 = v100;
      v64 = 2LL;
      do
      {
        *v62 = *v63;
        v62[1] = v63[1];
        v62[2] = v63[2];
        v62[3] = v63[3];
        v62[4] = v63[4];
        v62[5] = v63[5];
        v62[6] = v63[6];
        v62 += 8;
        *(v62 - 1) = v63[7];
        v63 += 8;
        --v64;
      }
      while ( v64 );
      *v62 = *v63;
      v62[1] = v63[1];
      *((_QWORD *)v62 + 4) = *((_QWORD *)v63 + 4);
LABEL_29:
      v100[0] = 0;
      *(_OWORD *)a6 = v89;
      *((_DWORD *)a6 + 4) = v90;
      v31 = v91;
      v32 = (char *)*((_QWORD *)a6 + 3);
      if ( (unsigned __int64)(v32 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        wil::details::resource_policy<void *,int (*)(void *),&int CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>::close_reset(v32);
      *((_QWORD *)a6 + 3) = v31;
      *((_QWORD *)a6 + 4) = v92;
      *((_DWORD *)a6 + 240) = v99;
      *((_DWORD *)a6 + 318) = v100[74];
      *((_DWORD *)a6 + 319) = v100[75];
      *((_DWORD *)a6 + 320) = v100[76];
      Context = 0LL;
      if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context)
        && fPending )
      {
        v83 = &`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
        Context = &qword_1801C2788;
        qword_1801C2788 = (__int64)&AudioSrvTelemetryProvider::`vftable';
        qword_1801C27A0 = (__int64)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(_lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
        v84 = 0;
        wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer(&v83);
      }
      v33 = *((_QWORD *)Context + 1);
      if ( *(_DWORD *)v33 <= 4u )
      {
        v34 = (CProcessSubmixProxy *)((char *)this - 8);
      }
      else
      {
        v80 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 80LL))(a2);
        v81 = *((_QWORD *)this + 24);
        v34 = (CProcessSubmixProxy *)((char *)this - 8);
        if ( this == (CProcessSubmixProxy *)8 )
          v35 = 0LL;
        else
          v35 = this;
        v82 = v35;
        v111 = &v80;
        v112 = 8LL;
        v109 = &v81;
        v110 = 8LL;
        v107 = &v82;
        v108 = 8LL;
        v78[0] = 0x40B000000LL;
        v78[1] = 0LL;
        v101 = *(unsigned __int16 **)(v33 + 8);
        v102 = *v101;
        v103 = 2;
        v104 = &unk_180189813;
        v105 = 70;
        v106 = 1;
        LODWORD(v74) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
        EtwEventWriteTransfer(*(_QWORD *)(v33 + 32), v78, 0LL, 0LL, 5, &v101);
      }
      v36 = 0LL;
      if ( v34 )
        v36 = this;
      v37 = *((_QWORD *)a6 + 5);
      *((_QWORD *)a6 + 5) = v36;
      if ( v36 )
        (*(void (__fastcall **)(CProcessSubmixProxy *))(*(_QWORD *)v36 + 8LL))(v36);
      if ( v37 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
      if ( (*(unsigned __int8 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 128LL))(a2) )
      {
        CProcessSubmixProxy::UpdateCountOfPeriodicitySensitiveClients(v34, 1);
        v38 = v34;
      }
      else
      {
        v38 = (CProcessSubmixProxy *)((char *)this - 8);
      }
      if ( (*(unsigned __int8 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 136LL))(a2) )
        CProcessSubmixProxy::UpdateCountOfFormatSensitiveClients(v38, 1);
      if ( (*(unsigned __int8 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 144LL))(a2) )
        CProcessSubmixProxy::UpdateCountOfLazyRequestClients(v38, 1);
      if ( (*(unsigned int (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 56LL))(a2) != 2 )
        ++*((_DWORD *)this + 28);
      CProcessSubmixProxy::AddStream(v38, a2, a6, a5);
      if ( (*(unsigned int (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 56LL))(a2) )
        return 0LL;
      v39 = 0LL;
      v74 = 0LL;
      v40 = (**(__int64 (__fastcall ***)(CProcessSubmixProxy *, GUID *, __int64 *))v34)(
              v34,
              &GUID_00000038_0000_0000_c000_000000000046,
              &v74);
      if ( v40 < 0 )
      {
        v65 = v74;
        if ( v74 )
        {
          v74 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v65 + 16LL))(v65);
        }
      }
      else
      {
        v75 = 0LL;
        v40 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v74 + 24LL))(v74, &v75);
        if ( v40 < 0 )
        {
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v75);
          v66 = v74;
          if ( v74 )
          {
            v74 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v66 + 16LL))(v66);
          }
        }
        else
        {
          v41 = v75;
          v39 = v75;
          if ( v75 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v75 + 8LL))(v75);
            v41 = v75;
          }
          if ( v41 )
          {
            v75 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
          }
          v42 = v74;
          if ( v74 )
          {
            v74 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
          }
          v40 = 0;
        }
      }
      if ( v40 < 0 )
      {
LABEL_91:
        if ( v39 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
        return 0LL;
      }
      v43 = (*(__int64 (__fastcall **)(struct IAudioService *))(*(_QWORD *)g_AudioService + 120LL))(g_AudioService);
      if ( v39 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 8LL))(v39);
      v85[0] = off_180167D88;
      v85[1] = v39;
      v86 = v85;
      v44 = 0;
      if ( *(_BYTE *)(v43 + 80) )
      {
LABEL_85:
        if ( v86 )
        {
          v54 = v85;
          if ( v86 == v85 )
            v54 = 0LL;
          else
            LOBYTE(v54) = 1;
          (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v86 + 32LL))(v86, v54);
          v86 = 0LL;
        }
        if ( v44 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x9B5,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
            (const char *)(unsigned int)v44,
            v71);
        goto LABEL_91;
      }
      if ( !*(_QWORD *)v43 )
      {
        Threadpool = CreateThreadpool(0LL);
        *(_QWORD *)v43 = Threadpool;
        if ( !Threadpool )
        {
          LastError = GetLastError();
          v44 = LastError;
          if ( LastError > 0 )
            v44 = (unsigned __int16)LastError | 0x80070000;
          if ( v44 < 0 )
            goto LABEL_85;
        }
        if ( !SetThreadpoolThreadMinimum(*(PTP_POOL *)v43, 1u) )
        {
          v69 = GetLastError();
          v44 = v69;
          if ( v69 > 0 )
            v44 = (unsigned __int16)v69 | 0x80070000;
          if ( v44 < 0 )
            goto LABEL_85;
        }
        SetThreadpoolThreadMaximum(*(PTP_POOL *)v43, 1u);
        *(_QWORD *)(v43 + 16) = *(_QWORD *)v43;
      }
      v45 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
      v46 = v45;
      if ( !v45 )
      {
        v44 = -2147024882;
        goto LABEL_85;
      }
      *v45 = 0LL;
      v45[1] = 0LL;
      v45[2] = 0LL;
      v88 = 0LL;
      if ( v86 )
        v88 = (_BYTE *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))*v86)(v86, v87);
      v46[2] = v43;
      ProcessHeap = GetProcessHeap();
      v48 = HeapAlloc(ProcessHeap, 0, 0x50uLL);
      v49 = v48;
      if ( v48 )
      {
        v48[2] = 1;
        v48[3] = 1;
        *(_QWORD *)v48 = &std::_Ref_count_obj2<std::function<void (void)>>::`vftable';
        *((_QWORD *)v48 + 9) = 0LL;
        if ( v88 )
          *((_QWORD *)v48 + 9) = (**(__int64 (__fastcall ***)(_BYTE *, __int64))v88)(v88, (__int64)(v48 + 4));
      }
      else
      {
        v49 = 0LL;
      }
      v50 = v49 + 4;
      *v46 = v49 + 4;
      v51 = (std::_Ref_count_base *)v46[1];
      v46[1] = v49;
      if ( v51 )
      {
        std::_Ref_count_base::_Decref(v51);
        v50 = (_DWORD *)*v46;
      }
      v44 = 0;
      if ( !v50 )
        v44 = -2147024882;
      if ( v88 )
      {
        v52 = v87;
        if ( v88 == v87 )
          v52 = 0LL;
        else
          LOBYTE(v52) = 1;
        (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v88 + 32LL))(v88, v52);
        v88 = 0LL;
      }
      if ( v44 >= 0 )
      {
        ThreadpoolWork = CreateThreadpoolWork(
                           (PTP_WORK_CALLBACK)CSerialWorkQueue::WorkCallback,
                           v46,
                           (PTP_CALLBACK_ENVIRON)(v43 + 8));
        if ( ThreadpoolWork )
        {
          v44 = 0;
LABEL_84:
          SubmitThreadpoolWork(ThreadpoolWork);
          goto LABEL_85;
        }
        v70 = GetLastError();
        v44 = v70;
        if ( v70 > 0 )
          v44 = (unsigned __int16)v70 | 0x80070000;
        if ( v44 >= 0 )
          goto LABEL_84;
      }
      _WorkTask::`scalar deleting destructor'((_WorkTask *)v46, (unsigned int)v50);
      goto LABEL_85;
    }
    *((_QWORD *)a6 + 121) = 0LL;
    v27 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
    v28 = (__int64)v27;
    v79 = v27;
    if ( v27 )
    {
      *v27 = &CCrossProcessBaseMemory::`vftable';
      v27[2] = 0LL;
      *((_DWORD *)v27 + 6) = 0;
      v27[4] = 0LL;
      *((_DWORD *)v27 + 11) = 1;
      *v27 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CCrossProcessBaseMemory>::`vftable';
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
      *(_QWORD *)v28 = &CCrossProcessClientMemory::`vftable';
      v79 = 0LL;
      Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCrossProcessBaseMemory>::QueryInterface(
                    v28,
                    &GUID_910f47db_d25f_4cf9_995e_f86c161b3eef,
                    (_QWORD *)a6 + 121);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
      if ( (Interface & 0x80000000) == 0 )
      {
        v30 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *))(**((_QWORD **)a6 + 121) + 24LL))(
                *((_QWORD *)a6 + 121),
                v100);
        Interface = v30;
        if ( v30 >= 0 )
          goto LABEL_29;
        v60 = (unsigned int)v30;
        v61 = 114LL;
        goto LABEL_107;
      }
    }
    else
    {
      Microsoft::WRL::Details::MakeAllocator<AvoidEndpointPolicyRule>::~MakeAllocator<AvoidEndpointPolicyRule>(&v79);
      Interface = -2147024882;
    }
    v60 = Interface;
    v61 = 113LL;
LABEL_107:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v61,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)v60,
      v71);
    v57 = 136LL;
    goto LABEL_108;
  }
  v78[0] = v94;
  v59 = Microsoft::WRL::Details::MakeAndInitialize<CStandardEvent,ICrossProcessEvent,void *>((char *)a6 + 48, v78);
  Interface = v59;
  if ( v59 >= 0 )
    goto LABEL_21;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x61,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
    (const char *)(unsigned int)v59,
    v71);
  v57 = 135LL;
LABEL_108:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v57,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
    (const char *)Interface,
    v72);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x993,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
    (const char *)Interface,
    v73);
  return Interface;
}
