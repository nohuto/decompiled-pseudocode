/*
 * XREFs of ?DeriveAndCacheMixFormatsForConnector@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180145B04
 * Callers:
 *     ?SetDeviceFormatSwAudioEngine@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18014C490 (-SetDeviceFormatSwAudioEngine@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendp.c)
 * Callees:
 *     ?GetConnectorFormatForProcessingMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180002318 (-GetConnectorFormatForProcessingMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioeng.c)
 *     ?IsConnectorModeSupported@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x1800024E0 (-IsConnectorModeSupported@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     ?GetSupportedConnectorModesInternal@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingModeArray@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SED_RESOLVEOPT@@@Z @ 0x180002514 (-GetSupportedConnectorModesInternal@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingMode.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x1800492E4 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x18004A0DC (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     CreateAudioMediaType @ 0x180061614 (CreateAudioMediaType.c)
 *     wil::details::lambda_call__lambda_84296fe18ba082025981336f3f60a145___::_lambda_call__lambda_84296fe18ba082025981336f3f60a145___ @ 0x180068410 (wil--details--lambda_call__lambda_84296fe18ba082025981336f3f60a145___--_lambda_call__lambda_8429.c)
 *     wil::details::lambda_call__lambda_f778fef3403f109b5af6df4030ba8824___::_lambda_call__lambda_f778fef3403f109b5af6df4030ba8824___ @ 0x180068474 (wil--details--lambda_call__lambda_f778fef3403f109b5af6df4030ba8824___--_lambda_call__lambda_f778.c)
 *     _lambda_498e2e7efda85f2c61be28d23ba8beb3_::operator() @ 0x180068688 (_lambda_498e2e7efda85f2c61be28d23ba8beb3_--operator().c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800C7E10 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x1800EAFFC (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ??4?$com_ptr_t@UIAudioMediaType@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioMediaType@@@Z @ 0x180144528 (--4-$com_ptr_t@UIAudioMediaType@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioMediaTyp.c)
 *     ?CacheDevicePipeFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAUtWAVEFORMATEX@@@Z @ 0x180145060 (-CacheDevicePipeFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_00.c)
 *     ?CacheMixFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@@Z @ 0x180145170 (-CacheMixFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000.c)
 *     ?CacheStreamGroupFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAUtWAVEFORMATEX@@@Z @ 0x180145454 (-CacheStreamGroupFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 *     ?CanBuildProcessingModesOnRawConnector@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180145618 (-CanBuildProcessingModesOnRawConnector@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioe.c)
 *     ?ClearMixFormatCache@CEndpointCharacteristics@@QEAAJW4CMFC_OPTIONS@@@Z @ 0x1801458AC (-ClearMixFormatCache@CEndpointCharacteristics@@QEAAJW4CMFC_OPTIONS@@@Z.c)
 *     ?ConfirmDeviceFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@H@Z @ 0x180145A10 (-ConfirmDeviceFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL_i.c)
 *     ?DeriveDevicePipeFormatFromConnectorFormat@CEndpointCharacteristics@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x1801463A8 (-DeriveDevicePipeFormatFromConnectorFormat@CEndpointCharacteristics@@QEAAJU_GUID@@W4__MIDL___MID.c)
 *     ?DeriveMixFormatFromDevicePipeFormat@CEndpointCharacteristics@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@3@Z @ 0x180146A08 (-DeriveMixFormatFromDevicePipeFormat@CEndpointCharacteristics@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_.c)
 *     ?DeriveOverridingMixFormatInternal@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAUIAudioMediaType@@@Z @ 0x180146E70 (-DeriveOverridingMixFormatInternal@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengin.c)
 *     ?GetAPOSupportedProcessingModes@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEAVCAudioSignalProcessingModeArray@@@Z @ 0x180147970 (-GetAPOSupportedProcessingModes@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall CEndpointCharacteristics::DeriveAndCacheMixFormatsForConnector(
        CEndpointCharacteristics *this,
        __int32 a2)
{
  char v3; // r12
  unsigned int v4; // r14d
  struct IAudioMediaType *v5; // rbx
  unsigned int v6; // edi
  __int64 SupportedConnectorModesInternal; // rax
  GUID v8; // xmm2
  int ConnectorFormatForProcessingMode; // esi
  void *v10; // rdx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  struct IAudioMediaType *v14; // rbx
  const struct tWAVEFORMATEX *v15; // rax
  __int64 v16; // rax
  struct tWAVEFORMATEX *v17; // rax
  unsigned __int16 *v18; // rax
  WAVEFORMATEX *v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rdx
  WAVEFORMATEX *v22; // rcx
  int APOSupportedProcessingModes; // eax
  signed int v24; // eax
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v25; // edi
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v26; // edi
  int v27; // eax
  struct IAudioMediaType *v28; // rdi
  const struct tWAVEFORMATEX *v29; // rsi
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v30; // r14d
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v31; // esi
  struct tWAVEFORMATEX *v32; // rsi
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v33; // r14d
  unsigned __int16 *v34; // rdi
  unsigned int v35; // edx
  __int64 v37; // rdx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v38; // [rsp+30h] [rbp-D0h] BYREF
  WAVEFORMATEX *pAudioFormat; // [rsp+38h] [rbp-C8h] BYREF
  IAudioMediaType *ppIAudioMediaType; // [rsp+40h] [rbp-C0h] BYREF
  struct IAudioMediaType *v41; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v42; // [rsp+50h] [rbp-B0h]
  struct _GUID v43; // [rsp+60h] [rbp-A0h] BYREF
  struct _GUID v44; // [rsp+70h] [rbp-90h] BYREF
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 *v45; // [rsp+80h] [rbp-80h]
  struct _GUID v46; // [rsp+90h] [rbp-70h] BYREF
  struct IAudioMediaType *v47; // [rsp+A0h] [rbp-60h] BYREF
  struct _GUID v48; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v49; // [rsp+B8h] [rbp-48h]
  __int64 v50[2]; // [rsp+C8h] [rbp-38h] BYREF
  _OWORD v51[2]; // [rsp+D8h] [rbp-28h] BYREF
  char v52; // [rsp+F8h] [rbp-8h]
  struct _GUID v53; // [rsp+100h] [rbp+0h]
  char v54; // [rsp+110h] [rbp+10h]
  struct _GUID v55; // [rsp+120h] [rbp+20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+78h]

  v38 = a2;
  v50[0] = (__int64)this;
  v50[1] = (__int64)&v38;
  *(_QWORD *)&v55.Data1 = this;
  *(_QWORD *)v55.Data4 = &v38;
  v53 = v55;
  v3 = 1;
  v54 = 1;
  v4 = *(_DWORD *)(CEndpointCharacteristics::GetSupportedConnectorModesInternal(this, a2, 0) + 8);
  v5 = 0LL;
  v47 = 0LL;
  v6 = 0;
  if ( v4 )
  {
    while ( 1 )
    {
      SupportedConnectorModesInternal = CEndpointCharacteristics::GetSupportedConnectorModesInternal(this, v38, 0);
      if ( v6 >= *(_DWORD *)(SupportedConnectorModesInternal + 8) )
        v8 = GUID_00000000_0000_0000_0000_000000000000;
      else
        v8 = *(GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                        SupportedConnectorModesInternal,
                        v6);
      v55 = v8;
      *(_QWORD *)&v44.Data1 = this;
      *(_QWORD *)v44.Data4 = &v55;
      v45 = &v38;
      v48 = v44;
      *(_QWORD *)&v49 = &v38;
      BYTE8(v49) = 1;
      pAudioFormat = 0LL;
      *(_QWORD *)&v44.Data1 = &pAudioFormat;
      *(_QWORD *)v44.Data4 = 0LL;
      LOBYTE(v45) = 1;
      v43 = v8;
      ConnectorFormatForProcessingMode = CEndpointCharacteristics::GetConnectorFormatForProcessingMode(
                                           this,
                                           v38,
                                           &v43,
                                           (struct tWAVEFORMATEX **)v44.Data4);
      if ( (_BYTE)v45 )
      {
        v10 = **(void ***)&v44.Data1;
        **(_QWORD **)&v44.Data1 = *(_QWORD *)v44.Data4;
        if ( v10 )
          CoTaskMemFree(v10);
      }
      if ( ConnectorFormatForProcessingMode < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1D7F,
          (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)ConnectorFormatForProcessingMode);
        goto LABEL_40;
      }
      ppIAudioMediaType = 0LL;
      wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset((__int64 *)&ppIAudioMediaType);
      v11 = CreateAudioMediaType(pAudioFormat, pAudioFormat->cbSize + 18, &ppIAudioMediaType);
      ConnectorFormatForProcessingMode = v11;
      if ( v11 < 0 )
      {
        v21 = 7554LL;
        goto LABEL_37;
      }
      v11 = ValidateUncompressedWaveFormatEx(pAudioFormat);
      ConnectorFormatForProcessingMode = v11;
      if ( v11 < 0 )
        break;
      v43 = v55;
      v11 = CEndpointCharacteristics::ConfirmDeviceFormat(this, pAudioFormat, &v43, v38, 0);
      ConnectorFormatForProcessingMode = v11;
      if ( v11 < 0 )
      {
        v21 = 7562LL;
LABEL_37:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v21,
          (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)v11);
        goto LABEL_38;
      }
      v41 = 0LL;
      wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset((__int64 *)&v41);
      v43 = v55;
      v12 = CEndpointCharacteristics::DeriveDevicePipeFormatFromConnectorFormat(
              this,
              &v43,
              v38,
              ppIAudioMediaType,
              &v41);
      ConnectorFormatForProcessingMode = v12;
      if ( v12 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1D91,
          (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)v12);
        goto LABEL_33;
      }
      *(_QWORD *)&v43.Data1 = 0LL;
      wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset((__int64 *)&v43);
      v46 = v55;
      v13 = CEndpointCharacteristics::DeriveMixFormatFromDevicePipeFormat(
              this,
              &v46,
              v38,
              v41,
              (struct IAudioMediaType **)&v43,
              0LL);
      ConnectorFormatForProcessingMode = v13;
      if ( v13 < 0 )
      {
        v20 = 7576LL;
LABEL_31:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v20,
          (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)v13);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v43);
LABEL_33:
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v41);
LABEL_38:
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&ppIAudioMediaType);
LABEL_40:
        v22 = pAudioFormat;
        pAudioFormat = 0LL;
        if ( v22 )
          CoTaskMemFree(v22);
        wil::details::lambda_call__lambda_84296fe18ba082025981336f3f60a145___::_lambda_call__lambda_84296fe18ba082025981336f3f60a145___((__int64)&v48);
        goto LABEL_55;
      }
      v14 = *(struct IAudioMediaType **)&v43.Data1;
      v15 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)&v43.Data1 + 40LL))(*(_QWORD *)&v43.Data1);
      v46 = v55;
      v13 = CEndpointCharacteristics::CacheMixFormat(this, v38, &v46, v15);
      ConnectorFormatForProcessingMode = v13;
      if ( v13 < 0 )
      {
        v20 = 7579LL;
        goto LABEL_31;
      }
      v46 = v55;
      CEndpointCharacteristics::DeriveOverridingMixFormatInternal(this, v38, &v46, v14);
      v16 = *(_QWORD *)&v55.Data1 - *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
      if ( *(_QWORD *)&v55.Data1 == *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1 )
        v16 = *(_QWORD *)v55.Data4 - *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
      if ( !v16
        && (unsigned int)CEndpointCharacteristics::CanBuildProcessingModesOnRawConnector(this, (unsigned int)v38) )
      {
        v17 = (struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))v41->lpVtbl->GetAudioFormat)(v41);
        v46 = v55;
        v13 = CEndpointCharacteristics::CacheDevicePipeFormat(this, v38, &v46, v17);
        ConnectorFormatForProcessingMode = v13;
        if ( v13 < 0 )
        {
          v20 = 7587LL;
          goto LABEL_31;
        }
        wil::com_ptr_t<IAudioMediaType,wil::err_returncode_policy>::operator=((__int64 *)&v47, (__int64)v41);
      }
      v18 = (unsigned __int16 *)((__int64 (__fastcall *)(struct IAudioMediaType *))v14->lpVtbl->GetAudioFormat)(v14);
      v46 = v55;
      v44 = v55;
      lambda_498e2e7efda85f2c61be28d23ba8beb3_::operator()(v50, (const wchar_t *)&v44, (__int64)&v46, v18);
      BYTE8(v49) = 0;
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v43);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v41);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&ppIAudioMediaType);
      v19 = pAudioFormat;
      pAudioFormat = 0LL;
      if ( v19 )
        CoTaskMemFree(v19);
      wil::details::lambda_call__lambda_84296fe18ba082025981336f3f60a145___::_lambda_call__lambda_84296fe18ba082025981336f3f60a145___((__int64)&v48);
      if ( ++v6 >= v4 )
      {
        v5 = v47;
        goto LABEL_25;
      }
    }
    v21 = 7556LL;
    goto LABEL_37;
  }
LABEL_25:
  if ( !(unsigned int)CEndpointCharacteristics::CanBuildProcessingModesOnRawConnector(this, (unsigned int)v38) )
  {
LABEL_54:
    v3 = 0;
    ConnectorFormatForProcessingMode = 0;
    goto LABEL_55;
  }
  if ( !v5 )
  {
    ConnectorFormatForProcessingMode = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1DB2,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)0x8000FFFFLL);
    goto LABEL_55;
  }
  v41 = 0LL;
  v42 = 0LL;
  APOSupportedProcessingModes = CEndpointCharacteristics::GetAPOSupportedProcessingModes(
                                  this,
                                  v38,
                                  (struct CAudioSignalProcessingModeArray *)&v41);
  ConnectorFormatForProcessingMode = APOSupportedProcessingModes;
  if ( APOSupportedProcessingModes < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1DB5,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)APOSupportedProcessingModes);
    goto LABEL_64;
  }
  v24 = 0;
  LODWORD(pAudioFormat) = 0;
  if ( (int)v42 <= 0 )
  {
LABEL_53:
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v41);
    goto LABEL_54;
  }
  while ( 1 )
  {
    v25 = v38;
    v44 = *(struct _GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((__int64)&v41, v24);
    if ( CEndpointCharacteristics::IsConnectorModeSupported(this, (unsigned int)v25, &v44) )
      goto LABEL_52;
    *(_QWORD *)&v48.Data1 = this;
    *(_QWORD *)v48.Data4 = &v41;
    *(_QWORD *)&v49 = &pAudioFormat;
    *((_QWORD *)&v49 + 1) = &v38;
    v51[0] = v48;
    v51[1] = v49;
    v52 = 1;
    *(_QWORD *)&v43.Data1 = 0LL;
    ppIAudioMediaType = 0LL;
    wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset((__int64 *)&v43);
    wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset((__int64 *)&ppIAudioMediaType);
    v26 = v38;
    v44 = *(struct _GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                             (__int64)&v41,
                             (signed int)pAudioFormat);
    v27 = CEndpointCharacteristics::DeriveMixFormatFromDevicePipeFormat(
            this,
            &v44,
            v26,
            v5,
            &ppIAudioMediaType,
            (struct IAudioMediaType **)&v43);
    ConnectorFormatForProcessingMode = v27;
    if ( v27 < 0 )
      break;
    v28 = ppIAudioMediaType;
    v29 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(IAudioMediaType *))ppIAudioMediaType->lpVtbl->GetAudioFormat)(ppIAudioMediaType);
    v30 = v38;
    v44 = *(struct _GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                             (__int64)&v41,
                             (signed int)pAudioFormat);
    v27 = CEndpointCharacteristics::CacheMixFormat(this, v30, &v44, v29);
    ConnectorFormatForProcessingMode = v27;
    if ( v27 < 0 )
    {
      v37 = 7646LL;
      goto LABEL_63;
    }
    v31 = v38;
    v44 = *(struct _GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                             (__int64)&v41,
                             (signed int)pAudioFormat);
    CEndpointCharacteristics::DeriveOverridingMixFormatInternal(this, v31, &v44, v28);
    if ( *(_QWORD *)&v43.Data1 )
    {
      v32 = (struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)&v43.Data1 + 40LL))(*(_QWORD *)&v43.Data1);
      v33 = v38;
      v44 = *(struct _GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                               (__int64)&v41,
                               (signed int)pAudioFormat);
      v27 = CEndpointCharacteristics::CacheStreamGroupFormat(this, v33, &v44, v32);
      ConnectorFormatForProcessingMode = v27;
      if ( v27 < 0 )
      {
        v37 = 7656LL;
        goto LABEL_63;
      }
    }
    v34 = (unsigned __int16 *)((__int64 (__fastcall *)(struct IAudioMediaType *))v28->lpVtbl->GetAudioFormat)(v28);
    v44 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    v46 = *(struct _GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                             (__int64)&v41,
                             (signed int)pAudioFormat);
    lambda_498e2e7efda85f2c61be28d23ba8beb3_::operator()(v50, (const wchar_t *)&v46, (__int64)&v44, v34);
    v52 = 0;
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&ppIAudioMediaType);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v43);
    wil::details::lambda_call__lambda_f778fef3403f109b5af6df4030ba8824___::_lambda_call__lambda_f778fef3403f109b5af6df4030ba8824___((__int64)v51);
LABEL_52:
    v24 = (_DWORD)pAudioFormat + 1;
    LODWORD(pAudioFormat) = v24;
    if ( v24 >= (int)v42 )
      goto LABEL_53;
  }
  v37 = 7641LL;
LABEL_63:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v37,
    (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)v27);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&ppIAudioMediaType);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v43);
  wil::details::lambda_call__lambda_f778fef3403f109b5af6df4030ba8824___::_lambda_call__lambda_f778fef3403f109b5af6df4030ba8824___((__int64)v51);
LABEL_64:
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v41);
LABEL_55:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v47);
  if ( v3 )
  {
    v35 = 2;
    if ( v38 != eKeywordDetectorConnector )
      v35 = 0;
    CEndpointCharacteristics::ClearMixFormatCache((__int64)this, v35);
  }
  return (unsigned int)ConnectorFormatForProcessingMode;
}
