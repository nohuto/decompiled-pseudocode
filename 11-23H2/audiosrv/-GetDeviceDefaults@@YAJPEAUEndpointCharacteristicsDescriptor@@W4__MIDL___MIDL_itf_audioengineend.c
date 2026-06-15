/*
 * XREFs of ?GetDeviceDefaults@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x18000DB30
 * Callers:
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@KU_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x18000D804 (-DeriveDeviceGraphFormatsForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@_NW4__MIDL___MIDL_.c)
 *     ?DeriveSaDeviceParametersForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3PEAUtWAVEFORMATEX@@4_JPEAPEAUSaDeviceParams@@@Z @ 0x18000E7C0 (-DeriveSaDeviceParametersForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMO.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x180114848 (-DeriveConnectorFormatFromStreamFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MID.c)
 * Callees:
 *     ?CanProcessingModeBeParameterized@EffectPack@@QEAA_NU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18000BEC4 (-CanProcessingModeBeParameterized@EffectPack@@QEAA_NU_GUID@@W4__MIDL___MIDL_itf_audioengineendpo.c)
 *     ?GetProcessingPeriod@EffectPack@@QEAAJHPEA_J0@Z @ 0x18000DCB0 (-GetProcessingPeriod@EffectPack@@QEAAJHPEA_J0@Z.c)
 *     ?CanBuildProcessingModesOnRawConnector@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4FXEnablementConsideration@@@Z @ 0x18000DD28 (-CanBuildProcessingModesOnRawConnector@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_.c)
 *     ?GetDevicePipeFormat@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18000E690 (-GetDevicePipeFormat@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_.c)
 *     ?GetMixFormat@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x1800179D0 (-GetMixFormat@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P.c)
 *     ?GetConnectorFormatForProcessingMode@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180017DDC (-GetConnectorFormatForProcessingMode@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_00.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_ptr@USpatialAudioEncoderDescriptor@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x180080EE0 (--1-$unique_ptr@USpatialAudioEncoderDescriptor@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@.c)
 *     ?TryGetDevicePipeFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18014FF6C (-TryGetDevicePipeFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall GetDeviceDefaults(
        EffectPack **a1,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct _GUID *a3,
        struct tWAVEFORMATEX **a4,
        struct tWAVEFORMATEX **a5,
        __int64 *a6,
        __int64 *a7)
{
  struct tWAVEFORMATEX *v11; // rcx
  unsigned int ConnectorFormatForProcessingMode; // ebx
  void *v13; // rcx
  __int64 v14; // rax
  int DevicePipeFormat; // eax
  struct tWAVEFORMATEX *v16; // rax
  int ProcessingPeriod; // eax
  __int64 v19; // rdx
  unsigned __int64 v20; // r9
  int v21[4]; // [rsp+20h] [rbp-40h] BYREF
  struct _GUID v22; // [rsp+30h] [rbp-30h] BYREF
  void **v23; // [rsp+40h] [rbp-20h]
  struct tWAVEFORMATEX *v24; // [rsp+48h] [rbp-18h] BYREF
  char v25; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]

  if ( a4 )
    *a4 = 0LL;
  if ( a5 )
    *a5 = 0LL;
  if ( a7 || a6 )
  {
    ProcessingPeriod = EffectPack::GetProcessingPeriod(a1[1], 0, a6, a7);
    ConnectorFormatForProcessingMode = ProcessingPeriod;
    if ( ProcessingPeriod < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xC76,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
        (const char *)(unsigned int)ProcessingPeriod,
        v21[0]);
      return ConnectorFormatForProcessingMode;
    }
  }
  v11 = 0LL;
  *(_QWORD *)v21 = 0LL;
  if ( a4 )
  {
    v23 = (void **)v21;
    v24 = 0LL;
    v25 = 1;
    v22 = *a3;
    ConnectorFormatForProcessingMode = EffectPack::GetConnectorFormatForProcessingMode(a1[1], a2, &v22, &v24);
    if ( v25 )
    {
      v13 = *v23;
      *v23 = v24;
      if ( v13 )
        CoTaskMemFree(v13);
    }
    if ( (ConnectorFormatForProcessingMode & 0x80000000) != 0 )
    {
      v20 = ConnectorFormatForProcessingMode;
      v19 = 3200LL;
      goto LABEL_30;
    }
    v11 = *(struct tWAVEFORMATEX **)v21;
  }
  if ( a5 )
  {
    v22 = *a3;
    if ( EffectPack::CanProcessingModeBeParameterized(a1[1], &v22, a2) )
      goto LABEL_19;
    v14 = *(_QWORD *)&a3->Data1 - *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
    if ( *(_QWORD *)&a3->Data1 == *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1 )
      v14 = *(_QWORD *)a3->Data4 - *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
    if ( !v14 && (unsigned int)EffectPack::CanBuildProcessingModesOnRawConnector(a1[1], (unsigned int)a2, 0LL) )
    {
LABEL_19:
      v22 = *a3;
      DevicePipeFormat = EffectPack::GetDevicePipeFormat(a1[1], a2, &v22, a5);
      ConnectorFormatForProcessingMode = DevicePipeFormat;
      if ( DevicePipeFormat >= 0 )
      {
LABEL_20:
        v11 = *(struct tWAVEFORMATEX **)v21;
        goto LABEL_21;
      }
      v19 = 3213LL;
    }
    else
    {
      v22 = *a3;
      DevicePipeFormat = CEndpointCharacteristics::TryGetDevicePipeFormat(*a1, a2, &v22, a5);
      ConnectorFormatForProcessingMode = DevicePipeFormat;
      if ( DevicePipeFormat >= 0 )
      {
        if ( *a5 )
          goto LABEL_20;
        v22 = *a3;
        DevicePipeFormat = EffectPack::GetMixFormat(a1[1], a2, &v22, a5);
        ConnectorFormatForProcessingMode = DevicePipeFormat;
        if ( DevicePipeFormat >= 0 )
          goto LABEL_20;
        v19 = 3225LL;
      }
      else
      {
        v19 = 3218LL;
      }
    }
    v20 = (unsigned int)DevicePipeFormat;
LABEL_30:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
      (const char *)v20,
      v21[0]);
    wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(v21);
    return ConnectorFormatForProcessingMode;
  }
LABEL_21:
  if ( a4 )
  {
    v16 = v11;
    v11 = 0LL;
    *a4 = v16;
  }
  *(_QWORD *)v21 = 0LL;
  if ( v11 )
    CoTaskMemFree(v11);
  return 0LL;
}
