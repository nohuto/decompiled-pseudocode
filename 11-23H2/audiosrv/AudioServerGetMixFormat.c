/*
 * XREFs of AudioServerGetMixFormat @ 0x1801221C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009588 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetMixFormat@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x1800179D0 (-GetMixFormat@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P.c)
 *     _tlgKeywordOn @ 0x180020530 (_tlgKeywordOn.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180020D54 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180024758 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180024C18 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18002AA60 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?GetVirtualSurroundEffectMode@CEndpointCharacteristics@@QEAAIXZ @ 0x18002D434 (-GetVirtualSurroundEffectMode@CEndpointCharacteristics@@QEAAIXZ.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x18002FF68 (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180030368 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180035FF0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z @ 0x18003E474 (-ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z.c)
 *     ?PublishApoTelemetry@@YAJPEBGU_GUID@@@Z @ 0x18003E70C (-PublishApoTelemetry@@YAJPEBGU_GUID@@@Z.c)
 *     MIDL_user_allocate @ 0x18003EE80 (MIDL_user_allocate.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAUEndpointCharacteristicsDescriptor@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIProcessSubmixProxy@@HHPEBUtWAVEFORMATEX@@PEAU_GUID@@6666@Z @ 0x1800450A8 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAUEndpointCharacteristicsDescriptor@@W4SYSTEM_A.c)
 *     ??$copy_to@UIMMDevice@@@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAUIMMDevice@@@Z @ 0x18004756C (--$copy_to@UIMMDevice@@@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAUIM.c)
 *     ?reset@?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180048A20 (-reset@-$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z @ 0x18006567C (--0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x180065D00 (-RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x18006A819 (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x18008148A (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?IsStreamFormatSupportedForMixFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3PEAPEAU4@@Z @ 0x18008361E (-IsStreamFormatSupportedForMixFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@U_GUID@@W4__MIDL.c)
 *     McTemplateU0zqttq_EtwEventWriteTransfer @ 0x180083B3C (McTemplateU0zqttq_EtwEventWriteTransfer.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapSz@G@@@Z @ 0x18011C11C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapSz@G@@@-$_tlgWriteTempl.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GetMixFormatForThirdPartyVSS@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18011EFDC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GetMixFormatForThirdPartyVSS@@@details@wi.c)
 *     ?GetEndpointInstanceId@CEndpointCharacteristics@@QEAAJPEAPEAG@Z @ 0x18014CA10 (-GetEndpointInstanceId@CEndpointCharacteristics@@QEAAJPEAPEAG@Z.c)
 *     ?TryGetOverridingMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18015011C (-TryGetOverridingMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoin.c)
 */

__int64 __fastcall AudioServerGetMixFormat(__int64 a1, wchar_t *a2, __int64 a3, _QWORD *a4)
{
  int v6; // r14d
  __int64 pftDueTime; // rbx
  unsigned int v10; // edi
  __int64 v11; // rcx
  __int64 *v12; // rax
  __int64 v13; // rcx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 *v14; // rdi
  void *v15; // rcx
  int MixFormat; // ebx
  int v17; // r8d
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v18; // ebx
  int v19; // eax
  struct _GUID v20; // xmm6
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v21; // edx
  void *v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  struct wil::details::IFunctorHost *v25; // r8
  void *v26; // rdx
  unsigned __int16 v27; // r8
  const struct tWAVEFORMATEX *v28; // rax
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v29; // r8d
  int (__fastcall *v30)(struct IAudioPolicyManager *, __int64, __int64 *); // rbx
  __int64 v31; // rdx
  __int64 v32; // rcx
  _DWORD *v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  void *v37; // rcx
  void *v38; // rax
  void *v39; // rcx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v40; // edx
  char v41; // di
  void *v42; // rdx
  void *v43; // rcx
  void *v44; // rax
  void *v45; // rax
  int v46; // eax
  void *v47; // rcx
  void *v48; // rcx
  char v50; // [rsp+88h] [rbp-80h] BYREF
  LPVOID pv; // [rsp+90h] [rbp-78h] BYREF
  LPVOID Src; // [rsp+98h] [rbp-70h] BYREF
  struct _GUID v53; // [rsp+A8h] [rbp-60h] BYREF
  LPVOID v54; // [rsp+B8h] [rbp-50h] BYREF
  int v55; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v56; // [rsp+C8h] [rbp-40h] BYREF
  LPVOID v57; // [rsp+D0h] [rbp-38h] BYREF
  CEndpointCharacteristics *v58[2]; // [rsp+D8h] [rbp-30h] BYREF
  std::_Ref_count_base *v59; // [rsp+E8h] [rbp-20h]
  int v60; // [rsp+F0h] [rbp-18h] BYREF
  unsigned __int16 *v61[2]; // [rsp+F8h] [rbp-10h] BYREF
  char v62; // [rsp+108h] [rbp+0h]
  __int64 v63; // [rsp+118h] [rbp+10h] BYREF
  LPVOID *p_pv; // [rsp+120h] [rbp+18h]
  struct tWAVEFORMATEX *v65; // [rsp+128h] [rbp+20h] BYREF
  char v66; // [rsp+130h] [rbp+28h]
  LPVOID *v67; // [rsp+138h] [rbp+30h]
  struct tWAVEFORMATEX *v68; // [rsp+140h] [rbp+38h] BYREF
  char v69; // [rsp+148h] [rbp+40h]
  struct DiagnosticsInfo v70; // [rsp+150h] [rbp+48h] BYREF
  const char *v71; // [rsp+158h] [rbp+50h]
  __int64 v72; // [rsp+160h] [rbp+58h]
  __int16 v73; // [rsp+168h] [rbp+60h]
  _BYTE v74[8]; // [rsp+170h] [rbp+68h] BYREF
  __int64 v75; // [rsp+178h] [rbp+70h]
  int v76; // [rsp+184h] [rbp+7Ch]
  struct _TP_TIMER *v77[7]; // [rsp+198h] [rbp+90h] BYREF
  IID v78; // [rsp+1D0h] [rbp+C8h]
  IID v79; // [rsp+1E0h] [rbp+D8h] BYREF
  LPVOID *p_Src; // [rsp+1F0h] [rbp+E8h] BYREF
  struct tWAVEFORMATEX *v81; // [rsp+1F8h] [rbp+F0h] BYREF
  char v82; // [rsp+200h] [rbp+F8h]
  wil::details::in1diag3 *retaddr; // [rsp+270h] [rbp+168h]

  v6 = 0;
  v78 = *(IID *)a3;
  v79 = v78;
  EtwEventActivityIdControl(4LL, &v79);
  pftDueTime = (__int64)g_AudioHealthMonitor;
  v10 = g_AudioSrvWatchDogTimerInMs;
  v12 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
          v11,
          _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    v77,
    (struct _TP_TIMER *)v12[1],
    v10,
    (struct _TP_TIMER *)L"AudioServerGetMixFormat",
    pftDueTime);
  v14 = (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 *)(a3 + 52);
  Src = 0LL;
  *(_OWORD *)v58 = 0LL;
  v54 = 0LL;
  v59 = 0LL;
  v63 = 0LL;
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    McTemplateU0zqttq_EtwEventWriteTransfer(
      v13,
      (int)&AudioSrv_GetMixFormat_Task_Start,
      a2,
      *(_DWORD *)(a3 + 48),
      *(_DWORD *)(a3 + 56),
      *(_DWORD *)(a3 + 68),
      *v14);
  *a4 = 0LL;
  MixFormat = ValidateVadServerSettings((IID *)a3);
  if ( MixFormat >= 0 )
  {
    MixFormat = (*(__int64 (__fastcall **)(PVOID, wchar_t *, _QWORD, _QWORD, CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 40LL))(
                  g_pEndpointCharacteristicsCache,
                  a2,
                  0LL,
                  0LL,
                  v58);
    if ( MixFormat >= 0 )
    {
      wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::copy_to<IMMDevice>((__int64 *)v58[0] + 5, &v63);
      v18 = *v14;
      v19 = (*(__int64 (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v58[0] + 56LL))(v58[0]);
      MixFormat = DeriveAudioProcessingModeConfiguration(
                    *(_DWORD *)(a3 + 48),
                    *(_DWORD *)(a3 + 56),
                    *(_DWORD *)(a3 + 128),
                    v58,
                    v19 == 1,
                    0,
                    v18,
                    0LL,
                    0,
                    0,
                    0LL,
                    0LL,
                    (struct _GUID *)v61,
                    &v53,
                    0LL,
                    0LL);
      if ( MixFormat >= 0 )
      {
        v20 = v53;
        v21 = *v14;
        p_Src = &Src;
        v81 = 0LL;
        v82 = 1;
        MixFormat = EffectPack::GetMixFormat(v58[1], v21, &v53, &v81);
        if ( v82 )
        {
          LODWORD(v15) = (_DWORD)p_Src;
          v22 = *p_Src;
          *p_Src = v81;
          if ( v22 )
            CoTaskMemFree(v22);
        }
        if ( MixFormat >= 0 )
        {
          if ( *(_DWORD *)(a3 + 140)
            && !(*(unsigned int (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v58[0] + 56LL))(v58[0])
            && *v14 == eHostProcessConnector
            && *((_WORD *)Src + 1) == 2
            && !(unsigned int)ValidateUncompressedWaveFormatEx((const struct tWAVEFORMATEX *)Src)
            && dword_180199650[*(unsigned int *)(a3 + 48)] )
          {
            if ( (unsigned int)CEndpointCharacteristics::GetVirtualSurroundEffectMode(v58[0]) )
            {
              v50 = 1;
              v6 = 1;
            }
            else
            {
              v50 = 0;
              v57 = &v50;
              v70 = (struct DiagnosticsInfo)retaddr;
              v71 = "avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp";
              v73 = 3590;
              v72 = 0LL;
              wil::details::FeatureImpl<__WilFeatureTraits_Feature_GetMixFormatForThirdPartyVSS>::ReportUsage(
                `wil::Feature<__WilFeatureTraits_Feature_GetMixFormatForThirdPartyVSS>::GetImpl'::`2'::impl,
                1u,
                v23,
                v24);
              *(_QWORD *)&v53.Data1 = &off_18017CA88;
              *(_QWORD *)v53.Data4 = &v57;
              wil::details::FeatureFunctorHost::FeatureFunctorHost(
                (wil::details::FeatureFunctorHost *)v74,
                25447807,
                &v70);
              wil::details::RunFunctor((wil::details *)&v53, (struct wil::details::IFunctor *)v74, v25);
              if ( v75 )
                *(_DWORD *)(v75 + 16) = v76;
            }
            if ( v50 )
            {
              pv = 0LL;
              v65 = 0LL;
              p_pv = &pv;
              v66 = 1;
              MixFormat = CloneWaveFormat((const struct tWAVEFORMATEX *)Src, &v65);
              if ( v66 )
              {
                v26 = *p_pv;
                *p_pv = v65;
                if ( v26 )
                  CoTaskMemFree(v26);
              }
              if ( MixFormat < 0 )
              {
                v15 = pv;
                pv = 0LL;
                if ( v15 )
                  CoTaskMemFree(v15);
                goto LABEL_57;
              }
              *((_WORD *)pv + 1) = 8;
              v27 = 8 * (*((_WORD *)pv + 7) >> 3);
              *((_WORD *)pv + 6) = v27;
              *((_DWORD *)pv + 2) = *((_DWORD *)pv + 1) * v27;
              v28 = (const struct tWAVEFORMATEX *)pv;
              if ( *(_WORD *)pv == 0xFFFE )
              {
                *((_DWORD *)pv + 5) = 1599;
                v28 = (const struct tWAVEFORMATEX *)pv;
              }
              v29 = *v14;
              v53 = *(struct _GUID *)v61;
              if ( !(unsigned int)IsStreamFormatSupportedForMixFormat(
                                    v58,
                                    &v53,
                                    v29,
                                    (const struct tWAVEFORMATEX *)Src,
                                    v28,
                                    0LL) )
              {
                v56 = 0LL;
                v30 = *(int (__fastcall **)(struct IAudioPolicyManager *, __int64, __int64 *))(*(_QWORD *)g_PolicyManager
                                                                                             + 32LL);
                wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>::reset(&v56);
                if ( v30(g_PolicyManager, a1, &v56) >= 0 )
                {
                  if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v56 + 504LL))(v56) )
                  {
                    v61[0] = (unsigned __int16 *)&v57;
                    v57 = 0LL;
                    v61[1] = 0LL;
                    v62 = 1;
                    CEndpointCharacteristics::GetEndpointInstanceId(v58[0], &v61[1]);
                    if ( v62 )
                      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
                        (void **)v61[0],
                        v61[1]);
                    v33 = (_DWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                                      v32,
                                      _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
                    if ( *v33 > 4u && tlgKeywordOn((__int64)v33, 512LL) )
                    {
                      v61[0] = (unsigned __int16 *)v57;
                      v60 = *(_DWORD *)(a3 + 128);
                      v55 = v6;
                      *(_QWORD *)&v53.Data1 = 0x2000000LL;
                      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
                        v34,
                        byte_180193E84,
                        v35,
                        v36,
                        (__int64)&v53,
                        (__int64)&v55,
                        (__int64)&v60,
                        (const WCHAR **)v61);
                    }
                    if ( v57 )
                      CoTaskMemFree(v57);
                  }
                  LOBYTE(v31) = 1;
                  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v56 + 512LL))(v56, v31);
                  v37 = Src;
                  v38 = pv;
                  pv = 0LL;
                  Src = v38;
                  if ( v37 )
                    CoTaskMemFree(v37);
                }
                wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v56);
              }
              v39 = pv;
              pv = 0LL;
              MixFormat = 0;
              if ( v39 )
                CoTaskMemFree(v39);
            }
          }
          v40 = *v14;
          v67 = &v54;
          v68 = 0LL;
          v69 = 1;
          v53 = v20;
          if ( CEndpointCharacteristics::TryGetOverridingMixFormat(v58[0], v40, &v53, &v68) < 0 || (v41 = 1, !v54) )
            v41 = 0;
          if ( v69 )
          {
            v42 = *v67;
            *v67 = v68;
            if ( v42 )
              CoTaskMemFree(v42);
          }
          if ( v41 )
          {
            v43 = Src;
            v44 = v54;
            v54 = 0LL;
            Src = v44;
            if ( v43 )
              CoTaskMemFree(v43);
          }
          v45 = MIDL_user_allocate(*((unsigned __int16 *)Src + 8) + 18LL);
          *a4 = v45;
          if ( v45 )
          {
            memcpy_0(v45, Src, *((unsigned __int16 *)Src + 8) + 18LL);
            v53 = *(struct _GUID *)*((_QWORD *)v58[1] + 159);
            v46 = PublishApoTelemetry((CEndpointStoreCache *)a2, &v53);
            if ( v46 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0xE5E,
                (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
                (const char *)(unsigned int)v46);
          }
          else
          {
            MixFormat = -2147024882;
          }
        }
      }
    }
  }
LABEL_57:
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    McGenEventWrite_EtwEventWriteTransfer(
      (_DWORD)v15,
      (unsigned int)&AudioSrv_GetMixFormat_Task_Stop,
      v17,
      1,
      (__int64)&p_Src);
  if ( MixFormat < 0 )
    AudSrvTraceLoggingErrorHelper("AudioServerGetMixFormat", 3682, MixFormat);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v63);
  if ( v59 )
    std::_Ref_count_base::_Decref(v59);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v58);
  v47 = v54;
  v54 = 0LL;
  if ( v47 )
    CoTaskMemFree(v47);
  v48 = Src;
  Src = 0LL;
  if ( v48 )
    CoTaskMemFree(v48);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)v77);
  EtwEventActivityIdControl(4LL, &v79);
  return (unsigned int)MixFormat;
}
