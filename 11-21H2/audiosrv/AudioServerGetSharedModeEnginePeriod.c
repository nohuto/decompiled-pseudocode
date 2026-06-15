/*
 * XREFs of AudioServerGetSharedModeEnginePeriod @ 0x1800F2620
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x1800021E0 (-GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180007510 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z @ 0x180011308 (-ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180015934 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800214C0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     AudioServerIsFormatSupported @ 0x180021540 (AudioServerIsFormatSupported.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIProcessSubmixProxy@@HHPEBUtWAVEFORMATEX@@PEAU_GUID@@6666@Z @ 0x180033030 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STRE.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x1800E88CC (-DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_aud.c)
 *     ?TranslateFrameCountBetweenSamplingRates@@YAIIII@Z @ 0x1800F08B8 (-TranslateFrameCountBetweenSamplingRates@@YAIIII@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AudioServerGetSharedModeEnginePeriod(
        __int64 a1,
        CEndpointStoreCache *a2,
        __int64 a3,
        struct tWAVEFORMATEX *a4,
        int a5,
        int *a6,
        int *a7,
        int *a8,
        int *a9)
{
  __int64 pftDueTime; // rbx
  unsigned int v14; // edi
  __int64 v15; // rcx
  __int64 *v16; // rax
  int v17; // eax
  int IsFormatSupported; // ebx
  __int64 v19; // rdx
  __int64 v20; // r8
  int v21; // r9d
  void *v22; // rcx
  int v23; // eax
  __int64 v24; // rdx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v25; // ebx
  int v26; // eax
  struct _GUID v27; // xmm6
  void *v28; // rcx
  int *v29; // r12
  int *v30; // r15
  int *v31; // rdi
  int SharedModeEnginePeriodicity; // eax
  void *v33; // r9
  int nSamplesPerSec; // r8d
  int v35; // edx
  __int64 v36; // r9
  __int64 v37; // r9
  __int64 v38; // r9
  void *v39; // rcx
  struct CEndpointCharacteristics *v41; // [rsp+88h] [rbp-80h] BYREF
  LPVOID pv; // [rsp+90h] [rbp-78h] BYREF
  struct _GUID v43; // [rsp+98h] [rbp-70h] BYREF
  char v44; // [rsp+A8h] [rbp-60h]
  LPVOID v45; // [rsp+B8h] [rbp-50h] BYREF
  LPVOID *p_pv; // [rsp+C0h] [rbp-48h]
  struct tWAVEFORMATEX *v47; // [rsp+C8h] [rbp-40h] BYREF
  char v48; // [rsp+D0h] [rbp-38h]
  int *v49; // [rsp+D8h] [rbp-30h]
  int *v50; // [rsp+E0h] [rbp-28h]
  int *v51; // [rsp+E8h] [rbp-20h]
  struct _GUID v52; // [rsp+F8h] [rbp-10h] BYREF
  struct _GUID v53; // [rsp+108h] [rbp+0h] BYREF
  struct _TP_TIMER *v54[7]; // [rsp+118h] [rbp+10h] BYREF
  IID v55; // [rsp+150h] [rbp+48h]
  IID v56; // [rsp+160h] [rbp+58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D0h] [rbp+C8h]

  v51 = a7;
  v50 = a8;
  v49 = a9;
  v55 = *(IID *)a3;
  v56 = v55;
  EtwEventActivityIdControl(4LL, &v56);
  pftDueTime = (__int64)g_AudioHealthMonitor;
  v14 = g_AudioSrvWatchDogTimerInMs;
  v16 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
          v15,
          _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    v54,
    (struct _TP_TIMER *)v16[1],
    v14,
    (struct _TP_TIMER *)L"AudioServerGetSharedModeEnginePeriod",
    pftDueTime);
  v17 = ValidateVadServerSettings((IID *)a3);
  IsFormatSupported = v17;
  if ( v17 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x102B,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v17);
    goto LABEL_29;
  }
  v45 = 0LL;
  *(_QWORD *)&v43.Data1 = &v45;
  *(_QWORD *)v43.Data4 = 0LL;
  v44 = 1;
  IsFormatSupported = AudioServerIsFormatSupported(a1, a2, 0, (__int128 *)a3, a4, (struct tWAVEFORMATEX **)v43.Data4);
  if ( v44 )
  {
    v22 = **(void ***)&v43.Data1;
    **(_QWORD **)&v43.Data1 = *(_QWORD *)v43.Data4;
    if ( v22 )
      CoTaskMemFree(v22);
  }
  if ( IsFormatSupported < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x102F,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)IsFormatSupported);
    goto LABEL_27;
  }
  v41 = 0LL;
  v23 = (*(__int64 (__fastcall **)(PVOID, CEndpointStoreCache *, _QWORD, _QWORD, struct CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
          g_pEndpointCharacteristicsCache,
          a2,
          0LL,
          0LL,
          &v41);
  IsFormatSupported = v23;
  if ( v23 >= 0 )
  {
    v25 = *(_DWORD *)(a3 + 52);
    v26 = (*(__int64 (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v41 + 56LL))(v41);
    v23 = DeriveAudioProcessingModeConfiguration(
            *(_DWORD *)(a3 + 48),
            *(_DWORD *)(a3 + 56),
            *(_DWORD *)(a3 + 128),
            (__int64)v41,
            v26 == 1,
            0,
            v25,
            0LL,
            0,
            0,
            0LL,
            &v52,
            &v53,
            &v43,
            0LL,
            0LL);
    IsFormatSupported = v23;
    if ( v23 < 0 )
    {
      v24 = 4168LL;
      goto LABEL_12;
    }
    pv = 0LL;
    p_pv = &pv;
    v47 = 0LL;
    v48 = 1;
    v27 = v52;
    IsFormatSupported = DeriveConnectorFormatFromStreamFormat(
                          (struct _RTL_CRITICAL_SECTION *)v41,
                          *(_DWORD *)(a3 + 52),
                          a4,
                          &v43,
                          &v53,
                          &v52,
                          *(_DWORD *)(a3 + 68),
                          &v47);
    if ( v48 )
    {
      v28 = *p_pv;
      *p_pv = v47;
      if ( v28 )
        CoTaskMemFree(v28);
    }
    if ( IsFormatSupported >= 0 )
    {
      v43 = v27;
      v29 = v49;
      v30 = v50;
      v31 = v51;
      SharedModeEnginePeriodicity = CEndpointCharacteristics::GetSharedModeEnginePeriodicity(
                                      (__int64)v41,
                                      *(_DWORD *)(a3 + 52),
                                      (const struct tWAVEFORMATEX *)pv,
                                      (__int128 *)&v43,
                                      a5 != 0,
                                      a6,
                                      v51,
                                      v50,
                                      v49);
      IsFormatSupported = SharedModeEnginePeriodicity;
      if ( SharedModeEnginePeriodicity >= 0 )
      {
        v33 = pv;
        nSamplesPerSec = a4->nSamplesPerSec;
        v35 = *((_DWORD *)pv + 1);
        if ( nSamplesPerSec != v35 )
        {
          *a6 = TranslateFrameCountBetweenSamplingRates(*a6, v35, nSamplesPerSec);
          *v31 = TranslateFrameCountBetweenSamplingRates(*v31, *(_DWORD *)(v36 + 4), a4->nSamplesPerSec);
          *v30 = TranslateFrameCountBetweenSamplingRates(*v30, *(_DWORD *)(v37 + 4), a4->nSamplesPerSec);
          *v29 = TranslateFrameCountBetweenSamplingRates(*v29, *(_DWORD *)(v38 + 4), a4->nSamplesPerSec);
        }
        IsFormatSupported = 0;
        goto LABEL_24;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x104D,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)SharedModeEnginePeriodicity);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x104B,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)IsFormatSupported);
    }
    v33 = pv;
LABEL_24:
    pv = 0LL;
    if ( v33 )
      CoTaskMemFree(v33);
    goto LABEL_26;
  }
  v24 = 4146LL;
LABEL_12:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v24,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
    (const char *)(unsigned int)v23);
LABEL_26:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v41);
LABEL_27:
  v39 = v45;
  v45 = 0LL;
  if ( v39 )
    CoTaskMemFree(v39);
LABEL_29:
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)v54, v19, v20, v21);
  EtwEventActivityIdControl(4LL, &v56);
  return (unsigned int)IsFormatSupported;
}
