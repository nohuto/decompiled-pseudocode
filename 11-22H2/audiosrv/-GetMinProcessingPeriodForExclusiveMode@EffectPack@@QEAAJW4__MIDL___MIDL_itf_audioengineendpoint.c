/*
 * XREFs of ?GetMinProcessingPeriodForExclusiveMode@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEA_J@Z @ 0x18000E010
 * Callers:
 *     ?GetProcessingPeriod@EffectPack@@QEAAJHPEA_J0@Z @ 0x18000DCB0 (-GetProcessingPeriod@EffectPack@@QEAAJHPEA_J0@Z.c)
 *     AudioServerGetDevicePeriod @ 0x180121AD0 (AudioServerGetDevicePeriod.c)
 * Callees:
 *     ?GetExclusiveModeProcessingModeConfiguration@EffectPack@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x18000BE24 (-GetExclusiveModeProcessingModeConfiguration@EffectPack@@QEAAXW4__MIDL___MIDL_itf_audioengineend.c)
 *     ?GetMinProcessingPeriodForExclusiveMode@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@PEA_J@Z @ 0x18000E104 (-GetMinProcessingPeriodForExclusiveMode@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioe_ea_18000E104.c)
 *     ?GetConnectorFormatForProcessingMode@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180017DDC (-GetConnectorFormatForProcessingMode@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_00.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_ptr@USpatialAudioEncoderDescriptor@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x180080F10 (--1-$unique_ptr@USpatialAudioEncoderDescriptor@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall EffectPack::GetMinProcessingPeriodForExclusiveMode(
        EffectPack *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        __int64 *a3)
{
  struct _GUID v5; // xmm6
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v6; // edx
  int ConnectorFormatForProcessingMode; // ebx
  void *v8; // rcx
  int MinProcessingPeriodForExclusiveMode; // eax
  void *v10; // rcx
  unsigned __int64 v12; // r9
  __int64 v13; // rdx
  int v14; // [rsp+20h] [rbp-50h]
  struct _GUID v15; // [rsp+30h] [rbp-40h] BYREF
  LPVOID *p_pv; // [rsp+40h] [rbp-30h]
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v17[2]; // [rsp+48h] [rbp-28h] BYREF
  char v18; // [rsp+50h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]
  LPVOID pv; // [rsp+90h] [rbp+20h] BYREF

  pv = 0LL;
  EffectPack::GetExclusiveModeProcessingModeConfiguration(this, 0LL, &v15, 0LL, 0LL);
  *a3 = 0LL;
  p_pv = &pv;
  *(_QWORD *)v17 = 0LL;
  v18 = 1;
  v5 = v15;
  ConnectorFormatForProcessingMode = EffectPack::GetConnectorFormatForProcessingMode(
                                       this,
                                       eHostProcessConnector,
                                       &v15,
                                       (struct tWAVEFORMATEX **)v17);
  if ( v18 )
  {
    v8 = *p_pv;
    v6 = v17[0];
    *p_pv = *(LPVOID *)v17;
    if ( v8 )
      CoTaskMemFree(v8);
  }
  if ( ConnectorFormatForProcessingMode < 0 )
  {
    v12 = (unsigned int)ConnectorFormatForProcessingMode;
    v13 = 8288LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)v12,
      v14);
    wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(&pv);
    return (unsigned int)ConnectorFormatForProcessingMode;
  }
  v15 = v5;
  MinProcessingPeriodForExclusiveMode = EffectPack::GetMinProcessingPeriodForExclusiveMode(
                                          this,
                                          v6,
                                          (struct tWAVEFORMATEX *)pv,
                                          &v15,
                                          a3);
  ConnectorFormatForProcessingMode = MinProcessingPeriodForExclusiveMode;
  if ( MinProcessingPeriodForExclusiveMode < 0 )
  {
    v12 = (unsigned int)MinProcessingPeriodForExclusiveMode;
    v13 = 8291LL;
    goto LABEL_11;
  }
  v10 = pv;
  pv = 0LL;
  if ( v10 )
    CoTaskMemFree(v10);
  return 0LL;
}
