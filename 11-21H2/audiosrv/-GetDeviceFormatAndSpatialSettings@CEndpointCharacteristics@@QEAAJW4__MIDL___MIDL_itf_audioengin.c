/*
 * XREFs of ?GetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HPEAPEAUtWAVEFORMATEX@@PEAPEAUSpatialAudioSettings@@PEAIPEAPEAUSpatialAudioEncoderDescriptor@@@Z @ 0x18003EB14
 * Callers:
 *     ?GetDeviceFormatHelper@CPolicyConfig@@AEAAJPEBGW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HPEAPEAUtWAVEFORMATEX@@PEAPEAUSpatialAudioSettings@@PEAIPEAPEAUSpatialAudioEncoderDescriptor@@@Z @ 0x18003EA40 (-GetDeviceFormatHelper@CPolicyConfig@@AEAAJPEBGW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000.c)
 *     ?ProcessPropertyChange@CSpatialProperties@@QEAAXAEBU_tagpropertykey@@PEAUSpatialAudioRelatedGlobalSettings@@PEBUtWAVEFORMATEX@@PEAH@Z @ 0x180051B74 (-ProcessPropertyChange@CSpatialProperties@@QEAAXAEBU_tagpropertykey@@PEAUSpatialAudioRelatedGlob.c)
 *     ?SetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@PEBUSpatialAudioSettings@@_N@Z @ 0x180069AB0 (-SetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengin.c)
 *     ?GetAudioFormatForSpatialFormat@CSpatialProperties@@QEAAJ_NPEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@2PEAUSpatialAudioRelatedGlobalSettings@@PEAUWAVEFORMATEXTENSIBLE@@PEA_N@Z @ 0x18013D7C4 (-GetAudioFormatForSpatialFormat@CSpatialProperties@@QEAAJ_NPEBUSpatialAudioSettings@@PEBUtWAVEFO.c)
 *     ?ResetDeviceFormat@CEndpointCharacteristics@@QEAAJXZ @ 0x18014C020 (-ResetDeviceFormat@CEndpointCharacteristics@@QEAAJXZ.c)
 *     ?SetDeviceFormatSwAudioEngine@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18014C490 (-SetDeviceFormatSwAudioEngine@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendp.c)
 * Callees:
 *     ?GetDefaultConnectorProcessingModeInternal@CEndpointCharacteristics@@AEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SED_RESOLVEOPT@@@Z @ 0x18000CB2C (-GetDefaultConnectorProcessingModeInternal@CEndpointCharacteristics@@AEAA-AU_GUID@@W4__MIDL___MI.c)
 *     CEndpointCharacteristics::GetDeviceFormatInternal__lambda_cc1fbeea7d61a5d688c074f297f6e07b___ @ 0x18002E210 (CEndpointCharacteristics--GetDeviceFormatInternal__lambda_cc1fbeea7d61a5d688c074f297f6e07b___.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetSpatialAudioSettings@CEndpointCharacteristics@@QEAAJPEAUSpatialAudioSettings@@PEAUSpatialAudioEncoderDescriptor@@_KPEAI@Z @ 0x180149920 (-GetSpatialAudioSettings@CEndpointCharacteristics@@QEAAJPEAUSpatialAudioSettings@@PEAUSpatialAud.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CEndpointCharacteristics::GetDeviceFormatAndSpatialSettings(
        CEndpointCharacteristics *this,
        __int32 a2,
        int a3,
        LPVOID *a4,
        struct SpatialAudioSettings **a5,
        unsigned int *a6,
        struct SpatialAudioEncoderDescriptor **a7)
{
  struct SpatialAudioSettings **v10; // r15
  unsigned int *v11; // r12
  struct SpatialAudioEncoderDescriptor **v12; // r13
  void (__fastcall ***v13)(_QWORD, GUID *, struct SpatialAudioEncoderDescriptor **); // r9
  struct SpatialAudioEncoderDescriptor *v14; // rcx
  unsigned int v15; // esi
  int DeviceFormatInternal__lambda_cc1fbeea7d61a5d688c074f297f6e07b; // ebx
  __int64 result; // rax
  __int64 v18; // rdx
  struct SpatialAudioEncoderDescriptor *v19; // rbx
  struct SpatialAudioSettings *v20; // r14
  unsigned int v21; // esi
  struct SpatialAudioEncoderDescriptor *v22; // rdi
  unsigned __int64 v23; // rsi
  __int64 v24; // r9
  __int64 v25; // rdx
  int SpatialAudioSettings; // eax
  int v27; // [rsp+20h] [rbp-60h]
  struct SpatialAudioEncoderDescriptor *v28; // [rsp+30h] [rbp-50h] BYREF
  __m256i v29; // [rsp+40h] [rbp-40h] BYREF
  __m256i v30; // [rsp+60h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]
  unsigned int v34; // [rsp+D8h] [rbp+58h] BYREF

  if ( !a4 )
  {
    v18 = 7974LL;
LABEL_17:
    DeviceFormatInternal__lambda_cc1fbeea7d61a5d688c074f297f6e07b = -2147467261;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)DeviceFormatInternal__lambda_cc1fbeea7d61a5d688c074f297f6e07b,
      v27);
    return (unsigned int)DeviceFormatInternal__lambda_cc1fbeea7d61a5d688c074f297f6e07b;
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
      v18 = 7985LL;
      goto LABEL_17;
    }
  }
  v12 = a7;
  if ( a7 )
  {
    *a7 = 0LL;
    if ( !v10 )
    {
      v18 = 7991LL;
      goto LABEL_17;
    }
    if ( !v11 )
    {
      v18 = 7992LL;
      goto LABEL_17;
    }
  }
  v34 = 0;
  v13 = (void (__fastcall ***)(_QWORD, GUID *, struct SpatialAudioEncoderDescriptor **))*((_QWORD *)this + 2);
  v14 = 0LL;
  v28 = 0LL;
  if ( v13 )
  {
    (**v13)(v13, &GUID_67c5fc9c_29e1_4154_8307_84ed8edb5a21, &v28);
    v14 = v28;
  }
  if ( v14 )
  {
    (*(void (__fastcall **)(struct SpatialAudioEncoderDescriptor *, unsigned int *))(*(_QWORD *)v14 + 88LL))(v14, &v34);
    v14 = v28;
  }
  v15 = v34;
  if ( v14 )
    (*(void (__fastcall **)(struct SpatialAudioEncoderDescriptor *))(*(_QWORD *)v14 + 16LL))(v14);
  CEndpointCharacteristics::GetDefaultConnectorProcessingModeInternal((__int64)this, (GUID *)&v29, a2, 1);
  v30.m256i_i64[0] = (__int64)this;
  v30.m256i_i32[2] = a2;
  *(_OWORD *)((char *)&v30.m256i_u64[1] + 4) = *(_OWORD *)v29.m256i_i8;
  v29 = v30;
  DeviceFormatInternal__lambda_cc1fbeea7d61a5d688c074f297f6e07b = CEndpointCharacteristics::GetDeviceFormatInternal__lambda_cc1fbeea7d61a5d688c074f297f6e07b___(
                                                                    this,
                                                                    a3 != 0,
                                                                    v15 != 0,
                                                                    (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a2,
                                                                    v29.m256i_i64,
                                                                    a4);
  if ( DeviceFormatInternal__lambda_cc1fbeea7d61a5d688c074f297f6e07b < 0 )
  {
    result = 2290679812LL;
    if ( DeviceFormatInternal__lambda_cc1fbeea7d61a5d688c074f297f6e07b != -2004287484 )
    {
      v18 = 7997LL;
      goto LABEL_18;
    }
  }
  else
  {
    if ( !v10 )
      return 0LL;
    v19 = 0LL;
    v28 = 0LL;
    v20 = (struct SpatialAudioSettings *)CoTaskMemAlloc(0x48uLL);
    v29.m256i_i64[0] = (__int64)v20;
    if ( v20 )
    {
      v23 = 0LL;
      v22 = 0LL;
      if ( !v12
        || (v23 = 7506LL,
            v19 = (struct SpatialAudioEncoderDescriptor *)CoTaskMemAlloc(0x1D52uLL),
            v22 = v19,
            (v28 = v19) != 0LL) )
      {
        v34 = 0;
        SpatialAudioSettings = CEndpointCharacteristics::GetSpatialAudioSettings(this, v20, v19, v23, &v34);
        v21 = SpatialAudioSettings;
        if ( SpatialAudioSettings >= 0 )
        {
          *v10 = v20;
          if ( v12 )
          {
            v19 = 0LL;
            *v12 = v22;
            v22 = 0LL;
          }
          if ( v11 )
            *v11 = v34;
          if ( v22 )
            CoTaskMemFree(v19);
          return 0LL;
        }
        v24 = (unsigned int)SpatialAudioSettings;
        v25 = 8021LL;
      }
      else
      {
        v21 = -2147024882;
        v24 = 2147942414LL;
        v25 = 8014LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v25,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)v24,
        v27);
    }
    else
    {
      v21 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1F47,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)0x8007000ELL,
        v27);
      v22 = 0LL;
    }
    if ( v22 )
      CoTaskMemFree(v19);
    if ( v20 )
      CoTaskMemFree(v20);
    return v21;
  }
  return result;
}
