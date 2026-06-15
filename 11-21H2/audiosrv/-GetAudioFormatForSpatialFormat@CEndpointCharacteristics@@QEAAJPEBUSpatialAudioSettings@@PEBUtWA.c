/*
 * XREFs of ?GetAudioFormatForSpatialFormat@CEndpointCharacteristics@@QEAAJPEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@1PEAUWAVEFORMATEXTENSIBLE@@PEA_N@Z @ 0x1801479E0
 * Callers:
 *     ?SetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@PEBUSpatialAudioSettings@@_N@Z @ 0x180069AB0 (-SetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengin.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetAudioFormatForSpatialFormat@CSpatialProperties@@QEAAJ_NPEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@2PEAUSpatialAudioRelatedGlobalSettings@@PEAUWAVEFORMATEXTENSIBLE@@PEA_N@Z @ 0x18013D7C4 (-GetAudioFormatForSpatialFormat@CSpatialProperties@@QEAAJ_NPEBUSpatialAudioSettings@@PEBUtWAVEFO.c)
 */

__int64 __fastcall CEndpointCharacteristics::GetAudioFormatForSpatialFormat(
        CEndpointCharacteristics *this,
        const struct SpatialAudioSettings *a2,
        struct tWAVEFORMATEX *a3,
        struct tWAVEFORMATEX *a4,
        struct WAVEFORMATEXTENSIBLE *a5,
        bool *a6)
{
  __int64 v10; // rdx
  int AudioFormatForSpatialFormat; // ebx
  struct WAVEFORMATEXTENSIBLE *v13; // rdi
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  char v15; // [rsp+68h] [rbp+10h] BYREF

  if ( !a2 )
  {
    v10 = 6636LL;
LABEL_3:
    AudioFormatForSpatialFormat = -2147467261;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)AudioFormatForSpatialFormat);
    return (unsigned int)AudioFormatForSpatialFormat;
  }
  if ( !a3 )
  {
    v10 = 6637LL;
    goto LABEL_3;
  }
  v13 = a5;
  if ( !a5 )
  {
    v10 = 6638LL;
    goto LABEL_3;
  }
  v15 = 0;
  AudioFormatForSpatialFormat = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)g_policyConfigInternal + 48LL))(
                                  g_policyConfigInternal,
                                  &v15);
  if ( AudioFormatForSpatialFormat < 0 )
  {
    v10 = 6643LL;
    goto LABEL_4;
  }
  AudioFormatForSpatialFormat = CSpatialProperties::GetAudioFormatForSpatialFormat(
                                  (CEndpointCharacteristics *)((char *)this + 1904),
                                  *((_DWORD *)this + 47) != 0,
                                  a2,
                                  a4,
                                  a3,
                                  (struct SpatialAudioRelatedGlobalSettings *)&v15,
                                  v13,
                                  a6);
  if ( AudioFormatForSpatialFormat < 0 )
  {
    v10 = 6648LL;
    goto LABEL_4;
  }
  return 0LL;
}
