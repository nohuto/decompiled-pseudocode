/*
 * XREFs of ?GetAudioFormatForSpatialFormat@EffectPack@@AEAAJPEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@1PEAUWAVEFORMATEXTENSIBLE@@PEA_N@Z @ 0x18014C068
 * Callers:
 *     ?SetDeviceFormatAndSpatialSettings@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@PEBUSpatialAudioSettings@@_N@Z @ 0x1800601F4 (-SetDeviceFormatAndSpatialSettings@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetAudioFormatForSpatialFormat@CSpatialProperties@@QEAAJPEAVEffectPack@@_NPEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@3PEAUSpatialAudioRelatedGlobalSettings@@PEAUWAVEFORMATEXTENSIBLE@@PEA_N@Z @ 0x180153284 (-GetAudioFormatForSpatialFormat@CSpatialProperties@@QEAAJPEAVEffectPack@@_NPEBUSpatialAudioSetti.c)
 */

__int64 __fastcall EffectPack::GetAudioFormatForSpatialFormat(
        EffectPack *this,
        const struct SpatialAudioSettings *a2,
        const struct tWAVEFORMATEX *a3,
        const struct tWAVEFORMATEX *a4,
        struct WAVEFORMATEXTENSIBLE *a5,
        bool *a6)
{
  __int64 v10; // rdx
  int AudioFormatForSpatialFormat; // ebx
  struct WAVEFORMATEXTENSIBLE *v13; // rdi
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  char v15; // [rsp+78h] [rbp+10h] BYREF

  if ( !a2 )
  {
    v10 = 7090LL;
LABEL_3:
    AudioFormatForSpatialFormat = -2147467261;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)AudioFormatForSpatialFormat);
    return (unsigned int)AudioFormatForSpatialFormat;
  }
  if ( !a3 )
  {
    v10 = 7091LL;
    goto LABEL_3;
  }
  v13 = a5;
  if ( !a5 )
  {
    v10 = 7092LL;
    goto LABEL_3;
  }
  v15 = 0;
  AudioFormatForSpatialFormat = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)g_policyConfigInternal + 48LL))(
                                  g_policyConfigInternal,
                                  &v15);
  if ( AudioFormatForSpatialFormat < 0 )
  {
    v10 = 7097LL;
    goto LABEL_4;
  }
  AudioFormatForSpatialFormat = CSpatialProperties::GetAudioFormatForSpatialFormat(
                                  (CSpatialProperties *)(*((_QWORD *)this + 161) + 416LL),
                                  this,
                                  *(_DWORD *)(*((_QWORD *)this + 161) + 212LL) != 0,
                                  a2,
                                  a4,
                                  a3,
                                  (struct SpatialAudioRelatedGlobalSettings *)&v15,
                                  v13,
                                  a6);
  if ( AudioFormatForSpatialFormat < 0 )
  {
    v10 = 7103LL;
    goto LABEL_4;
  }
  return 0LL;
}
