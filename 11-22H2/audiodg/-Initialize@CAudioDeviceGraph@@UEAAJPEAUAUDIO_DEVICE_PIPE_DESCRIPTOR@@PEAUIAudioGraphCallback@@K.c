/*
 * XREFs of ?Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140019BC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCAudioPump@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x1400034CC (-CreateInstance@-$CComCreator@V-$CComObject@VCAudioPump@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCAudioProcessor@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x1400035DC (-CreateInstance@-$CComCreator@V-$CComObject@VCAudioProcessor@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAP.c)
 *     ??_GCPipeInstance@@QEAAPEAXI@Z @ 0x140006804 (--_GCPipeInstance@@QEAAPEAXI@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x140006E98 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Initialize@CPipeInstance@@QEAAJXZ @ 0x140006F40 (-Initialize@CPipeInstance@@QEAAJXZ.c)
 *     ?ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z @ 0x140007080 (-ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z.c)
 *     ?AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@@Z @ 0x140011338 (-AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJPEAUIAudioDeviceModulesManager@Devices@Media@.c)
 *     ?GetDeviceGraphObjectCacheManager@@YAJPEAPEAUIDeviceGraphObjectCacheManager@@@Z @ 0x14001796C (-GetDeviceGraphObjectCacheManager@@YAJPEAPEAUIDeviceGraphObjectCacheManager@@@Z.c)
 *     ?IsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x1400190C0 (-IsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?GetTail@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@XZ @ 0x14001B69C (-GetTail@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?AddHead@?$CAtlList@PEAVCPipeInstance@@V?$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCPipeInstance@@@Z @ 0x14001B6C0 (-AddHead@-$CAtlList@PEAVCPipeInstance@@V-$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAPEAU.c)
 *     ?ValidateDevicePipeDescriptor@@YAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z @ 0x14001C3AC (-ValidateDevicePipeDescriptor@@YAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z.c)
 *     ?CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@AEAV?$unique_ptr@VCPipeInstance@@U?$default_delete@VCPipeInstance@@@wistd@@@wistd@@@Z @ 0x14001CF18 (-CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PE.c)
 *     ?InitializePump@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@_N@Z @ 0x1400238F8 (-InitializePump@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@_N@.c)
 *     ??$MakeAndInitialize@VCStandardCrossProcessEventManager@@UICrossProcessEventManager@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUICrossProcessEventManager@@@Z @ 0x1400241DC (--$MakeAndInitialize@VCStandardCrossProcessEventManager@@UICrossProcessEventManager@@$$V@Details.c)
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 *     atexit @ 0x140028478 (atexit.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1Completer@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x1400504A4 (--1Completer@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U1@U1@U?$_tlgWrapSz@G@@U4@U1@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@55533AEBU?$_tlgWrapSz@G@@635@Z @ 0x14005E828 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U3@U3@U3@U.c)
 */

// Hidden C++ exception states: #wind=17
__int64 __fastcall CAudioDeviceGraph::Initialize(
        CAudioDeviceGraph *this,
        struct AUDIO_DEVICE_PIPE_DESCRIPTOR *a2,
        struct IAudioGraphCallback *a3,
        WINBOOL a4)
{
  struct _RTL_CRITICAL_SECTION *v7; // rsi
  int DeviceGraphObjectCacheManager; // ebx
  __int64 v9; // rax
  int *v10; // r14
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD *v15; // r14
  int v16; // eax
  __int64 v17; // rbx
  __int64 *v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  int Instance; // eax
  int v22; // r12d
  int v23; // eax
  int v24; // eax
  __int64 v25; // r12
  __int64 v26; // rcx
  __int64 v27; // rcx
  int v28; // eax
  _QWORD *v29; // r12
  __int64 v30; // rcx
  int v31; // eax
  int v32; // eax
  unsigned __int16 *v33; // r14
  struct CPipeInstance *v34; // rax
  WINBOOL v35; // ebx
  unsigned int v36; // r8d
  int v37; // r8d
  int v38; // r9d
  __int64 v39; // rcx
  CPipeInstance *v40; // rcx
  __int64 v42; // rdx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rcx
  CPipeInstance *v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rcx
  CPipeInstance *v49; // rcx
  __int64 v50; // rcx
  __int64 v51; // rcx
  CPipeInstance *v52; // rcx
  __int64 v53; // rcx
  __int64 v54; // rcx
  CPipeInstance *v55; // rcx
  __int64 v56; // rcx
  __int64 v57; // rcx
  CPipeInstance *v58; // rcx
  __int64 v59; // rcx
  __int64 v60; // rcx
  __int64 v61; // rcx
  HRESULT v62; // eax
  CPipeInstance *v63; // rcx
  __int64 v64; // rcx
  __int64 v65; // rcx
  int v66; // eax
  CPipeInstance *v67; // rcx
  __int64 v68; // rcx
  __int64 v69; // rcx
  CPipeInstance *v70; // rcx
  __int64 v71; // rcx
  __int64 v72; // rcx
  int ppv; // [rsp+20h] [rbp-1A8h]
  struct CPipeInstance *v74; // [rsp+80h] [rbp-148h] BYREF
  struct IDeviceGraphObjectCacheManager *v75; // [rsp+88h] [rbp-140h] BYREF
  bool v76; // [rsp+90h] [rbp-138h]
  LPVOID Context; // [rsp+98h] [rbp-130h] BYREF
  WINBOOL fPending; // [rsp+A0h] [rbp-128h] BYREF
  CAudioDeviceGraph **v79; // [rsp+A8h] [rbp-120h] BYREF
  WINBOOL v80[2]; // [rsp+B0h] [rbp-118h] BYREF
  _QWORD *v81; // [rsp+B8h] [rbp-110h] BYREF
  LPVOID v82; // [rsp+C0h] [rbp-108h] BYREF
  struct IAudioGraphCallback *v83; // [rsp+C8h] [rbp-100h] BYREF
  char *v84; // [rsp+D0h] [rbp-F8h] BYREF
  char *v85; // [rsp+D8h] [rbp-F0h]
  struct AUDIO_DEVICE_PIPE_DESCRIPTOR *v86; // [rsp+E0h] [rbp-E8h] BYREF
  CAudioDeviceGraph *v87; // [rsp+E8h] [rbp-E0h] BYREF
  GUID *v88; // [rsp+F0h] [rbp-D8h] BYREF
  double v89; // [rsp+F8h] [rbp-D0h] BYREF
  char *v90; // [rsp+100h] [rbp-C8h] BYREF
  union _RTL_RUN_ONCE *v91; // [rsp+108h] [rbp-C0h] BYREF
  int v92; // [rsp+110h] [rbp-B8h]
  union _RTL_RUN_ONCE *v93; // [rsp+118h] [rbp-B0h] BYREF
  int v94; // [rsp+120h] [rbp-A8h]
  _DWORD *v95; // [rsp+128h] [rbp-A0h]
  char *v96; // [rsp+130h] [rbp-98h]
  struct _RTL_CRITICAL_SECTION *v97; // [rsp+138h] [rbp-90h]
  CAudioDeviceGraph *v98; // [rsp+148h] [rbp-80h]
  char v99; // [rsp+150h] [rbp-78h]
  __int64 v100; // [rsp+158h] [rbp-70h] BYREF
  float v101; // [rsp+160h] [rbp-68h]
  int v102; // [rsp+164h] [rbp-64h]
  BOOL v103; // [rsp+168h] [rbp-60h]
  GUID v104; // [rsp+170h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C8h] [rbp+0h]

  v80[0] = a4;
  v83 = a3;
  v87 = this;
  v86 = a2;
  v7 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 264);
  v84 = (char *)this + 264;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 264));
  v97 = v7;
  if ( !a3 )
  {
    DeviceGraphObjectCacheManager = -2147467261;
    v42 = 126LL;
LABEL_48:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v42,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)(unsigned int)DeviceGraphObjectCacheManager,
      ppv);
LABEL_52:
    if ( v7 )
      LeaveCriticalSection(v7);
    return (unsigned int)DeviceGraphObjectCacheManager;
  }
  v88 = (GUID *)((char *)this + 256);
  if ( *((_DWORD *)this + 64) )
  {
    DeviceGraphObjectCacheManager = -2005139440;
    v42 = 129LL;
    goto LABEL_48;
  }
  DeviceGraphObjectCacheManager = ValidateDevicePipeDescriptor(a2);
  if ( DeviceGraphObjectCacheManager < 0 )
  {
    v42 = 132LL;
    goto LABEL_48;
  }
  v9 = *((_QWORD *)a2 + 4);
  if ( (double)(int)v9 > 25000000.0 )
  {
    DeviceGraphObjectCacheManager = -2147024809;
    v42 = 135LL;
    goto LABEL_48;
  }
  *(_QWORD *)&v89 = (char *)this + 128;
  *((_QWORD *)this + 16) = v9;
  v95 = (_DWORD *)((char *)this + 140);
  *((_DWORD *)this + 35) = *((_DWORD *)a2 + 18);
  *((_DWORD *)this + 76) = *((_DWORD *)a2 + 34);
  v90 = (char *)this + 344;
  v96 = (char *)this + 344;
  *(_OWORD *)((char *)this + 344) = *(_OWORD *)((char *)a2 + 148);
  v82 = (LPVOID)*((_QWORD *)a2 + 1);
  v10 = (int *)v82;
  *((_DWORD *)this + 77) = *((_DWORD *)a2 + 25);
  *((float *)this + 34) = (float)v10[1];
  v75 = 0LL;
  DeviceGraphObjectCacheManager = GetDeviceGraphObjectCacheManager(&v75);
  if ( DeviceGraphObjectCacheManager < 0 )
  {
    v43 = 156LL;
LABEL_50:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v43,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)(unsigned int)DeviceGraphObjectCacheManager,
      ppv);
LABEL_51:
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v75);
    goto LABEL_52;
  }
  v79 = 0LL;
  (**(void (__fastcall ***)(struct IDeviceGraphObjectCacheManager *, GUID *, __int64 *))v75)(
    v75,
    &GUID_bba447bc_0c11_4b7a_ba32_c5284a54692f,
    (__int64 *)&v79);
  v11 = (__int64)v79;
  v81 = (_QWORD *)*((_QWORD *)*v79 + 3);
  Context = 0LL;
  if ( __std_init_once_begin_initialize(&`AudioDgTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    v93 = &`AudioDgTelemetryProvider::Instance'::`2'::wrapper;
    Context = &qword_1400CF680;
    qword_1400CF680 = (__int64)&AudioDgTelemetryProvider::`vftable';
    qword_1400CF698 = (__int64)&`AudioDgTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_);
    v94 = 0;
    wil::details::static_lazy<AudioDgTelemetryProvider>::Completer::~Completer(&v93);
  }
  ((void (__fastcall *)(__int64, _QWORD))v81)(v11, *((_QWORD *)Context + 1));
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v79);
  v100 = *((_QWORD *)a2 + 4);
  v101 = (float)v10[1];
  v102 = *((unsigned __int16 *)v10 + 1);
  v103 = *((_DWORD *)a2 + 25) == 1;
  v12 = *(_QWORD *)v75;
  v81 = (_QWORD *)((char *)a2 + 56);
  DeviceGraphObjectCacheManager = (*(__int64 (__fastcall **)(struct IDeviceGraphObjectCacheManager *, _QWORD, __int64 *, char *))(v12 + 24))(
                                    v75,
                                    *((_QWORD *)a2 + 7),
                                    &v100,
                                    (char *)this + 336);
  if ( DeviceGraphObjectCacheManager < 0 )
  {
    v43 = 170LL;
    goto LABEL_50;
  }
  v15 = (_QWORD *)((char *)this + 144);
  v93 = (union _RTL_RUN_ONCE *)((char *)this + 144);
  DeviceGraphObjectCacheManager = ATL::CComCreator<ATL::CComObject<CAudioProcessor>>::CreateInstance(
                                    v14,
                                    v13,
                                    (_QWORD *)this + 18);
  if ( DeviceGraphObjectCacheManager < 0 )
  {
    v43 = 173LL;
    goto LABEL_50;
  }
  v98 = this;
  v99 = 1;
  v16 = (*(__int64 (__fastcall **)(_QWORD, bool, _QWORD))(*(_QWORD *)*v15 + 24LL))(
          *v15,
          *v95 != 0,
          *((_QWORD *)this + 42));
  DeviceGraphObjectCacheManager = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB1,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)(unsigned int)v16,
      ppv);
    v44 = *v15;
    if ( *v15 )
    {
      *v15 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
    }
    goto LABEL_51;
  }
  v79 = 0LL;
  (**(void (__fastcall ***)(_QWORD, GUID *, __int64 *))*v15)(
    *v15,
    &GUID_bba447bc_0c11_4b7a_ba32_c5284a54692f,
    (__int64 *)&v79);
  v17 = (__int64)v79;
  v85 = (char *)*((_QWORD *)*v79 + 3);
  Context = 0LL;
  if ( __std_init_once_begin_initialize(&`AudioDgTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    v91 = &`AudioDgTelemetryProvider::Instance'::`2'::wrapper;
    Context = &qword_1400CF680;
    qword_1400CF680 = (__int64)&AudioDgTelemetryProvider::`vftable';
    qword_1400CF698 = (__int64)&`AudioDgTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_);
    v92 = 0;
    wil::details::static_lazy<AudioDgTelemetryProvider>::Completer::~Completer(&v91);
  }
  ((void (__fastcall *)(__int64, _QWORD))v85)(v17, *((_QWORD *)Context + 1));
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v79);
  v18 = (__int64 *)((char *)this + 152);
  v85 = (char *)this + 152;
  Instance = ATL::CComCreator<ATL::CComObject<CAudioPump>>::CreateInstance(v20, v19, (_QWORD *)this + 19);
  v22 = Instance;
  if ( Instance < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB9,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)(unsigned int)Instance,
      ppv);
    v45 = *v15;
    if ( *v15 )
    {
      *v15 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 16LL))(v45);
    }
    goto LABEL_64;
  }
  v91 = (union _RTL_RUN_ONCE *)this;
  LOBYTE(v92) = 1;
  v74 = 0LL;
  v22 = CPipeInstance::CreateDevicePipeInstance(*v15, *((_QWORD *)this + 42), a2, &v74);
  if ( v22 < 0 )
  {
    v46 = v74;
    v74 = 0LL;
    if ( v46 )
      CPipeInstance::`scalar deleting destructor'(v46);
    v47 = *v18;
    if ( *v18 )
    {
      *v18 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 16LL))(v47);
    }
    v48 = *v15;
    if ( *v15 )
    {
      *v15 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 16LL))(v48);
    }
    goto LABEL_64;
  }
  v23 = CPipeInstance::Initialize(v74);
  v22 = v23;
  if ( v23 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC5,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)(unsigned int)v23,
      ppv);
    v49 = v74;
    v74 = 0LL;
    if ( v49 )
      CPipeInstance::`scalar deleting destructor'(v49);
    v50 = *v18;
    if ( *v18 )
    {
      *v18 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v50 + 16LL))(v50);
    }
    v51 = *v15;
    if ( *v15 )
    {
      *v15 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 16LL))(v51);
    }
    goto LABEL_64;
  }
  v24 = CPipeInstance::ConnectAPOs(v74, v83);
  v22 = v24;
  if ( v24 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC7,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)(unsigned int)v24,
      ppv);
    v52 = v74;
    v74 = 0LL;
    if ( v52 )
      CPipeInstance::`scalar deleting destructor'(v52);
    v53 = *v18;
    if ( *v18 )
    {
      *v18 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v53 + 16LL))(v53);
    }
    v54 = *v15;
    if ( *v15 )
    {
      *v15 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
    }
    goto LABEL_64;
  }
  v25 = *(_QWORD *)(*(_QWORD *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetTail((char *)v74 + 16)
                  + 32LL);
  v26 = *((_QWORD *)this + 47);
  *((_QWORD *)this + 47) = 0LL;
  if ( v26 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  *((_QWORD *)this + 47) = *(_QWORD *)(v25 + 24);
  v27 = *(_QWORD *)(v25 + 24);
  if ( v27 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 8LL))(v27);
  v28 = CPipeInstance::AddConnectionsAndActivateAPOs(
          v74,
          *((struct Windows::Media::Devices::IAudioDeviceModulesManager **)this + 47));
  v22 = v28;
  if ( v28 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCC,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)(unsigned int)v28,
      ppv);
    v55 = v74;
    v74 = 0LL;
    if ( v55 )
      CPipeInstance::`scalar deleting destructor'(v55);
    v56 = *v18;
    if ( *v18 )
    {
      *v18 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v56 + 16LL))(v56);
    }
    v57 = *v15;
    if ( *v15 )
    {
      *v15 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v57 + 16LL))(v57);
    }
    goto LABEL_64;
  }
  v76 = (v80[0] & 0x400001) != 0;
  v79 = (CAudioDeviceGraph **)((char *)this + 384);
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    (void **)this + 48,
    0LL);
  mmdDevGetInstanceIdFromMMDeviceId(*v81, (char *)this + 384);
  v29 = (_QWORD *)((char *)this + 392);
  if ( IsEqualGUID((const struct _GUID *)((char *)a2 + 164), &GUID_00000000_0000_0000_0000_000000000000) )
  {
    v30 = *v29;
    *v29 = 0LL;
    if ( v30 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
    v31 = Microsoft::WRL::Details::MakeAndInitialize<CStandardCrossProcessEventManager,ICrossProcessEventManager,>((char *)this + 392);
    v22 = v31;
    if ( v31 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xDA,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
        (const char *)(unsigned int)v31,
        ppv);
      v58 = v74;
      v74 = 0LL;
      if ( v58 )
        CPipeInstance::`scalar deleting destructor'(v58);
      v59 = *v18;
      if ( *v18 )
      {
        *v18 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v59 + 16LL))(v59);
      }
      v60 = *v15;
      if ( *v15 )
      {
        *v15 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v60 + 16LL))(v60);
      }
      goto LABEL_64;
    }
  }
  else
  {
    v61 = *v29;
    *v29 = 0LL;
    if ( v61 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v61 + 16LL))(v61);
    v62 = CoCreateInstance(
            (const IID *const)((char *)a2 + 164),
            0LL,
            0x17u,
            &GUID_c4e70434_407d_416b_94be_9717b79065fb,
            (LPVOID *)this + 49);
    v80[0] = v62;
    if ( v62 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xDE,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
        (const char *)(unsigned int)v62,
        ppv);
      v63 = v74;
      v74 = 0LL;
      if ( v63 )
        CPipeInstance::`scalar deleting destructor'(v63);
      v64 = *v18;
      if ( *v18 )
      {
        *v18 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v64 + 16LL))(v64);
      }
      v65 = *v15;
      if ( *v15 )
      {
        *v15 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v65 + 16LL))(v65);
      }
      wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v75);
      if ( v7 )
        LeaveCriticalSection(v7);
      return (unsigned int)v80[0];
    }
    v66 = (*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v29 + 24LL))(*v29, (char *)a2 + 180);
    v22 = v66;
    if ( v66 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xDF,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
        (const char *)(unsigned int)v66,
        ppv);
      v67 = v74;
      v74 = 0LL;
      if ( v67 )
        CPipeInstance::`scalar deleting destructor'(v67);
      v68 = *v18;
      if ( *v18 )
      {
        *v18 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v68 + 16LL))(v68);
      }
      v69 = *v15;
      if ( *v15 )
      {
        *v15 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v69 + 16LL))(v69);
      }
      goto LABEL_64;
    }
  }
  v32 = CAudioDeviceGraph::InitializePump(this, v74, a2, v76);
  v22 = v32;
  if ( v32 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE3,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)(unsigned int)v32,
      ppv);
    v70 = v74;
    v74 = 0LL;
    if ( v70 )
      CPipeInstance::`scalar deleting destructor'(v70);
    v71 = *v18;
    if ( *v18 )
    {
      *v18 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v71 + 16LL))(v71);
    }
    v72 = *v15;
    if ( *v15 )
    {
      *v15 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v72 + 16LL))(v72);
    }
LABEL_64:
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v75);
    if ( v7 )
      LeaveCriticalSection(v7);
    return (unsigned int)v22;
  }
  Context = (char *)this + 216;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 216));
  *(_QWORD *)v80 = (char *)this + 216;
  v83 = v74;
  ATL::CAtlList<CPipeInstance *,ATL::CElementTraits<CPipeInstance *>>::AddHead((char *)this + 168, &v83);
  v33 = (unsigned __int16 *)v82;
  if ( this != (CAudioDeviceGraph *)-216LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 216));
  v34 = v74;
  v74 = 0LL;
  *((_QWORD *)this + 20) = v34;
  v88->Data1 = 1;
  *((_DWORD *)this + 28) = 0;
  if ( *v33 == 0xFFFE )
  {
    v104 = *(GUID *)(v33 + 12);
  }
  else
  {
    v104 = GUID_00000000_0000_0010_8000_00aa00389b71;
    v104.Data1 = *v33;
  }
  v35 = 0;
  v36 = 0;
  if ( *((_DWORD *)a2 + 24) )
  {
    while ( !IsEqualGUID(
               (const struct _GUID *)((char *)a2 + 16 * v36 + 196),
               &GUID_0fa53099_5317_46af_9376_9a04a4b550f9) )
    {
      v36 = v37 + 1;
      if ( v36 >= *((_DWORD *)a2 + 24) )
        goto LABEL_36;
    }
    v35 = 1;
  }
LABEL_36:
  v82 = 0LL;
  if ( __std_init_once_begin_initialize(&`AudioDgTelemetryProvider::Instance'::`2'::wrapper, 0, v80, &v82) && v80[0] )
  {
    v91 = &`AudioDgTelemetryProvider::Instance'::`2'::wrapper;
    v82 = &qword_1400CF680;
    qword_1400CF680 = (__int64)&AudioDgTelemetryProvider::`vftable';
    qword_1400CF698 = (__int64)&`AudioDgTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_);
    v92 = 0;
    wil::details::static_lazy<AudioDgTelemetryProvider>::Completer::~Completer(&v91);
  }
  v39 = *((_QWORD *)v82 + 1);
  if ( *(_DWORD *)v39 > 4u
    && (*(_QWORD *)(v39 + 16) & 0x400000000001LL) != 0
    && (*(_QWORD *)(v39 + 24) & 0x400000000001LL) == *(_QWORD *)(v39 + 24) )
  {
    fPending = v35;
    v88 = &v104;
    v87 = *v79;
    v86 = (struct AUDIO_DEVICE_PIPE_DESCRIPTOR *)*v81;
    v93 = (union _RTL_RUN_ONCE *)((char *)a2 + 120);
    v83 = (struct AUDIO_DEVICE_PIPE_DESCRIPTOR *)((char *)a2 + 104);
    LODWORD(v81) = v103;
    LODWORD(v84) = v102;
    *(float *)&v79 = v101;
    LODWORD(Context) = *v95;
    v89 = (double)(int)**(_QWORD **)&v89 / 10000000.0;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
      v39,
      (unsigned int)&unk_1400B3152,
      (_DWORD)v96,
      v38,
      (__int64)&v90,
      (__int64)&v89,
      (__int64)&Context,
      (__int64)&v79,
      (__int64)&v84,
      (__int64)&v81,
      (__int64)&v83,
      (__int64)&v93,
      (__int64)&v86,
      (__int64)&v87,
      (__int64)&v88,
      (__int64)&fPending);
  }
  v40 = v74;
  v74 = 0LL;
  if ( v40 )
    CPipeInstance::`scalar deleting destructor'(v40);
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v75);
  if ( v7 )
    LeaveCriticalSection(v7);
  return 0LL;
}
