/*
 * XREFs of ?SetDeviceFormatSwAudioEngine@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18014C490
 * Callers:
 *     ?SetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@PEBUSpatialAudioSettings@@_N@Z @ 0x180069AB0 (-SetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengin.c)
 * Callees:
 *     ?GetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HPEAPEAUtWAVEFORMATEX@@PEAPEAUSpatialAudioSettings@@PEAIPEAPEAUSpatialAudioEncoderDescriptor@@@Z @ 0x18003EB14 (-GetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengin.c)
 *     wil::details::lambda_call__lambda_0f237c4f572ceb2fc8b8bfb0fb9cf122___::_lambda_call__lambda_0f237c4f572ceb2fc8b8bfb0fb9cf122___ @ 0x1800683A0 (wil--details--lambda_call__lambda_0f237c4f572ceb2fc8b8bfb0fb9cf122___--_lambda_call__lambda_0f23.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C5F8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x1800EAFFC (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?ClearMixFormatCache@CEndpointCharacteristics@@QEAAJW4CMFC_OPTIONS@@@Z @ 0x1801458AC (-ClearMixFormatCache@CEndpointCharacteristics@@QEAAJW4CMFC_OPTIONS@@@Z.c)
 *     ?ConfirmDeviceFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@H@Z @ 0x180145A10 (-ConfirmDeviceFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL_i.c)
 *     ?DeriveAndCacheMixFormatsForConnector@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180145B04 (-DeriveAndCacheMixFormatsForConnector@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioen.c)
 *     ?GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x180148BE0 (-GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_i.c)
 *     ?SetProcessingPeriod@CEndpointCharacteristics@@QEAAJAEB_J@Z @ 0x18014C8C4 (-SetProcessingPeriod@CEndpointCharacteristics@@QEAAJAEB_J@Z.c)
 *     ?TryAddFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z @ 0x18014CB48 (-TryAddFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18014D3F4 (-UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineen.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CEndpointCharacteristics::SetDeviceFormatSwAudioEngine(
        CEndpointCharacteristics *this,
        __int32 a2,
        const struct tWAVEFORMATEX *a3)
{
  char v6; // r14
  int updated; // eax
  int DeviceFormatAndSpatialSettings; // ebx
  __int64 v9; // rdx
  struct _GUID v10; // xmm6
  void *v11; // rcx
  unsigned __int64 v12; // r9
  __int64 v13; // rdx
  int v14; // eax
  int v15; // eax
  __int64 v16; // rdx
  int v17; // eax
  void *v18; // rcx
  struct _GUID v20; // [rsp+58h] [rbp-29h] BYREF
  LPVOID *p_pv; // [rsp+68h] [rbp-19h]
  struct _GUID v22; // [rsp+78h] [rbp-9h] BYREF
  LPVOID *v23; // [rsp+88h] [rbp+7h]
  __int128 v24; // [rsp+90h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]
  LPVOID pv; // [rsp+E8h] [rbp+67h] BYREF
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v27; // [rsp+F0h] [rbp+6Fh] BYREF
  __int64 v28; // [rsp+F8h] [rbp+77h] BYREF

  v27 = a2;
  v6 = 1;
  if ( !a3 )
  {
    updated = CEndpointCharacteristics::UpdateDeviceFormatEPProperty(
                this,
                0,
                (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a2,
                0LL);
    DeviceFormatAndSpatialSettings = updated;
    if ( updated >= 0 )
    {
      v6 = 0;
      DeviceFormatAndSpatialSettings = 0;
      goto LABEL_36;
    }
    v9 = 7857LL;
    goto LABEL_14;
  }
  updated = ValidateUncompressedWaveFormatEx(a3);
  DeviceFormatAndSpatialSettings = updated;
  if ( updated < 0 )
  {
    v9 = 7863LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)updated);
    goto LABEL_36;
  }
  CEndpointCharacteristics::GetDefaultConnectorProcessingModeConfiguration(this, a2, &v20, 0LL, 0LL);
  v10 = v20;
  updated = CEndpointCharacteristics::ConfirmDeviceFormat(this, a3, &v20, v27, 0);
  DeviceFormatAndSpatialSettings = updated;
  if ( updated == -2004287480 )
  {
    updated = CEndpointCharacteristics::TryAddFormat(this, a3);
    DeviceFormatAndSpatialSettings = updated;
    if ( updated < 0 )
    {
      v9 = 7876LL;
      goto LABEL_14;
    }
    v20 = v10;
    updated = CEndpointCharacteristics::ConfirmDeviceFormat(this, a3, &v20, v27, 0);
    DeviceFormatAndSpatialSettings = updated;
    if ( updated < 0 )
    {
      v9 = 7879LL;
      goto LABEL_14;
    }
  }
  else if ( updated < 0 )
  {
    v9 = 7883LL;
    goto LABEL_14;
  }
  pv = 0LL;
  *(_QWORD *)&v20.Data1 = &pv;
  *(_QWORD *)v20.Data4 = 0LL;
  LOBYTE(p_pv) = 1;
  DeviceFormatAndSpatialSettings = CEndpointCharacteristics::GetDeviceFormatAndSpatialSettings(
                                     this,
                                     0,
                                     0,
                                     (LPVOID *)v20.Data4,
                                     0LL,
                                     0LL,
                                     0LL);
  if ( (_BYTE)p_pv )
  {
    v11 = **(void ***)&v20.Data1;
    **(_QWORD **)&v20.Data1 = *(_QWORD *)v20.Data4;
    if ( v11 )
      CoTaskMemFree(v11);
  }
  if ( DeviceFormatAndSpatialSettings < 0 )
  {
    v12 = (unsigned int)DeviceFormatAndSpatialSettings;
    v13 = 7888LL;
LABEL_22:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)v12);
    goto LABEL_34;
  }
  v14 = CEndpointCharacteristics::UpdateDeviceFormatEPProperty(this, 0, v27, a3);
  DeviceFormatAndSpatialSettings = v14;
  if ( v14 < 0 )
  {
    v12 = (unsigned int)v14;
    v13 = 7891LL;
    goto LABEL_22;
  }
  *(_QWORD *)&v20.Data1 = this;
  *(_QWORD *)v20.Data4 = &v27;
  p_pv = &pv;
  v22 = v20;
  v23 = &pv;
  LOBYTE(v24) = 1;
  v15 = CEndpointCharacteristics::DeriveAndCacheMixFormatsForConnector(this, 0);
  DeviceFormatAndSpatialSettings = v15;
  if ( v15 >= 0 )
  {
    v17 = CEndpointCharacteristics::DeriveAndCacheMixFormatsForConnector(this, 3);
    if ( v17 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1EE0,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v17);
    v28 = 0LL;
    v15 = CEndpointCharacteristics::SetProcessingPeriod(this, &v28);
    DeviceFormatAndSpatialSettings = v15;
    if ( v15 >= 0 )
    {
      CEndpointCharacteristics::GetDefaultConnectorProcessingModeConfiguration(this, v27, &v20, 0LL, 0LL);
      v15 = CEndpointCharacteristics::ConfirmDeviceFormat(this, a3, &v20, v27, 1);
      DeviceFormatAndSpatialSettings = v15;
      if ( v15 >= 0 )
      {
        LOBYTE(v24) = 0;
        v6 = 0;
        DeviceFormatAndSpatialSettings = 0;
        goto LABEL_33;
      }
      v16 = 7925LL;
    }
    else
    {
      v16 = 7913LL;
    }
  }
  else
  {
    v16 = 7900LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v16,
    (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)v15);
LABEL_33:
  wil::details::lambda_call__lambda_0f237c4f572ceb2fc8b8bfb0fb9cf122___::_lambda_call__lambda_0f237c4f572ceb2fc8b8bfb0fb9cf122___((__int64)&v22);
LABEL_34:
  v18 = pv;
  pv = 0LL;
  if ( v18 )
    CoTaskMemFree(v18);
LABEL_36:
  if ( v6 )
    CEndpointCharacteristics::ClearMixFormatCache((__int64)this, 0);
  return (unsigned int)DeviceFormatAndSpatialSettings;
}
