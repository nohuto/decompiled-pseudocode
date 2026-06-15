/*
 * XREFs of AudioServerGetStreamVpoContext @ 0x180122F00
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0SetActivityIdFromVadServer@@QEAA@PEAX@Z @ 0x18001298C (--0SetActivityIdFromVadServer@@QEAA@PEAX@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180021F60 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180024C18 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z @ 0x180027120 (-GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180035FF0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UISubmixProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180045820 (-reset@-$com_ptr_t@UISubmixProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?reset@?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180048A20 (-reset@-$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x180067038 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1CHMDManager@@QEAA@XZ @ 0x18010F588 (--1CHMDManager@@QEAA@XZ.c)
 *     ??$?4U?$default_delete@VCVpoContextProxy@@@std@@$0A@@?$unique_ptr@VCVpoContextProxy@@U?$default_delete@VCVpoContextProxy@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18011BB44 (--$-4U-$default_delete@VCVpoContextProxy@@@std@@$0A@@-$unique_ptr@VCVpoContextProxy@@U-$default_.c)
 *     ??$make_unique@VCVpoContextProxy@@$$TPEAUISaDeviceProxy@@PEAUIVpoContext@@$0A@@std@@YA?AV?$unique_ptr@VCVpoContextProxy@@U?$default_delete@VCVpoContextProxy@@@std@@@0@$$QEA$$T$$QEAPEAUISaDeviceProxy@@$$QEAPEAUIVpoContext@@@Z @ 0x18011C2B0 (--$make_unique@VCVpoContextProxy@@$$TPEAUISaDeviceProxy@@PEAUIVpoContext@@$0A@@std@@YA-AV-$uniqu.c)
 *     ??$make_unique@VCVpoContextProxy@@PEAUISubmixProxy@@PEAUISaDeviceProxy@@PEAUIVpoContext@@$0A@@std@@YA?AV?$unique_ptr@VCVpoContextProxy@@U?$default_delete@VCVpoContextProxy@@@std@@@0@$$QEAPEAUISubmixProxy@@$$QEAPEAUISaDeviceProxy@@$$QEAPEAUIVpoContext@@@Z @ 0x18011C318 (--$make_unique@VCVpoContextProxy@@PEAUISubmixProxy@@PEAUISaDeviceProxy@@PEAUIVpoContext@@$0A@@st.c)
 *     ?GetStreamGroup@CVADServer@@UEAAJPEAPEAUIStreamGroupProxy@@@Z @ 0x18011E160 (-GetStreamGroup@CVADServer@@UEAAJPEAPEAUIStreamGroupProxy@@@Z.c)
 *     ?GetSubmix@CVADServer@@UEAAJPEAPEAUISubmixProxy@@@Z @ 0x18011E350 (-GetSubmix@CVADServer@@UEAAJPEAPEAUISubmixProxy@@@Z.c)
 */

// Hidden C++ exception states: #wind=12 #try_helpers=1
__int64 __fastcall AudioServerGetStreamVpoContext(CVADServer *this, __int64 a2, CHMDManager **a3)
{
  __int64 pftDueTime; // rbx
  unsigned int v7; // edi
  __int64 v8; // rcx
  __int64 *v9; // rax
  int Submix; // eax
  unsigned int v11; // ebx
  int StreamGroup; // eax
  unsigned int v14; // ebx
  struct IStreamGroupProxy *v15; // rbx
  __int64 (__fastcall *v16)(struct IStreamGroupProxy *, struct ISaDeviceProxy **); // rdi
  int v17; // eax
  unsigned int v18; // ebx
  __int64 v19; // rax
  int v20; // eax
  unsigned int v21; // ebx
  CVpoContextProxy **v22; // rax
  CHMDManager *v23; // rbx
  CHMDManager *v24; // rbx
  const unsigned __int16 *v25; // rax
  CEndpointStoreCache *v26; // rcx
  int EndpointStore; // eax
  unsigned int v28; // ebx
  struct CEndpointStore *v29; // rdi
  __int64 v30; // rsi
  __int64 (__fastcall *v31)(__int64, struct ISaDeviceProxy **); // rbx
  int v32; // eax
  unsigned int v33; // ebx
  __int64 (__fastcall *v34)(struct ISaDeviceProxy *, struct CEndpointStore **); // rsi
  int v35; // eax
  unsigned int v36; // ebx
  CVpoContextProxy **v37; // rax
  CHMDManager *v38; // rbx
  int v39; // eax
  unsigned int v40; // edi
  struct CEndpointStore *v41; // [rsp+30h] [rbp-D8h] BYREF
  struct ISubmixProxy *v42; // [rsp+38h] [rbp-D0h] BYREF
  struct ISaDeviceProxy *v43; // [rsp+40h] [rbp-C8h] BYREF
  struct IStreamGroupProxy *v44; // [rsp+48h] [rbp-C0h] BYREF
  struct ISaDeviceProxy *v45; // [rsp+50h] [rbp-B8h] BYREF
  struct CEndpointStore *v46; // [rsp+58h] [rbp-B0h] BYREF
  CHMDManager *v47; // [rsp+60h] [rbp-A8h] BYREF
  struct ISaDeviceProxy *v48; // [rsp+68h] [rbp-A0h] BYREF
  CHMDManager *v49; // [rsp+70h] [rbp-98h] BYREF
  CHMDManager *v50; // [rsp+78h] [rbp-90h] BYREF
  struct _TP_TIMER *pv[7]; // [rsp+80h] [rbp-88h] BYREF
  __int64 v52; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE v53[16]; // [rsp+C8h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+0h]

  SetActivityIdFromVadServer::SetActivityIdFromVadServer((SetActivityIdFromVadServer *)&v52, (char *)this);
  pftDueTime = (__int64)g_AudioHealthMonitor;
  v7 = g_AudioSrvWatchDogTimerInMs;
  v9 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
         v8,
         _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    (struct _TP_TIMER *)v9[1],
    v7,
    (struct _TP_TIMER *)L"AudioServerGetStreamVpoContext",
    pftDueTime);
  v42 = 0LL;
  wil::com_ptr_t<ISubmixProxy,wil::err_returncode_policy>::reset((__int64 *)&v42);
  Submix = CVADServer::GetSubmix(this, &v42);
  v11 = Submix;
  if ( Submix < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAD7,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)Submix);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v42);
    CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
    EtwEventActivityIdControl(4LL, v53);
    return v11;
  }
  v44 = 0LL;
  StreamGroup = CVADServer::GetStreamGroup(this, &v44);
  v14 = StreamGroup;
  if ( StreamGroup < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xADC,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)StreamGroup);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v44);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v42);
    CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
    EtwEventActivityIdControl(4LL, v53);
    return v14;
  }
  v43 = 0LL;
  v15 = v44;
  v16 = *(__int64 (__fastcall **)(struct IStreamGroupProxy *, struct ISaDeviceProxy **))(*(_QWORD *)v44 + 232LL);
  wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>::reset((__int64 *)&v43);
  v17 = v16(v15, &v43);
  v18 = v17;
  if ( v17 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAE1,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v17);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v43);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v44);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v42);
    CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
    EtwEventActivityIdControl(4LL, v53);
    return v18;
  }
  v41 = 0LL;
  v47 = 0LL;
  if ( v43 )
  {
    v19 = *(_QWORD *)v42;
    v41 = 0LL;
    v20 = (*(__int64 (__fastcall **)(struct ISubmixProxy *, struct CEndpointStore **))(v19 + 72))(v42, &v41);
    v21 = v20;
    if ( v20 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xAE8,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v20);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v41);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v43);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v44);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v42);
      CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
      EtwEventActivityIdControl(4LL, v53);
      return v21;
    }
    v46 = v41;
    v45 = v43;
    v48 = v42;
    v22 = std::make_unique<CVpoContextProxy,ISubmixProxy *,ISaDeviceProxy *,IVpoContext *,0>(&v49, &v48, &v45, &v46);
    std::unique_ptr<CVpoContextProxy>::operator=<std::default_delete<CVpoContextProxy>,0>(&v47, v22);
    v23 = v49;
    if ( v49 )
    {
      CHMDManager::~CHMDManager(v49);
      operator delete(v23);
    }
    v24 = v47;
    if ( !v47 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xAEB,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)0x8007000ELL);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v41);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v43);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v44);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v42);
      CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
      EtwEventActivityIdControl(4LL, v53);
      return 2147942414LL;
    }
LABEL_27:
    v39 = (*(__int64 (__fastcall **)(struct CEndpointStore *, __int64))(*(_QWORD *)v41 + 32LL))(v41, a2);
    v40 = v39;
    if ( v39 >= 0 )
    {
      *a3 = v24;
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v41);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v43);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v44);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v42);
      CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
      EtwEventActivityIdControl(4LL, v53);
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xAFE,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v39);
      CHMDManager::~CHMDManager(v24);
      operator delete(v24);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v41);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v43);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v44);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v42);
      CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
      EtwEventActivityIdControl(4LL, v53);
      return v40;
    }
  }
  v46 = 0LL;
  v25 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)v44 + 168LL))(v44);
  EndpointStore = CEndpointStoreCache::GetEndpointStore(v26, v25, &v46);
  v28 = EndpointStore;
  if ( EndpointStore >= 0 )
  {
    v45 = 0LL;
    v29 = v46;
    v30 = *((_QWORD *)v46 + 13);
    v31 = *(__int64 (__fastcall **)(__int64, struct ISaDeviceProxy **))(*(_QWORD *)v30 + 128LL);
    wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>::reset((__int64 *)&v45);
    v32 = v31(v30, &v45);
    v33 = v32;
    if ( v32 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xAF5,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v32);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v45);
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v29);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v41);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v43);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v44);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v42);
      CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
      EtwEventActivityIdControl(4LL, v53);
      return v33;
    }
    v34 = *(__int64 (__fastcall **)(struct ISaDeviceProxy *, struct CEndpointStore **))(*(_QWORD *)v45 + 96LL);
    v41 = 0LL;
    v35 = v34(v45, &v41);
    v36 = v35;
    if ( v35 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xAF7,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v35);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v45);
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v29);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v41);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v43);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v44);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v42);
      CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
      EtwEventActivityIdControl(4LL, v53);
      return v36;
    }
    v49 = v41;
    v48 = v45;
    v46 = 0LL;
    v37 = std::make_unique<CVpoContextProxy,std::nullptr_t,ISaDeviceProxy *,IVpoContext *,0>(&v50, &v46, &v48, &v49);
    std::unique_ptr<CVpoContextProxy>::operator=<std::default_delete<CVpoContextProxy>,0>(&v47, v37);
    v38 = v50;
    if ( v50 )
    {
      CHMDManager::~CHMDManager(v50);
      operator delete(v38);
    }
    v24 = v47;
    if ( !v47 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xAFA,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)0x8007000ELL);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v45);
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v29);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v41);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v43);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v44);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v42);
      CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
      EtwEventActivityIdControl(4LL, v53);
      return 2147942414LL;
    }
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v45);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v29);
    goto LABEL_27;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xAF2,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
    (const char *)(unsigned int)EndpointStore);
  if ( v46 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v46);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v41);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v43);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v44);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v42);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  EtwEventActivityIdControl(4LL, v53);
  return v28;
}
