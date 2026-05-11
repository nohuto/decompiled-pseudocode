/*
 * XREFs of USBParseConvertInterfaceToDataRange @ 0x1C0033AE8
 * Callers:
 *     USBParseGetAudioStreamingDataranges @ 0x1C0034858 (USBParseGetAudioStreamingDataranges.c)
 * Callees:
 *     IsAudioStreamValid @ 0x1C000A788 (IsAudioStreamValid.c)
 *     USBParseGetNextAudioInterface @ 0x1C002A2E0 (USBParseGetNextAudioInterface.c)
 *     USBParseGetAudioSpecificInterface @ 0x1C00347D8 (USBParseGetAudioSpecificInterface.c)
 *     USBParseGetEndpointDescriptor @ 0x1C0038C0C (USBParseGetEndpointDescriptor.c)
 *     USBParseFindDescriptorInConfiguration @ 0x1C0038C80 (USBParseFindDescriptorInConfiguration.c)
 */

__int64 __fastcall USBParseConvertInterfaceToDataRange(
        struct _USB_CONFIGURATION_DESCRIPTOR *a1,
        unsigned __int8 *a2,
        __int64 a3)
{
  unsigned int v3; // esi
  unsigned __int8 *AudioSpecificInterface; // rax
  unsigned __int8 *v8; // rbp
  __int64 DescriptorInConfiguration; // rax
  unsigned __int8 *v10; // rbx
  __int64 EndpointDescriptor; // rax
  __int64 v12; // r8
  int v13; // r13d
  PUSB_INTERFACE_DESCRIPTOR NextAudioInterface; // r12
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  char v19; // al
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  unsigned int v23; // ecx
  unsigned int v24; // ecx
  GUID v25; // xmm0
  unsigned int v26; // ecx
  unsigned int v27; // ecx
  unsigned int v28; // ecx
  unsigned __int64 v29; // rcx
  int v30; // eax
  bool v31; // cf
  unsigned __int64 v32; // rcx
  unsigned __int8 v33; // al
  unsigned int v34; // ebx
  unsigned __int8 *v35; // rbp
  int v37; // ecx
  _DWORD *Pool2; // rax
  __int64 v39; // rdx
  __int64 v40; // r8
  unsigned __int8 *v41; // rbp
  unsigned int v42; // ecx

  v3 = 0;
  AudioSpecificInterface = (unsigned __int8 *)USBParseGetAudioSpecificInterface(a1, a2, a3, 7LL);
  v8 = AudioSpecificInterface;
  if ( !AudioSpecificInterface )
    return v3;
  DescriptorInConfiguration = USBParseFindDescriptorInConfiguration(
                                a1,
                                &AudioSpecificInterface[*AudioSpecificInterface],
                                36LL,
                                8LL);
  v10 = (unsigned __int8 *)DescriptorInConfiguration;
  if ( !DescriptorInConfiguration )
    return v3;
  *(_QWORD *)(a3 + 152) = DescriptorInConfiguration;
  *(_DWORD *)(a3 + 216) = *(unsigned __int16 *)(v8 + 5);
  *(_BYTE *)(a3 + 186) = v8[4];
  *(_QWORD *)(a3 + 136) = a2;
  *(_DWORD *)(a3 + 104) = *(unsigned __int8 *)(DescriptorInConfiguration + 6);
  EndpointDescriptor = USBParseGetEndpointDescriptor(a1, a2, 0LL);
  *(_QWORD *)(a3 + 168) = EndpointDescriptor;
  if ( !EndpointDescriptor )
    return (unsigned int)-1073741668;
  *(_DWORD *)(a3 + 220) = *(unsigned __int16 *)(EndpointDescriptor + 4);
  if ( (*(_BYTE *)(EndpointDescriptor + 3) & 0xC) == 4 )
  {
    v13 = *(_BYTE *)(EndpointDescriptor + 8) & 0xF;
    NextAudioInterface = USBParseGetNextAudioInterface(a1, a2);
    v15 = USBParseFindDescriptorInConfiguration(a1, *(_QWORD *)(a3 + 168) + **(unsigned __int8 **)(a3 + 168), 5LL, 7LL);
    v16 = v15;
    if ( !v15 || (*(_BYTE *)(v15 + 2) & 0xF) != v13 || NextAudioInterface && v15 > (unsigned __int64)NextAudioInterface )
      v16 = 0LL;
    *(_QWORD *)(a3 + 176) = v16;
  }
  LOBYTE(v12) = 1;
  v17 = USBParseGetEndpointDescriptor(a1, a2, v12);
  *(_QWORD *)(a3 + 160) = v17;
  v18 = v17;
  if ( v17 )
  {
    if ( *(char *)(*(_QWORD *)(a3 + 168) + 2LL) < 0
      || (v19 = *(_BYTE *)(v17 + 4)) == 0
      || !*(_WORD *)(v18 + 5)
      || !*(_QWORD *)(a3 + 176) && (unsigned __int8)(v19 - 1) <= 1u )
    {
      v20 = *(unsigned __int16 *)(v8 + 5);
      if ( v20 > 0x1001 )
      {
        v26 = v20 - 4098;
        if ( v26 )
        {
          v27 = v26 - 4095;
          if ( v27 )
          {
            v28 = v27 - 2;
            if ( v28 )
            {
              if ( v28 != 252 )
                return (unsigned int)-1073741198;
              v25 = (GUID)KSDATAFORMAT_SUBTYPE_WMA_SPDIF;
            }
            else
            {
              v25 = (GUID)KSDATAFORMAT_SUBTYPE_DOLBY_MP3_SPDIF;
            }
          }
          else
          {
            v25 = (GUID)KSDATAFORMAT_SUBTYPE_DOLBY_AC3_SPDIF;
          }
        }
        else
        {
          v25 = KSDATAFORMAT_SUBTYPE_AC3_AUDIO;
        }
      }
      else if ( v20 == 4097 )
      {
        v25 = (GUID)KSDATAFORMAT_SUBTYPE_MPEG;
      }
      else
      {
        v21 = v20 - 1;
        if ( v21 && (v22 = v21 - 1) != 0 )
        {
          v23 = v22 - 1;
          if ( v23 )
          {
            v24 = v23 - 1;
            if ( v24 )
            {
              if ( v24 == 1 )
              {
                v25 = (GUID)KSDATAFORMAT_SUBTYPE_MULAW;
                goto LABEL_39;
              }
              return (unsigned int)-1073741198;
            }
            v25 = (GUID)KSDATAFORMAT_SUBTYPE_ALAW;
          }
          else
          {
            v25 = KSDATAFORMAT_SUBTYPE_IEEE_FLOAT;
          }
        }
        else
        {
          v25 = KSDATAFORMAT_SUBTYPE_PCM;
        }
      }
LABEL_39:
      *(GUID *)(a3 + 32) = v25;
      *(_QWORD *)a3 = 88LL;
      *(_QWORD *)(a3 + 8) = 0LL;
      *(GUID *)(a3 + 16) = KSDATAFORMAT_TYPE_AUDIO;
      *(GUID *)(a3 + 48) = KSDATAFORMAT_SPECIFIER_WAVEFORMATEX;
      v29 = (unsigned __int64)a1 + a1->wTotalLength;
      v30 = *(_WORD *)(v8 + 5) & 0xF000;
      if ( v30 )
      {
        if ( v30 == 4096 )
        {
          *(_QWORD *)(a3 + 64) = 6LL;
          *(_DWORD *)(a3 + 72) = 0;
          v31 = IsAudioStreamValid((__int64)v10, *v10, 9uLL, *(_WORD *)(v8 + 5) & 0xF000, v29);
          v32 = (unsigned __int64)(v10 + 9);
          v33 = v10[8];
          goto LABEL_46;
        }
        if ( v30 != 0x2000 )
          return 3221225628LL;
        *(_DWORD *)(a3 + 64) = 2;
        *(_DWORD *)(a3 + 68) = 16;
        *(_DWORD *)(a3 + 72) = 16;
      }
      else
      {
        *(_DWORD *)(a3 + 64) = v10[4];
        *(_DWORD *)(a3 + 68) = 8 * v10[5];
        *(_DWORD *)(a3 + 72) = 8 * v10[5];
        *(_BYTE *)(a3 + 187) = v10[5];
      }
      v31 = IsAudioStreamValid((__int64)v10, *v10, 8uLL, *(_WORD *)(v8 + 5) & 0xF000, v29);
      v32 = (unsigned __int64)(v10 + 8);
      v33 = v10[7];
LABEL_46:
      v34 = v33;
      v35 = (unsigned __int8 *)(v32 & -(__int64)v31);
      if ( v35 )
      {
        v37 = *(unsigned __int8 *)(v32 & -(__int64)v31)
            + ((*(unsigned __int8 *)((v32 & -(__int64)v31) + 1) + (*(unsigned __int8 *)((v32 & -(__int64)v31) + 2) << 8)) << 8);
        *(_DWORD *)(a3 + 76) = v37;
        *(_DWORD *)(a3 + 80) = v37;
        *(_DWORD *)(a3 + 108) = v33;
        if ( v33 )
        {
          Pool2 = (_DWORD *)ExAllocatePool2(256LL, 4LL * v33, 1096972357LL);
          *(_QWORD *)(a3 + 120) = Pool2;
          if ( Pool2 )
          {
            *Pool2 = *(_DWORD *)(a3 + 76);
            if ( v34 > 1 )
            {
              v39 = 4LL;
              v40 = v34 - 1;
              v41 = v35 + 4;
              do
              {
                v42 = *(v41 - 1) + ((*v41 + (v41[1] << 8)) << 8);
                *(_DWORD *)(v39 + *(_QWORD *)(a3 + 120)) = v42;
                if ( v42 < *(_DWORD *)(a3 + 76) )
                  *(_DWORD *)(a3 + 76) = v42;
                if ( v42 > *(_DWORD *)(a3 + 80) )
                  *(_DWORD *)(a3 + 80) = v42;
                v41 += 3;
                v39 += 4LL;
                --v40;
              }
              while ( v40 );
            }
          }
          else
          {
            return (unsigned int)-1073741670;
          }
        }
        else
        {
          *(_DWORD *)(a3 + 80) = v35[3] + ((v35[4] + (v35[5] << 8)) << 8);
        }
        return v3;
      }
      return 3221225628LL;
    }
  }
  return (unsigned int)-1073741438;
}
