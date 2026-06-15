/*
 * XREFs of ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180013460
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0zqttq_EtwEventWriteTransfer @ 0x18001139C (McTemplateU0zqttq_EtwEventWriteTransfer.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180011468 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?move_to@SystemAudioStream@@QEAAJPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180015560 (-move_to@SystemAudioStream@@QEAAJPEAUSYSTEM_AUDIO_STREAM@@@Z.c)
 *     ?RemoveStream@CAudioSession@@QEAAJPEAVCAudioStream@@_N@Z @ 0x180015D90 (-RemoveStream@CAudioSession@@QEAAJPEAVCAudioStream@@_N@Z.c)
 *     ?RuntimeClassInitialize@CAudioStream@@QEAAJPEAUIAudioProcess@@_NKPEAUVadServerSettings@@W4SYSTEM_AUDIO_STREAM_TYPE@@PEBUtWAVEFORMATEX@@@Z @ 0x18001CBC0 (-RuntimeClassInitialize@CAudioStream@@QEAAJPEAUIAudioProcess@@_NKPEAUVadServerSettings@@W4SYSTEM.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18005EFFC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18005F9D8 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$ComPtr@VCAudioStream@@@WRL@Microsoft@@QEAA@XZ @ 0x1800C69EC (--1-$ComPtr@VCAudioStream@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$MakeAllocator@VAvoidEndpointPolicyRule@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800C6A24 (--1-$MakeAllocator@VAvoidEndpointPolicyRule@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ?CloseAudioHandle@CAudioStream@@QEAAJXZ @ 0x1800E3DF0 (-CloseAudioHandle@CAudioStream@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVADServer::CreateStream(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        struct SYSTEM_AUDIO_STREAM *a7)
{
  struct _RTL_CRITICAL_SECTION *v10; // r15
  __int64 v11; // rax
  bool v12; // zf
  bool v13; // si
  CAudioStream *v14; // rbx
  _DWORD *v15; // rax
  _QWORD *v16; // rdi
  int v17; // esi
  int v18; // eax
  int v19; // r8d
  __int64 v20; // rax
  int v21; // edx
  int v22; // eax
  __int64 v23; // rdi
  __int64 v24; // r8
  int v25; // eax
  char v26; // r15
  struct SYSTEM_AUDIO_STREAM *v27; // r14
  int v28; // eax
  __int64 v29; // rax
  unsigned int v30; // eax
  __int64 v31; // r15
  _DWORD *v32; // rsi
  unsigned __int8 v33; // r15
  __int64 v34; // rsi
  __int64 v35; // rcx
  __int64 v37; // rdx
  int v38; // eax
  int v39; // [rsp+20h] [rbp-140h]
  int v40; // [rsp+20h] [rbp-140h]
  char v41; // [rsp+E0h] [rbp-80h]
  _DWORD *v42; // [rsp+E8h] [rbp-78h] BYREF
  int v43[2]; // [rsp+F0h] [rbp-70h] BYREF
  _QWORD *v44; // [rsp+F8h] [rbp-68h] BYREF
  __int64 v45; // [rsp+100h] [rbp-60h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+108h] [rbp-58h]
  __int64 v47; // [rsp+118h] [rbp-48h]
  __int64 v48; // [rsp+120h] [rbp-40h]
  __int64 v49; // [rsp+128h] [rbp-38h]
  __int64 v50; // [rsp+130h] [rbp-30h]
  __int64 (__fastcall *v51)(struct IAudioResourceManager *, __int64, char *, _QWORD); // [rsp+138h] [rbp-28h]
  __int128 v52; // [rsp+140h] [rbp-20h] BYREF
  int v53; // [rsp+150h] [rbp-10h]
  HANDLE hObject; // [rsp+158h] [rbp-8h]
  __int64 v55; // [rsp+160h] [rbp+0h]
  __int64 v56; // [rsp+168h] [rbp+8h]
  __int64 v57; // [rsp+170h] [rbp+10h]
  __int64 v58; // [rsp+2A0h] [rbp+140h]
  __int64 v59; // [rsp+3D0h] [rbp+270h]
  int v60; // [rsp+500h] [rbp+3A0h]
  __int64 v61; // [rsp+508h] [rbp+3A8h]
  __int64 v62; // [rsp+638h] [rbp+4D8h]
  int v63; // [rsp+640h] [rbp+4E0h]
  struct SYSTEM_AUDIO_STREAM *v64; // [rsp+650h] [rbp+4F0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+6B8h] [rbp+558h]

  v45 = a4;
  v50 = a2;
  v49 = a1;
  v47 = a6;
  v64 = a7;
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    McTemplateU0zqttq_EtwEventWriteTransfer(
      *(unsigned int *)(a1 + 348),
      (int)&VadServer_CreateStream_Task_Start,
      *(const wchar_t **)(a1 + 208),
      *(_DWORD *)(a1 + 328),
      *(_DWORD *)(a1 + 336),
      *(_DWORD *)(a1 + 348),
      *(_DWORD *)(a1 + 332));
  *(_QWORD *)v43 = 0LL;
  memset_0(a7, 0, 0x4E8uLL);
  v10 = (struct _RTL_CRITICAL_SECTION *)(a1 + 224);
  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 224);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 224));
  if ( !*(_DWORD *)(a1 + 184) )
  {
    v17 = -2004287487;
    v37 = 1648LL;
LABEL_67:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v37,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v17,
      v39);
    goto LABEL_52;
  }
  if ( *(_QWORD *)(a1 + 192) )
  {
    v17 = -2004287486;
    v37 = 1649LL;
    goto LABEL_67;
  }
  if ( a3 > 2 )
    goto LABEL_66;
  v11 = *(unsigned int *)(a1 + 328);
  if ( !a3 )
  {
    v12 = dword_180181CF0[3 * v11] == 0;
    goto LABEL_8;
  }
  if ( a3 == 1 )
  {
    v12 = dword_180181CF4[3 * v11] == 0;
LABEL_8:
    if ( !v12 )
      goto LABEL_9;
    goto LABEL_66;
  }
  if ( !dword_180181CF8[3 * v11] )
  {
LABEL_66:
    v17 = -2147024809;
    v37 = 1652LL;
    goto LABEL_67;
  }
LABEL_9:
  v48 = a1 + 280;
  v13 = *(_DWORD *)(a1 + 264) == 1;
  v14 = 0LL;
  v15 = operator new(0x228uLL, (const struct std::nothrow_t *)&std::nothrow);
  v16 = v15;
  v42 = v15;
  if ( !v15 )
  {
    v17 = -2147024882;
LABEL_70:
    Microsoft::WRL::Details::MakeAllocator<AvoidEndpointPolicyRule>::~MakeAllocator<AvoidEndpointPolicyRule>(&v42);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x678,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v17,
      v39);
    goto LABEL_50;
  }
  v15[9] = 1;
  *(_QWORD *)v15 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAudioGraphCallback,IAudioStreamInfo,IAudioStreamPolicyVolumeClient,IDuckingController>::`vftable'{for `IAudioGraphCallback'};
  *((_QWORD *)v15 + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAudioGraphCallback,IAudioStreamInfo,IAudioStreamPolicyVolumeClient,IDuckingController>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAudioStreamInfo,IAudioStreamPolicyVolumeClient,IDuckingController>'};
  *((_QWORD *)v15 + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAudioGraphCallback,IAudioStreamInfo,IAudioStreamPolicyVolumeClient,IDuckingController>::`vftable'{for `IAudioStreamPolicyVolumeClient'};
  *((_QWORD *)v15 + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAudioGraphCallback,IAudioStreamInfo,IAudioStreamPolicyVolumeClient,IDuckingController>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IDuckingController>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *v16 = &CAudioStream::`vftable'{for `IAudioGraphCallback'};
  v16[1] = &CAudioStream::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAudioStreamInfo,IAudioStreamPolicyVolumeClient,IDuckingController>'};
  v16[2] = &CAudioStream::`vftable'{for `IAudioStreamPolicyVolumeClient'};
  v16[3] = &CAudioStream::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IDuckingController>'};
  v16[6] = 0LL;
  v16[7] = 0LL;
  v16[8] = 0LL;
  v16[9] = 0LL;
  v16[10] = 0LL;
  *((_DWORD *)v16 + 22) = 0;
  *((_DWORD *)v16 + 23) = 1065353216;
  v16[13] = 0LL;
  v16[14] = 0LL;
  *((_DWORD *)v16 + 31) = 0;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v16 + 16), 0, 0);
  v16[21] = 0LL;
  v16[22] = 0LL;
  v16[23] = 0LL;
  v16[24] = 0LL;
  v16[25] = 0LL;
  v16[26] = 0LL;
  v16[27] = 0LL;
  v16[28] = 0LL;
  v16[29] = 0LL;
  *((_BYTE *)v16 + 240) = 0;
  *((_DWORD *)v16 + 61) = -1;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v16 + 31), 0, 0);
  v16[36] = 0LL;
  v16[37] = 0LL;
  v16[38] = 0LL;
  *((_DWORD *)v16 + 78) = 255;
  v16[40] = 0LL;
  *((_DWORD *)v16 + 82) = 100;
  *(_QWORD *)((char *)v16 + 332) = 0LL;
  *((_BYTE *)v16 + 340) = 0;
  v16[43] = 0LL;
  v16[44] = 0LL;
  v16[45] = 0LL;
  v16[46] = 0LL;
  v16[47] = 0LL;
  v16[48] = 0LL;
  v16[49] = 0LL;
  *((_BYTE *)v16 + 496) = 0;
  v16[63] = 0LL;
  v16[64] = 0LL;
  *((_BYTE *)v16 + 520) = 0;
  v16[66] = 0LL;
  v16[67] = 0LL;
  *((_DWORD *)v16 + 136) = 0;
  v44 = v16;
  v42 = 0LL;
  v39 = a1 + 280;
  v17 = CAudioStream::RuntimeClassInitialize(v16, a2, v13, *(unsigned int *)(a1 + 268));
  if ( v17 < 0 )
  {
    Microsoft::WRL::ComPtr<CAudioStream>::~ComPtr<CAudioStream>(&v44);
    goto LABEL_70;
  }
  (*(void (__fastcall **)(_QWORD *))(*v16 + 8LL))(v16);
  v14 = (CAudioStream *)v16;
  (*(void (__fastcall **)(_QWORD *))(*v16 + 16LL))(v16);
  if ( *(_QWORD *)v43 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v43 + 16LL))(*(_QWORD *)v43);
  v18 = (*(__int64 (__fastcall **)(PVOID, _QWORD, _QWORD, _QWORD))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
          g_pEndpointCharacteristicsCache,
          *(_QWORD *)(a1 + 216),
          0LL,
          0LL);
  v17 = v18;
  if ( v18 >= 0 )
  {
    v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 120LL))(a2);
    v20 = *(unsigned int *)(a1 + 328);
    if ( a3 - 1 <= 1 )
      v21 = dword_180181C90[v20];
    else
      v21 = dword_180181C30[(unsigned int)v20];
    v22 = 0;
    if ( v19 )
      v22 = 16;
    LODWORD(v42) = 2 * (v21 + v22) + 1;
    v52 = 0LL;
    v53 = 0;
    hObject = 0LL;
    v55 = 0LL;
    v56 = 0LL;
    v57 = 0LL;
    v58 = 0LL;
    v59 = 0LL;
    v60 = 0;
    v61 = 0LL;
    v62 = 0LL;
    v63 = 0;
    v41 = 1;
    v51 = *(__int64 (__fastcall **)(struct IAudioResourceManager *, __int64, char *, _QWORD))(*(_QWORD *)g_AudioResourceManager
                                                                                            + 24LL);
    v44 = *(_QWORD **)(a1 + 432);
    v23 = v49;
    v40 = *(_DWORD *)(v49 + 336);
    v17 = v51(g_AudioResourceManager, v50, (char *)v14 + 8, *(unsigned int *)(v49 + 328));
    if ( v17 < 0 )
      goto LABEL_36;
    v25 = (*(__int64 (__fastcall **)(_QWORD, CAudioStream *))(**(_QWORD **)(v49 + 168) + 216LL))(
            *(_QWORD *)(v49 + 168),
            v14);
    v17 = v25;
    if ( v25 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6B3,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v25,
        v40);
LABEL_36:
      if ( v41 && v55 )
        CAudioStream::CloseAudioHandle(v14);
      if ( v61 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v61 + 16LL))(v61);
      if ( v59 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v59 + 16LL))(v59);
      if ( v58 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v58 + 16LL))(v58);
      if ( v57 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v57 + 16LL))(v57);
      if ( v56 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v56 + 16LL))(v56);
      if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(hObject);
      v10 = lpCriticalSection;
      goto LABEL_50;
    }
    v26 = 1;
    v41 = 0;
    v27 = v64;
    v28 = SystemAudioStream::move_to((SystemAudioStream *)&v52, v64);
    v17 = v28;
    if ( v28 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6B8,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v28,
        v40);
LABEL_34:
      if ( v26 )
        CAudioSession::RemoveStream(*(CAudioSession **)(v23 + 168), v14, 1);
      goto LABEL_36;
    }
    *((_QWORD *)v27 + 5) = *((_QWORD *)v14 + 49);
    *(_QWORD *)(v23 + 560) = *((_QWORD *)v14 + 49);
    v29 = *((_QWORD *)v14 + 1);
    v42 = 0LL;
    if ( (*(int (__fastcall **)(_QWORD *, _DWORD **))(v29 + 24))((_QWORD *)v14 + 1, &v42) >= 0 )
    {
      v30 = (*(__int64 (__fastcall **)(_QWORD *))(*((_QWORD *)v14 + 1) + 48LL))((_QWORD *)v14 + 1);
      v31 = v30;
      v32 = v42;
      if ( v30 >= 0x18 )
      {
LABEL_28:
        v33 = 0;
LABEL_29:
        if ( v32 )
          (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v32 + 16LL))(v32);
        *(_BYTE *)(v23 + 528) = v33;
        *((_DWORD *)v27 + 235) = v33;
        *(_QWORD *)(v23 + 544) = v45;
        *(_QWORD *)(v23 + 552) = a5;
        v34 = *(_QWORD *)(v23 + 192);
        *(_QWORD *)(v23 + 192) = v14;
        (*(void (__fastcall **)(CAudioStream *))(*(_QWORD *)v14 + 8LL))(v14);
        if ( v34 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
        v26 = 0;
        v17 = 0;
        goto LABEL_34;
      }
      if ( (*(unsigned int (__fastcall **)(_DWORD *))(*(_QWORD *)v42 + 96LL))(v42) )
      {
        if ( dword_180193DE0[v31] )
        {
          v38 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v32 + 136LL))(v32);
          if ( !v38 && !(*(unsigned int (__fastcall **)(_DWORD *))(*(_QWORD *)v32 + 376LL))(v32) )
            LODWORD(v31) = 0;
        }
      }
      if ( (*(unsigned int (__fastcall **)(struct IAudioPolicyManager *, _QWORD))(*(_QWORD *)g_PolicyManager + 80LL))(
             g_PolicyManager,
             (unsigned int)v31) )
      {
        v33 = 1;
        v32 = v42;
        goto LABEL_29;
      }
    }
    v32 = v42;
    goto LABEL_28;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x67B,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
    (const char *)(unsigned int)v18,
    (int)v43);
LABEL_50:
  if ( v14 )
    (*(void (__fastcall **)(CAudioStream *))(*(_QWORD *)v14 + 16LL))(v14);
LABEL_52:
  if ( v10 )
    LeaveCriticalSection(v10);
  v35 = *(_QWORD *)v43;
  if ( *(_QWORD *)v43 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v43 + 16LL))(*(_QWORD *)v43);
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    McGenEventWrite_EtwEventWriteTransfer(v35, (__int64)&VadServer_CreateStream_Task_Stop, v24, 1, (__int64)&v64);
  return (unsigned int)v17;
}
