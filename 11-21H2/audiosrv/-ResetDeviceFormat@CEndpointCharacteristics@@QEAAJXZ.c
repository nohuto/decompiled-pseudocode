/*
 * XREFs of ?ResetDeviceFormat@CEndpointCharacteristics@@QEAAJXZ @ 0x18014C020
 * Callers:
 *     ?ResetDeviceFormat@CPolicyConfig@@UEAAJPEBG@Z @ 0x1800EA430 (-ResetDeviceFormat@CPolicyConfig@@UEAAJPEBG@Z.c)
 *     ?RefreshConnectorFormats@CEndpointCharacteristics@@QEAAJXZ @ 0x18014BAA4 (-RefreshConnectorFormats@CEndpointCharacteristics@@QEAAJXZ.c)
 * Callees:
 *     ?GetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HPEAPEAUtWAVEFORMATEX@@PEAPEAUSpatialAudioSettings@@PEAIPEAPEAUSpatialAudioEncoderDescriptor@@@Z @ 0x18003EB14 (-GetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengin.c)
 *     ?SetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@PEBUSpatialAudioSettings@@_N@Z @ 0x180069AB0 (-SetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengin.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x1800C2254 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C5F8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ClearMixFormatCache@CEndpointCharacteristics@@QEAAJW4CMFC_OPTIONS@@@Z @ 0x1801458AC (-ClearMixFormatCache@CEndpointCharacteristics@@QEAAJW4CMFC_OPTIONS@@@Z.c)
 *     ?ConfirmDeviceFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@H@Z @ 0x180145A10 (-ConfirmDeviceFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL_i.c)
 *     ?GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x180148BE0 (-GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_i.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CEndpointCharacteristics::ResetDeviceFormat(
        CEndpointCharacteristics *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rcx
  int DeviceFormatAndSpatialSettings; // ebx
  void *v7; // rcx
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  int v10; // eax
  int v11; // eax
  void *v12; // rcx
  unsigned __int64 v13; // r9
  __int64 v14; // rdx
  int v15; // eax
  void *v16; // rcx
  void *v17; // rcx
  struct tWAVEFORMATEX *v18; // rcx
  struct _GUID v20; // [rsp+40h] [rbp-30h] BYREF
  void **p_pv; // [rsp+50h] [rbp-20h]
  struct tWAVEFORMATEX *v22; // [rsp+58h] [rbp-18h] BYREF
  char v23; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  LPVOID pv; // [rsp+90h] [rbp+20h] BYREF
  struct tWAVEFORMATEX *v26; // [rsp+98h] [rbp+28h] BYREF

  v5 = *((_QWORD *)this + 1223);
  if ( *(_DWORD *)v5 > 4u
    && (*(_BYTE *)(v5 + 16) & 0x10) != 0
    && (*(_QWORD *)(v5 + 24) & 0x10LL) == *(_QWORD *)(v5 + 24) )
  {
    pv = (LPVOID)*((_QWORD *)this + 3);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
      v5,
      byte_18018EC0E,
      a3,
      a4,
      &pv);
  }
  v20 = GUID_00000000_0000_0000_0000_000000000000;
  CEndpointCharacteristics::GetDefaultConnectorProcessingModeConfiguration(this, 0, &v20, 0LL, 0LL);
  v26 = 0LL;
  p_pv = (void **)&v26;
  v22 = 0LL;
  v23 = 1;
  DeviceFormatAndSpatialSettings = CEndpointCharacteristics::GetDeviceFormatAndSpatialSettings(
                                     this,
                                     0,
                                     0,
                                     (LPVOID *)&v22,
                                     0LL,
                                     0LL,
                                     0LL);
  if ( v23 )
  {
    v7 = *p_pv;
    *p_pv = v22;
    if ( v7 )
      CoTaskMemFree(v7);
  }
  if ( DeviceFormatAndSpatialSettings < 0 )
  {
    v8 = (unsigned int)DeviceFormatAndSpatialSettings;
    v9 = 8397LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)v8);
    goto LABEL_29;
  }
  v10 = CEndpointCharacteristics::ConfirmDeviceFormat(this, v26, &v20, 0, 0);
  if ( v10 >= 0 )
    goto LABEL_28;
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    (void *)0x20D0,
    (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)v10);
  v11 = CEndpointCharacteristics::SetDeviceFormatAndSpatialSettings(this, eHostProcessConnector, 0LL, 0LL, 0);
  DeviceFormatAndSpatialSettings = v11;
  if ( v11 < 0 )
  {
    v9 = 8404LL;
LABEL_15:
    v8 = (unsigned int)v11;
    goto LABEL_16;
  }
  v11 = CEndpointCharacteristics::ClearMixFormatCache((__int64)this, 0);
  DeviceFormatAndSpatialSettings = v11;
  if ( v11 < 0 )
  {
    v9 = 8407LL;
    goto LABEL_15;
  }
  pv = 0LL;
  p_pv = &pv;
  v22 = 0LL;
  v23 = 1;
  DeviceFormatAndSpatialSettings = CEndpointCharacteristics::GetDeviceFormatAndSpatialSettings(
                                     this,
                                     0,
                                     1,
                                     (LPVOID *)&v22,
                                     0LL,
                                     0LL,
                                     0LL);
  if ( v23 )
  {
    v12 = *p_pv;
    *p_pv = v22;
    if ( v12 )
      CoTaskMemFree(v12);
  }
  if ( DeviceFormatAndSpatialSettings < 0 )
  {
    v13 = (unsigned int)DeviceFormatAndSpatialSettings;
    v14 = 8411LL;
    goto LABEL_24;
  }
  v15 = CEndpointCharacteristics::SetDeviceFormatAndSpatialSettings(
          this,
          eHostProcessConnector,
          (struct WAVEFORMATEXTENSIBLE *)pv,
          0LL,
          0);
  DeviceFormatAndSpatialSettings = v15;
  if ( v15 >= 0 )
  {
    v17 = pv;
    pv = 0LL;
    if ( v17 )
      CoTaskMemFree(v17);
LABEL_28:
    DeviceFormatAndSpatialSettings = 0;
    goto LABEL_29;
  }
  v13 = (unsigned int)v15;
  v14 = 8414LL;
LABEL_24:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)v13);
  v16 = pv;
  pv = 0LL;
  if ( v16 )
    CoTaskMemFree(v16);
LABEL_29:
  v18 = v26;
  v26 = 0LL;
  if ( v18 )
    CoTaskMemFree(v18);
  return (unsigned int)DeviceFormatAndSpatialSettings;
}
