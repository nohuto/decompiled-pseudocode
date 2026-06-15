/*
 * XREFs of ?IsCompressedSpatialFormat@@YA_NPEBUtWAVEFORMATEX@@@Z @ 0x180054260
 * Callers:
 *     ?IsTechnologySupported@CSpatialAudioTechHRTF@@UEBA_NPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@@1KPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x18004E4A0 (-IsTechnologySupported@CSpatialAudioTechHRTF@@UEBA_NPEAVCEndpointCharacteristics@@PEBUtWAVEFORMA.c)
 *     ?IsTechnologySupported@CSpatialAudioTechCompressed@@IEBA_NPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@@PEBU_GUID@@IPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x1800540C0 (-IsTechnologySupported@CSpatialAudioTechCompressed@@IEBA_NPEAVCEndpointCharacteristics@@PEBUtWAV.c)
 *     _lambda_0ce50e585f6028199e33aa7804c7da0c_::operator() @ 0x1800684B8 (_lambda_0ce50e585f6028199e33aa7804c7da0c_--operator().c)
 *     ?DeriveDevicePipeFormatFromConnectorFormat@CEndpointCharacteristics@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x1801463A8 (-DeriveDevicePipeFormatFromConnectorFormat@CEndpointCharacteristics@@QEAAJU_GUID@@W4__MIDL___MID.c)
 *     ?IsFormatSupportedOnHostConnector@CEndpointCharacteristics@@QEAA_NPEBUWAVEFORMATEXTENSIBLE@@@Z @ 0x18014AE68 (-IsFormatSupportedOnHostConnector@CEndpointCharacteristics@@QEAA_NPEBUWAVEFORMATEXTENSIBLE@@@Z.c)
 * Callees:
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x18002E730 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 */

bool __fastcall IsCompressedSpatialFormat(const struct tWAVEFORMATEX *a1)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax

  if ( !a1 || (int)ValidateWaveFormatEx(a1) < 0 || a1->wFormatTag != 0xFFFE )
    return 0;
  v2 = *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2) - *(_QWORD *)&GUID_0000000c_0cea_0010_8000_00aa00389b71.Data1;
  if ( !v2 )
    v2 = *(_QWORD *)&a1[1].wBitsPerSample - *(_QWORD *)GUID_0000000c_0cea_0010_8000_00aa00389b71.Data4;
  if ( !v2 )
    goto LABEL_29;
  v3 = *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2) - *(_QWORD *)&GUID_0000010c_0cea_0010_8000_00aa00389b71.Data1;
  if ( !v3 )
    v3 = *(_QWORD *)&a1[1].wBitsPerSample - *(_QWORD *)GUID_0000010c_0cea_0010_8000_00aa00389b71.Data4;
  if ( !v3 )
    goto LABEL_29;
  v4 = *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2) - *(_QWORD *)&GUID_0000030c_0cea_0010_8000_00aa00389b71.Data1;
  if ( !v4 )
    v4 = *(_QWORD *)&a1[1].wBitsPerSample - *(_QWORD *)GUID_0000030c_0cea_0010_8000_00aa00389b71.Data4;
  if ( !v4 )
  {
LABEL_29:
    if ( a1->nSamplesPerSec == 192000 && a1->nChannels == 8 && a1->wBitsPerSample == 16 )
      return 1;
  }
  v5 = *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2) - *(_QWORD *)&GUID_0000000b_0cea_0010_8000_00aa00389b71.Data1;
  if ( !v5 )
    v5 = *(_QWORD *)&a1[1].wBitsPerSample - *(_QWORD *)GUID_0000000b_0cea_0010_8000_00aa00389b71.Data4;
  if ( v5 )
  {
    v6 = *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2) - *(_QWORD *)&GUID_0000010b_0cea_0010_8000_00aa00389b71.Data1;
    if ( !v6 )
      v6 = *(_QWORD *)&a1[1].wBitsPerSample - *(_QWORD *)GUID_0000010b_0cea_0010_8000_00aa00389b71.Data4;
    if ( v6 )
    {
      v7 = *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2) - *(_QWORD *)&GUID_0000030b_0cea_0010_8000_00aa00389b71.Data1;
      if ( !v7 )
        v7 = *(_QWORD *)&a1[1].wBitsPerSample - *(_QWORD *)GUID_0000030b_0cea_0010_8000_00aa00389b71.Data4;
      if ( v7 )
        return 0;
    }
  }
  return a1->nSamplesPerSec == 192000 && a1->nChannels == 8 && a1->wBitsPerSample == 16;
}
