/*
 * XREFs of ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x18000EA9C
 * Callers:
 *     ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x1800021E0 (-GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?ValidateStreamForStreamGroup@CBaseStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x18000FAF0 (-ValidateStreamForStreamGroup@CBaseStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSystemAudioStream@@@Z @ 0x180028DE0 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAV.c)
 *     ?SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAX_NPEBUtWAVEFORMATEX@@PEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x1800526A0 (-SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAX_NPEBUtWAVEFORMATEX@@PEAUWAVEFORMATEXT.c)
 *     ?ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEAVCEndpointStore@@@Z @ 0x180100BC8 (-ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEAVCEndpointStore@@@Z.c)
 *     _lambda_0271267fe4b1063fcc66a341b5120ffb_::operator() @ 0x180144590 (_lambda_0271267fe4b1063fcc66a341b5120ffb_--operator().c)
 *     ?ConnectorProbablySupportsFormat@CEndpointCharacteristics@@QEAA_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@@Z @ 0x180145A70 (-ConnectorProbablySupportsFormat@CEndpointCharacteristics@@QEAA_NW4__MIDL___MIDL_itf_audioengine.c)
 * Callees:
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     memcmp_0 @ 0x18006251D (memcmp_0.c)
 */

__int64 __fastcall CompareWaveFormat(const struct tWAVEFORMATEX *a1, const struct tWAVEFORMATEX *a2)
{
  unsigned int v2; // ebx
  __int16 v3; // r8
  __int128 v4; // xmm1
  __int64 v5; // xmm0_8
  int v6; // esi
  __int128 v7; // xmm1
  __int64 v8; // xmm0_8
  int v9; // r11d
  __int16 v10; // r9
  int v11; // edx
  __int16 v12; // r10
  __int64 v13; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  WORD nChannels; // r10
  __int128 v18; // xmm0
  int wFormatTag; // eax
  __int64 v20; // rax
  __int64 v21; // rax
  WORD v22; // cx
  __int128 v23; // xmm0
  int v24; // eax
  __int16 v25; // [rsp+20h] [rbp-60h]
  __int128 Buf2; // [rsp+28h] [rbp-58h] BYREF
  _BYTE v27[24]; // [rsp+38h] [rbp-48h]
  __int128 Buf1; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v29[24]; // [rsp+60h] [rbp-20h]

  v2 = 0;
  if ( !a1 )
    return a2 == 0LL;
  if ( a2 )
  {
    v3 = -2;
    if ( a1->wFormatTag == 0xFFFE )
    {
      if ( a1->cbSize != 22 )
      {
        v15 = *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2)
            - *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
        if ( !v15 )
          v15 = *(_QWORD *)&a1[1].wBitsPerSample - *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
        if ( v15 )
        {
          v16 = *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2)
              - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
          if ( !v16 )
            v16 = *(_QWORD *)&a1[1].wBitsPerSample - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
          if ( v16 )
            return v2;
        }
      }
      v4 = *(_OWORD *)&a1->cbSize;
      Buf1 = *(_OWORD *)&a1->wFormatTag;
      v5 = *(_QWORD *)&a1[1].wBitsPerSample;
      *(_OWORD *)v29 = v4;
      v6 = DWORD1(v4);
      *(_QWORD *)&v29[16] = v5;
      v25 = Buf1;
    }
    else
    {
      if ( a1->cbSize && ((a1->wFormatTag - 1) & 0xFFFD) != 0 )
        return v2;
      nChannels = a1->nChannels;
      if ( (unsigned __int16)(nChannels - 1) > 1u || ((a1->wBitsPerSample - 8) & 0xFFE7) != 0 )
        return v2;
      v18 = *(_OWORD *)&a1->wFormatTag;
      *(_WORD *)&v29[2] = a1->wBitsPerSample;
      Buf1 = v18;
      LOWORD(Buf1) = -2;
      v25 = -2;
      wFormatTag = a1->wFormatTag;
      v6 = 4 - (nChannels != 1);
      *(GUID *)&v29[8] = GUID_00000000_0000_0010_8000_00aa00389b71;
      *(_DWORD *)&v29[8] = wFormatTag;
    }
    *(_WORD *)v29 = 22;
    if ( a2->wFormatTag != 0xFFFE )
    {
      if ( a2->cbSize && ((a2->wFormatTag - 1) & 0xFFFD) != 0 )
        return v2;
      v22 = a2->nChannels;
      if ( (unsigned __int16)(v22 - 1) > 1u || ((a2->wBitsPerSample - 8) & 0xFFE7) != 0 )
        return v2;
      v23 = *(_OWORD *)&a2->wFormatTag;
      v24 = a2->wFormatTag;
      *(_WORD *)&v27[2] = a2->wBitsPerSample;
      Buf2 = v23;
      LOWORD(Buf2) = -2;
      *(GUID *)&v27[8] = GUID_00000000_0000_0010_8000_00aa00389b71;
      v9 = 4 - (v22 != 1);
      *(_DWORD *)&v27[8] = v24;
      goto LABEL_9;
    }
    if ( a2->cbSize == 22 )
      goto LABEL_8;
    v20 = *(_QWORD *)((char *)&a2[1].nSamplesPerSec + 2) - *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
    if ( !v20 )
      v20 = *(_QWORD *)&a2[1].wBitsPerSample - *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
    if ( !v20 )
      goto LABEL_8;
    v21 = *(_QWORD *)((char *)&a2[1].nSamplesPerSec + 2) - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
    if ( !v21 )
      v21 = *(_QWORD *)&a2[1].wBitsPerSample - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
    if ( !v21 )
    {
LABEL_8:
      v7 = *(_OWORD *)&a2->cbSize;
      Buf2 = *(_OWORD *)&a2->wFormatTag;
      v3 = Buf2;
      v8 = *(_QWORD *)&a2[1].wBitsPerSample;
      *(_OWORD *)v27 = v7;
      v9 = DWORD1(v7);
      *(_QWORD *)&v27[16] = v8;
LABEL_9:
      *(_WORD *)v27 = 22;
      if ( WORD1(Buf1) )
      {
        v10 = WORD1(Buf2);
      }
      else
      {
        v10 = 0;
        WORD1(Buf2) = 0;
        DWORD2(Buf2) = 0;
        WORD6(Buf2) = 0;
      }
      if ( DWORD1(Buf1) )
      {
        v11 = DWORD1(Buf2);
      }
      else
      {
        v11 = 0;
        *(_QWORD *)((char *)&Buf2 + 4) = 0LL;
      }
      if ( HIWORD(Buf1) )
      {
        v12 = HIWORD(Buf2);
      }
      else
      {
        v12 = 0;
        HIDWORD(Buf2) = 0;
      }
      *(_DWORD *)&v27[4] = v6 != 0 ? v9 : 0;
      if ( !v25 )
      {
        v3 = 0;
        LOWORD(Buf2) = 0;
      }
      if ( !v10 )
      {
        WORD1(Buf1) = 0;
        DWORD2(Buf1) = 0;
        WORD6(Buf1) = 0;
      }
      if ( !v11 )
        *(_QWORD *)((char *)&Buf1 + 4) = 0LL;
      if ( !v12 )
        HIDWORD(Buf1) = 0;
      *(_DWORD *)&v29[4] = (v6 != 0 ? v9 : 0) != 0 ? v6 : 0;
      if ( !v3 )
        LOWORD(Buf1) = 0;
      v13 = *(_QWORD *)&v29[8] - *(_QWORD *)&v27[8];
      if ( *(_QWORD *)&v29[8] == *(_QWORD *)&v27[8] )
        v13 = *(_QWORD *)&v29[16] - *(_QWORD *)&v27[16];
      if ( !v13 && !memcmp_0(&Buf1, &Buf2, 0x28uLL) )
        return 1;
    }
  }
  return v2;
}
