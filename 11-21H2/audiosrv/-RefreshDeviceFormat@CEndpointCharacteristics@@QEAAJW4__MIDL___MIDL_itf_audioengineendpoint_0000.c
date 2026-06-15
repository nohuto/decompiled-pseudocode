/*
 * XREFs of ?RefreshDeviceFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18014BDD4
 * Callers:
 *     ?GetDevicePipeFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18002D120 (-GetDevicePipeFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 *     ?GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18002E8D0 (-GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 * Callees:
 *     ?GetDeviceFormat@CEndpointCharacteristics@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18000CA8C (-GetDeviceFormat@CEndpointCharacteristics@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_.c)
 *     ?HasHardwareAudioEngine@CEndpointCharacteristics@@QEAAHXZ @ 0x180046328 (-HasHardwareAudioEngine@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?SetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@PEBUSpatialAudioSettings@@_N@Z @ 0x180069AB0 (-SetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengin.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800C6664 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CEndpointCharacteristics::RefreshDeviceFormat(
        CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rcx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v7; // esi
  int HasHardwareAudioEngine; // eax
  __int64 v9; // r8
  int DeviceFormat; // ebx
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  int v13; // eax
  struct tWAVEFORMATEX *v15; // [rsp+38h] [rbp-18h] BYREF
  char v16; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  struct WAVEFORMATEXTENSIBLE *pv; // [rsp+80h] [rbp+30h]
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v19; // [rsp+88h] [rbp+38h] BYREF
  void *v20; // [rsp+90h] [rbp+40h] BYREF

  v6 = *((_QWORD *)this + 1223);
  if ( *(_DWORD *)v6 > 4u
    && (*(_BYTE *)(v6 + 16) & 0x10) != 0
    && (*(_QWORD *)(v6 + 24) & 0x10LL) == *(_QWORD *)(v6 + 24) )
  {
    v19 = a2;
    v20 = (void *)*((_QWORD *)this + 3);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
      v6,
      byte_18018EC3B,
      a3,
      a4,
      &v20,
      (__int64)&v19);
  }
  v7 = eKeywordDetectorConnector;
  if ( a2 != eKeywordDetectorConnector )
    v7 = eHostProcessConnector;
  HasHardwareAudioEngine = CEndpointCharacteristics::HasHardwareAudioEngine(this);
  pv = 0LL;
  v15 = 0LL;
  v16 = 1;
  LOBYTE(v9) = HasHardwareAudioEngine != 0;
  DeviceFormat = CEndpointCharacteristics::GetDeviceFormat(this, 0LL, v9, v7, &v15);
  if ( v16 )
    pv = (struct WAVEFORMATEXTENSIBLE *)v15;
  if ( DeviceFormat < 0 )
  {
    v11 = (unsigned int)DeviceFormat;
    v12 = 8331LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)v11);
    goto LABEL_15;
  }
  v13 = CEndpointCharacteristics::SetDeviceFormatAndSpatialSettings(this, v7, pv, 0LL, 0);
  DeviceFormat = v13;
  if ( v13 < 0 )
  {
    v11 = (unsigned int)v13;
    v12 = 8333LL;
    goto LABEL_13;
  }
  DeviceFormat = 0;
LABEL_15:
  if ( pv )
    CoTaskMemFree(pv);
  return (unsigned int)DeviceFormat;
}
