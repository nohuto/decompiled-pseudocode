/*
 * XREFs of ?CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1400674B0
 * Callers:
 *     ?CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140063C70 (-CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PE.c)
 *     ?CreateStream@CProcessSubmix@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1400692C0 (-CreateStream@CProcessSubmix@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@.c)
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002A38 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UICrossProcessMemory@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x140002BBC (-reset@-$com_ptr_t@UICrossProcessMemory@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?reset@?$com_ptr_t@UICrossProcessEvent@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x140002CC8 (-reset@-$com_ptr_t@UICrossProcessEvent@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?CreateStreamInstance@CPipeInstance@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIDeviceGraphObjectCache@@PEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140004E20 (-CreateStreamInstance@CPipeInstance@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIDeviceGraphOb.c)
 *     ?ValidateStreamDescriptor@@YAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@@Z @ 0x140005A58 (-ValidateStreamDescriptor@@YAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@@Z.c)
 *     ?AddHead@?$CAtlList@V?$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@V?$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBV?$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x140006830 (-AddHead@-$CAtlList@V-$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@V-$.c)
 *     ?Free@?$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ @ 0x140006EE0 (-Free@-$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ.c)
 *     ?Initialize@CPipeInstance@@QEAAJXZ @ 0x140006F40 (-Initialize@CPipeInstance@@QEAAJXZ.c)
 *     ?ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z @ 0x140007080 (-ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z.c)
 *     ??0?$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIStreamInstanceInternal@@@Z @ 0x1400099F4 (--0-$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIStreamInsta.c)
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x14000AA3C (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     ?CreateStreamPipeInstance@CPipeInstance@@SAJ_NPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x14000C590 (-CreateStreamPipeInstance@CPipeInstance@@SAJ_NPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STRE.c)
 *     ?TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@J_NAEBU_GUID@@M@Z @ 0x14000CFD8 (-TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@J_NAEBU_GUID@@M@Z.c)
 *     ?IsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x1400190C0 (-IsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 *     memset_0 @ 0x140029234 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Add@CAudioHistoryBufferManager@@QEAAJ_KPEAUICrossProcessMemory@@@Z @ 0x140069560 (-Add@CAudioHistoryBufferManager@@QEAAJ_KPEAUICrossProcessMemory@@@Z.c)
 *     ?GetHistoryBufferManager@@YAJPEAPEAVCAudioHistoryBufferManager@@@Z @ 0x140069A4C (-GetHistoryBufferManager@@YAJPEAPEAVCAudioHistoryBufferManager@@@Z.c)
 *     ?CreateStreamInstance@CStreamInstance@@SAJPEAPEAUIStreamInstanceInternal@@KW4SYSTEM_AUDIO_STREAM_TYPE@@_KPEAVCPipeInstance@@_J4U_GUID@@@Z @ 0x140077824 (-CreateStreamInstance@CStreamInstance@@SAJPEAPEAUIStreamInstanceInternal@@KW4SYSTEM_AUDIO_STREAM.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall CSubmixImpl::CreateStream(
        CSubmixImpl *this,
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a2,
        struct _RTL_CRITICAL_SECTION *a3,
        struct SYSTEM_AUDIO_STREAM *a4)
{
  struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *v5; // r12
  struct _RTL_CRITICAL_SECTION *v7; // r14
  unsigned int v8; // ebx
  __int64 v9; // r9
  __int64 v10; // rdx
  int v11; // eax
  struct _RTL_CRITICAL_SECTION *v12; // rcx
  __int64 v13; // rdx
  const struct _GUID *v14; // r8
  __int64 v15; // r9
  int v16; // eax
  int v17; // eax
  int v18; // eax
  CPipeInstance *v19; // rbx
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rax
  int v23; // eax
  void (__fastcall ***v24)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v25; // rax
  __int64 v26; // rbx
  __int64 (__fastcall *v27)(__int64, __int64, _QWORD, __int64); // rdi
  __int64 v28; // rax
  int v29; // eax
  int HistoryBufferManager; // eax
  int v31; // eax
  struct _RTL_CRITICAL_SECTION *v32; // rdi
  __int64 v33; // r8
  struct SYSTEM_AUDIO_STREAM *v34; // rbx
  int v35; // eax
  int v36; // eax
  _OWORD *v37; // rbx
  _OWORD *v38; // rax
  __int64 v39; // rcx
  int v40; // edx
  __int64 v41; // rcx
  int v42; // r8d
  int v43; // r9d
  ATL::CAtlException *v45; // rbx
  __int64 v46; // [rsp+40h] [rbp-248h] BYREF
  __int64 v47; // [rsp+48h] [rbp-240h] BYREF
  struct ICrossProcessMemory *v48; // [rsp+50h] [rbp-238h] BYREF
  struct ICrossProcessEvent *v49; // [rsp+58h] [rbp-230h] BYREF
  LPCRITICAL_SECTION v50; // [rsp+60h] [rbp-228h] BYREF
  CPipeInstance *v51; // [rsp+68h] [rbp-220h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+70h] [rbp-218h]
  struct _RTL_CRITICAL_SECTION *v53; // [rsp+78h] [rbp-210h]
  struct SYSTEM_AUDIO_STREAM *v54; // [rsp+80h] [rbp-208h]
  __int128 v55; // [rsp+90h] [rbp-1F8h] BYREF
  struct SYSTEM_AUDIO_STREAM *v56; // [rsp+A0h] [rbp-1E8h]
  struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *v57; // [rsp+A8h] [rbp-1E0h]
  struct SYSTEM_AUDIO_STREAM *v58; // [rsp+B0h] [rbp-1D8h]
  char *v59; // [rsp+B8h] [rbp-1D0h]
  struct _RTL_CRITICAL_SECTION *v60; // [rsp+C0h] [rbp-1C8h]
  ATL::CAtlException *v61; // [rsp+C8h] [rbp-1C0h] BYREF
  __int128 v62; // [rsp+D0h] [rbp-1B8h]
  char v63; // [rsp+E0h] [rbp-1A8h]
  _BYTE v64[296]; // [rsp+E8h] [rbp-1A0h] BYREF
  __int128 v65; // [rsp+210h] [rbp-78h]
  __int128 v66; // [rsp+220h] [rbp-68h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+288h] [rbp+0h]

  v56 = a4;
  lpCriticalSection = a3;
  v5 = a2;
  v57 = a2;
  v58 = a4;
  v54 = a4;
  v51 = 0LL;
  v7 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  v53 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  v60 = v7;
  v59 = (char *)a4 + 944;
  *((_DWORD *)a4 + 236) = 0;
  if ( *((_BYTE *)this + 313) )
  {
    v8 = -2147418113;
    v9 = 2147549183LL;
    v10 = 325LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)v9);
    goto LABEL_6;
  }
  v11 = ValidateStreamDescriptor(v5);
  v8 = v11;
  if ( v11 < 0 )
  {
    v9 = (unsigned int)v11;
    v10 = 328LL;
    goto LABEL_5;
  }
  v65 = *((_OWORD *)v5 + 3);
  v66 = v65;
  EtwEventActivityIdControl(4LL, &v66);
  if ( *((_QWORD *)this + 29) == *((_QWORD *)v5 + 4) )
  {
    if ( !IsEqualGUID((const struct _GUID *)((char *)v5 + 164), (const struct _GUID *)this + 15)
      && !IsEqualGUID(v14, &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) )
    {
      v13 = 340LL;
      goto LABEL_14;
    }
    v16 = CPipeInstance::CreateStreamPipeInstance(
            0,
            *((struct IUnknown **)this + 33),
            v5,
            *((struct CPipeInstance **)this + 3),
            *((struct tWAVEFORMATEX **)this + 28),
            a4,
            &v51);
    v8 = v16;
    if ( v16 < 0 )
    {
      v15 = (unsigned int)v16;
      v13 = 348LL;
      goto LABEL_15;
    }
    v17 = CPipeInstance::Initialize(v51);
    v8 = v17;
    if ( v17 < 0 )
    {
      v15 = (unsigned int)v17;
      v13 = 349LL;
      goto LABEL_15;
    }
    v18 = CPipeInstance::ConnectAPOs(v51, (struct IAudioGraphCallback *)lpCriticalSection);
    v8 = v18;
    if ( v18 < 0 )
    {
      v15 = (unsigned int)v18;
      v13 = 350LL;
      goto LABEL_15;
    }
    v48 = 0LL;
    v49 = 0LL;
    v19 = v51;
    wil::com_ptr_t<ICrossProcessEvent,wil::err_returncode_policy>::reset((__int64 *)&v49);
    wil::com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>::reset((__int64 *)&v48);
    v20 = CPipeInstance::CreateStreamInstance(v19, v5, *((struct IDeviceGraphObjectCache **)this + 33), &v48, &v49, a4);
    v8 = v20;
    if ( v20 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x162,
        (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
        (const char *)(unsigned int)v20);
LABEL_25:
      wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v49);
      wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v48);
      goto LABEL_16;
    }
    v21 = *((_QWORD *)v5 + 4);
    v22 = *((_QWORD *)v5 + 32);
    v46 = 0LL;
    v55 = *(_OWORD *)((char *)v5 + 164);
    v23 = CStreamInstance::CreateStreamInstance(
            &v46,
            *((unsigned int *)v5 + 3),
            *(unsigned int *)v5,
            v51,
            v51,
            v22,
            v21,
            &v55);
    v8 = v23;
    if ( v23 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x16E,
        (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
        (const char *)(unsigned int)v23);
LABEL_28:
      wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v46);
      goto LABEL_25;
    }
    v51 = 0LL;
    v24 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 38);
    v25 = 0LL;
    v47 = 0LL;
    if ( v24 )
    {
      (**v24)(v24, &GUID_764792a0_18e2_400b_9cb9_2dc44605fce0, &v47);
      v25 = v47;
    }
    if ( v25
      && (v26 = v46,
          v27 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)v46 + 56LL),
          v28 = (*(__int64 (__fastcall **)(CSubmixImpl *))(*(_QWORD *)this + 64LL))(this),
          v29 = v27(v26, v47, *((_QWORD *)this + 34), v28),
          v8 = v29,
          v29 < 0) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x176,
        (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
        (const char *)(unsigned int)v29);
    }
    else
    {
      *(_QWORD *)&v55 = &v47;
      *((_QWORD *)&v55 + 1) = &v46;
      v62 = v55;
      v63 = 1;
      if ( *((_QWORD *)v5 + 32) )
      {
        v50 = 0LL;
        HistoryBufferManager = GetHistoryBufferManager((struct CAudioHistoryBufferManager **)&v50);
        v8 = HistoryBufferManager;
        if ( HistoryBufferManager < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x184,
            (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
            (const char *)(unsigned int)HistoryBufferManager);
          if ( v47 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 64LL))(v46);
          goto LABEL_34;
        }
        v31 = CAudioHistoryBufferManager::Add(v50, *((_QWORD *)v5 + 32), v48);
        v8 = v31;
        if ( v31 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x186,
            (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
            (const char *)(unsigned int)v31);
          if ( v47 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 64LL))(v46);
          goto LABEL_34;
        }
      }
      v32 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
      lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 32);
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
      *(_QWORD *)&v55 = (char *)this + 32;
      wil::com_ptr_t<IStreamInstanceInternal,wil::err_returncode_policy>::com_ptr_t<IStreamInstanceInternal,wil::err_returncode_policy>(
        &v50,
        v46);
      try
      {
        ATL::CAtlList<wil::com_ptr_t<IStreamInstanceInternal,wil::err_returncode_policy>,ATL::CElementTraits<wil::com_ptr_t<IStreamInstanceInternal,wil::err_returncode_policy>>>::AddHead(
          (__int64 *)this + 9,
          &v50,
          v33);
        wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v50);
        v34 = v56;
      }
      catch ( ATL::CAtlException *v61 )
      {
        v45 = v61;
        if ( *(_DWORD *)v61 == -1073741571 )
          _o__resetstkoflw();
        LODWORD(v50) = *(_DWORD *)v45;
        v8 = (unsigned int)v50;
        if ( (int)v50 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x18E,
            (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
            (const char *)(unsigned int)v50);
          if ( lpCriticalSection )
            LeaveCriticalSection(lpCriticalSection);
          if ( v47 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 64LL))(v46);
          wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v47);
          wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v46);
          wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v49);
          wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v48);
          EtwEventActivityIdControl(4LL, &v66);
          v12 = v53;
          if ( v53 )
            goto LABEL_8;
          goto LABEL_67;
        }
        v7 = v53;
        v32 = lpCriticalSection;
        v5 = v57;
        v34 = v58;
      }
      if ( v32 )
        LeaveCriticalSection(v32);
      *((_QWORD *)v34 + 4) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v46 + 88LL))(v46);
      v63 = 0;
      if ( *((_DWORD *)v5 + 76) == 1
        || (v35 = (*(__int64 (__fastcall **)(struct ICrossProcessMemory *, char *))(*(_QWORD *)v48 + 40LL))(v48, v59),
            v8 = v35,
            v35 >= 0) )
      {
        if ( v49 )
        {
          v36 = (*(__int64 (__fastcall **)(struct ICrossProcessEvent *, __int64))(*(_QWORD *)v49 + 32LL))(
                  v49,
                  (__int64)v54 + 640);
          v8 = v36;
          if ( v36 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x1A4,
              (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
              (const char *)(unsigned int)v36);
            goto LABEL_34;
          }
        }
        else
        {
          v37 = (_OWORD *)((char *)v54 + 640);
          memset_0(v64, 0, sizeof(v64));
          v38 = v64;
          v39 = 2LL;
          do
          {
            *v37 = *v38;
            v37[1] = v38[1];
            v37[2] = v38[2];
            v37[3] = v38[3];
            v37[4] = v38[4];
            v37[5] = v38[5];
            v37[6] = v38[6];
            v37 += 8;
            *(v37 - 1) = v38[7];
            v38 += 8;
            --v39;
          }
          while ( v39 );
          *v37 = *v38;
          v37[1] = v38[1];
          *((_QWORD *)v37 + 4) = *((_QWORD *)v38 + 4);
        }
        TrackSystemEffectBehavior(
          *((_QWORD *)v5 + 19),
          1u,
          0,
          1,
          (__int64)&GUID_00000000_0000_0000_0000_000000000000,
          SLODWORD(FLOAT_1_0));
        TrackSystemEffectBehavior(
          *((_QWORD *)v5 + 19),
          2u,
          0,
          1,
          (__int64)&GUID_00000000_0000_0000_0000_000000000000,
          SLODWORD(FLOAT_1_0));
        TrackSystemEffectBehavior(
          *((_QWORD *)v5 + 19),
          3u,
          0,
          1,
          (__int64)&GUID_00000000_0000_0000_0000_000000000000,
          SLODWORD(FLOAT_1_0));
        PublishDeviceGraphWnfState(v41, v40, v42, v43);
        wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v47);
        wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v46);
        wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v49);
        wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v48);
        EtwEventActivityIdControl(4LL, &v66);
        if ( v7 )
          LeaveCriticalSection(v7);
        v8 = 0;
        goto LABEL_67;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x19C,
        (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
        (const char *)(unsigned int)v35);
    }
LABEL_34:
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v47);
    goto LABEL_28;
  }
  v13 = 334LL;
LABEL_14:
  v8 = -2147024809;
  v15 = 2147942487LL;
LABEL_15:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
    (const char *)v15);
LABEL_16:
  EtwEventActivityIdControl(4LL, &v66);
LABEL_6:
  if ( v7 )
  {
    v12 = v7;
LABEL_8:
    LeaveCriticalSection(v12);
  }
LABEL_67:
  ATL::CAutoPtr<CPipeInstance>::Free(&v51);
  return v8;
}
