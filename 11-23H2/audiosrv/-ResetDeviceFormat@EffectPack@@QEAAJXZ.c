/*
 * XREFs of ?ResetDeviceFormat@EffectPack@@QEAAJXZ @ 0x18014EF1C
 * Callers:
 *     ?ResetDeviceFormat@CPolicyConfig@@UEAAJPEBG@Z @ 0x1801169A0 (-ResetDeviceFormat@CPolicyConfig@@UEAAJPEBG@Z.c)
 *     ?RefreshConnectorFormats@EffectPack@@QEAAJXZ @ 0x18014E6C8 (-RefreshConnectorFormats@EffectPack@@QEAAJXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009588 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ClearMixFormatCache@CEndpointCharacteristics@@QEAAJW4CMFC_OPTIONS@@@Z @ 0x180017F10 (-ClearMixFormatCache@CEndpointCharacteristics@@QEAAJW4CMFC_OPTIONS@@@Z.c)
 *     _tlgKeywordOn @ 0x180020530 (_tlgKeywordOn.c)
 *     ?GetDeviceFormatAndSpatialSettings@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HPEAPEAUtWAVEFORMATEX@@PEAPEAUSpatialAudioSettings@@PEAIPEAPEAUSpatialAudioEncoderDescriptor@@@Z @ 0x18002EC58 (-GetDeviceFormatAndSpatialSettings@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDefaultConnectorProcessingModeConfiguration@EffectPack@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x1800453A4 (-GetDefaultConnectorProcessingModeConfiguration@EffectPack@@QEAAXW4__MIDL___MIDL_itf_audioengine.c)
 *     ?SetDeviceFormatAndSpatialSettings@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@PEBUSpatialAudioSettings@@_N@Z @ 0x1800601F4 (-SetDeviceFormatAndSpatialSettings@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 *     ?ConfirmDeviceFormat@EffectPack@@AEAAJPEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@H@Z @ 0x1800608A8 (-ConfirmDeviceFormat@EffectPack@@AEAAJPEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL_itf_audioengine.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     ??1?$unique_ptr@USpatialAudioEncoderDescriptor@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x180080EE0 (--1-$unique_ptr@USpatialAudioEncoderDescriptor@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@.c)
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapSz@G@@@Z @ 0x180149ED8 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall EffectPack::ResetDeviceFormat(EffectPack *this)
{
  __int64 v2; // r8
  __int64 v3; // r9
  int DeviceFormatAndSpatialSettings; // ebx
  void *v5; // rax
  unsigned __int64 v6; // r9
  __int64 v7; // rdx
  int v8; // eax
  int v9; // eax
  void *v10; // rax
  int v11; // eax
  void *v12; // rcx
  void *v14; // rcx
  struct tWAVEFORMATEX *v15; // rcx
  LPVOID pv; // [rsp+48h] [rbp+7h] BYREF
  struct tWAVEFORMATEX *v17; // [rsp+50h] [rbp+Fh] BYREF
  struct _GUID v18; // [rsp+58h] [rbp+17h] BYREF
  struct _GUID v19; // [rsp+68h] [rbp+27h] BYREF
  char v20; // [rsp+78h] [rbp+37h]
  wil::details::in1diag3 *retaddr; // [rsp+A0h] [rbp+5Fh]

  if ( **((_DWORD **)this + 219) > 4u && tlgKeywordOn(*((_QWORD *)this + 219), 16LL) )
  {
    pv = *(LPVOID *)(*((_QWORD *)this + 161) + 48LL);
    v19 = *(struct _GUID *)*((_QWORD *)this + 159);
    *(_QWORD *)&v18.Data1 = &v19;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>>(
      v3,
      byte_180195BBC,
      v2,
      v3,
      (__int64 *)&v18,
      (const WCHAR **)&pv);
  }
  v18 = GUID_00000000_0000_0000_0000_000000000000;
  EffectPack::GetDefaultConnectorProcessingModeConfiguration(this, 0, &v18, 0LL, 0LL);
  v17 = 0LL;
  *(_QWORD *)&v19.Data1 = &v17;
  *(_QWORD *)v19.Data4 = 0LL;
  v20 = 1;
  DeviceFormatAndSpatialSettings = EffectPack::GetDeviceFormatAndSpatialSettings(
                                     (CEndpointCharacteristics **)this,
                                     0,
                                     0LL,
                                     (struct tWAVEFORMATEX **)v19.Data4,
                                     0LL,
                                     0LL,
                                     0LL);
  if ( v20 )
  {
    v5 = **(void ***)&v19.Data1;
    **(_QWORD **)&v19.Data1 = *(_QWORD *)v19.Data4;
    if ( v5 )
      CoTaskMemFree(v5);
  }
  if ( DeviceFormatAndSpatialSettings < 0 )
  {
    v6 = (unsigned int)DeviceFormatAndSpatialSettings;
    v7 = 8877LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)v6);
LABEL_24:
    wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>((void **)&v17);
    return (unsigned int)DeviceFormatAndSpatialSettings;
  }
  v19 = v18;
  v8 = EffectPack::ConfirmDeviceFormat(this, v17, &v19, eHostProcessConnector, 0);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x22B0,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v8);
    v9 = EffectPack::SetDeviceFormatAndSpatialSettings(this, eHostProcessConnector, 0LL, 0LL, 0);
    DeviceFormatAndSpatialSettings = v9;
    if ( v9 < 0 )
    {
      v7 = 8884LL;
LABEL_12:
      v6 = (unsigned int)v9;
      goto LABEL_13;
    }
    v9 = CEndpointCharacteristics::ClearMixFormatCache(*((_QWORD *)this + 161), 0);
    DeviceFormatAndSpatialSettings = v9;
    if ( v9 < 0 )
    {
      v7 = 8887LL;
      goto LABEL_12;
    }
    pv = 0LL;
    *(_QWORD *)&v19.Data1 = &pv;
    *(_QWORD *)v19.Data4 = 0LL;
    v20 = 1;
    DeviceFormatAndSpatialSettings = EffectPack::GetDeviceFormatAndSpatialSettings(
                                       (CEndpointCharacteristics **)this,
                                       0,
                                       1LL,
                                       (struct tWAVEFORMATEX **)v19.Data4,
                                       0LL,
                                       0LL,
                                       0LL);
    if ( v20 )
    {
      v10 = **(void ***)&v19.Data1;
      **(_QWORD **)&v19.Data1 = *(_QWORD *)v19.Data4;
      if ( v10 )
        CoTaskMemFree(v10);
    }
    if ( DeviceFormatAndSpatialSettings < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x22BB,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)DeviceFormatAndSpatialSettings);
      wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(&pv);
      goto LABEL_24;
    }
    v11 = EffectPack::SetDeviceFormatAndSpatialSettings(
            this,
            eHostProcessConnector,
            (struct WAVEFORMATEXTENSIBLE *)pv,
            0LL,
            0);
    DeviceFormatAndSpatialSettings = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x22BE,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v11);
      v12 = pv;
      pv = 0LL;
      if ( v12 )
        CoTaskMemFree(v12);
      goto LABEL_24;
    }
    v14 = pv;
    pv = 0LL;
    if ( v14 )
      CoTaskMemFree(v14);
  }
  v15 = v17;
  v17 = 0LL;
  if ( v15 )
    CoTaskMemFree(v15);
  return 0LL;
}
