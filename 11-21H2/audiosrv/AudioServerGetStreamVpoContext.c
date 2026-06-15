/*
 * XREFs of AudioServerGetStreamVpoContext @ 0x1800F2B70
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UISessionInternalEvents@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800026F0 (--1-$com_ptr_t@UISessionInternalEvents@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180007510 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180015934 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800214C0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z @ 0x180025560 (-GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002B4B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800C7E10 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 *     ??$?4U?$default_delete@VCVpoContextProxy@@@std@@$0A@@?$unique_ptr@VCVpoContextProxy@@U?$default_delete@VCVpoContextProxy@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800ECC6C (--$-4U-$default_delete@VCVpoContextProxy@@@std@@$0A@@-$unique_ptr@VCVpoContextProxy@@U-$default_.c)
 *     ??$make_unique@VCVpoContextProxy@@$$TPEAUISaDeviceProxy@@PEAUIVpoContext@@$0A@@std@@YA?AV?$unique_ptr@VCVpoContextProxy@@U?$default_delete@VCVpoContextProxy@@@std@@@0@$$QEA$$T$$QEAPEAUISaDeviceProxy@@$$QEAPEAUIVpoContext@@@Z @ 0x1800ED63C (--$make_unique@VCVpoContextProxy@@$$TPEAUISaDeviceProxy@@PEAUIVpoContext@@$0A@@std@@YA-AV-$uniqu.c)
 *     ??$make_unique@VCVpoContextProxy@@PEAUISubmixProxy@@PEAUISaDeviceProxy@@PEAUIVpoContext@@$0A@@std@@YA?AV?$unique_ptr@VCVpoContextProxy@@U?$default_delete@VCVpoContextProxy@@@std@@@0@$$QEAPEAUISubmixProxy@@$$QEAPEAUISaDeviceProxy@@$$QEAPEAUIVpoContext@@@Z @ 0x1800ED6A4 (--$make_unique@VCVpoContextProxy@@PEAUISubmixProxy@@PEAUISaDeviceProxy@@PEAUIVpoContext@@$0A@@st.c)
 *     ??0SetActivityIdFromVadServer@@QEAA@PEAX@Z @ 0x1800ED894 (--0SetActivityIdFromVadServer@@QEAA@PEAX@Z.c)
 *     ??1CVpoContextProxy@@QEAA@XZ @ 0x1800ED9C8 (--1CVpoContextProxy@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=13 #try_helpers=1
__int64 __fastcall AudioServerGetStreamVpoContext(char *a1, __int64 a2, CVpoContextProxy **a3)
{
  __int64 pftDueTime; // rbx
  unsigned int v7; // edi
  __int64 v8; // rcx
  __int64 *v9; // rax
  __int64 v10; // rax
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // r8
  int v15; // r9d
  __int64 v17; // rax
  int v18; // eax
  unsigned int v19; // ebx
  __int64 v20; // rdx
  __int64 v21; // r8
  int v22; // r9d
  __int64 v23; // rbx
  __int64 (__fastcall *v24)(__int64, struct ISaDeviceProxy **); // rdi
  int v25; // eax
  unsigned int v26; // ebx
  __int64 v27; // rdx
  __int64 v28; // r8
  int v29; // r9d
  __int64 v30; // rax
  int v31; // eax
  unsigned int v32; // ebx
  __int64 v33; // rdx
  __int64 v34; // r8
  int v35; // r9d
  CVpoContextProxy **v36; // rax
  CVpoContextProxy *v37; // rbx
  CVpoContextProxy *v38; // rbx
  __int64 v39; // rdx
  __int64 v40; // r8
  int v41; // r9d
  const unsigned __int16 *v42; // rax
  RTL_SRWLOCK *v43; // rcx
  int EndpointStore; // eax
  unsigned int v45; // ebx
  __int64 v46; // rdx
  __int64 v47; // r8
  int v48; // r9d
  struct CEndpointStore *v49; // rdi
  __int64 v50; // rsi
  __int64 (__fastcall *v51)(__int64, struct ISaDeviceProxy **); // rbx
  int v52; // eax
  unsigned int v53; // ebx
  __int64 v54; // rdx
  __int64 v55; // r8
  int v56; // r9d
  __int64 (__fastcall *v57)(struct ISaDeviceProxy *, struct CEndpointStore **); // rsi
  int v58; // eax
  unsigned int v59; // ebx
  __int64 v60; // rdx
  __int64 v61; // r8
  int v62; // r9d
  CVpoContextProxy **v63; // rax
  CVpoContextProxy *v64; // rbx
  __int64 v65; // rdx
  __int64 v66; // r8
  int v67; // r9d
  int v68; // eax
  unsigned int v69; // edi
  __int64 v70; // rdx
  __int64 v71; // r8
  int v72; // r9d
  __int64 v73; // rdx
  __int64 v74; // r8
  int v75; // r9d
  struct CEndpointStore *v76; // [rsp+30h] [rbp-D8h] BYREF
  struct ISaDeviceProxy *v77; // [rsp+38h] [rbp-D0h] BYREF
  struct ISaDeviceProxy *v78; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v79; // [rsp+48h] [rbp-C0h] BYREF
  struct ISaDeviceProxy *v80; // [rsp+50h] [rbp-B8h] BYREF
  struct CEndpointStore *v81; // [rsp+58h] [rbp-B0h] BYREF
  CVpoContextProxy *v82; // [rsp+60h] [rbp-A8h] BYREF
  struct ISaDeviceProxy *v83; // [rsp+68h] [rbp-A0h] BYREF
  CVpoContextProxy *v84; // [rsp+70h] [rbp-98h] BYREF
  CVpoContextProxy *v85; // [rsp+78h] [rbp-90h] BYREF
  struct _TP_TIMER *pv[7]; // [rsp+80h] [rbp-88h] BYREF
  __int64 v87; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE v88[16]; // [rsp+C8h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+0h]

  SetActivityIdFromVadServer::SetActivityIdFromVadServer((SetActivityIdFromVadServer *)&v87, a1);
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
  v10 = *(_QWORD *)a1;
  v77 = 0LL;
  v11 = (*(__int64 (__fastcall **)(char *, struct ISaDeviceProxy **))(v10 + 32))(a1, &v77);
  v12 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB49,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v11);
    wil::com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>::~com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>((__int64 *)&v77);
    CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv, v13, v14, v15);
    EtwEventActivityIdControl(4LL, v88);
    return v12;
  }
  v17 = *(_QWORD *)a1;
  v79 = 0LL;
  v18 = (*(__int64 (__fastcall **)(char *, __int64 *))(v17 + 24))(a1, &v79);
  v19 = v18;
  if ( v18 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB4E,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v18);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v79);
    wil::com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>::~com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>((__int64 *)&v77);
    CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv, v20, v21, v22);
    EtwEventActivityIdControl(4LL, v88);
    return v19;
  }
  v78 = 0LL;
  v23 = v79;
  v24 = *(__int64 (__fastcall **)(__int64, struct ISaDeviceProxy **))(*(_QWORD *)v79 + 192LL);
  wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset((__int64 *)&v78);
  v25 = v24(v23, &v78);
  v26 = v25;
  if ( v25 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB53,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v25);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v78);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v79);
    wil::com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>::~com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>((__int64 *)&v77);
    CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv, v27, v28, v29);
    EtwEventActivityIdControl(4LL, v88);
    return v26;
  }
  v76 = 0LL;
  v82 = 0LL;
  if ( v78 )
  {
    v30 = *(_QWORD *)v77;
    v76 = 0LL;
    v31 = (*(__int64 (__fastcall **)(struct ISaDeviceProxy *, struct CEndpointStore **))(v30 + 72))(v77, &v76);
    v32 = v31;
    if ( v31 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB5A,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v31);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v76);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v78);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v79);
      wil::com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>::~com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>((__int64 *)&v77);
      CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv, v33, v34, v35);
      EtwEventActivityIdControl(4LL, v88);
      return v32;
    }
    v81 = v76;
    v80 = v78;
    v83 = v77;
    v36 = std::make_unique<CVpoContextProxy,ISubmixProxy *,ISaDeviceProxy *,IVpoContext *,0>(&v84, &v83, &v80, &v81);
    std::unique_ptr<CVpoContextProxy>::operator=<std::default_delete<CVpoContextProxy>,0>(&v82, v36);
    v37 = v84;
    if ( v84 )
    {
      CVpoContextProxy::~CVpoContextProxy(v84);
      operator delete(v37);
    }
    v38 = v82;
    if ( !v82 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB5D,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)0x8007000ELL);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v76);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v78);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v79);
      wil::com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>::~com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>((__int64 *)&v77);
      CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv, v39, v40, v41);
      EtwEventActivityIdControl(4LL, v88);
      return 2147942414LL;
    }
LABEL_27:
    v68 = (*(__int64 (__fastcall **)(struct CEndpointStore *, __int64))(*(_QWORD *)v76 + 32LL))(v76, a2);
    v69 = v68;
    if ( v68 >= 0 )
    {
      *a3 = v38;
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v76);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v78);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v79);
      wil::com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>::~com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>((__int64 *)&v77);
      CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv, v73, v74, v75);
      EtwEventActivityIdControl(4LL, v88);
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB70,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v68);
      CVpoContextProxy::~CVpoContextProxy(v38);
      operator delete(v38);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v76);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v78);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v79);
      wil::com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>::~com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>((__int64 *)&v77);
      CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv, v70, v71, v72);
      EtwEventActivityIdControl(4LL, v88);
      return v69;
    }
  }
  v81 = 0LL;
  v42 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v79 + 128LL))(v79);
  EndpointStore = CEndpointStoreCache::GetEndpointStore(v43, v42, &v81);
  v45 = EndpointStore;
  if ( EndpointStore >= 0 )
  {
    v80 = 0LL;
    v49 = v81;
    v50 = *((_QWORD *)v81 + 13);
    v51 = *(__int64 (__fastcall **)(__int64, struct ISaDeviceProxy **))(*(_QWORD *)v50 + 128LL);
    wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset((__int64 *)&v80);
    v52 = v51(v50, &v80);
    v53 = v52;
    if ( v52 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB67,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v52);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v80);
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v49);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v76);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v78);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v79);
      wil::com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>::~com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>((__int64 *)&v77);
      CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv, v54, v55, v56);
      EtwEventActivityIdControl(4LL, v88);
      return v53;
    }
    v57 = *(__int64 (__fastcall **)(struct ISaDeviceProxy *, struct CEndpointStore **))(*(_QWORD *)v80 + 96LL);
    v76 = 0LL;
    v58 = v57(v80, &v76);
    v59 = v58;
    if ( v58 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB69,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v58);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v80);
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v49);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v76);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v78);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v79);
      wil::com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>::~com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>((__int64 *)&v77);
      CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv, v60, v61, v62);
      EtwEventActivityIdControl(4LL, v88);
      return v59;
    }
    v84 = v76;
    v83 = v80;
    v81 = 0LL;
    v63 = std::make_unique<CVpoContextProxy,std::nullptr_t,ISaDeviceProxy *,IVpoContext *,0>(&v85, &v81, &v83, &v84);
    std::unique_ptr<CVpoContextProxy>::operator=<std::default_delete<CVpoContextProxy>,0>(&v82, v63);
    v64 = v85;
    if ( v85 )
    {
      CVpoContextProxy::~CVpoContextProxy(v85);
      operator delete(v64);
    }
    v38 = v82;
    if ( !v82 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB6C,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)0x8007000ELL);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v80);
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v49);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v76);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v78);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v79);
      wil::com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>::~com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>((__int64 *)&v77);
      CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv, v65, v66, v67);
      EtwEventActivityIdControl(4LL, v88);
      return 2147942414LL;
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v80);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v49);
    goto LABEL_27;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xB64,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
    (const char *)(unsigned int)EndpointStore);
  if ( v81 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v81);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v76);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v78);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v79);
  wil::com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>::~com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>((__int64 *)&v77);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv, v46, v47, v48);
  EtwEventActivityIdControl(4LL, v88);
  return v45;
}
