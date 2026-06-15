/*
 * XREFs of ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@KU_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x18002C050
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSystemAudioStream@@@Z @ 0x180028DE0 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAV.c)
 *     ?DerivePeriodicityForStream@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@PEAUIAudioStreamInfo@@KW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@1U_GUID@@55_N6_J7PEAUIProcessSubmixProxy@@PEA_J9@Z @ 0x18002BC80 (-DerivePeriodicityForStream@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@PEAUIAudioStrea.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_JPEAUIStreamGroupProxy@@PEAUSystemAudioStream@@@Z @ 0x1800FEAD8 (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_JPEAUIStreamGroupProxy@@PEAUSyste.c)
 *     ?ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEAVCEndpointStore@@@Z @ 0x180100BC8 (-ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEAVCEndpointStore@@@Z.c)
 *     ?GetDefaultA2dpRenderSaDeviceParams@CBtAudioResourceManager@@AEAAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUSaDeviceParams@@@Z @ 0x180115D90 (-GetDefaultA2dpRenderSaDeviceParams@CBtAudioResourceManager@@AEAAJPEAVCEndpointCharacteristics@@.c)
 *     ?GetDefaultHfpRenderSaDeviceParams@CBtAudioResourceManager@@AEAAJPEAVCEndpointCharacteristics@@PEAPEAUSaDeviceParams@@@Z @ 0x180115FD0 (-GetDefaultHfpRenderSaDeviceParams@CBtAudioResourceManager@@AEAAJPEAVCEndpointCharacteristics@@P.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?IsSPDIFFormat@@YAHPEBUtWAVEFORMATEX@@@Z @ 0x180025FCC (-IsSPDIFFormat@@YAHPEBUtWAVEFORMATEX@@@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002B390 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18002E8D0 (-GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     ?GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x18002F320 (-GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     CreateAudioMediaType @ 0x180061614 (CreateAudioMediaType.c)
 *     memcpy_0 @ 0x180062529 (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x1800E803C (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?ConvertPCMWfxToIEEEFloat@@YAXPEAUtWAVEFORMATEX@@@Z @ 0x1800E884C (-ConvertPCMWfxToIEEEFloat@@YAXPEAUtWAVEFORMATEX@@@Z.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x1800E88CC (-DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_aud.c)
 *     ?DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@U_GUID@@22KPEAPEAU2@@Z @ 0x1800E9124 (-DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATE.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x1800EAFFC (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?GetAcceptableSPDIFTypeForDevice@@YAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@PEAPEAU2@H@Z @ 0x1800EE360 (-GetAcceptableSPDIFTypeForDevice@@YAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@PEAPEAU2@H@Z.c)
 *     wil::details::lambda_call__lambda_bb75d7955c525a160db854778f06b41a___::_lambda_call__lambda_bb75d7955c525a160db854778f06b41a___ @ 0x1800F52D8 (wil--details--lambda_call__lambda_bb75d7955c525a160db854778f06b41a___--_lambda_call__lambda_bb75.c)
 *     ?IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z @ 0x18013F2C0 (-IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z.c)
 *     ?DeriveDevicePipeFormatFromConnectorFormat@CEndpointCharacteristics@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x1801463A8 (-DeriveDevicePipeFormatFromConnectorFormat@CEndpointCharacteristics@@QEAAJU_GUID@@W4__MIDL___MID.c)
 *     ?DeriveMixFormatFromDevicePipeFormat@CEndpointCharacteristics@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@3@Z @ 0x180146A08 (-DeriveMixFormatFromDevicePipeFormat@CEndpointCharacteristics@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_.c)
 *     ?IsSPDIFEndpoint@CEndpointCharacteristics@@QEAA_NXZ @ 0x18014B320 (-IsSPDIFEndpoint@CEndpointCharacteristics@@QEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=14
__int64 __fastcall DeriveDeviceGraphFormatsForStream(
        struct _RTL_CRITICAL_SECTION *this,
        char a2,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a3,
        enum _AUDCLNT_SHAREMODE a4,
        unsigned int a5,
        struct _GUID *a6,
        struct _GUID *a7,
        struct _GUID *a8,
        IAudioMediaType *a9,
        struct tWAVEFORMATEX **a10,
        struct tWAVEFORMATEX **a11,
        struct tWAVEFORMATEX **a12,
        struct tWAVEFORMATEX **a13)
{
  struct tWAVEFORMATEX *v15; // rbx
  struct tWAVEFORMATEX *v16; // rdi
  HRESULT AudioMediaType; // esi
  __int64 v18; // rax
  IAudioMediaType *v19; // rcx
  unsigned int v20; // r8d
  __int64 v21; // rax
  int v22; // eax
  int v23; // eax
  void *v24; // rsi
  __int64 v25; // r14
  struct tWAVEFORMATEX *v26; // rax
  struct tWAVEFORMATEX *v27; // rax
  struct tWAVEFORMATEX *v28; // rax
  struct tWAVEFORMATEX *v29; // rax
  struct tWAVEFORMATEX *v30; // rax
  struct IMMDevice *OwningThread; // rbx
  const struct tWAVEFORMATEX *v33; // rsi
  bool v34; // sf
  wil::details::in1diag3 *v35; // rcx
  __int64 v36; // r9
  __int64 v37; // rdx
  BYTE *pData; // rbx
  int v39; // eax
  struct _GUID *v40; // r14
  const struct tWAVEFORMATEX *v41; // rax
  const struct tWAVEFORMATEX *v42; // rax
  const struct tWAVEFORMATEX *v43; // rax
  struct IAudioMediaType **v44; // [rsp+20h] [rbp-D9h]
  int v45; // [rsp+20h] [rbp-D9h]
  struct tWAVEFORMATEX *v46; // [rsp+40h] [rbp-B9h] BYREF
  LPVOID pv; // [rsp+48h] [rbp-B1h] BYREF
  struct IAudioMediaType *v48[2]; // [rsp+50h] [rbp-A9h] BYREF
  struct _GUID v49; // [rsp+60h] [rbp-99h] BYREF
  void *Src; // [rsp+70h] [rbp-89h] BYREF
  struct tWAVEFORMATEX *v51; // [rsp+78h] [rbp-81h] BYREF
  struct tagPROPVARIANT pvar; // [rsp+80h] [rbp-79h] BYREF
  struct _GUID v53; // [rsp+A0h] [rbp-59h] BYREF
  struct tWAVEFORMATEX **v54; // [rsp+B0h] [rbp-49h]
  struct tWAVEFORMATEX **v55; // [rsp+B8h] [rbp-41h]
  struct tWAVEFORMATEX **v56; // [rsp+C0h] [rbp-39h]
  struct tWAVEFORMATEX **v57; // [rsp+C8h] [rbp-31h]
  IAudioMediaType *ppIAudioMediaType[2]; // [rsp+D0h] [rbp-29h] BYREF
  unsigned int v59; // [rsp+E0h] [rbp-19h]
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+3Fh]

  *(_QWORD *)&v49.Data1 = a7;
  ppIAudioMediaType[0] = a9;
  v56 = a10;
  v55 = a11;
  v57 = a12;
  v54 = a13;
  pv = 0LL;
  v15 = 0LL;
  v46 = 0LL;
  v16 = 0LL;
  v51 = 0LL;
  Src = 0LL;
  if ( a4 == AUDCLNT_SHAREMODE_EXCLUSIVE )
  {
    AudioMediaType = CloneWaveFormat((const struct tWAVEFORMATEX *)a9, &v46);
    if ( AudioMediaType < 0 )
      goto LABEL_40;
    OwningThread = (struct IMMDevice *)this->OwningThread;
    *(_QWORD *)&pvar.vt = OwningThread;
    ((void (__fastcall *)(struct IMMDevice *))OwningThread->lpVtbl->AddRef)(OwningThread);
    v33 = (const struct tWAVEFORMATEX *)ppIAudioMediaType[0];
    if ( IsSPDIFFormat((const struct tWAVEFORMATEX *)ppIAudioMediaType[0])
      && CEndpointCharacteristics::IsSPDIFEndpoint((CEndpointCharacteristics *)this) )
    {
      AudioMediaType = GetAcceptableSPDIFTypeForDevice(OwningThread, v33, (struct tWAVEFORMATEX **)&pv, 0) != 0
                     ? 0x88890008
                     : 0;
    }
    else
    {
      AudioMediaType = CloneWaveFormat(v33, (struct tWAVEFORMATEX **)&pv);
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&pvar);
    v34 = AudioMediaType < 0;
LABEL_38:
    if ( !v34 )
    {
      v15 = v46;
      AudioMediaType = CloneWaveFormat(v46, (struct tWAVEFORMATEX **)&Src);
LABEL_23:
      if ( AudioMediaType >= 0 )
      {
        v27 = (struct tWAVEFORMATEX *)pv;
        pv = 0LL;
        *v54 = v27;
        v28 = v15;
        v15 = 0LL;
        *v55 = v28;
        v29 = v16;
        v16 = 0LL;
        *v56 = v29;
        v30 = (struct tWAVEFORMATEX *)Src;
        Src = 0LL;
        *v57 = v30;
      }
      goto LABEL_25;
    }
LABEL_40:
    v15 = v46;
    goto LABEL_25;
  }
  if ( a3 == eOffloadConnector )
  {
    v49 = *a7;
    AudioMediaType = DeriveOffloadConnectorFormatFromStreamFormat(
                       (struct CEndpointCharacteristics *)this,
                       (struct tWAVEFORMATEX *)a9,
                       0LL,
                       &v49,
                       (struct _GUID *)v44,
                       a5,
                       (struct tWAVEFORMATEX **)&pv);
    if ( AudioMediaType < 0 )
      goto LABEL_25;
    AudioMediaType = CloneWaveFormat((const struct tWAVEFORMATEX *)pv, &v51);
    v16 = v51;
    ConvertPCMWfxToIEEEFloat(v51);
    if ( AudioMediaType < 0 )
      goto LABEL_25;
    AudioMediaType = CloneWaveFormat(v16, &v46);
    v34 = AudioMediaType < 0;
    goto LABEL_38;
  }
  if ( a2 )
  {
    *(struct _GUID *)ppIAudioMediaType = *a8;
    *(struct _GUID *)&pvar.vt = *a7;
    v53 = *a6;
    AudioMediaType = DeriveConnectorFormatFromStreamFormat(
                       (struct CEndpointCharacteristics *)this,
                       a3,
                       (struct tWAVEFORMATEX *)a9,
                       &v53,
                       (struct _GUID *)&pvar,
                       (struct _GUID *)ppIAudioMediaType,
                       1,
                       (struct tWAVEFORMATEX **)&pv);
    if ( AudioMediaType < 0 )
      goto LABEL_25;
    ppIAudioMediaType[0] = 0LL;
    v48[0] = 0LL;
    *(_QWORD *)&pvar.vt = 0LL;
    *(_QWORD *)&v53.Data1 = 0LL;
    AudioMediaType = CreateAudioMediaType(
                       (const WAVEFORMATEX *)pv,
                       *((unsigned __int16 *)pv + 8) + 18,
                       ppIAudioMediaType);
    if ( AudioMediaType >= 0 )
    {
      v40 = *(struct _GUID **)&v49.Data1;
      v49 = *(struct _GUID *)*(_QWORD *)&v49.Data1;
      AudioMediaType = CEndpointCharacteristics::DeriveDevicePipeFormatFromConnectorFormat(
                         (CEndpointCharacteristics *)this,
                         &v49,
                         a3,
                         ppIAudioMediaType[0],
                         v48);
      if ( AudioMediaType >= 0 )
      {
        v49 = *v40;
        AudioMediaType = CEndpointCharacteristics::DeriveMixFormatFromDevicePipeFormat(
                           (CEndpointCharacteristics *)this,
                           &v49,
                           a3,
                           v48[0],
                           (struct IAudioMediaType **)&v53,
                           (struct IAudioMediaType **)&pvar);
        if ( AudioMediaType >= 0 )
        {
          v41 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))v48[0]->lpVtbl->GetAudioFormat)(v48[0]);
          AudioMediaType = CloneWaveFormat(v41, (struct tWAVEFORMATEX **)&Src);
          if ( AudioMediaType >= 0 )
          {
            v42 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)&v53.Data1 + 40LL))(*(_QWORD *)&v53.Data1);
            AudioMediaType = CloneWaveFormat(v42, &v51);
            if ( AudioMediaType >= 0 )
            {
              if ( *(_QWORD *)&pvar.vt )
                v43 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)&pvar.vt + 40LL))(*(_QWORD *)&pvar.vt);
              else
                v43 = (const struct tWAVEFORMATEX *)Src;
              AudioMediaType = CloneWaveFormat(v43, &v46);
              v15 = v46;
            }
            v16 = v51;
          }
        }
      }
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v53);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&pvar);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v48);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)ppIAudioMediaType);
    goto LABEL_23;
  }
  v49 = *a8;
  AudioMediaType = GetDeviceDefaults(
                     (struct CEndpointCharacteristics *)this,
                     a3,
                     &v49,
                     (struct tWAVEFORMATEX **)&pv,
                     (struct tWAVEFORMATEX **)&Src,
                     0LL,
                     0LL);
  if ( AudioMediaType >= 0 )
  {
    v18 = *(_QWORD *)&a8->Data1 - *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
    if ( *(_QWORD *)&a8->Data1 == *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1 )
      v18 = *(_QWORD *)a8->Data4 - *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
    if ( v18 )
      goto LABEL_11;
    ppIAudioMediaType[0] = (IAudioMediaType *)this->OwningThread;
    ((void (__fastcall *)(IAudioMediaType *))ppIAudioMediaType[0]->lpVtbl->AddRef)(ppIAudioMediaType[0]);
    v49 = *a6;
    AudioMediaType = CEndpointCharacteristics::GetMixFormat((CEndpointCharacteristics *)this, a3, &v49, &v51);
    v19 = ppIAudioMediaType[0];
    if ( ppIAudioMediaType[0] )
    {
      ppIAudioMediaType[0] = 0LL;
      ((void (__fastcall *)(IAudioMediaType *))v19->lpVtbl->Release)(v19);
    }
    v16 = v51;
    if ( AudioMediaType >= 0 )
    {
LABEL_11:
      v46 = 0LL;
      EnterCriticalSection(this + 242);
      v48[0] = (struct IAudioMediaType *)&this[242];
      v49 = *a6;
      v20 = 0;
      while ( 1 )
      {
        v21 = qword_18017E3E0[2 * v20] - *(_QWORD *)&v49.Data1;
        if ( !v21 )
          v21 = qword_18017E3E0[2 * v20 + 1] - *(_QWORD *)v49.Data4;
        if ( !v21 )
          break;
        if ( ++v20 >= 0xA )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1935,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)0x80070490LL,
            v45);
LABEL_20:
          wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>((struct _RTL_CRITICAL_SECTION **)v48);
LABEL_21:
          v24 = Src;
          v25 = *((unsigned __int16 *)Src + 8);
          v26 = (struct tWAVEFORMATEX *)CoTaskMemAlloc(v25 + 18);
          v15 = v26;
          if ( v26 )
          {
            memcpy_0(v26, v24, v25 + 18);
            AudioMediaType = 0;
          }
          else
          {
            AudioMediaType = -2147024882;
          }
          goto LABEL_23;
        }
      }
      *(_OWORD *)ppIAudioMediaType = PKEY_AudioEngine_SignalProcessingMode_Specific_StreamGroupFormat;
      v22 = 2;
      if ( a3 == eKeywordDetectorConnector )
        v22 = 602;
      v59 = v20 + v22;
      memset(&pvar, 0, sizeof(pvar));
      *(_QWORD *)&v49.Data1 = &pvar;
      v49.Data4[0] = 1;
      v23 = (*(__int64 (__fastcall **)(PRTL_CRITICAL_SECTION_DEBUG, IAudioMediaType **, struct tagPROPVARIANT *, _QWORD *))(*(_QWORD *)this[1].DebugInfo + 40LL))(
              this[1].DebugInfo,
              ppIAudioMediaType,
              &pvar,
              qword_18017E3E0);
      if ( v23 < 0 )
      {
        v35 = retaddr;
        v36 = (unsigned int)v23;
        v37 = 6460LL;
LABEL_44:
        wil::details::in1diag3::Return_Hr(
          v35,
          (void *)v37,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)v36,
          v45);
        goto LABEL_19;
      }
      if ( pvar.vt != 65 || !(unsigned int)IsValidWfxBlob(&pvar) )
        goto LABEL_19;
      pData = pvar.bstrblobVal.pData;
      if ( (unsigned int)ValidateUncompressedWaveFormatEx((const struct tWAVEFORMATEX *)pvar.bstrblobVal.pData) )
      {
        v35 = retaddr;
        v36 = 2290679816LL;
        v37 = 6464LL;
        goto LABEL_44;
      }
      v39 = CloneWaveFormat((const struct tWAVEFORMATEX *)pData, &v46);
      if ( v39 < 0 )
      {
        v35 = retaddr;
        v36 = (unsigned int)v39;
        v37 = 6466LL;
        goto LABEL_44;
      }
      v15 = v46;
      if ( !v46 )
      {
LABEL_19:
        wil::details::lambda_call__lambda_bb75d7955c525a160db854778f06b41a___::_lambda_call__lambda_bb75d7955c525a160db854778f06b41a___(&v49);
        goto LABEL_20;
      }
      PropVariantClear((PROPVARIANT *)&pvar);
      if ( this != (struct _RTL_CRITICAL_SECTION *)-9680LL )
        LeaveCriticalSection(this + 242);
      if ( !v15 )
        goto LABEL_21;
      goto LABEL_23;
    }
  }
LABEL_25:
  CoTaskMemFree(Src);
  CoTaskMemFree(v16);
  CoTaskMemFree(v15);
  CoTaskMemFree(pv);
  return (unsigned int)AudioMediaType;
}
