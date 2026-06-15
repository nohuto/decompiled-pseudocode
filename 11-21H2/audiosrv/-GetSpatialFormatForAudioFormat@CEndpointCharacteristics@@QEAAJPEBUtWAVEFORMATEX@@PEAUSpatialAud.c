/*
 * XREFs of ?GetSpatialFormatForAudioFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@PEAUSpatialAudioSettings@@@Z @ 0x180149A6C
 * Callers:
 *     ?SetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@PEBUSpatialAudioSettings@@_N@Z @ 0x180069AB0 (-SetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengin.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetSpatialFormatForAudioFormat@CSpatialProperties@@QEAAJ_NPEBUtWAVEFORMATEX@@PEAUSpatialAudioSettings@@@Z @ 0x18013E334 (-GetSpatialFormatForAudioFormat@CSpatialProperties@@QEAAJ_NPEBUtWAVEFORMATEX@@PEAUSpatialAudioSe.c)
 */

__int64 __fastcall CEndpointCharacteristics::GetSpatialFormatForAudioFormat(
        CEndpointCharacteristics *this,
        const struct tWAVEFORMATEX *a2,
        struct SpatialAudioSettings *a3)
{
  __int64 v3; // rdx
  int SpatialFormatForAudioFormat; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a2 )
  {
    v3 = 6664LL;
LABEL_3:
    SpatialFormatForAudioFormat = -2147467261;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)SpatialFormatForAudioFormat);
    return (unsigned int)SpatialFormatForAudioFormat;
  }
  if ( !a3 )
  {
    v3 = 6665LL;
    goto LABEL_3;
  }
  SpatialFormatForAudioFormat = CSpatialProperties::GetSpatialFormatForAudioFormat(
                                  (CEndpointCharacteristics *)((char *)this + 1904),
                                  *((_DWORD *)this + 47) != 0,
                                  a2,
                                  a3);
  if ( SpatialFormatForAudioFormat < 0 )
  {
    v3 = 6671LL;
    goto LABEL_4;
  }
  return 0LL;
}
