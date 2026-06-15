/*
 * XREFs of ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x18002E730
 * Callers:
 *     ?GetDevicePipeFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18002D120 (-GetDevicePipeFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 *     ?IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3PEAPEAU4@@Z @ 0x18002D350 (-IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_i.c)
 *     ?CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53PEBU4@6PEAPEAUIAudioDeviceGraph@@@Z @ 0x180034120 (-CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_aud.c)
 *     ?ProcessPropertyChange@CSpatialProperties@@QEAAXAEBU_tagpropertykey@@PEAUSpatialAudioRelatedGlobalSettings@@PEBUtWAVEFORMATEX@@PEAH@Z @ 0x180051B74 (-ProcessPropertyChange@CSpatialProperties@@QEAAXAEBU_tagpropertykey@@PEAUSpatialAudioRelatedGlob.c)
 *     ?SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAX_NPEBUtWAVEFORMATEX@@PEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x1800526A0 (-SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAX_NPEBUtWAVEFORMATEX@@PEAUWAVEFORMATEXT.c)
 *     ?IsCompressedSpatialFormat@@YA_NPEBUtWAVEFORMATEX@@@Z @ 0x180054260 (-IsCompressedSpatialFormat@@YA_NPEBUtWAVEFORMATEX@@@Z.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x1800EAFFC (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     CEndpointCharacteristics::ForEachCandidateFormatForMode__lambda_0271267fe4b1063fcc66a341b5120ffb___ @ 0x1801402A0 (CEndpointCharacteristics--ForEachCandidateFormatForMode__lambda_0271267fe4b1063fcc66a341b5120ffb.c)
 *     CEndpointCharacteristics::GetDefaultFormat__lambda_0de3d14ddc76a6bb0bc0d93702434bc9___ @ 0x180142298 (CEndpointCharacteristics--GetDefaultFormat__lambda_0de3d14ddc76a6bb0bc0d93702434bc9___.c)
 *     CEndpointCharacteristics::GetDefaultFormat__lambda_cc1fbeea7d61a5d688c074f297f6e07b___ @ 0x1801425C8 (CEndpointCharacteristics--GetDefaultFormat__lambda_cc1fbeea7d61a5d688c074f297f6e07b___.c)
 *     CEndpointCharacteristics::GetDeviceFormatInternal__lambda_0de3d14ddc76a6bb0bc0d93702434bc9___ @ 0x1801428B4 (CEndpointCharacteristics--GetDeviceFormatInternal__lambda_0de3d14ddc76a6bb0bc0d93702434bc9___.c)
 *     ?UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18014D3F4 (-UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineen.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ValidateWaveFormatEx(const struct tWAVEFORMATEX *a1)
{
  unsigned int v1; // r8d
  int nChannels; // r11d
  DWORD nSamplesPerSec; // r10d
  DWORD nAvgBytesPerSec; // ebx
  int nBlockAlign; // edi
  WORD cbSize; // dx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  WORD v10; // dx
  WORD wFormatTag; // ax
  WORD wBitsPerSample; // ax
  int v14; // edx

  v1 = 0;
  if ( !a1 )
    return (unsigned int)-2147467261;
  nChannels = a1->nChannels;
  if ( !(_WORD)nChannels )
    return (unsigned int)-2147024809;
  nSamplesPerSec = a1->nSamplesPerSec;
  if ( !nSamplesPerSec )
    return (unsigned int)-2147024809;
  nAvgBytesPerSec = a1->nAvgBytesPerSec;
  if ( !nAvgBytesPerSec )
    return (unsigned int)-2147024809;
  nBlockAlign = a1->nBlockAlign;
  if ( !(_WORD)nBlockAlign )
    return (unsigned int)-2147024809;
  cbSize = a1->cbSize;
  if ( cbSize > 0x400u )
    return (unsigned int)-2147024809;
  if ( ((a1->wFormatTag - 1) & 0xFFFD) != 0 )
  {
    if ( a1->wFormatTag != 0xFFFE )
      return v1;
    if ( cbSize < 0x16u )
      return (unsigned int)-2147024809;
    v7 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2);
    if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2) )
      v7 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *(_QWORD *)&a1[1].wBitsPerSample;
    if ( !v7 )
      goto LABEL_16;
    v8 = *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 - *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2);
    if ( *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 == *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2) )
      v8 = *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4 - *(_QWORD *)&a1[1].wBitsPerSample;
    if ( !v8 )
    {
LABEL_16:
      v9 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2);
      if ( !v9 )
        v9 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *(_QWORD *)&a1[1].wBitsPerSample;
      if ( v9 )
      {
        wBitsPerSample = a1->wBitsPerSample;
        v10 = wBitsPerSample;
        if ( wBitsPerSample != 32 && wBitsPerSample != 64 )
          return (unsigned int)-2147024809;
      }
      else
      {
        v10 = a1->wBitsPerSample;
        if ( ((v10 - 8) & 0xFFE7) != 0 )
          return (unsigned int)-2147024809;
      }
      wFormatTag = a1[1].wFormatTag;
      if ( wFormatTag
        && v10 >= wFormatTag
        && nAvgBytesPerSec == (nSamplesPerSec * v10 * nChannels) >> 3
        && nBlockAlign == v10 * nChannels / 8 )
      {
        return v1;
      }
      return (unsigned int)-2147024809;
    }
  }
  else
  {
    if ( cbSize )
      return (unsigned int)-2147024809;
    v14 = a1->wBitsPerSample;
    if ( (v14 & 7) != 0
      || (unsigned __int16)nChannels > 2u
      || nAvgBytesPerSec != (nSamplesPerSec * v14 * nChannels) >> 3 )
    {
      return (unsigned int)-2147024809;
    }
  }
  return v1;
}
