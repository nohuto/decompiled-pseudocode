/*
 * XREFs of ?IsCompressedSpatialFormat@@YA_NPEBUtWAVEFORMATEX@@@Z @ 0x1800321B8
 * Callers:
 *     ?IsFormatSupportedOnHostConnector@EffectPack@@QEAA_NPEBUWAVEFORMATEXTENSIBLE@@@Z @ 0x180004928 (-IsFormatSupportedOnHostConnector@EffectPack@@QEAA_NPEBUWAVEFORMATEXTENSIBLE@@@Z.c)
 *     ?IsTechnologySupported@CSpatialAudioTechCompressed@@IEBA_NPEAVEffectPack@@PEBUtWAVEFORMATEX@@PEBU_GUID@@IPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x18003158C (-IsTechnologySupported@CSpatialAudioTechCompressed@@IEBA_NPEAVEffectPack@@PEBUtWAVEFORMATEX@@PEB.c)
 *     ?IsTechnologySupported@CSpatialAudioTechHRTF@@UEBA_NPEAVEffectPack@@PEBUtWAVEFORMATEX@@1KPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x1800322F0 (-IsTechnologySupported@CSpatialAudioTechHRTF@@UEBA_NPEAVEffectPack@@PEBUtWAVEFORMATEX@@1KPEAIPEA.c)
 *     ?DeriveDevicePipeFormatFromConnectorFormat@EffectPack@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x18005E0C4 (-DeriveDevicePipeFormatFromConnectorFormat@EffectPack@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioeng.c)
 *     _lambda_467fc3282994b32af598667e1ec5bffc_::operator() @ 0x18014AAE4 (_lambda_467fc3282994b32af598667e1ec5bffc_--operator().c)
 * Callees:
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x180032880 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 */

char __fastcall IsCompressedSpatialFormat(const struct tWAVEFORMATEX *a1)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  DWORD *p_nSamplesPerSec; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax

  if ( !a1 || (int)ValidateWaveFormatEx(a1) < 0 || a1->wFormatTag != 0xFFFE )
    return 0;
  v2 = *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2) - *(_QWORD *)&GUID_0000000c_0cea_0010_8000_00aa00389b71.Data1;
  if ( !v2 )
    v2 = *(_QWORD *)&a1[1].wBitsPerSample - *(_QWORD *)GUID_0000000c_0cea_0010_8000_00aa00389b71.Data4;
  if ( v2 )
  {
    v3 = *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2) - *(_QWORD *)&GUID_0000010c_0cea_0010_8000_00aa00389b71.Data1;
    if ( !v3 )
      v3 = *(_QWORD *)&a1[1].wBitsPerSample - *(_QWORD *)GUID_0000010c_0cea_0010_8000_00aa00389b71.Data4;
    if ( v3 )
    {
      v4 = *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2) - *(_QWORD *)&GUID_0000030c_0cea_0010_8000_00aa00389b71.Data1;
      if ( !v4 )
        v4 = *(_QWORD *)&a1[1].wBitsPerSample - *(_QWORD *)GUID_0000030c_0cea_0010_8000_00aa00389b71.Data4;
      if ( v4 )
      {
        p_nSamplesPerSec = &a1->nSamplesPerSec;
        goto LABEL_14;
      }
    }
  }
  p_nSamplesPerSec = &a1->nSamplesPerSec;
  if ( a1->nSamplesPerSec != 192000 || a1->nChannels != 8 || a1->wBitsPerSample != 16 )
  {
LABEL_14:
    v6 = *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2) - *(_QWORD *)&GUID_0000000b_0cea_0010_8000_00aa00389b71.Data1;
    if ( !v6 )
      v6 = *(_QWORD *)&a1[1].wBitsPerSample - *(_QWORD *)GUID_0000000b_0cea_0010_8000_00aa00389b71.Data4;
    if ( !v6 )
      goto LABEL_26;
    v7 = *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2) - *(_QWORD *)&GUID_0000010b_0cea_0010_8000_00aa00389b71.Data1;
    if ( !v7 )
      v7 = *(_QWORD *)&a1[1].wBitsPerSample - *(_QWORD *)GUID_0000010b_0cea_0010_8000_00aa00389b71.Data4;
    if ( !v7 )
      goto LABEL_26;
    v8 = *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2) - *(_QWORD *)&GUID_0000030b_0cea_0010_8000_00aa00389b71.Data1;
    if ( !v8 )
      v8 = *(_QWORD *)&a1[1].wBitsPerSample - *(_QWORD *)GUID_0000030b_0cea_0010_8000_00aa00389b71.Data4;
    if ( !v8 )
    {
LABEL_26:
      if ( *p_nSamplesPerSec == 192000 && a1->nChannels == 8 && a1->wBitsPerSample == 16 )
        return 1;
    }
    return 0;
  }
  return 1;
}
