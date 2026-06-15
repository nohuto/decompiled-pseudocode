/*
 * XREFs of AudioServerIsFormatSupported @ 0x180021540
 * Callers:
 *     AudioServerGetSharedModeEnginePeriod @ 0x1800F2620 (AudioServerGetSharedModeEnginePeriod.c)
 * Callees:
 *     ?AllowUseofOffloadResources@@YA_NPEAVCEndpointCharacteristics@@PEAUIAudioProcess@@K@Z @ 0x180002634 (-AllowUseofOffloadResources@@YA_NPEAVCEndpointCharacteristics@@PEAUIAudioProcess@@K@Z.c)
 *     ??1?$com_ptr_t@UISessionInternalEvents@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800026F0 (--1-$com_ptr_t@UISessionInternalEvents@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180004224 (--1-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ?IsExclusiveModeDisabled@@YAHPEAUIMMDevice@@@Z @ 0x18000E7BC (-IsExclusiveModeDisabled@@YAHPEAUIMMDevice@@@Z.c)
 *     ?IsOffloadDisabled@@YAHPEAUIMMDevice@@@Z @ 0x18000E844 (-IsOffloadDisabled@@YAHPEAUIMMDevice@@@Z.c)
 *     ?reset@?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18000F4A4 (-reset@-$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?TryGetSaDeviceResourceManagerForEndpoint@@YAJPEBVCEndpointCharacteristics@@PEAPEAUISaDeviceResourceManager@@@Z @ 0x18000FE54 (-TryGetSaDeviceResourceManagerForEndpoint@@YAJPEBVCEndpointCharacteristics@@PEAPEAUISaDeviceReso.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?PublishApoTelemetry@@YAJPEBG@Z @ 0x18001110C (-PublishApoTelemetry@@YAJPEBG@Z.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180011468 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800214C0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z @ 0x180025EDC (-CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z.c)
 *     ?IsSPDIFFormat@@YAHPEBUtWAVEFORMATEX@@@Z @ 0x180025FCC (-IsSPDIFFormat@@YAHPEBUtWAVEFORMATEX@@@Z.c)
 *     ?IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3PEAPEAU4@@Z @ 0x18002D350 (-IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_i.c)
 *     ?GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18002E8D0 (-GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIProcessSubmixProxy@@HHPEBUtWAVEFORMATEX@@PEAU_GUID@@6666@Z @ 0x180033030 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STRE.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004A9F0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180055AB8 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ??1Completer@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x18005DB34 (--1Completer@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     atexit @ 0x18005EF98 (atexit.c)
 *     swprintf_s @ 0x18005FB00 (swprintf_s.c)
 *     memcpy_0 @ 0x180062529 (memcpy_0.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Audio_MultiChannelRenderAttempted@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180064F5C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Audio_MultiChannelRenderAttempted@@@detai.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C5F8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x1800E88CC (-DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_aud.c)
 *     ?DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@U_GUID@@22KPEAPEAU2@@Z @ 0x1800E9124 (-DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATE.c)
 *     ?AreResourcesAvailableForStream@@YAHPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@KH@Z @ 0x1800EDECC (-AreResourcesAvailableForStream@@YAHPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_au.c)
 *     ?GetAcceptableSPDIFTypeForDevice@@YAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@PEAPEAU2@H@Z @ 0x1800EE360 (-GetAcceptableSPDIFTypeForDevice@@YAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@PEAPEAU2@H@Z.c)
 *     ?IsSPDIFEndpoint@CEndpointCharacteristics@@QEAA_NXZ @ 0x18014B320 (-IsSPDIFEndpoint@CEndpointCharacteristics@@QEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AudioServerIsFormatSupported(
        __int64 a1,
        CEndpointStoreCache *a2,
        unsigned int a3,
        __int128 *a4,
        _WORD *Src,
        struct tWAVEFORMATEX **a6)
{
  _FILETIME v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // r8
  struct _TP_TIMER *ThreadpoolTimer; // r10
  __int64 v14; // rax
  __int64 v15; // rcx
  const wchar_t *v16; // rax
  __int64 v17; // rax
  int v18; // eax
  int MixFormat; // edi
  struct IMMDevice *v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rdi
  struct tWAVEFORMATEX *v23; // rax
  struct tWAVEFORMATEX *v24; // r15
  int v25; // eax
  void *v26; // rdx
  void *v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // r8
  int v30; // r9d
  struct CEndpointCharacteristics *v31; // rcx
  __int64 v33; // r8
  __int64 v34; // rdx
  int v35; // edi
  __int64 (__fastcall *v36)(struct IAudioPolicyManager *, _QWORD, HKEY *); // rdi
  int v37; // eax
  struct IMMDevice v38; // rax
  int v39; // eax
  void *v40; // rdx
  __int64 v41; // rax
  HKEY v42; // rcx
  void *v43; // rcx
  __int64 v44; // rdx
  HRESULT v45; // eax
  LSTATUS v46; // eax
  __int64 v47; // rdx
  __int64 (__fastcall *v48)(struct IAudioPolicyManager *, _QWORD, LPVOID *); // rdi
  int v49; // eax
  int v50; // r13d
  int v51; // eax
  struct _GUID *v52; // r8
  void *v53; // rdx
  HKEY v54; // rcx
  HKEY v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rdx
  void *v59; // rdx
  void *v60; // rcx
  int AcceptableSPDIFTypeForDevice; // eax
  void *v62; // rcx
  int v63; // eax
  int phkResult; // [rsp+20h] [rbp-E0h]
  struct CEndpointCharacteristics **phkResulta; // [rsp+20h] [rbp-E0h]
  int phkResultb; // [rsp+20h] [rbp-E0h]
  int phkResultc; // [rsp+20h] [rbp-E0h]
  LPVOID Context; // [rsp+80h] [rbp-80h] BYREF
  WINBOOL fPending; // [rsp+88h] [rbp-78h] BYREF
  struct CEndpointCharacteristics *v70[2]; // [rsp+90h] [rbp-70h] BYREF
  HKEY v71[2]; // [rsp+A0h] [rbp-60h] BYREF
  char v72; // [rsp+B0h] [rbp-50h]
  struct _FILETIME pftDueTime[2]; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int v74; // [rsp+D0h] [rbp-30h]
  int v75[2]; // [rsp+D8h] [rbp-28h] BYREF
  struct tWAVEFORMATEX *v76; // [rsp+E0h] [rbp-20h] BYREF
  char v77; // [rsp+E8h] [rbp-18h]
  _QWORD pv[2]; // [rsp+F0h] [rbp-10h] BYREF
  DWORD CurrentThreadId; // [rsp+100h] [rbp+0h]
  const wchar_t *v80; // [rsp+108h] [rbp+8h]
  _FILETIME v81; // [rsp+110h] [rbp+10h]
  char v82; // [rsp+118h] [rbp+18h]
  __int64 v83; // [rsp+11Ch] [rbp+1Ch]
  __int128 v84; // [rsp+128h] [rbp+28h]
  __int128 v85; // [rsp+138h] [rbp+38h] BYREF
  struct _GUID v86; // [rsp+150h] [rbp+50h] BYREF
  char v87; // [rsp+160h] [rbp+60h]
  int v88[4]; // [rsp+170h] [rbp+70h] BYREF
  const wchar_t *v89; // [rsp+180h] [rbp+80h]
  int v90; // [rsp+188h] [rbp+88h]
  int v91; // [rsp+18Ch] [rbp+8Ch]
  WINBOOL *p_fPending; // [rsp+190h] [rbp+90h]
  __int64 v93; // [rsp+198h] [rbp+98h]
  int *v94; // [rsp+1A0h] [rbp+A0h]
  __int64 v95; // [rsp+1A8h] [rbp+A8h]
  HKEY *v96; // [rsp+1B0h] [rbp+B0h]
  __int64 v97; // [rsp+1B8h] [rbp+B8h]
  LPVOID *p_Context; // [rsp+1C0h] [rbp+C0h]
  __int64 v99; // [rsp+1C8h] [rbp+C8h]
  wchar_t Buffer[264]; // [rsp+1D0h] [rbp+D0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+438h] [rbp+338h]

  v74 = a3;
  *(_QWORD *)&v86.Data1 = a1;
  v84 = *a4;
  v85 = v84;
  EtwEventActivityIdControl(4LL, &v85);
  v9 = g_AudioHealthMonitor;
  v10 = g_AudioSrvWatchDogTimerInMs;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    pftDueTime[0] = (struct _FILETIME)&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
    Context = &qword_1801C2788;
    qword_1801C2788 = (__int64)&AudioSrvTelemetryProvider::`vftable';
    qword_1801C27A0 = (__int64)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    pftDueTime[1].dwLowDateTime = 0;
    wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer(pftDueTime);
  }
  v11 = *((_QWORD *)Context + 1);
  pv[0] = 0LL;
  pv[1] = v11;
  CurrentThreadId = GetCurrentThreadId();
  v80 = L"AudioServerIsFormatSupported";
  v81 = v9;
  v82 = 0;
  v83 = 0LL;
  if ( (unsigned int)v10 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime[0] = (struct _FILETIME)(-10000 * v10 / 3);
      SetThreadpoolTimer(ThreadpoolTimer, pftDueTime, (unsigned int)v10 / 3, 0);
    }
  }
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
  {
    LODWORD(Context) = *((_DWORD *)a4 + 13);
    LODWORD(v71[0]) = *((_DWORD *)a4 + 17);
    v75[0] = *((_DWORD *)a4 + 14);
    fPending = *((_DWORD *)a4 + 12);
    if ( a2 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( *((_WORD *)a2 + v14) );
      v15 = (unsigned int)(2 * v14 + 2);
      v16 = (const wchar_t *)a2;
    }
    else
    {
      v15 = 10LL;
      v16 = L"NULL";
    }
    v89 = v16;
    v90 = v15;
    v91 = 0;
    p_fPending = &fPending;
    v93 = 4LL;
    v94 = v75;
    v95 = 4LL;
    v96 = v71;
    v97 = 4LL;
    p_Context = &Context;
    v99 = 4LL;
    McGenEventWrite_EtwEventWriteTransfer(v15, (__int64)&AudioSrv_IsFormatSupported_Task_Start, v12, 6, (__int64)v88);
  }
  if ( !a3 && !a6 )
  {
    MixFormat = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEFF,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x80070057LL,
      phkResult);
    goto LABEL_47;
  }
  if ( *((_DWORD *)a4 + 12) >= 0x18u )
  {
    v44 = 1311LL;
    goto LABEL_95;
  }
  *(_OWORD *)&pftDueTime[0].dwLowDateTime = a4[1];
  v17 = *(_QWORD *)pftDueTime - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  if ( *(_QWORD *)pftDueTime == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
    v17 = *(_QWORD *)&pftDueTime[1] - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  if ( v17 )
  {
    Context = 0LL;
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      &Context,
      0LL);
    v45 = StringFromCLSID((const IID *const)pftDueTime, (LPOLESTR *)&Context);
    if ( v45 >= 0 )
    {
      phkResultb = (int)Context;
      if ( swprintf_s(Buffer, 0x104uLL, L"%s\\%s", L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio\\Containers\\") == -1 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x513,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)0x8007007ALL,
          phkResultb);
      }
      else
      {
        v71[0] = 0LL;
        v46 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, Buffer, 0, 0x20019u, v71);
        if ( v46 >= 0 )
        {
          wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(v71);
          wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&Context);
          goto LABEL_19;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x516,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)(unsigned int)v46,
          phkResult);
        wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(v71);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x510,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v45,
        phkResult);
    }
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&Context);
    v44 = 1313LL;
LABEL_95:
    MixFormat = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v44,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x80070057LL,
      phkResult);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF01,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x80070057LL,
      phkResultc);
    goto LABEL_47;
  }
LABEL_19:
  if ( *((_DWORD *)a4 + 13) > 3u )
  {
    v44 = 1315LL;
    goto LABEL_95;
  }
  if ( a6 )
    *a6 = 0LL;
  if ( *Src == 0xFFFE && Src[8] < 0x16u )
  {
    MixFormat = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF08,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x80070057LL,
      phkResult);
    goto LABEL_47;
  }
  v70[0] = 0LL;
  phkResulta = v70;
  v18 = (*(__int64 (__fastcall **)(PVOID, CEndpointStoreCache *, _QWORD, _QWORD))(*(_QWORD *)g_pEndpointCharacteristicsCache
                                                                                + 24LL))(
          g_pEndpointCharacteristicsCache,
          a2,
          0LL,
          0LL);
  MixFormat = v18;
  if ( v18 >= 0 )
  {
    v20 = (struct IMMDevice *)*((_QWORD *)v70[0] + 2);
    ((void (__fastcall *)(struct IMMDevice *))v20->lpVtbl->AddRef)(v20);
    if ( Src[1] > 2u && ((*Src - 1) & 0xFFFD) == 0 )
    {
      MixFormat = -2004287480;
      v47 = 3860LL;
LABEL_152:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v47,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)MixFormat,
        (int)v70);
LABEL_43:
      if ( v20 )
        ((void (__fastcall *)(struct IMMDevice *))v20->lpVtbl->Release)(v20);
      goto LABEL_45;
    }
    if ( !(*(unsigned int (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v70[0] + 56LL))(v70[0])
      && Src[1] > 2u )
    {
      LOBYTE(v21) = 1;
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_Audio_MultiChannelRenderAttempted>::ReportUsage(
        &`wil::Feature<__WilFeatureTraits_Feature_Audio_MultiChannelRenderAttempted>::GetImpl'::`2'::impl,
        v21,
        0LL);
      LOBYTE(v33) = 2;
      LOBYTE(v34) = 1;
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_Audio_MultiChannelRenderAttempted>::ReportUsage(
        &`wil::Feature<__WilFeatureTraits_Feature_Audio_MultiChannelRenderAttempted>::GetImpl'::`2'::impl,
        v34,
        v33);
    }
    v22 = (unsigned __int16)Src[8];
    v23 = (struct tWAVEFORMATEX *)CoTaskMemAlloc(v22 + 18);
    v24 = v23;
    if ( !v23 )
    {
      MixFormat = -2147024882;
      v47 = 3870LL;
      goto LABEL_152;
    }
    memcpy_0(v23, Src, v22 + 18);
    if ( *((_DWORD *)a4 + 13) == 1 )
    {
      Context = 0LL;
      v48 = *(__int64 (__fastcall **)(struct IAudioPolicyManager *, _QWORD, LPVOID *))(*(_QWORD *)g_PolicyManager + 32LL);
      wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>::reset((__int64 *)&Context);
      v49 = v48(g_PolicyManager, *(_QWORD *)&v86.Data1, &Context);
      MixFormat = v49;
      if ( v49 >= 0 )
      {
        if ( AllowUseofOffloadResources(v70[0], (struct IAudioProcess *)Context, *((_DWORD *)a4 + 12)) )
        {
          v50 = (*(__int64 (__fastcall **)(LPVOID))(*(_QWORD *)Context + 120LL))(Context);
          LODWORD(phkResulta) = 0;
          v51 = DeriveAudioProcessingModeConfiguration(
                  *((unsigned int *)a4 + 12),
                  *((unsigned int *)a4 + 14),
                  *((unsigned int *)a4 + 32),
                  v70[0]);
          MixFormat = v51;
          if ( v51 >= 0 )
          {
            v71[0] = 0LL;
            *(_QWORD *)v75 = v71;
            v76 = 0LL;
            v77 = 1;
            MixFormat = DeriveOffloadConnectorFormatFromStreamFormat(
                          v70[0],
                          v24,
                          v52,
                          &v86,
                          (struct _GUID *)phkResulta,
                          *((_DWORD *)a4 + 12),
                          &v76);
            if ( v77 )
            {
              v53 = **(void ***)v75;
              **(_QWORD **)v75 = v76;
              if ( v53 )
                CoTaskMemFree(v53);
            }
            if ( MixFormat >= 0 )
            {
              v86 = *(struct _GUID *)&pftDueTime[0].dwLowDateTime;
              if ( AreResourcesAvailableForStream(
                     v70[0],
                     &v86,
                     *((enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 *)a4 + 13),
                     *((_DWORD *)a4 + 12),
                     v50) )
              {
                v55 = v71[0];
                v71[0] = 0LL;
                if ( v55 )
                  CoTaskMemFree(v55);
                wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&Context);
                goto LABEL_148;
              }
              MixFormat = -2004287480;
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0xF48,
                (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
                (const char *)0x88890008LL,
                (int)phkResulta);
            }
            v54 = v71[0];
            v71[0] = 0LL;
            if ( v54 )
              CoTaskMemFree(v54);
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xF3F,
              (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
              (const char *)(unsigned int)v51,
              0);
          }
        }
        else
        {
          MixFormat = 1;
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xF23,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)(unsigned int)v49,
          (int)v70);
      }
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&Context);
      goto LABEL_42;
    }
    if ( !v74 )
    {
      LODWORD(phkResulta) = (*(__int64 (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v70[0] + 56LL))(v70[0]) == 1;
      v25 = DeriveAudioProcessingModeConfiguration(
              *((unsigned int *)a4 + 12),
              *((unsigned int *)a4 + 14),
              *((unsigned int *)a4 + 32),
              v70[0]);
      MixFormat = v25;
      if ( v25 >= 0 )
      {
        if ( *((_DWORD *)a4 + 17) )
        {
          Context = 0LL;
          *(_QWORD *)v75 = &Context;
          v76 = 0LL;
          v77 = 1;
          MixFormat = DeriveConnectorFormatFromStreamFormat(
                        v70[0],
                        (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*((_DWORD *)a4 + 13),
                        v24,
                        (struct _GUID *)pftDueTime,
                        &v86,
                        (struct _GUID *)v71,
                        1,
                        &v76);
          if ( v77 )
          {
            v59 = **(void ***)v75;
            **(_QWORD **)v75 = v76;
            if ( v59 )
              CoTaskMemFree(v59);
          }
          if ( MixFormat < 0 )
          {
            v58 = 3965LL;
            goto LABEL_132;
          }
          v60 = Context;
          Context = 0LL;
          if ( v60 )
            CoTaskMemFree(v60);
        }
        else
        {
          if ( !*((_DWORD *)a4 + 33) )
          {
            Context = 0LL;
            v71[0] = (HKEY)&Context;
            v71[1] = 0LL;
            v72 = 1;
            MixFormat = CEndpointCharacteristics::GetMixFormat(
                          v70[0],
                          (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*((_DWORD *)a4 + 13),
                          (struct _GUID *)pftDueTime,
                          (struct tWAVEFORMATEX **)&v71[1]);
            if ( v72 )
            {
              v26 = *(void **)v71[0];
              *(_QWORD *)v71[0] = v71[1];
              if ( v26 )
                CoTaskMemFree(v26);
            }
            if ( MixFormat >= 0 )
            {
              MixFormat = IsStreamFormatSupportedForMixFormat(
                            v70[0],
                            &v86,
                            *((enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 *)a4 + 13),
                            (const struct tWAVEFORMATEX *)Context,
                            v24,
                            a6);
              goto LABEL_40;
            }
            v58 = 3956LL;
LABEL_132:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v58,
              (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
              (const char *)(unsigned int)MixFormat,
              (int)phkResulta);
LABEL_40:
            v27 = Context;
            Context = 0LL;
            if ( v27 )
              CoTaskMemFree(v27);
            goto LABEL_42;
          }
          if ( v24->wFormatTag != 0xFFFE )
            goto LABEL_124;
          v56 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1
              - *(_QWORD *)((char *)&v24[1].nSamplesPerSec + 2);
          if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *(_QWORD *)((char *)&v24[1].nSamplesPerSec
                                                                                        + 2) )
            v56 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *(_QWORD *)&v24[1].wBitsPerSample;
          if ( v56 )
          {
            v57 = *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1
                - *(_QWORD *)((char *)&v24[1].nSamplesPerSec + 2);
            if ( *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 == *(_QWORD *)((char *)&v24[1].nSamplesPerSec
                                                                                          + 2) )
              v57 = *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4 - *(_QWORD *)&v24[1].wBitsPerSample;
            if ( v57 )
            {
LABEL_124:
              if ( ((v24->wFormatTag - 1) & 0xFFFD) != 0 )
              {
                MixFormat = -2004287480;
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0xF6E,
                  (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
                  (const char *)0x88890008LL,
                  (int)phkResulta);
                goto LABEL_42;
              }
            }
          }
        }
LABEL_148:
        v63 = PublishApoTelemetry(a2);
        if ( v63 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xFC0,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
            (const char *)(unsigned int)v63,
            (int)phkResulta);
        MixFormat = 0;
        goto LABEL_42;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xF63,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v25,
        (int)phkResulta);
LABEL_42:
      CoTaskMemFree(v24);
      goto LABEL_43;
    }
    v35 = IsExclusiveModeDisabled(v20) == 0;
    LODWORD(Context) = v35;
    fPending = IsOffloadDisabled(v20);
    if ( fPending && !v35 )
      goto LABEL_136;
    if ( g_PolicyManager )
    {
      v71[0] = 0LL;
      v36 = *(__int64 (__fastcall **)(struct IAudioPolicyManager *, _QWORD, HKEY *))(*(_QWORD *)g_PolicyManager + 32LL);
      wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>::reset((__int64 *)v71);
      v37 = v36(g_PolicyManager, *(_QWORD *)&v86.Data1, v71);
      MixFormat = v37;
      if ( v37 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xF8A,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)(unsigned int)v37,
          (int)v70);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v71);
        goto LABEL_42;
      }
      v35 = (int)Context;
      if ( (_DWORD)Context )
        v35 = (*(__int64 (__fastcall **)(HKEY, _QWORD, __int64))(*(_QWORD *)v71[0] + 144LL))(
                v71[0],
                *((unsigned int *)a4 + 12),
                1LL);
      if ( !fPending && (*(unsigned int (__fastcall **)(HKEY))(*(_QWORD *)v71[0] + 88LL))(v71[0]) )
        fPending = AllowUseofOffloadResources(v70[0], (struct IAudioProcess *)v71[0], *((_DWORD *)a4 + 12)) == 0;
      if ( v71[0] )
        (*(void (__fastcall **)(HKEY))(*(_QWORD *)v71[0] + 16LL))(v71[0]);
    }
    if ( !v35 )
    {
LABEL_136:
      MixFormat = -2004287474;
      goto LABEL_42;
    }
    if ( (unsigned int)IsSPDIFFormat(v24) && CEndpointCharacteristics::IsSPDIFEndpoint(v70[0]) )
    {
      AcceptableSPDIFTypeForDevice = GetAcceptableSPDIFTypeForDevice(v20, v24, 0LL, fPending);
      MixFormat = AcceptableSPDIFTypeForDevice;
      if ( AcceptableSPDIFTypeForDevice < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xF9F,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)(unsigned int)AcceptableSPDIFTypeForDevice,
          (int)v70);
        goto LABEL_42;
      }
      goto LABEL_148;
    }
    v38.lpVtbl = v20->lpVtbl;
    *(_QWORD *)v75 = 0LL;
    v39 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64, _QWORD))v38.lpVtbl->Activate)(
            v20,
            &GUID_e749ccff_bf18_4e45_9c2b_fbf8ee730029,
            23LL,
            0LL);
    MixFormat = v39;
    if ( v39 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xFA5,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v39,
        (int)v75);
LABEL_79:
      if ( *(_QWORD *)v75 )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v75 + 16LL))(*(_QWORD *)v75);
      goto LABEL_42;
    }
    Context = 0LL;
    *(_QWORD *)&v86.Data1 = &Context;
    *(_QWORD *)v86.Data4 = 0LL;
    v87 = 1;
    MixFormat = CreateKSFormatFromWFXFormat(v24, (struct KSDATAFORMAT_WAVEFORMATEX **)v86.Data4);
    if ( v87 )
    {
      v40 = **(void ***)&v86.Data1;
      **(_QWORD **)&v86.Data1 = *(_QWORD *)v86.Data4;
      if ( v40 )
        CoTaskMemFree(v40);
    }
    if ( MixFormat < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xFA8,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)MixFormat,
        (int)v75);
LABEL_77:
      v43 = Context;
      Context = 0LL;
      if ( v43 )
        CoTaskMemFree(v43);
      goto LABEL_79;
    }
    v41 = **(_QWORD **)v75;
    pftDueTime[0] = 0LL;
    LODWORD(phkResulta) = fPending;
    if ( (*(int (__fastcall **)(_QWORD, LPVOID, _QWORD, _QWORD))(v41 + 80))(
           *(_QWORD *)v75,
           Context,
           *(unsigned int *)Context,
           0LL) < 0 )
    {
      v71[0] = 0LL;
      if ( (int)TryGetSaDeviceResourceManagerForEndpoint(v70[0], (struct ISaDeviceResourceManager **)v71) < 0 )
        goto LABEL_82;
      v42 = v71[0];
      if ( !v71[0] )
      {
LABEL_72:
        if ( v42 )
          (*(void (__fastcall **)(HKEY))(*(_QWORD *)v42 + 16LL))(v42);
        if ( pftDueTime[0] )
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)pftDueTime + 16LL))(*(_QWORD *)pftDueTime);
        MixFormat = -2004287480;
        goto LABEL_77;
      }
      LODWORD(phkResulta) = (_DWORD)a6;
      if ( (*(int (__fastcall **)(HKEY, struct CEndpointCharacteristics *, _QWORD, _WORD *))(*(_QWORD *)v71[0] + 104LL))(
             v71[0],
             v70[0],
             v74,
             Src) < 0 )
      {
LABEL_82:
        v42 = v71[0];
        goto LABEL_72;
      }
      wil::com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>::~com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>((__int64 *)v71);
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)pftDueTime);
    v62 = Context;
    Context = 0LL;
    if ( v62 )
      CoTaskMemFree(v62);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v75);
    goto LABEL_148;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xF0D,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
    (const char *)(unsigned int)v18,
    (int)v70);
LABEL_45:
  v31 = v70[0];
  if ( v70[0] )
    (*(void (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v70[0] + 16LL))(v70[0]);
LABEL_47:
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    McGenEventWrite_EtwEventWriteTransfer((__int64)v31, (__int64)"~", v29, 1, (__int64)&v86);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv, v28, v29, v30);
  EtwEventActivityIdControl(4LL, &v85);
  return (unsigned int)MixFormat;
}
