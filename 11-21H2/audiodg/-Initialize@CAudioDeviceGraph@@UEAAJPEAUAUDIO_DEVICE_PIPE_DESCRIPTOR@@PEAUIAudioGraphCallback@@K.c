/*
 * XREFs of ?Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14001BB60
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?InitializePump@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@_N@Z @ 0x140004AD0 (-InitializePump@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@_N@.c)
 *     ?GetDeviceGraphObjectCacheManager@@YAJPEAPEAUIDeviceGraphObjectCacheManager@@@Z @ 0x1400088E4 (-GetDeviceGraphObjectCacheManager@@YAJPEAPEAUIDeviceGraphObjectCacheManager@@@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x140009C1C (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Initialize@CPipeInstance@@QEAAJXZ @ 0x140009D48 (-Initialize@CPipeInstance@@QEAAJXZ.c)
 *     ?CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@AEAV?$unique_ptr@VCPipeInstance@@U?$default_delete@VCPipeInstance@@@wistd@@@wistd@@@Z @ 0x14000B1F4 (-CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PE.c)
 *     ?ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z @ 0x140015C54 (-ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z.c)
 *     ?AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@@Z @ 0x140018B80 (-AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJPEAUIAudioDeviceModulesManager@Devices@Media@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x140019A00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?get@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6AXXZ@Z @ 0x140019CB0 (-get@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6.c)
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCAudioProcessor@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140020E04 (-CreateInstance@-$CComCreator@V-$CComObject@VCAudioProcessor@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAP.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCAudioPump@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140027F14 (-CreateInstance@-$CComCreator@V-$CComObject@VCAudioPump@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z.c)
 *     ?AddHead@?$CAtlList@PEAVCPipeInstance@@V?$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCPipeInstance@@@Z @ 0x140029918 (-AddHead@-$CAtlList@PEAVCPipeInstance@@V-$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAPEAU.c)
 *     ??$MakeAndInitialize@VCStandardCrossProcessEventManager@@UICrossProcessEventManager@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUICrossProcessEventManager@@@Z @ 0x14002A0CC (--$MakeAndInitialize@VCStandardCrossProcessEventManager@@UICrossProcessEventManager@@$$V@Details.c)
 *     ?GetTail@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@XZ @ 0x14002B3A4 (-GetTail@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?ValidateDevicePipeDescriptor@@YAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z @ 0x14002CCC0 (-ValidateDevicePipeDescriptor@@YAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z.c)
 *     __security_check_cookie @ 0x14002F570 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ??_GCPipeInstance@@QEAAPEAXI@Z @ 0x140050C6C (--_GCPipeInstance@@QEAAPEAXI@Z.c)
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U1@U1@U?$_tlgWrapSz@G@@U4@U1@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@55533AEBU?$_tlgWrapSz@G@@635@Z @ 0x14005B3A8 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U3@U3@U3@U.c)
 */

// Hidden C++ exception states: #wind=17
__int64 __fastcall CAudioDeviceGraph::Initialize(
        CAudioDeviceGraph *this,
        struct AUDIO_DEVICE_PIPE_DESCRIPTOR *a2,
        struct IAudioGraphCallback *a3,
        int a4)
{
  struct _RTL_CRITICAL_SECTION *v7; // rbx
  int v8; // eax
  int v9; // ebx
  __int64 v10; // rax
  unsigned __int16 *v11; // r12
  int DeviceGraphObjectCacheManager; // eax
  struct _RTL_CRITICAL_SECTION *v13; // rbx
  struct _LIST_ENTRY *Blink; // rdi
  __int64 v15; // rcx
  __int64 *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 *v19; // r15
  int v20; // eax
  struct _RTL_CRITICAL_SECTION *v21; // rbx
  struct _LIST_ENTRY *v22; // rdi
  __int64 v23; // rcx
  __int64 *v24; // rax
  __int64 *v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rcx
  int Instance; // eax
  unsigned int v29; // edx
  int v30; // eax
  int v31; // eax
  __int64 v32; // rbx
  __int64 v33; // rcx
  struct Windows::Media::Devices::IAudioDeviceModulesManager *v34; // rdx
  __int64 v35; // rcx
  int v36; // eax
  __int64 *v37; // rbx
  __int64 v38; // rax
  __int64 v39; // rcx
  int v40; // eax
  int v41; // eax
  struct CPipeInstance *v42; // rax
  int v43; // ebx
  __int64 v44; // rcx
  __int64 v45; // rax
  unsigned int v46; // edx
  __int64 v47; // rcx
  int v48; // r9d
  CPipeInstance *v49; // rcx
  __int64 v51; // rdx
  unsigned __int64 v52; // r9
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rcx
  CPipeInstance *v56; // rcx
  __int64 v57; // rcx
  __int64 v58; // rcx
  unsigned int v59; // edx
  CPipeInstance *v60; // rcx
  __int64 v61; // rcx
  __int64 v62; // rcx
  unsigned int v63; // edx
  CPipeInstance *v64; // rcx
  __int64 v65; // rcx
  __int64 v66; // rcx
  unsigned int v67; // edx
  CPipeInstance *v68; // rcx
  __int64 v69; // rcx
  __int64 v70; // rcx
  unsigned int v71; // edx
  CPipeInstance *v72; // rcx
  __int64 v73; // rcx
  __int64 v74; // rcx
  __int64 v75; // rcx
  HRESULT v76; // eax
  unsigned int v77; // edx
  CPipeInstance *v78; // rcx
  __int64 v79; // rcx
  __int64 v80; // rcx
  int v81; // eax
  unsigned int v82; // edx
  CPipeInstance *v83; // rcx
  __int64 v84; // rcx
  __int64 v85; // rcx
  unsigned int v86; // edx
  CPipeInstance *v87; // rcx
  __int64 v88; // rcx
  __int64 v89; // rcx
  int ppv; // [rsp+20h] [rbp-168h]
  struct CPipeInstance *v91; // [rsp+80h] [rbp-108h] BYREF
  struct IDeviceGraphObjectCacheManager *v92; // [rsp+88h] [rbp-100h] BYREF
  bool v93; // [rsp+90h] [rbp-F8h]
  struct _RTL_CRITICAL_SECTION *v94; // [rsp+98h] [rbp-F0h] BYREF
  char *v95; // [rsp+A0h] [rbp-E8h] BYREF
  struct IAudioGraphCallback *v96; // [rsp+A8h] [rbp-E0h] BYREF
  CAudioDeviceGraph *v97; // [rsp+B0h] [rbp-D8h] BYREF
  unsigned __int16 *v98; // [rsp+B8h] [rbp-D0h] BYREF
  GUID *v99; // [rsp+C0h] [rbp-C8h] BYREF
  __int64 v100; // [rsp+C8h] [rbp-C0h] BYREF
  __int64 v101; // [rsp+D0h] [rbp-B8h] BYREF
  char *v102; // [rsp+D8h] [rbp-B0h] BYREF
  char *v103; // [rsp+E0h] [rbp-A8h] BYREF
  double v104; // [rsp+E8h] [rbp-A0h] BYREF
  char v105; // [rsp+F0h] [rbp-98h]
  CAudioDeviceGraph *v106; // [rsp+F8h] [rbp-90h] BYREF
  char v107; // [rsp+100h] [rbp-88h]
  struct _RTL_CRITICAL_SECTION *v108; // [rsp+108h] [rbp-80h] BYREF
  __int64 v109; // [rsp+118h] [rbp-70h] BYREF
  float v110; // [rsp+120h] [rbp-68h]
  int v111; // [rsp+124h] [rbp-64h]
  BOOL v112; // [rsp+128h] [rbp-60h]
  GUID v113; // [rsp+130h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]

  LODWORD(v95) = a4;
  v96 = a3;
  v97 = this;
  v99 = (GUID *)a2;
  v7 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 264);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 264));
  v108 = v7;
  if ( !a3 )
  {
    v9 = -2147467261;
    v51 = 122LL;
LABEL_41:
    v52 = (unsigned int)v9;
LABEL_43:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v51,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)v52,
      ppv);
    goto LABEL_37;
  }
  if ( *((_DWORD *)this + 64) )
  {
    v9 = -2005139440;
    v51 = 125LL;
    goto LABEL_41;
  }
  v8 = ValidateDevicePipeDescriptor(a2);
  v9 = v8;
  if ( v8 < 0 )
  {
    v52 = (unsigned int)v8;
    v51 = 128LL;
    goto LABEL_43;
  }
  v10 = *((_QWORD *)a2 + 4);
  if ( (double)(int)v10 > 25000000.0 )
  {
    v9 = -2147024809;
    v51 = 131LL;
    goto LABEL_41;
  }
  *((_QWORD *)this + 16) = v10;
  *((_DWORD *)this + 35) = *((_DWORD *)a2 + 18);
  *((_DWORD *)this + 76) = *((_DWORD *)a2 + 34);
  *((_DWORD *)this + 77) = *((_DWORD *)a2 + 35);
  *((_OWORD *)this + 22) = *(_OWORD *)((char *)a2 + 152);
  v98 = (unsigned __int16 *)*((_QWORD *)a2 + 1);
  v11 = v98;
  *((_DWORD *)this + 78) = *((_DWORD *)a2 + 25);
  *((float *)this + 34) = (float)*((int *)v11 + 1);
  v92 = 0LL;
  DeviceGraphObjectCacheManager = GetDeviceGraphObjectCacheManager(&v92);
  v9 = DeviceGraphObjectCacheManager;
  if ( DeviceGraphObjectCacheManager < 0 )
  {
    v53 = 153LL;
LABEL_46:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v53,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)(unsigned int)DeviceGraphObjectCacheManager,
      ppv);
LABEL_47:
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v92);
    goto LABEL_37;
  }
  v94 = 0LL;
  (**(void (__fastcall ***)(struct IDeviceGraphObjectCacheManager *, GUID *, struct _RTL_CRITICAL_SECTION **))v92)(
    v92,
    &GUID_bba447bc_0c11_4b7a_ba32_c5284a54692f,
    &v94);
  v13 = v94;
  Blink = v94->DebugInfo->ProcessLocksList.Blink;
  v16 = wil::details::static_lazy<AudioDgTelemetryProvider>::get(
          v15,
          _lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_);
  ((void (__fastcall *)(struct _RTL_CRITICAL_SECTION *, __int64))Blink)(v13, v16[1]);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v94);
  v109 = *((_QWORD *)a2 + 4);
  v110 = (float)*((int *)v11 + 1);
  v111 = v11[1];
  v112 = *((_DWORD *)a2 + 25) == 1;
  DeviceGraphObjectCacheManager = (*(__int64 (__fastcall **)(struct IDeviceGraphObjectCacheManager *, _QWORD, __int64 *, char *))(*(_QWORD *)v92 + 24LL))(
                                    v92,
                                    *((_QWORD *)a2 + 7),
                                    &v109,
                                    (char *)this + 344);
  v9 = DeviceGraphObjectCacheManager;
  if ( DeviceGraphObjectCacheManager < 0 )
  {
    v53 = 167LL;
    goto LABEL_46;
  }
  v19 = (__int64 *)((char *)this + 144);
  DeviceGraphObjectCacheManager = ATL::CComCreator<ATL::CComObject<CAudioProcessor>>::CreateInstance(
                                    v18,
                                    v17,
                                    (char *)this + 144);
  v9 = DeviceGraphObjectCacheManager;
  if ( DeviceGraphObjectCacheManager < 0 )
  {
    v53 = 170LL;
    goto LABEL_46;
  }
  v106 = this;
  v107 = 1;
  v20 = (*(__int64 (__fastcall **)(__int64, bool, _QWORD))(*(_QWORD *)*v19 + 24LL))(
          *v19,
          *((_DWORD *)this + 35) != 0,
          *((_QWORD *)this + 43));
  v9 = v20;
  if ( v20 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAE,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)(unsigned int)v20,
      ppv);
    v54 = *v19;
    if ( *v19 )
    {
      *v19 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
    }
    goto LABEL_47;
  }
  v94 = 0LL;
  (**(void (__fastcall ***)(__int64, GUID *, struct _RTL_CRITICAL_SECTION **))*v19)(
    *v19,
    &GUID_bba447bc_0c11_4b7a_ba32_c5284a54692f,
    &v94);
  v21 = v94;
  v22 = v94->DebugInfo->ProcessLocksList.Blink;
  v24 = wil::details::static_lazy<AudioDgTelemetryProvider>::get(
          v23,
          _lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_);
  ((void (__fastcall *)(struct _RTL_CRITICAL_SECTION *, __int64))v22)(v21, v24[1]);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v94);
  v25 = (__int64 *)((char *)this + 152);
  Instance = ATL::CComCreator<ATL::CComObject<CAudioPump>>::CreateInstance(v27, v26, (char *)this + 152);
  v9 = Instance;
  if ( Instance < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB6,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)(unsigned int)Instance,
      ppv);
    v55 = *v19;
    if ( *v19 )
    {
      *v19 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v55 + 16LL))(v55);
    }
    goto LABEL_47;
  }
  v104 = *(double *)&this;
  v105 = 1;
  v91 = 0LL;
  v9 = CPipeInstance::CreateDevicePipeInstance(*v19, *((_QWORD *)this + 43), (__int64)a2, &v91);
  if ( v9 < 0 )
  {
    v56 = v91;
    v91 = 0LL;
    if ( v56 )
      CPipeInstance::`scalar deleting destructor'(v56, v29);
    v57 = *v25;
    if ( *v25 )
    {
      *v25 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v57 + 16LL))(v57);
    }
    v58 = *v19;
    if ( *v19 )
    {
      *v19 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v58 + 16LL))(v58);
    }
    goto LABEL_47;
  }
  v30 = CPipeInstance::Initialize(v91);
  v9 = v30;
  if ( v30 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC2,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)(unsigned int)v30,
      ppv);
    v60 = v91;
    v91 = 0LL;
    if ( v60 )
      CPipeInstance::`scalar deleting destructor'(v60, v59);
    v61 = *v25;
    if ( *v25 )
    {
      *v25 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v61 + 16LL))(v61);
    }
    v62 = *v19;
    if ( *v19 )
    {
      *v19 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v62 + 16LL))(v62);
    }
    goto LABEL_47;
  }
  v31 = CPipeInstance::ConnectAPOs(v91, v96);
  v9 = v31;
  if ( v31 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC4,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)(unsigned int)v31,
      ppv);
    v64 = v91;
    v91 = 0LL;
    if ( v64 )
      CPipeInstance::`scalar deleting destructor'(v64, v63);
    v65 = *v25;
    if ( *v25 )
    {
      *v25 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v65 + 16LL))(v65);
    }
    v66 = *v19;
    if ( *v19 )
    {
      *v19 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v66 + 16LL))(v66);
    }
    goto LABEL_47;
  }
  v32 = *(_QWORD *)(*(_QWORD *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetTail((char *)v91 + 16)
                  + 32LL);
  v33 = *((_QWORD *)this + 48);
  *((_QWORD *)this + 48) = 0LL;
  if ( v33 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
  v34 = *(struct Windows::Media::Devices::IAudioDeviceModulesManager **)(v32 + 24);
  *((_QWORD *)this + 48) = v34;
  v35 = *(_QWORD *)(v32 + 24);
  if ( v35 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 8LL))(v35);
    v34 = (struct Windows::Media::Devices::IAudioDeviceModulesManager *)*((_QWORD *)this + 48);
  }
  v36 = CPipeInstance::AddConnectionsAndActivateAPOs(v91, v34);
  v9 = v36;
  if ( v36 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC9,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)(unsigned int)v36,
      ppv);
    v68 = v91;
    v91 = 0LL;
    if ( v68 )
      CPipeInstance::`scalar deleting destructor'(v68, v67);
    v69 = *v25;
    if ( *v25 )
    {
      *v25 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v69 + 16LL))(v69);
    }
    v70 = *v19;
    if ( *v19 )
    {
      *v19 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v70 + 16LL))(v70);
    }
    goto LABEL_47;
  }
  v93 = ((unsigned int)v95 & 0x400001) != 0;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    (void **)this + 49,
    0LL);
  mmdDevGetInstanceIdFromMMDeviceId(*((_QWORD *)a2 + 7), (char *)this + 392);
  v37 = (__int64 *)((char *)this + 400);
  v38 = *((_QWORD *)a2 + 21) - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  if ( !v38 )
    v38 = *((_QWORD *)a2 + 22) - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  if ( v38 )
  {
    v75 = *v37;
    *v37 = 0LL;
    if ( v75 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v75 + 16LL))(v75);
    v76 = CoCreateInstance(
            (const IID *const)((char *)a2 + 168),
            0LL,
            0x17u,
            &GUID_c4e70434_407d_416b_94be_9717b79065fb,
            (LPVOID *)this + 50);
    v9 = v76;
    if ( v76 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xDB,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
        (const char *)(unsigned int)v76,
        ppv);
      v78 = v91;
      v91 = 0LL;
      if ( v78 )
        CPipeInstance::`scalar deleting destructor'(v78, v77);
      v79 = *v25;
      if ( *v25 )
      {
        *v25 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v79 + 16LL))(v79);
      }
      v80 = *v19;
      if ( *v19 )
      {
        *v19 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v80 + 16LL))(v80);
      }
      goto LABEL_47;
    }
    v81 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 50) + 24LL))(
            *((_QWORD *)this + 50),
            (char *)a2 + 184);
    v9 = v81;
    if ( v81 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xDC,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
        (const char *)(unsigned int)v81,
        ppv);
      v83 = v91;
      v91 = 0LL;
      if ( v83 )
        CPipeInstance::`scalar deleting destructor'(v83, v82);
      v84 = *v25;
      if ( *v25 )
      {
        *v25 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v84 + 16LL))(v84);
      }
      v85 = *v19;
      if ( *v19 )
      {
        *v19 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v85 + 16LL))(v85);
      }
      goto LABEL_47;
    }
  }
  else
  {
    v39 = *v37;
    *v37 = 0LL;
    if ( v39 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
    v40 = Microsoft::WRL::Details::MakeAndInitialize<CStandardCrossProcessEventManager,ICrossProcessEventManager,>((char *)this + 400);
    v9 = v40;
    if ( v40 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD7,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
        (const char *)(unsigned int)v40,
        ppv);
      v72 = v91;
      v91 = 0LL;
      if ( v72 )
        CPipeInstance::`scalar deleting destructor'(v72, v71);
      v73 = *v25;
      if ( *v25 )
      {
        *v25 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v73 + 16LL))(v73);
      }
      v74 = *v19;
      if ( *v19 )
      {
        *v19 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v74 + 16LL))(v74);
      }
      goto LABEL_47;
    }
  }
  v41 = CAudioDeviceGraph::InitializePump(this, v91, a2, v93);
  v9 = v41;
  if ( v41 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE0,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)(unsigned int)v41,
      ppv);
    v87 = v91;
    v91 = 0LL;
    if ( v87 )
      CPipeInstance::`scalar deleting destructor'(v87, v86);
    v88 = *v25;
    if ( *v25 )
    {
      *v25 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v88 + 16LL))(v88);
    }
    v89 = *v19;
    if ( *v19 )
    {
      *v19 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v89 + 16LL))(v89);
    }
    goto LABEL_47;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 216));
  v94 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 216);
  v96 = v91;
  ATL::CAtlList<CPipeInstance *,ATL::CElementTraits<CPipeInstance *>>::AddHead((char *)this + 168, &v96);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v94);
  v42 = v91;
  v91 = 0LL;
  *((_QWORD *)this + 20) = v42;
  *((_DWORD *)this + 64) = 1;
  *((_DWORD *)this + 28) = 0;
  if ( *v11 == 0xFFFE )
  {
    v113 = *(GUID *)(v11 + 12);
  }
  else
  {
    v113 = GUID_00000000_0000_0010_8000_00aa00389b71;
    v113.Data1 = *v11;
  }
  v43 = 0;
  v44 = 0LL;
  if ( *((_DWORD *)a2 + 24) )
  {
    while ( 1 )
    {
      v45 = *((_QWORD *)a2 + 2 * (unsigned int)v44 + 25) - *(_QWORD *)&GUID_0fa53099_5317_46af_9376_9a04a4b550f9.Data1;
      if ( !v45 )
        v45 = *((_QWORD *)a2 + 2 * (unsigned int)v44 + 26) - *(_QWORD *)GUID_0fa53099_5317_46af_9376_9a04a4b550f9.Data4;
      if ( !v45 )
        break;
      v44 = (unsigned int)(v44 + 1);
      if ( (unsigned int)v44 >= *((_DWORD *)a2 + 24) )
        goto LABEL_32;
    }
    v43 = 1;
  }
LABEL_32:
  v47 = wil::details::static_lazy<AudioDgTelemetryProvider>::get(
          v44,
          _lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v47 > 4u )
  {
    v46 = 1;
    if ( (*(_QWORD *)(v47 + 16) & 0x400000000001LL) != 0
      && (*(_QWORD *)(v47 + 24) & 0x400000000001LL) == *(_QWORD *)(v47 + 24) )
    {
      LODWORD(v95) = v43;
      v99 = &v113;
      v100 = *((_QWORD *)this + 49);
      v101 = *((_QWORD *)a2 + 7);
      v102 = (char *)a2 + 120;
      v103 = (char *)a2 + 104;
      LODWORD(v98) = v112;
      LODWORD(v96) = v111;
      *(float *)&v97 = v110;
      LODWORD(v94) = *((_DWORD *)this + 35);
      v104 = (double)(int)*((_QWORD *)this + 16) / 10000000.0;
      v106 = (CAudioDeviceGraph *)((char *)this + 352);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
        v47,
        (unsigned int)&unk_1400A6682,
        (_DWORD)this + 352,
        v48,
        (__int64)&v106,
        (__int64)&v104,
        (__int64)&v94,
        (__int64)&v97,
        (__int64)&v96,
        (__int64)&v98,
        (__int64)&v103,
        (__int64)&v102,
        (__int64)&v101,
        (__int64)&v100,
        (__int64)&v99,
        (__int64)&v95);
    }
  }
  v49 = v91;
  v91 = 0LL;
  if ( v49 )
    CPipeInstance::`scalar deleting destructor'(v49, v46);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v92);
  v9 = 0;
LABEL_37:
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v108);
  return (unsigned int)v9;
}
