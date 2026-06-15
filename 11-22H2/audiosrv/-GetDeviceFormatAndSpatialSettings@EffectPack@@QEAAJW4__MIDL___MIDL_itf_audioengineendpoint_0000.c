/*
 * XREFs of ?GetDeviceFormatAndSpatialSettings@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HPEAPEAUtWAVEFORMATEX@@PEAPEAUSpatialAudioSettings@@PEAIPEAPEAUSpatialAudioEncoderDescriptor@@@Z @ 0x18002EC58
 * Callers:
 *     ?GetDeviceFormatHelper@CPolicyConfig@@AEAAJPEBGW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HPEAPEAUtWAVEFORMATEX@@PEAPEAUSpatialAudioSettings@@PEAIPEAPEAUSpatialAudioEncoderDescriptor@@@Z @ 0x18002023C (-GetDeviceFormatHelper@CPolicyConfig@@AEAAJPEBGW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000.c)
 *     ?ProcessPropertyChange@CSpatialProperties@@QEAAXPEAVEffectPack@@AEBU_tagpropertykey@@PEAUSpatialAudioRelatedGlobalSettings@@PEBUtWAVEFORMATEX@@PEAH@Z @ 0x18002C994 (-ProcessPropertyChange@CSpatialProperties@@QEAAXPEAVEffectPack@@AEBU_tagpropertykey@@PEAUSpatial.c)
 *     ?SetDeviceFormatAndSpatialSettings@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@PEBUSpatialAudioSettings@@_N@Z @ 0x1800601E4 (-SetDeviceFormatAndSpatialSettings@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 *     ?SetDeviceFormatSwAudioEngine@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x180060678 (-SetDeviceFormatSwAudioEngine@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000.c)
 *     ?ResetDeviceFormat@EffectPack@@QEAAJXZ @ 0x18014EF6C (-ResetDeviceFormat@EffectPack@@QEAAJXZ.c)
 *     ?GetAudioFormatForSpatialFormat@CSpatialProperties@@QEAAJPEAVEffectPack@@_NPEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@3PEAUSpatialAudioRelatedGlobalSettings@@PEAUWAVEFORMATEXTENSIBLE@@PEA_N@Z @ 0x1801532D4 (-GetAudioFormatForSpatialFormat@CSpatialProperties@@QEAAJPEAVEffectPack@@_NPEBUSpatialAudioSetti.c)
 * Callees:
 *     ?HasHardwareAudioEngine@CEndpointCharacteristics@@QEAAHXZ @ 0x18002EDFC (-HasHardwareAudioEngine@CEndpointCharacteristics@@QEAAHXZ.c)
 *     CEndpointCharacteristics::GetDeviceFormatInternal__lambda_53e50f4d36d820af02fa3fa8c2905d02___ @ 0x180030FA4 (CEndpointCharacteristics--GetDeviceFormatInternal__lambda_53e50f4d36d820af02fa3fa8c2905d02___.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDefaultConnectorProcessingModeInternal@EffectPack@@AEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SED_RESOLVEOPT@@@Z @ 0x1800340AC (-GetDefaultConnectorProcessingModeInternal@EffectPack@@AEAA-AU_GUID@@W4__MIDL___MIDL_itf_audioen.c)
 *     ?GetSpatialAudioSettings@CEndpointCharacteristics@@QEAAJPEAUSpatialAudioSettings@@PEAUSpatialAudioEncoderDescriptor@@_KPEAI@Z @ 0x180064F28 (-GetSpatialAudioSettings@CEndpointCharacteristics@@QEAAJPEAUSpatialAudioSettings@@PEAUSpatialAud.c)
 *     ??1?$unique_ptr@USpatialAudioEncoderDescriptor@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x180080F10 (--1-$unique_ptr@USpatialAudioEncoderDescriptor@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall EffectPack::GetDeviceFormatAndSpatialSettings(
        CEndpointCharacteristics **this,
        unsigned int a2,
        __int64 a3,
        struct tWAVEFORMATEX **a4,
        struct SpatialAudioSettings **a5,
        unsigned int *a6,
        struct SpatialAudioEncoderDescriptor **a7)
{
  struct SpatialAudioSettings **v10; // rdi
  unsigned int *v11; // rsi
  struct SpatialAudioEncoderDescriptor **v12; // r14
  unsigned int DeviceFormatInternal__lambda_53e50f4d36d820af02fa3fa8c2905d02; // ebx
  __int64 result; // rax
  struct SpatialAudioEncoderDescriptor *v15; // rbx
  struct SpatialAudioSettings *v16; // r15
  unsigned __int64 v17; // r13
  struct SpatialAudioEncoderDescriptor *v18; // r12
  int SpatialAudioSettings; // eax
  unsigned int v20; // r13d
  __int64 v21; // rdx
  __int64 v22; // rdx
  struct SpatialAudioEncoderDescriptor *v23; // rax
  int v24; // [rsp+20h] [rbp-60h]
  int v25; // [rsp+20h] [rbp-60h]
  struct SpatialAudioEncoderDescriptor *v26; // [rsp+30h] [rbp-50h] BYREF
  __m256i v27; // [rsp+40h] [rbp-40h] BYREF
  __m256i v28; // [rsp+60h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]
  unsigned int v31; // [rsp+D8h] [rbp+58h] BYREF

  if ( !a4 )
  {
    v21 = 8454LL;
LABEL_22:
    DeviceFormatInternal__lambda_53e50f4d36d820af02fa3fa8c2905d02 = -2147467261;
    goto LABEL_23;
  }
  *a4 = 0LL;
  v10 = a5;
  if ( a5 )
    *a5 = 0LL;
  v11 = a6;
  if ( a6 )
  {
    *a6 = 0;
    if ( !v10 )
    {
      v21 = 8465LL;
      goto LABEL_22;
    }
  }
  v12 = a7;
  if ( a7 )
  {
    *a7 = 0LL;
    if ( !v10 )
    {
      v21 = 8471LL;
      goto LABEL_22;
    }
    if ( !v11 )
    {
      v21 = 8472LL;
      goto LABEL_22;
    }
  }
  CEndpointCharacteristics::HasHardwareAudioEngine(this[161]);
  EffectPack::GetDefaultConnectorProcessingModeInternal(this, &v27, a2, 1LL);
  v28.m256i_i64[0] = (__int64)this;
  v28.m256i_i32[2] = a2;
  *(_OWORD *)((char *)&v28.m256i_u64[1] + 4) = *(_OWORD *)v27.m256i_i8;
  v27 = v28;
  DeviceFormatInternal__lambda_53e50f4d36d820af02fa3fa8c2905d02 = CEndpointCharacteristics::GetDeviceFormatInternal__lambda_53e50f4d36d820af02fa3fa8c2905d02___(
                                                                    this[161],
                                                                    (__int64)&v27,
                                                                    (__int64)a4);
  if ( (DeviceFormatInternal__lambda_53e50f4d36d820af02fa3fa8c2905d02 & 0x80000000) != 0 )
  {
    result = 2290679812LL;
    if ( DeviceFormatInternal__lambda_53e50f4d36d820af02fa3fa8c2905d02 != -2004287484 )
    {
      v21 = 8477LL;
LABEL_23:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v21,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)DeviceFormatInternal__lambda_53e50f4d36d820af02fa3fa8c2905d02,
        v24);
      return DeviceFormatInternal__lambda_53e50f4d36d820af02fa3fa8c2905d02;
    }
    return result;
  }
  if ( !v10 )
    return 0LL;
  v15 = 0LL;
  v26 = 0LL;
  v16 = (struct SpatialAudioSettings *)CoTaskMemAlloc(0x48uLL);
  v27.m256i_i64[0] = (__int64)v16;
  if ( !v16 )
  {
    v22 = 8487LL;
    goto LABEL_25;
  }
  v17 = 0LL;
  v18 = 0LL;
  if ( v12 )
  {
    v17 = 7506LL;
    v23 = (struct SpatialAudioEncoderDescriptor *)CoTaskMemAlloc(0x1D52uLL);
    v15 = v23;
    v26 = v23;
    if ( v23 )
    {
      v18 = v23;
      goto LABEL_14;
    }
    v22 = 8494LL;
LABEL_25:
    DeviceFormatInternal__lambda_53e50f4d36d820af02fa3fa8c2905d02 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v22,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)0x8007000ELL,
      v24);
    wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(&v26);
    wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(&v27);
    return DeviceFormatInternal__lambda_53e50f4d36d820af02fa3fa8c2905d02;
  }
LABEL_14:
  v31 = 0;
  SpatialAudioSettings = CEndpointCharacteristics::GetSpatialAudioSettings(this[161], v16, v15, v17, &v31);
  v20 = SpatialAudioSettings;
  if ( SpatialAudioSettings >= 0 )
  {
    *v10 = v16;
    if ( v12 )
    {
      v15 = 0LL;
      *v12 = v18;
    }
    if ( v11 )
      *v11 = v31;
    if ( v15 )
      CoTaskMemFree(v15);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2135,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)SpatialAudioSettings,
    v25);
  if ( v18 )
    CoTaskMemFree(v18);
  CoTaskMemFree(v16);
  return v20;
}
