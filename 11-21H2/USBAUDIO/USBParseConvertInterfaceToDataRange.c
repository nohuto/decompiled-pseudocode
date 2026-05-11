/*
 * XREFs of USBParseConvertInterfaceToDataRange @ 0x1C0035F24
 * Callers:
 *     USBParseGetAudioStreamingDataranges @ 0x1C0036CB8 (USBParseGetAudioStreamingDataranges.c)
 * Callees:
 *     USBParseFindDescriptorInConfiguration @ 0x1C0036BDC (USBParseFindDescriptorInConfiguration.c)
 *     USBParseGetAudioSpecificInterface @ 0x1C0036C38 (USBParseGetAudioSpecificInterface.c)
 *     USBParseGetEndpointDescriptor @ 0x1C003711C (USBParseGetEndpointDescriptor.c)
 *     USBParseGetNextAudioInterface @ 0x1C0037A00 (USBParseGetNextAudioInterface.c)
 */

__int64 __fastcall USBParseConvertInterfaceToDataRange(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // esi
  unsigned __int8 *v7; // rbp
  unsigned int v8; // r14d
  unsigned __int8 *AudioSpecificInterface; // rax
  unsigned __int8 *v10; // r15
  __int64 DescriptorInConfiguration; // rax
  unsigned __int8 *v12; // rbx
  __int64 EndpointDescriptor; // rax
  __int64 v14; // r8
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  char v19; // al
  unsigned int v20; // ecx
  GUID v21; // xmm0
  unsigned int v22; // ecx
  unsigned int v23; // ecx
  unsigned int v24; // ecx
  int v25; // eax
  int v26; // ecx
  _DWORD *Pool2; // rax
  __int64 v28; // rdx
  __int64 v29; // r8
  unsigned __int8 *v30; // rbp
  unsigned int v31; // ecx
  int v33; // [rsp+70h] [rbp+18h]
  unsigned __int64 NextAudioInterface; // [rsp+78h] [rbp+20h]

  v3 = 0;
  v7 = 0LL;
  v8 = 0;
  AudioSpecificInterface = (unsigned __int8 *)USBParseGetAudioSpecificInterface(a1, a2, a3, 7LL);
  v10 = AudioSpecificInterface;
  if ( !AudioSpecificInterface )
    return v3;
  DescriptorInConfiguration = USBParseFindDescriptorInConfiguration(
                                a1,
                                &AudioSpecificInterface[*AudioSpecificInterface],
                                36LL);
  v12 = (unsigned __int8 *)DescriptorInConfiguration;
  if ( !DescriptorInConfiguration )
    return v3;
  *(_QWORD *)(a3 + 152) = DescriptorInConfiguration;
  *(_DWORD *)(a3 + 216) = *(unsigned __int16 *)(v10 + 5);
  *(_BYTE *)(a3 + 186) = v10[4];
  *(_QWORD *)(a3 + 136) = a2;
  *(_DWORD *)(a3 + 104) = *(unsigned __int8 *)(DescriptorInConfiguration + 6);
  EndpointDescriptor = USBParseGetEndpointDescriptor(a1, a2, 0LL);
  *(_QWORD *)(a3 + 168) = EndpointDescriptor;
  if ( !EndpointDescriptor )
    return (unsigned int)-1073741668;
  *(_DWORD *)(a3 + 220) = *(unsigned __int16 *)(EndpointDescriptor + 4);
  if ( (*(_BYTE *)(EndpointDescriptor + 3) & 0xC) == 4 )
  {
    v33 = *(_BYTE *)(EndpointDescriptor + 8) & 0xF;
    NextAudioInterface = USBParseGetNextAudioInterface(a1, a2);
    v15 = USBParseFindDescriptorInConfiguration(a1, *(_QWORD *)(a3 + 168) + **(unsigned __int8 **)(a3 + 168), 5LL);
    v16 = v15;
    if ( !v15 || (*(_BYTE *)(v15 + 2) & 0xF) != v33 || NextAudioInterface && v15 > NextAudioInterface )
      v16 = 0LL;
    *(_QWORD *)(a3 + 176) = v16;
  }
  LOBYTE(v14) = 1;
  v17 = USBParseGetEndpointDescriptor(a1, a2, v14);
  *(_QWORD *)(a3 + 160) = v17;
  v18 = v17;
  if ( !v17 )
    return (unsigned int)-1073741438;
  if ( *(char *)(*(_QWORD *)(a3 + 168) + 2LL) >= 0 )
  {
    v19 = *(_BYTE *)(v17 + 4);
    if ( v19 )
    {
      if ( *(_WORD *)(v18 + 5) && (*(_QWORD *)(a3 + 176) || (unsigned __int8)(v19 - 1) > 1u) )
        return (unsigned int)-1073741438;
    }
  }
  v20 = *(unsigned __int16 *)(v10 + 5);
  if ( v20 > 0x1001 )
  {
    v22 = v20 - 4098;
    if ( v22 )
    {
      v23 = v22 - 4095;
      if ( v23 )
      {
        v24 = v23 - 2;
        if ( v24 )
        {
          if ( v24 != 252 )
            return (unsigned int)-1073741198;
          v21 = (GUID)KSDATAFORMAT_SUBTYPE_WMA_SPDIF;
        }
        else
        {
          v21 = (GUID)KSDATAFORMAT_SUBTYPE_DOLBY_MP3_SPDIF;
        }
      }
      else
      {
        v21 = (GUID)KSDATAFORMAT_SUBTYPE_DOLBY_AC3_SPDIF;
      }
    }
    else
    {
      v21 = KSDATAFORMAT_SUBTYPE_AC3_AUDIO;
    }
  }
  else if ( v20 == 4097 )
  {
    v21 = (GUID)KSDATAFORMAT_SUBTYPE_MPEG;
  }
  else
  {
    if ( !*(_WORD *)(v10 + 5) )
      return (unsigned int)-1073741198;
    if ( v20 <= 2 )
    {
      v21 = KSDATAFORMAT_SUBTYPE_PCM;
    }
    else
    {
      switch ( v20 )
      {
        case 3u:
          v21 = KSDATAFORMAT_SUBTYPE_IEEE_FLOAT;
          break;
        case 4u:
          v21 = (GUID)KSDATAFORMAT_SUBTYPE_ALAW;
          break;
        case 5u:
          v21 = (GUID)KSDATAFORMAT_SUBTYPE_MULAW;
          break;
        default:
          return (unsigned int)-1073741198;
      }
    }
  }
  *(GUID *)(a3 + 32) = v21;
  *(_QWORD *)a3 = 88LL;
  *(_QWORD *)(a3 + 8) = 0LL;
  *(GUID *)(a3 + 16) = KSDATAFORMAT_TYPE_AUDIO;
  *(GUID *)(a3 + 48) = KSDATAFORMAT_SPECIFIER_WAVEFORMATEX;
  v25 = *(_WORD *)(v10 + 5) & 0xF000;
  if ( (*(_WORD *)(v10 + 5) & 0xF000) != 0 )
  {
    if ( v25 == 4096 )
    {
      *(_QWORD *)(a3 + 64) = 6LL;
      v7 = v12 + 9;
      *(_DWORD *)(a3 + 72) = 0;
      v8 = v12[8];
      goto LABEL_46;
    }
    if ( v25 != 0x2000 )
      goto LABEL_46;
    *(_DWORD *)(a3 + 64) = 2;
    *(_DWORD *)(a3 + 68) = 16;
    *(_DWORD *)(a3 + 72) = 16;
  }
  else
  {
    *(_DWORD *)(a3 + 64) = v12[4];
    *(_DWORD *)(a3 + 68) = 8 * v12[5];
    *(_DWORD *)(a3 + 72) = 8 * v12[5];
    *(_BYTE *)(a3 + 187) = v12[5];
  }
  v8 = v12[7];
  v7 = v12 + 8;
LABEL_46:
  v26 = *v7 + ((v7[1] + (v7[2] << 8)) << 8);
  *(_DWORD *)(a3 + 76) = v26;
  *(_DWORD *)(a3 + 80) = v26;
  *(_DWORD *)(a3 + 108) = v8;
  if ( v8 )
  {
    Pool2 = (_DWORD *)ExAllocatePool2(256LL, 4LL * v8, 1096972357LL);
    *(_QWORD *)(a3 + 120) = Pool2;
    if ( Pool2 )
    {
      *Pool2 = *(_DWORD *)(a3 + 76);
      if ( v8 > 1 )
      {
        v28 = 4LL;
        v29 = v8 - 1;
        v30 = v7 + 4;
        do
        {
          v31 = *(v30 - 1) + ((*v30 + (v30[1] << 8)) << 8);
          *(_DWORD *)(v28 + *(_QWORD *)(a3 + 120)) = v31;
          if ( v31 < *(_DWORD *)(a3 + 76) )
            *(_DWORD *)(a3 + 76) = v31;
          if ( v31 > *(_DWORD *)(a3 + 80) )
            *(_DWORD *)(a3 + 80) = v31;
          v30 += 3;
          v28 += 4LL;
          --v29;
        }
        while ( v29 );
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    *(_DWORD *)(a3 + 80) = v7[3] + ((v7[4] + (v7[5] << 8)) << 8);
  }
  return v3;
}
