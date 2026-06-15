/*
 * XREFs of ?CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14001B690
 * Callers:
 *     ?CreateStream@CProcessSubmix@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14002D8B0 (-CreateStream@CProcessSubmix@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@.c)
 *     ?CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14005F9D0 (-CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PE.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIAudioEndpointRT@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x140001FF0 (-reset@-$com_ptr_t@UIAudioEndpointRT@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140004168 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Initialize@CPipeInstance@@QEAAJXZ @ 0x140009D48 (-Initialize@CPipeInstance@@QEAAJXZ.c)
 *     ?Free@?$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ @ 0x14000A8E8 (-Free@-$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ.c)
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x14000C240 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     ?CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x14001327C (-CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM.c)
 *     ?TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@M@Z @ 0x140014BD0 (-TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@M@Z.c)
 *     ?ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z @ 0x140015C54 (-ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x140019A00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?CreateStreamInstance@CStreamInstance@@SAJPEAPEAV1@KW4SYSTEM_AUDIO_STREAM_TYPE@@_KPEAVCPipeInstance@@_J@Z @ 0x14001F73C (-CreateStreamInstance@CStreamInstance@@SAJPEAPEAV1@KW4SYSTEM_AUDIO_STREAM_TYPE@@_KPEAVCPipeInsta.c)
 *     ?DisconnectFromRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@@Z @ 0x1400249FC (-DisconnectFromRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@@Z.c)
 *     ?ConnectToRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@PEBVCPipeInstance@@_J@Z @ 0x140024ACC (-ConnectToRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@PEBVCPipeInstance@@_J@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddHead@?$CAtlList@PEAVCStreamInstance@@V?$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCStreamInstance@@@Z @ 0x1400299EC (-AddHead@-$CAtlList@PEAVCStreamInstance@@V-$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEAA.c)
 *     ?CreateStreamInstance@CPipeInstance@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14002A16C (-CreateStreamInstance@CPipeInstance@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAUICrossProce.c)
 *     ?ValidateStreamDescriptor@@YAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@@Z @ 0x14002CA40 (-ValidateStreamDescriptor@@YAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@@Z.c)
 *     __security_check_cookie @ 0x14002F570 (__security_check_cookie.c)
 *     memset_0 @ 0x1400309B4 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ??_GCStreamInstance@@QEAAPEAXI@Z @ 0x140053D58 (--_GCStreamInstance@@QEAAPEAXI@Z.c)
 *     ?Add@CAudioHistoryBufferManager@@QEAAJ_KPEAUICrossProcessMemory@@@Z @ 0x1400633E0 (-Add@CAudioHistoryBufferManager@@QEAAJ_KPEAUICrossProcessMemory@@@Z.c)
 *     ?GetHistoryBufferManager@@YAJPEAPEAVCAudioHistoryBufferManager@@@Z @ 0x140063838 (-GetHistoryBufferManager@@YAJPEAPEAVCAudioHistoryBufferManager@@@Z.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall CSubmixImpl::CreateStream(
        CSubmixImpl *this,
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a2,
        struct IAudioGraphCallback *a3,
        struct SYSTEM_AUDIO_STREAM *a4)
{
  struct _RTL_CRITICAL_SECTION *v8; // rbx
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  CPipeInstance *v15; // rbx
  int v16; // eax
  int v17; // eax
  void (__fastcall ***v18)(_QWORD, GUID *, struct ISubmixInternal **); // rcx
  struct ISubmixInternal *v19; // rax
  CStreamInstance *v20; // rbx
  __int64 v21; // r9
  int v22; // eax
  int v23; // eax
  _OWORD *v24; // rbx
  _OWORD *v25; // rax
  __int64 v26; // rcx
  unsigned int v27; // edx
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // r9
  __int64 v33; // rax
  unsigned int v34; // edx
  int HistoryBufferManager; // eax
  int v36; // eax
  int v37; // eax
  int v38; // [rsp+20h] [rbp-228h]
  int v39; // [rsp+20h] [rbp-228h]
  int v40; // [rsp+20h] [rbp-228h]
  CStreamInstance *v41; // [rsp+30h] [rbp-218h] BYREF
  struct ISubmixInternal *v42; // [rsp+38h] [rbp-210h] BYREF
  struct ICrossProcessMemory *v43; // [rsp+40h] [rbp-208h] BYREF
  struct ICrossProcessEvent *v44; // [rsp+48h] [rbp-200h] BYREF
  CPipeInstance *v45; // [rsp+50h] [rbp-1F8h] BYREF
  struct CAudioHistoryBufferManager *v46; // [rsp+58h] [rbp-1F0h] BYREF
  struct IAudioGraphCallback *v47[2]; // [rsp+60h] [rbp-1E8h] BYREF
  struct SYSTEM_AUDIO_STREAM *v48; // [rsp+70h] [rbp-1D8h]
  struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *v49; // [rsp+78h] [rbp-1D0h]
  struct _RTL_CRITICAL_SECTION *v50; // [rsp+88h] [rbp-1C0h] BYREF
  __int128 v51; // [rsp+98h] [rbp-1B0h]
  char v52; // [rsp+A8h] [rbp-1A0h]
  _BYTE v53[296]; // [rsp+B0h] [rbp-198h] BYREF
  __int128 v54; // [rsp+1D8h] [rbp-70h]
  __int128 v55; // [rsp+1E8h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+248h] [rbp+0h]

  v47[0] = a3;
  v49 = a2;
  v48 = a4;
  v45 = 0LL;
  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  v50 = v8;
  *((_DWORD *)a4 + 236) = 0;
  if ( *((_BYTE *)this + 313) )
  {
    v10 = -2147418113;
    v29 = 2147549183LL;
    v30 = 509LL;
LABEL_28:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v30,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)v29,
      v38);
    goto LABEL_25;
  }
  v9 = ValidateStreamDescriptor(a2);
  v10 = v9;
  if ( v9 < 0 )
  {
    v29 = (unsigned int)v9;
    v30 = 512LL;
    goto LABEL_28;
  }
  v54 = *((_OWORD *)a2 + 3);
  v55 = v54;
  EtwEventActivityIdControl(4LL, &v55);
  if ( *((_QWORD *)this + 29) != *((_QWORD *)a2 + 4) )
  {
    v31 = 518LL;
LABEL_30:
    v10 = -2147024809;
    v32 = 2147942487LL;
LABEL_32:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v31,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)v32,
      v38);
LABEL_35:
    EtwEventActivityIdControl(4LL, &v55);
    goto LABEL_25;
  }
  v11 = *(_QWORD *)((char *)a2 + 164) - *((_QWORD *)this + 30);
  if ( !v11 )
    v11 = *(_QWORD *)((char *)a2 + 172) - *((_QWORD *)this + 31);
  if ( v11 )
  {
    v33 = *(_QWORD *)((char *)a2 + 164) - *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
    if ( !v33 )
      v33 = *(_QWORD *)((char *)a2 + 172) - *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
    if ( v33 )
    {
      v31 = 524LL;
      goto LABEL_30;
    }
  }
  v12 = CPipeInstance::CreateStreamPipeInstance(
          *((struct IDeviceGraphObjectCache **)this + 33),
          a2,
          *((struct CPipeInstance **)this + 3),
          *((struct tWAVEFORMATEX **)this + 28),
          a4,
          &v45);
  v10 = v12;
  if ( v12 < 0 )
  {
    v32 = (unsigned int)v12;
    v31 = 531LL;
    goto LABEL_32;
  }
  v13 = CPipeInstance::Initialize(v45);
  v10 = v13;
  if ( v13 < 0 )
  {
    v32 = (unsigned int)v13;
    v31 = 532LL;
    goto LABEL_32;
  }
  v14 = CPipeInstance::ConnectAPOs(v45, v47[0]);
  v10 = v14;
  if ( v14 < 0 )
  {
    v32 = (unsigned int)v14;
    v31 = 533LL;
    goto LABEL_32;
  }
  v43 = 0LL;
  v44 = 0LL;
  v15 = v45;
  wil::com_ptr_t<IAudioEndpointRT,wil::err_returncode_policy>::reset((__int64 *)&v44);
  wil::com_ptr_t<IAudioEndpointRT,wil::err_returncode_policy>::reset((__int64 *)&v43);
  v16 = CPipeInstance::CreateStreamInstance(v15, a2, &v43, &v44, a4);
  v10 = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x219,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)v16,
      v39);
LABEL_34:
    wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v44);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v43);
    goto LABEL_35;
  }
  v41 = 0LL;
  v40 = (int)v45;
  v17 = CStreamInstance::CreateStreamInstance(&v41, *((unsigned int *)a2 + 3), *(unsigned int *)a2);
  v10 = v17;
  if ( v17 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x223,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)v17,
      v40);
LABEL_45:
    if ( v41 )
      CStreamInstance::`scalar deleting destructor'(v41, v34);
    v41 = 0LL;
    goto LABEL_34;
  }
  v45 = 0LL;
  v18 = (void (__fastcall ***)(_QWORD, GUID *, struct ISubmixInternal **))*((_QWORD *)this + 38);
  v19 = 0LL;
  v42 = 0LL;
  if ( v18 )
  {
    (**v18)(v18, &GUID_cc56354c_5984_4beb_b60f_04b87fd5f8ee, &v42);
    v19 = v42;
  }
  if ( v19 )
  {
    v20 = v41;
    (*(void (__fastcall **)(CSubmixImpl *))(*(_QWORD *)this + 64LL))(this);
    v22 = CStreamInstance::ConnectToRightSubmix(v20, v42, *((const struct CPipeInstance **)this + 34), v21);
    v10 = v22;
    if ( v22 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x22B,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
        (const char *)(unsigned int)v22,
        v40);
LABEL_44:
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v42);
      goto LABEL_45;
    }
  }
  v47[0] = (struct IAudioGraphCallback *)&v42;
  v47[1] = (struct IAudioGraphCallback *)&v41;
  v51 = *(_OWORD *)v47;
  v52 = 1;
  if ( *((_QWORD *)a2 + 33) )
  {
    v46 = 0LL;
    HistoryBufferManager = GetHistoryBufferManager(&v46);
    v10 = HistoryBufferManager;
    if ( HistoryBufferManager < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x239,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
        (const char *)(unsigned int)HistoryBufferManager,
        v40);
      if ( v42 )
        CStreamInstance::DisconnectFromRightSubmix(v41, v42);
      goto LABEL_44;
    }
    v36 = CAudioHistoryBufferManager::Add(v46, *((_QWORD *)a2 + 33), v43);
    v10 = v36;
    if ( v36 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x23B,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
        (const char *)(unsigned int)v36,
        v40);
      if ( v42 )
        CStreamInstance::DisconnectFromRightSubmix(v41, v42);
      goto LABEL_44;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v47[0] = (CSubmixImpl *)((char *)this + 32);
  v46 = v41;
  ATL::CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>::AddHead((char *)this + 72, &v46);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>((struct _RTL_CRITICAL_SECTION **)v47);
  *((_QWORD *)a4 + 4) = *((_QWORD *)v41 + 1);
  v41 = 0LL;
  v52 = 0;
  v23 = (*(__int64 (__fastcall **)(struct ICrossProcessMemory *, char *))(*(_QWORD *)v43 + 40LL))(v43, (char *)a4 + 944);
  v10 = v23;
  if ( v23 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x251,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)v23,
      v40);
    goto LABEL_44;
  }
  v24 = (_OWORD *)((char *)a4 + 640);
  if ( !v44 )
  {
    memset_0(v53, 0, sizeof(v53));
    v25 = v53;
    v26 = 2LL;
    do
    {
      *v24 = *v25;
      v24[1] = v25[1];
      v24[2] = v25[2];
      v24[3] = v25[3];
      v24[4] = v25[4];
      v24[5] = v25[5];
      v24[6] = v25[6];
      v24 += 8;
      *(v24 - 1) = v25[7];
      v25 += 8;
      --v26;
    }
    while ( v26 );
    *v24 = *v25;
    v24[1] = v25[1];
    *((_QWORD *)v24 + 4) = *((_QWORD *)v25 + 4);
    goto LABEL_22;
  }
  v37 = (*(__int64 (__fastcall **)(struct ICrossProcessEvent *, char *))(*(_QWORD *)v44 + 32LL))(v44, (char *)a4 + 640);
  v10 = v37;
  if ( v37 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x258,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)v37,
      v40);
    goto LABEL_44;
  }
LABEL_22:
  TrackSystemEffectBehavior(
    *((_QWORD *)a2 + 19),
    1u,
    1,
    1,
    (__int64)&GUID_00000000_0000_0000_0000_000000000000,
    SLODWORD(FLOAT_1_0));
  TrackSystemEffectBehavior(
    *((_QWORD *)a2 + 19),
    2u,
    1,
    1,
    (__int64)&GUID_00000000_0000_0000_0000_000000000000,
    SLODWORD(FLOAT_1_0));
  TrackSystemEffectBehavior(
    *((_QWORD *)a2 + 19),
    3u,
    1,
    1,
    (__int64)&GUID_00000000_0000_0000_0000_000000000000,
    SLODWORD(FLOAT_1_0));
  PublishDeviceGraphWnfState();
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v42);
  if ( v41 )
    CStreamInstance::`scalar deleting destructor'(v41, v27);
  v41 = 0LL;
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v44);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v43);
  EtwEventActivityIdControl(4LL, &v55);
  v10 = 0;
LABEL_25:
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v50);
  ATL::CAutoPtr<CPipeInstance>::Free(&v45);
  return v10;
}
