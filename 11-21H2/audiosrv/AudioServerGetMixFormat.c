/*
 * XREFs of AudioServerGetMixFormat @ 0x180010C40
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180004224 (--1-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ?reset@?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18000F4A4 (-reset@-$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?PublishApoTelemetry@@YAJPEBG@Z @ 0x18001110C (-PublishApoTelemetry@@YAJPEBG@Z.c)
 *     ?TryGetOverridingMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x1800111A0 (-TryGetOverridingMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoin.c)
 *     ?ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z @ 0x180011308 (-ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z.c)
 *     McTemplateU0zqttq_EtwEventWriteTransfer @ 0x18001139C (McTemplateU0zqttq_EtwEventWriteTransfer.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180011468 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180015934 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800214C0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3PEAPEAU4@@Z @ 0x18002D350 (-IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_i.c)
 *     ?GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18002E8D0 (-GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIProcessSubmixProxy@@HHPEBUtWAVEFORMATEX@@PEAU_GUID@@6666@Z @ 0x180033030 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STRE.c)
 *     ?GetVirtualSurroundEffectMode@CEndpointCharacteristics@@QEAAIXZ @ 0x180038290 (-GetVirtualSurroundEffectMode@CEndpointCharacteristics@@QEAAIXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1800463D0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004A9F0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z @ 0x1800506D4 (--0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x180050744 (-RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z.c)
 *     ??1Completer@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x18005DB34 (--1Completer@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     atexit @ 0x18005EF98 (atexit.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18005F02C (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x180062529 (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C5F8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x1800E803C (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x1800EAFFC (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapSz@G@@@Z @ 0x1800ED414 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapSz@G@@@-$_tlgWriteTempl.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GetMixFormatForThirdPartyVSS@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800EF8C0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GetMixFormatForThirdPartyVSS@@@details@wi.c)
 *     ?GetEndpointInstanceId@CEndpointCharacteristics@@QEAAJPEAPEAG@Z @ 0x180148EB8 (-GetEndpointInstanceId@CEndpointCharacteristics@@QEAAJPEAPEAG@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AudioServerGetMixFormat(__int64 a1, const unsigned __int16 *a2, __int128 *a3, _QWORD *a4)
{
  _FILETIME v8; // rdi
  __int64 v9; // rbx
  int v10; // r12d
  __int64 v11; // rcx
  int v12; // ecx
  struct _TP_TIMER *ThreadpoolTimer; // r10
  __int64 v14; // rbx
  int MixFormat; // edi
  int v16; // r8d
  struct _GUID v17; // xmm6
  void *v18; // rdx
  bool v19; // si
  void *v20; // rdx
  void *v21; // rax
  int v22; // eax
  void *v23; // rcx
  void *v24; // rcx
  __int64 v26; // rdx
  struct wil::details::IFunctorHost *v27; // r8
  struct tWAVEFORMATEX *v28; // rdx
  struct tWAVEFORMATEX *v29; // rcx
  WORD v30; // r8
  struct tWAVEFORMATEX *v31; // rax
  int (__fastcall *v32)(struct IAudioPolicyManager *, __int64, LPVOID *); // rdi
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  int v36; // r9d
  struct tWAVEFORMATEX *v37; // rax
  void *v38; // rcx
  struct tWAVEFORMATEX *v39; // rcx
  void *v40; // rax
  void *v41; // rcx
  BOOL v42; // [rsp+20h] [rbp-E0h]
  char v43; // [rsp+80h] [rbp-80h] BYREF
  struct tWAVEFORMATEX *v44; // [rsp+88h] [rbp-78h] BYREF
  void *Src; // [rsp+90h] [rbp-70h] BYREF
  CEndpointCharacteristics *v46; // [rsp+98h] [rbp-68h] BYREF
  LPVOID Context; // [rsp+A0h] [rbp-60h] BYREF
  struct _FILETIME pftDueTime; // [rsp+A8h] [rbp-58h] BYREF
  WINBOOL fPending[4]; // [rsp+B0h] [rbp-50h] BYREF
  struct _GUID v50; // [rsp+C0h] [rbp-40h] BYREF
  LPVOID v51; // [rsp+D0h] [rbp-30h] BYREF
  int v52; // [rsp+D8h] [rbp-28h] BYREF
  unsigned __int16 *v53[2]; // [rsp+E0h] [rbp-20h] BYREF
  char v54; // [rsp+F0h] [rbp-10h]
  struct tWAVEFORMATEX **v55; // [rsp+100h] [rbp+0h]
  struct tWAVEFORMATEX *v56; // [rsp+108h] [rbp+8h] BYREF
  char v57; // [rsp+110h] [rbp+10h]
  LPVOID *v58; // [rsp+118h] [rbp+18h]
  struct tWAVEFORMATEX *v59; // [rsp+120h] [rbp+20h] BYREF
  char v60; // [rsp+128h] [rbp+28h]
  _QWORD pv[2]; // [rsp+130h] [rbp+30h] BYREF
  DWORD CurrentThreadId; // [rsp+140h] [rbp+40h]
  const wchar_t *v63; // [rsp+148h] [rbp+48h]
  _FILETIME v64; // [rsp+150h] [rbp+50h]
  char v65; // [rsp+158h] [rbp+58h]
  __int64 v66; // [rsp+15Ch] [rbp+5Ch]
  DiagnosticsInfo v67; // [rsp+168h] [rbp+68h] BYREF
  const char *v68; // [rsp+170h] [rbp+70h]
  __int64 v69; // [rsp+178h] [rbp+78h]
  __int16 v70; // [rsp+180h] [rbp+80h]
  _BYTE v71[8]; // [rsp+188h] [rbp+88h] BYREF
  __int64 v72; // [rsp+190h] [rbp+90h]
  int v73; // [rsp+19Ch] [rbp+9Ch]
  __int128 v74; // [rsp+1B0h] [rbp+B0h]
  __int128 v75; // [rsp+1C0h] [rbp+C0h] BYREF
  void **p_Src; // [rsp+1D0h] [rbp+D0h] BYREF
  struct tWAVEFORMATEX *v77; // [rsp+1D8h] [rbp+D8h] BYREF
  char v78; // [rsp+1E0h] [rbp+E0h]
  wil::details::in1diag3 *retaddr; // [rsp+248h] [rbp+148h]

  v74 = *a3;
  v75 = v74;
  EtwEventActivityIdControl(4LL, &v75);
  v8 = g_AudioHealthMonitor;
  v9 = g_AudioSrvWatchDogTimerInMs;
  v10 = 0;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, fPending, &Context)
    && fPending[0] )
  {
    *(_QWORD *)&v50.Data1 = &`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
    Context = &qword_1801C2788;
    qword_1801C2788 = (__int64)&AudioSrvTelemetryProvider::`vftable';
    qword_1801C27A0 = (__int64)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    *(_DWORD *)v50.Data4 = 0;
    wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer(&v50);
  }
  v11 = *((_QWORD *)Context + 1);
  pv[0] = 0LL;
  pv[1] = v11;
  CurrentThreadId = GetCurrentThreadId();
  v63 = L"AudioServerGetMixFormat";
  v64 = v8;
  v65 = 0;
  v66 = 0LL;
  if ( (unsigned int)v9 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime = (struct _FILETIME)(-10000 * v9 / 3);
      SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, (unsigned int)v9 / 3, 0);
    }
  }
  Src = 0LL;
  v51 = 0LL;
  v46 = 0LL;
  v14 = 0LL;
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    McTemplateU0zqttq_EtwEventWriteTransfer(
      v12,
      (unsigned int)&AudioSrv_GetMixFormat_Task_Start,
      (_DWORD)a2,
      *((_DWORD *)a3 + 12),
      *((_DWORD *)a3 + 14),
      *((_DWORD *)a3 + 17),
      *((_DWORD *)a3 + 13));
  *a4 = 0LL;
  MixFormat = ValidateVadServerSettings((struct VadServerSettings *)a3);
  if ( MixFormat >= 0 )
  {
    MixFormat = (*(__int64 (__fastcall **)(PVOID, const unsigned __int16 *, _QWORD, _QWORD, CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
                  g_pEndpointCharacteristicsCache,
                  a2,
                  0LL,
                  0LL,
                  &v46);
    if ( MixFormat >= 0 )
    {
      v14 = *((_QWORD *)v46 + 2);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
      v42 = (*(__int64 (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v46 + 56LL))(v46) == 1;
      MixFormat = DeriveAudioProcessingModeConfiguration(
                    *((unsigned int *)a3 + 12),
                    *((unsigned int *)a3 + 14),
                    *((unsigned int *)a3 + 32),
                    v46);
      if ( MixFormat >= 0 )
      {
        p_Src = &Src;
        v77 = 0LL;
        v78 = 1;
        v17 = v50;
        MixFormat = CEndpointCharacteristics::GetMixFormat(
                      v46,
                      (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*((_DWORD *)a3 + 13),
                      &v50,
                      &v77);
        if ( v78 )
        {
          v18 = *p_Src;
          *p_Src = v77;
          if ( v18 )
            CoTaskMemFree(v18);
        }
        if ( MixFormat >= 0 )
        {
          if ( *((_DWORD *)a3 + 35)
            && !(*(unsigned int (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v46 + 56LL))(v46)
            && *((_WORD *)Src + 1) == 2
            && !(unsigned int)ValidateUncompressedWaveFormatEx((const struct tWAVEFORMATEX *)Src) )
          {
            if ( CEndpointCharacteristics::GetVirtualSurroundEffectMode(v46) )
            {
              v43 = 1;
              v10 = 1;
LABEL_48:
              v44 = 0LL;
              v55 = &v44;
              v56 = 0LL;
              v57 = 1;
              MixFormat = CloneWaveFormat((const struct tWAVEFORMATEX *)Src, &v56);
              if ( v57 )
              {
                v28 = *v55;
                *v55 = v56;
                if ( v28 )
                  CoTaskMemFree(v28);
              }
              if ( MixFormat < 0 )
              {
                v29 = v44;
                v44 = 0LL;
                if ( v29 )
                  CoTaskMemFree(v29);
                goto LABEL_27;
              }
              v44->nChannels = 8;
              v30 = 8 * (v44->wBitsPerSample >> 3);
              v44->nBlockAlign = v30;
              v44->nAvgBytesPerSec = v44->nSamplesPerSec * v30;
              v31 = v44;
              if ( v44->wFormatTag == 0xFFFE )
              {
                *(_DWORD *)&v44[1].nChannels = 1599;
                v31 = v44;
              }
              v50 = *(struct _GUID *)v53;
              if ( !IsStreamFormatSupportedForMixFormat(
                      v46,
                      &v50,
                      *((enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 *)a3 + 13),
                      (const struct tWAVEFORMATEX *)Src,
                      v31,
                      0LL) )
              {
                Context = 0LL;
                v32 = *(int (__fastcall **)(struct IAudioPolicyManager *, __int64, LPVOID *))(*(_QWORD *)g_PolicyManager
                                                                                            + 32LL);
                wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>::reset((__int64 *)&Context);
                if ( v32(g_PolicyManager, a1, &Context) >= 0 )
                {
                  if ( !(*(unsigned __int8 (__fastcall **)(LPVOID))(*(_QWORD *)Context + 504LL))(Context) )
                  {
                    pftDueTime = 0LL;
                    v53[0] = (unsigned __int16 *)&pftDueTime;
                    v53[1] = 0LL;
                    v54 = 1;
                    CEndpointCharacteristics::GetEndpointInstanceId(v46, &v53[1]);
                    if ( v54 )
                      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
                        v53[0],
                        v53[1]);
                    v35 = *(_QWORD *)(wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                                        v34,
                                        _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                                    + 8);
                    if ( *(_DWORD *)v35 > 4u
                      && (*(_QWORD *)(v35 + 16) & 0x400000000000LL) != 0
                      && (*(_QWORD *)(v35 + 24) & 0x400000000000LL) == *(_QWORD *)(v35 + 24) )
                    {
                      v53[0] = (unsigned __int16 *)pftDueTime;
                      fPending[0] = *((_DWORD *)a3 + 32);
                      v52 = v10;
                      *(_QWORD *)&v50.Data1 = 0x2000000LL;
                      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
                        v35,
                        (unsigned int)&unk_180189257,
                        v35,
                        v36,
                        (__int64)&v50,
                        (__int64)&v52,
                        (__int64)fPending,
                        (__int64)v53);
                    }
                    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>((void **)&pftDueTime);
                  }
                  LOBYTE(v33) = 1;
                  (*(void (__fastcall **)(LPVOID, __int64))(*(_QWORD *)Context + 512LL))(Context, v33);
                  v37 = v44;
                  v44 = 0LL;
                  v38 = Src;
                  Src = v37;
                  if ( v38 )
                    CoTaskMemFree(v38);
                }
                wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&Context);
              }
              MixFormat = 0;
              v39 = v44;
              v44 = 0LL;
              if ( v39 )
                CoTaskMemFree(v39);
              goto LABEL_17;
            }
            v43 = 0;
            pftDueTime = (struct _FILETIME)&v43;
            v67 = (DiagnosticsInfo)retaddr;
            v68 = "avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp";
            v69 = 0LL;
            v70 = 3690;
            LOBYTE(v26) = 1;
            wil::details::FeatureImpl<__WilFeatureTraits_Feature_GetMixFormatForThirdPartyVSS>::ReportUsage(
              &`wil::Feature<__WilFeatureTraits_Feature_GetMixFormatForThirdPartyVSS>::GetImpl'::`2'::impl,
              v26);
            *(_QWORD *)&v50.Data1 = &off_1801772E0;
            *(_QWORD *)v50.Data4 = &pftDueTime;
            wil::details::FeatureFunctorHost::FeatureFunctorHost(
              (wil::details::FeatureFunctorHost *)v71,
              0x1844D7Fu,
              &v67);
            wil::details::RunFunctor((wil::details *)&v50, (struct wil::details::IFunctor *)v71, v27);
            if ( v72 )
              *(_DWORD *)(v72 + 16) = v73;
            if ( v43 )
              goto LABEL_48;
          }
LABEL_17:
          v58 = &v51;
          v59 = 0LL;
          v60 = 1;
          v50 = v17;
          v19 = CEndpointCharacteristics::TryGetOverridingMixFormat(
                  v46,
                  *((enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 *)a3 + 13),
                  &v50,
                  &v59) >= 0
             && v51;
          if ( v60 )
          {
            v20 = *v58;
            *v58 = v59;
            if ( v20 )
              CoTaskMemFree(v20);
          }
          if ( v19 )
          {
            v40 = v51;
            v51 = 0LL;
            v41 = Src;
            Src = v40;
            if ( v41 )
              CoTaskMemFree(v41);
          }
          v21 = operator new[](*((unsigned __int16 *)Src + 8) + 18LL, (const struct std::nothrow_t *)&std::nothrow);
          *a4 = v21;
          if ( v21 )
          {
            memcpy_0(v21, Src, *((unsigned __int16 *)Src + 8) + 18LL);
            v22 = PublishApoTelemetry(a2);
            if ( v22 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0xEC2,
                (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
                (const char *)(unsigned int)v22,
                v42);
          }
          else
          {
            MixFormat = -2147024882;
          }
        }
      }
    }
  }
LABEL_27:
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    McGenEventWrite_EtwEventWriteTransfer(1, (unsigned int)"|", v16, 1, (__int64)&p_Src);
  if ( MixFormat < 0 )
    AudSrvTraceLoggingErrorHelper("AudioServerGetMixFormat", 0xEC6u, MixFormat);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  if ( v46 )
    (*(void (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v46 + 16LL))(v46);
  v23 = v51;
  v51 = 0LL;
  if ( v23 )
    CoTaskMemFree(v23);
  v24 = Src;
  Src = 0LL;
  if ( v24 )
    CoTaskMemFree(v24);
  CWatchdogTimer<1>::~CWatchdogTimer<1>(pv);
  EtwEventActivityIdControl(4LL, &v75);
  return (unsigned int)MixFormat;
}
