/*
 * XREFs of ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x180031990
 * Callers:
 *     ?GetSharedModeEnginePeriodicityForTranslatedProcessingMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@AEAVCAudioSignalProcessingModeMap@@W4PeriodicityType@@PEAI555@Z @ 0x18000E418 (-GetSharedModeEnginePeriodicityForTranslatedProcessingMode@CEndpointCharacteristics@@QEAAJW4__MI.c)
 *     ?SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAXPEAVEffectPack@@_NPEBUtWAVEFORMATEX@@PEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x18002EE90 (-SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAXPEAVEffectPack@@_NPEBUtWAVEFORMATEX@@P.c)
 *     CEndpointCharacteristics::GetDeviceFormatInternal__lambda_53e50f4d36d820af02fa3fa8c2905d02___ @ 0x180030FA4 (CEndpointCharacteristics--GetDeviceFormatInternal__lambda_53e50f4d36d820af02fa3fa8c2905d02___.c)
 *     ?IsTechnologySupported@CSpatialAudioTechHRTF@@UEBA_NPEAVEffectPack@@PEBUtWAVEFORMATEX@@1KPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x1800322F0 (-IsTechnologySupported@CSpatialAudioTechHRTF@@UEBA_NPEAVEffectPack@@PEBUtWAVEFORMATEX@@1KPEAIPEA.c)
 *     _lambda_5789e60fd85b99cd3c89d9f341e01d71_::operator() @ 0x180041F80 (_lambda_5789e60fd85b99cd3c89d9f341e01d71_--operator().c)
 *     ?ValidateStreamForStreamGroup@CBaseStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x18004B690 (-ValidateStreamForStreamGroup@CBaseStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHHH_JPEAUEndpointCharacteristicsDescriptor@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@W4_BridgeStreamProperties@@2PEAUIProcessSubmixProxy@@U8@PEAUSystemAudioStream@@@Z @ 0x18006CF90 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHHH_JPEA.c)
 *     ?ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEAVCEndpointStore@@@Z @ 0x1800DBC70 (-ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEAVCEndpointStore@@@Z.c)
 *     ?ConnectorProbablySupportsFormat@CEndpointCharacteristics@@QEAA_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@@Z @ 0x18014B6C8 (-ConnectorProbablySupportsFormat@CEndpointCharacteristics@@QEAA_NW4__MIDL___MIDL_itf_audioengine.c)
 * Callees:
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x18006A7FD (memcmp_0.c)
 */

__int64 __fastcall CompareWaveFormat(const struct tWAVEFORMATEX *a1, const struct tWAVEFORMATEX *a2)
{
  unsigned int v2; // ebx
  WORD cbSize; // r10
  __int16 v4; // r8
  int v5; // eax
  int wFormatTag; // r11d
  __int16 v7; // r9
  __int16 v8; // di
  __int128 v9; // xmm1
  __int64 v10; // xmm0_8
  int v11; // r11d
  __int16 v12; // si
  int v13; // r10d
  int v14; // eax
  WORD v15; // cx
  __int128 v16; // xmm1
  __int64 v17; // xmm0_8
  int v18; // r10d
  __int16 v19; // dx
  int v20; // ecx
  __int16 v21; // ax
  __int64 v22; // rax
  __int64 v24; // r10
  __int64 v25; // r10
  WORD nChannels; // r10
  __int128 v27; // xmm0
  __int64 v28; // rcx
  __int64 v29; // rcx
  WORD v30; // cx
  WORD wBitsPerSample; // r14
  __int128 v32; // xmm0
  __int128 Buf2; // [rsp+28h] [rbp-19h] BYREF
  _BYTE v34[24]; // [rsp+38h] [rbp-9h]
  __int128 Buf1; // [rsp+50h] [rbp+Fh] BYREF
  _BYTE v36[24]; // [rsp+60h] [rbp+1Fh]

  v2 = 0;
  if ( !a1 )
    return a2 == 0LL;
  if ( a2 )
  {
    cbSize = a1->cbSize;
    v4 = -2;
    v5 = 0;
    wFormatTag = a1->wFormatTag;
    if ( (_WORD)wFormatTag == 0xFFFE )
    {
      v7 = 22;
      if ( cbSize == 22 )
        goto LABEL_5;
      v24 = *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2) - *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
      if ( !v24 )
        v24 = *(_QWORD *)&a1[1].wBitsPerSample - *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
      if ( !v24 )
        goto LABEL_5;
      v25 = *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2) - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
      if ( !v25 )
        v25 = *(_QWORD *)&a1[1].wBitsPerSample - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
      if ( v25 )
      {
        v8 = *(_WORD *)v36;
      }
      else
      {
LABEL_5:
        v8 = 22;
        v5 = 1;
        v9 = *(_OWORD *)&a1->cbSize;
        Buf1 = *(_OWORD *)&a1->wFormatTag;
        v10 = *(_QWORD *)&a1[1].wBitsPerSample;
        *(_OWORD *)v36 = v9;
        *(_WORD *)v36 = 22;
        *(_QWORD *)&v36[16] = v10;
      }
      if ( !v5 )
        return v2;
      v11 = *(_DWORD *)&v36[4];
      v12 = Buf1;
    }
    else
    {
      if ( cbSize && (((_WORD)wFormatTag - 1) & 0xFFFD) != 0 )
        return v2;
      nChannels = a1->nChannels;
      if ( (unsigned __int16)(nChannels - 1) > 1u || ((a1->wBitsPerSample - 8) & 0xFFE7) != 0 )
        return v2;
      v27 = *(_OWORD *)&a1->wFormatTag;
      *(_WORD *)&v36[2] = a1->wBitsPerSample;
      v7 = 22;
      v12 = -2;
      *(GUID *)&v36[8] = GUID_00000000_0000_0010_8000_00aa00389b71;
      *(_DWORD *)&v36[8] = wFormatTag;
      v8 = 22;
      *(_WORD *)v36 = 22;
      v11 = (nChannels == 1) + 3;
      Buf1 = v27;
      *(_DWORD *)&v36[4] = v11;
      LOWORD(Buf1) = -2;
    }
    v13 = a2->wFormatTag;
    v14 = 0;
    v15 = a2->cbSize;
    if ( (_WORD)v13 != 0xFFFE )
    {
      if ( v15 && (((_WORD)v13 - 1) & 0xFFFD) != 0 )
        return v2;
      v30 = a2->nChannels;
      if ( (unsigned __int16)(v30 - 1) > 1u )
        return v2;
      wBitsPerSample = a2->wBitsPerSample;
      if ( ((wBitsPerSample - 8) & 0xFFE7) != 0 )
        return v2;
      v32 = *(_OWORD *)&a2->wFormatTag;
      *(_WORD *)v34 = 22;
      *(GUID *)&v34[8] = GUID_00000000_0000_0010_8000_00aa00389b71;
      *(_DWORD *)&v34[8] = v13;
      *(_WORD *)&v34[2] = wBitsPerSample;
      v18 = (v30 == 1) + 3;
      Buf2 = v32;
      *(_DWORD *)&v34[4] = v18;
      LOWORD(Buf2) = -2;
      goto LABEL_13;
    }
    if ( v15 == 22 )
      goto LABEL_10;
    v28 = *(_QWORD *)((char *)&a2[1].nSamplesPerSec + 2) - *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
    if ( !v28 )
      v28 = *(_QWORD *)&a2[1].wBitsPerSample - *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
    if ( !v28 )
      goto LABEL_10;
    v29 = *(_QWORD *)((char *)&a2[1].nSamplesPerSec + 2) - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
    if ( !v29 )
      v29 = *(_QWORD *)&a2[1].wBitsPerSample - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
    if ( v29 )
    {
      v7 = *(_WORD *)v34;
    }
    else
    {
LABEL_10:
      v14 = 1;
      v16 = *(_OWORD *)&a2->cbSize;
      Buf2 = *(_OWORD *)&a2->wFormatTag;
      v17 = *(_QWORD *)&a2[1].wBitsPerSample;
      *(_OWORD *)v34 = v16;
      *(_WORD *)v34 = 22;
      *(_QWORD *)&v34[16] = v17;
    }
    if ( v14 )
    {
      v18 = *(_DWORD *)&v34[4];
      v4 = Buf2;
LABEL_13:
      if ( WORD1(Buf1) )
      {
        v19 = WORD1(Buf2);
      }
      else
      {
        v19 = 0;
        WORD1(Buf2) = 0;
        DWORD2(Buf2) = 0;
        WORD6(Buf2) = 0;
      }
      if ( DWORD1(Buf1) )
      {
        v20 = DWORD1(Buf2);
      }
      else
      {
        v20 = 0;
        *(_QWORD *)((char *)&Buf2 + 4) = 0LL;
      }
      if ( HIWORD(Buf1) )
      {
        v21 = HIWORD(Buf2);
      }
      else
      {
        v21 = 0;
        HIDWORD(Buf2) = 0;
      }
      if ( !v11 )
      {
        v18 = 0;
        *(_DWORD *)&v34[4] = 0;
      }
      if ( !v12 )
      {
        v4 = 0;
        LOWORD(Buf2) = 0;
      }
      if ( !v19 )
      {
        WORD1(Buf1) = 0;
        DWORD2(Buf1) = 0;
        WORD6(Buf1) = 0;
      }
      if ( !v20 )
        *(_QWORD *)((char *)&Buf1 + 4) = 0LL;
      if ( !v21 )
        HIDWORD(Buf1) = 0;
      if ( !v18 )
        *(_DWORD *)&v36[4] = 0;
      if ( !v4 )
        LOWORD(Buf1) = 0;
      v22 = *(_QWORD *)&v36[8] - *(_QWORD *)&v34[8];
      if ( *(_QWORD *)&v36[8] == *(_QWORD *)&v34[8] )
        v22 = *(_QWORD *)&v36[16] - *(_QWORD *)&v34[16];
      if ( !v22 && v7 == v8 && !memcmp_0(&Buf1, &Buf2, 0x28uLL) )
        return 1;
    }
  }
  return v2;
}
