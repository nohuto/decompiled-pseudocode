/*
 * XREFs of ?SetDeviceFormatSwAudioEngine@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x180060678
 * Callers:
 *     ?SetDeviceFormatAndSpatialSettings@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@PEBUSpatialAudioSettings@@_N@Z @ 0x1800601E4 (-SetDeviceFormatAndSpatialSettings@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009588 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18001DDB8 (-UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?GetDeviceFormatAndSpatialSettings@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HPEAPEAUtWAVEFORMATEX@@PEAPEAUSpatialAudioSettings@@PEAIPEAPEAUSpatialAudioEncoderDescriptor@@@Z @ 0x18002EC58 (-GetDeviceFormatAndSpatialSettings@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x18002FF68 (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDefaultConnectorProcessingModeConfiguration@EffectPack@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x1800453A4 (-GetDefaultConnectorProcessingModeConfiguration@EffectPack@@QEAAXW4__MIDL___MIDL_itf_audioengine.c)
 *     ?DeriveAndCacheMixFormatsForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180056200 (-DeriveAndCacheMixFormatsForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 *     ?ConfirmDeviceFormat@EffectPack@@AEAAJPEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@H@Z @ 0x180060898 (-ConfirmDeviceFormat@EffectPack@@AEAAJPEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL_itf_audioengine.c)
 *     ?SetProcessingPeriod@CEndpointCharacteristics@@QEAAJAEB_J@Z @ 0x180060A50 (-SetProcessingPeriod@CEndpointCharacteristics@@QEAAJAEB_J@Z.c)
 *     wil::details::lambda_call__lambda_72a25199660f6795c403dac77fe923c4___::_lambda_call__lambda_72a25199660f6795c403dac77fe923c4___ @ 0x18007416C (wil--details--lambda_call__lambda_72a25199660f6795c403dac77fe923c4___--_lambda_call__lambda_72a2.c)
 *     ??1?$unique_ptr@USpatialAudioEncoderDescriptor@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x180080F10 (--1-$unique_ptr@USpatialAudioEncoderDescriptor@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@.c)
 *     wil::details::lambda_call__lambda_468acda44b4c3772750e5bffa51eb9a1___::_lambda_call__lambda_468acda44b4c3772750e5bffa51eb9a1___ @ 0x18014A628 (wil--details--lambda_call__lambda_468acda44b4c3772750e5bffa51eb9a1___--_lambda_call__lambda_468a.c)
 *     ?TryAddFormat@CEndpointCharacteristics@@QEAAJPEAVEffectPack@@PEBUtWAVEFORMATEX@@@Z @ 0x18014FD60 (-TryAddFormat@CEndpointCharacteristics@@QEAAJPEAVEffectPack@@PEBUtWAVEFORMATEX@@@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall EffectPack::SetDeviceFormatSwAudioEngine(
        CEndpointCharacteristics **this,
        __int32 a2,
        const struct tWAVEFORMATEX *a3)
{
  int DeviceFormatAndSpatialSettings; // esi
  struct _GUID v7; // xmm6
  int v8; // eax
  struct EffectPack *v9; // rdx
  void *v10; // rcx
  int v11; // eax
  int v12; // eax
  unsigned int v13; // ebx
  void *v14; // rcx
  int updated; // eax
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rdx
  CEndpointCharacteristics **v20; // [rsp+48h] [rbp-29h] BYREF
  char v21; // [rsp+50h] [rbp-21h]
  struct _GUID v22; // [rsp+58h] [rbp-19h] BYREF
  LPVOID *p_pv; // [rsp+68h] [rbp-9h]
  struct _GUID v24; // [rsp+78h] [rbp+7h] BYREF
  LPVOID *v25; // [rsp+88h] [rbp+17h]
  char v26; // [rsp+90h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]
  LPVOID pv; // [rsp+D8h] [rbp+67h] BYREF
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v29; // [rsp+E0h] [rbp+6Fh] BYREF
  __int64 v30; // [rsp+E8h] [rbp+77h] BYREF

  v29 = a2;
  v20 = this;
  v21 = 1;
  if ( !a3 )
  {
    updated = CEndpointCharacteristics::UpdateDeviceFormatEPProperty(this[161], 0, a2, 0LL);
    v13 = updated;
    if ( updated >= 0 )
    {
      v21 = 0;
      v13 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2091,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)updated);
    }
    goto LABEL_37;
  }
  DeviceFormatAndSpatialSettings = ValidateUncompressedWaveFormatEx(a3);
  if ( DeviceFormatAndSpatialSettings < 0 )
  {
    v17 = 8343LL;
    goto LABEL_23;
  }
  EffectPack::GetDefaultConnectorProcessingModeConfiguration((EffectPack *)this, a2, &v22, 0LL, 0LL);
  v7 = v22;
  v8 = EffectPack::ConfirmDeviceFormat((EffectPack *)this, a3, &v22, v29, 0);
  DeviceFormatAndSpatialSettings = v8;
  if ( v8 == -2004287480 )
  {
    DeviceFormatAndSpatialSettings = CEndpointCharacteristics::TryAddFormat(this[161], v9, a3);
    if ( DeviceFormatAndSpatialSettings >= 0 )
    {
      v22 = v7;
      DeviceFormatAndSpatialSettings = EffectPack::ConfirmDeviceFormat((EffectPack *)this, a3, &v22, v29, 0);
      if ( DeviceFormatAndSpatialSettings >= 0 )
        goto LABEL_5;
      v17 = 8359LL;
    }
    else
    {
      v17 = 8356LL;
    }
LABEL_23:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)DeviceFormatAndSpatialSettings);
LABEL_27:
    v13 = DeviceFormatAndSpatialSettings;
LABEL_37:
    wil::details::lambda_call__lambda_468acda44b4c3772750e5bffa51eb9a1___::_lambda_call__lambda_468acda44b4c3772750e5bffa51eb9a1___(&v20);
    return v13;
  }
  if ( v8 < 0 )
  {
    v17 = 8363LL;
    goto LABEL_23;
  }
LABEL_5:
  pv = 0LL;
  *(_QWORD *)&v22.Data1 = &pv;
  *(_QWORD *)v22.Data4 = 0LL;
  LOBYTE(p_pv) = 1;
  DeviceFormatAndSpatialSettings = EffectPack::GetDeviceFormatAndSpatialSettings(
                                     this,
                                     0,
                                     0LL,
                                     (struct tWAVEFORMATEX **)v22.Data4,
                                     0LL,
                                     0LL,
                                     0LL);
  if ( (_BYTE)p_pv )
  {
    v10 = **(void ***)&v22.Data1;
    **(_QWORD **)&v22.Data1 = *(_QWORD *)v22.Data4;
    if ( v10 )
      CoTaskMemFree(v10);
  }
  if ( DeviceFormatAndSpatialSettings < 0 )
  {
    v18 = 8368LL;
LABEL_25:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)DeviceFormatAndSpatialSettings);
LABEL_26:
    wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(&pv);
    goto LABEL_27;
  }
  DeviceFormatAndSpatialSettings = CEndpointCharacteristics::UpdateDeviceFormatEPProperty(this[161], 0, v29, a3);
  if ( DeviceFormatAndSpatialSettings < 0 )
  {
    v18 = 8371LL;
    goto LABEL_25;
  }
  *(_QWORD *)&v22.Data1 = this;
  *(_QWORD *)v22.Data4 = &v29;
  p_pv = &pv;
  v24 = v22;
  v25 = &pv;
  v26 = 1;
  DeviceFormatAndSpatialSettings = EffectPack::DeriveAndCacheMixFormatsForConnector(this, eHostProcessConnector);
  if ( DeviceFormatAndSpatialSettings < 0 )
  {
    v19 = 8380LL;
LABEL_35:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)DeviceFormatAndSpatialSettings);
    wil::details::lambda_call__lambda_72a25199660f6795c403dac77fe923c4___::_lambda_call__lambda_72a25199660f6795c403dac77fe923c4___(&v24);
    goto LABEL_26;
  }
  v11 = EffectPack::DeriveAndCacheMixFormatsForConnector(this, eKeywordDetectorConnector);
  if ( v11 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x20C0,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v11);
  v30 = 0LL;
  DeviceFormatAndSpatialSettings = CEndpointCharacteristics::SetProcessingPeriod(this[161], &v30);
  if ( DeviceFormatAndSpatialSettings < 0 )
  {
    v19 = 8393LL;
    goto LABEL_35;
  }
  EffectPack::GetDefaultConnectorProcessingModeConfiguration((EffectPack *)this, v29, &v22, 0LL, 0LL);
  v12 = EffectPack::ConfirmDeviceFormat((EffectPack *)this, a3, &v22, v29, 1);
  v13 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x20D5,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v12);
    wil::details::lambda_call__lambda_72a25199660f6795c403dac77fe923c4___::_lambda_call__lambda_72a25199660f6795c403dac77fe923c4___(&v24);
    wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(&pv);
    goto LABEL_37;
  }
  v26 = 0;
  wil::details::lambda_call__lambda_72a25199660f6795c403dac77fe923c4___::_lambda_call__lambda_72a25199660f6795c403dac77fe923c4___(&v24);
  v14 = pv;
  pv = 0LL;
  if ( v14 )
    CoTaskMemFree(v14);
  return 0LL;
}
