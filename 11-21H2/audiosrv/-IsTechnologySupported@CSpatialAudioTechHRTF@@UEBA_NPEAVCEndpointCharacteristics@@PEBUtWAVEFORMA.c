/*
 * XREFs of ?IsTechnologySupported@CSpatialAudioTechHRTF@@UEBA_NPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@@1KPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x18004E4A0
 * Callers:
 *     ?IsTechnologySupported@CSpatialAudioDolbyStereo@@UEBA_NPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@@1KPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x1800530A0 (-IsTechnologySupported@CSpatialAudioDolbyStereo@@UEBA_NPEAVCEndpointCharacteristics@@PEBUtWAVEFO.c)
 *     ?IsTechnologySupported@CSpatialAudioDtsxHeadphones@@UEBA_NPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@@1KPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x1800532A0 (-IsTechnologySupported@CSpatialAudioDtsxHeadphones@@UEBA_NPEAVCEndpointCharacteristics@@PEBUtWAV.c)
 *     ?IsTechnologySupported@CSpatialAudioMSHRTF@@UEBA_NPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@@1KPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x1800533D0 (-IsTechnologySupported@CSpatialAudioMSHRTF@@UEBA_NPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATE.c)
 * Callees:
 *     ??A?$span@VCAudioSignalProcessingModeMap@@$0?0@gsl@@QEBAAEAVCAudioSignalProcessingModeMap@@_K@Z @ 0x18000ED54 (--A-$span@VCAudioSignalProcessingModeMap@@$0-0@gsl@@QEBAAEAVCAudioSignalProcessingModeMap@@_K@Z.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x18000F714 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ @ 0x180032E20 (-ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x1800492E4 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ?IsCompressedSpatialFormat@@YA_NPEBUtWAVEFORMATEX@@@Z @ 0x180054260 (-IsCompressedSpatialFormat@@YA_NPEBUtWAVEFORMATEX@@@Z.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     memcmp_0 @ 0x18006251D (memcmp_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800C5F24 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     FillHrtfDesiredFormat @ 0x18013F6EC (FillHrtfDesiredFormat.c)
 *     ?IsCompressedFormatSupported@CEndpointCharacteristics@@AEAA_NAEBU_GUID@@@Z @ 0x18014A3D4 (-IsCompressedFormatSupported@CEndpointCharacteristics@@AEAA_NAEBU_GUID@@@Z.c)
 *     ?IsFormatSupportedOnHostConnector@CEndpointCharacteristics@@QEAA_NPEBUWAVEFORMATEXTENSIBLE@@@Z @ 0x18014AE68 (-IsFormatSupportedOnHostConnector@CEndpointCharacteristics@@QEAA_NPEBUWAVEFORMATEXTENSIBLE@@@Z.c)
 */

_BOOL8 __fastcall CSpatialAudioTechHRTF::IsTechnologySupported(
        CSpatialAudioTechHRTF *this,
        SystemEffectDescriptor **a2,
        const struct tWAVEFORMATEX *a3,
        const struct tWAVEFORMATEX *a4,
        unsigned __int16 a5,
        unsigned int *a6,
        bool *a7,
        struct WAVEFORMATEXTENSIBLE *a8)
{
  DWORD *v8; // r12
  unsigned int v10; // r15d
  bool IsFormatSupportedOnHostConnector; // si
  unsigned int v13; // r13d
  __int64 v14; // rax
  unsigned int v16; // ecx
  __int64 v17; // rax
  DWORD nSamplesPerSec; // edx
  unsigned int v19; // r8d
  __int64 v20; // rax
  WORD wFormatTag; // r8
  WORD wBitsPerSample; // dx
  _WORD *v23; // rax
  DWORD v24; // edx
  int v25; // ecx
  char v26; // r11
  __int64 v27; // rax
  __int128 v28; // xmm7
  __int128 v29; // xmm0
  __int64 v30; // xmm8_8
  __int64 v31; // rax
  WORD v32; // bx
  __int64 v33; // rcx
  unsigned __int64 *v34; // rcx
  SystemEffectDescriptor *v35; // r11
  int v36; // edx
  int v37; // r8d
  _QWORD *v38; // rcx
  __int64 v39; // rax
  GUID v40; // xmm6
  SystemEffectDescriptor *v41; // rax
  int v42; // r8d
  int v43; // edx
  GUID *v44; // rax
  GUID v45; // xmm0
  __int64 v46; // r13
  __int64 v47; // rax
  __int64 v48; // r12
  SystemEffectDescriptor *v49; // rsi
  SystemEffectDescriptor *v50; // rdx
  _QWORD *v51; // rcx
  __int64 v52; // rax
  unsigned __int16 ***v53; // rdi
  unsigned __int16 ***v54; // r15
  unsigned __int16 *v55; // rcx
  DWORD dwChannelMask; // r10d
  __int16 v57; // r11
  int v58; // edx
  unsigned __int16 v59; // ax
  __int128 v60; // xmm1
  __int16 v61; // bx
  __int64 v62; // xmm0_8
  int v63; // r9d
  __int16 v64; // dx
  int v65; // ecx
  __int16 v66; // ax
  __int64 v67; // rax
  struct WAVEFORMATEXTENSIBLE *v68; // r15
  _BOOL8 result; // rax
  __int128 v70; // xmm0
  bool IsCompressedFormatSupported; // al
  __int64 v72; // r11
  __int64 v73; // r10
  __int64 v74; // rax
  __int64 v75; // r10
  int v76; // r8d
  __int64 v77; // rcx
  int v78; // r9d
  _QWORD *v79; // rdx
  __int64 v80; // rax
  GUID v81; // xmm0
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // rax
  __int64 v85; // rax
  unsigned __int16 v86; // r8
  __int128 v87; // xmm0
  bool v88; // al
  unsigned int i; // edi
  int *v90; // rbx
  char v91; // [rsp+30h] [rbp-D0h]
  int v92; // [rsp+34h] [rbp-CCh]
  int v93; // [rsp+38h] [rbp-C8h]
  DWORD *v94; // [rsp+40h] [rbp-C0h]
  PROPVARIANT pvar[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v96; // [rsp+58h] [rbp-A8h]
  struct WAVEFORMATEXTENSIBLE *v97; // [rsp+60h] [rbp-A0h]
  struct WAVEFORMATEXTENSIBLE v98; // [rsp+68h] [rbp-98h] BYREF
  GUID v99; // [rsp+90h] [rbp-70h]
  __int128 Buf2; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v101[24]; // [rsp+B0h] [rbp-50h]
  __int128 Buf1; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v103[24]; // [rsp+D8h] [rbp-28h]
  GUID v104; // [rsp+F0h] [rbp-10h] BYREF
  GUID v105; // [rsp+100h] [rbp+0h] BYREF
  int v106; // [rsp+110h] [rbp+10h] BYREF
  _DWORD v107[5]; // [rsp+114h] [rbp+14h] BYREF
  _DWORD v108[4]; // [rsp+128h] [rbp+28h] BYREF
  _DWORD v109[6]; // [rsp+138h] [rbp+38h] BYREF

  v8 = v108;
  v108[0] = 48000;
  v108[1] = 48000;
  v108[2] = 44100;
  v10 = 0;
  *a6 = 0;
  IsFormatSupportedOnHostConnector = 0;
  *(_QWORD *)v98.SubFormat.Data4 = 0LL;
  v13 = 4;
  *a7 = 0;
  v14 = *(_QWORD *)this;
  v97 = a8;
  memset(&v98, 0, 32);
  v108[3] = 32000;
  v109[0] = 96000;
  v109[1] = 96000;
  v109[2] = 48000;
  v109[3] = 44100;
  v109[4] = 32000;
  v94 = v108;
  v93 = 4;
  if ( (*(unsigned __int8 (__fastcall **)(CSpatialAudioTechHRTF *))(v14 + 80))(this) )
  {
    v8 = v109;
    v13 = 5;
    v94 = v109;
    v93 = 5;
  }
  v16 = 1;
  if ( a3 )
  {
    if ( a3->wFormatTag == 0xFFFE )
    {
      v17 = *(_QWORD *)((char *)&a3[1].nSamplesPerSec + 2) - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
      if ( !v17 )
        v17 = *(_QWORD *)&a3[1].wBitsPerSample - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
      if ( v17 )
        goto LABEL_11;
    }
    else if ( ((a3->wFormatTag - 1) & 0xFFFD) != 0 )
    {
      goto LABEL_11;
    }
    nSamplesPerSec = a3->nSamplesPerSec;
    v19 = 1;
    while ( v8[v19] != nSamplesPerSec )
    {
      if ( ++v19 >= v13 )
        goto LABEL_11;
    }
    *v8 = nSamplesPerSec;
  }
LABEL_11:
  v106 = 1048592;
  v107[0] = 1048592;
  v107[1] = 1572896;
  v107[2] = 1572888;
  v107[3] = 524296;
  if ( !a3 )
    goto LABEL_21;
  if ( a3->wFormatTag == 0xFFFE )
  {
    v20 = *(_QWORD *)((char *)&a3[1].nSamplesPerSec + 2) - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
    if ( !v20 )
      v20 = *(_QWORD *)&a3[1].wBitsPerSample - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
    if ( v20 )
      goto LABEL_21;
    wFormatTag = a3[1].wFormatTag;
    wBitsPerSample = a3->wBitsPerSample;
  }
  else
  {
    if ( ((a3->wFormatTag - 1) & 0xFFFD) != 0 )
      goto LABEL_21;
    wBitsPerSample = a3->wBitsPerSample;
    wFormatTag = wBitsPerSample;
  }
  v23 = (_WORD *)v107 + 1;
  while ( *(v23 - 1) != wBitsPerSample || *v23 != wFormatTag )
  {
    ++v16;
    v23 += 2;
    if ( v16 >= 5 )
      goto LABEL_21;
  }
  LOWORD(v106) = wBitsPerSample;
  HIWORD(v106) = wFormatTag;
LABEL_21:
  if ( !a4 )
    goto LABEL_177;
  v24 = a4->nSamplesPerSec;
  v25 = 0;
  while ( v24 != v8[v25] )
  {
    if ( ++v25 >= v13 )
      goto LABEL_177;
  }
  if ( a4->wFormatTag != 0xFFFE )
  {
    v91 = 0;
    if ( ((a4->wFormatTag - 1) & 0xFFFD) == 0 )
    {
      FillHrtfDesiredFormat(a4->nChannels, a4->wBitsPerSample, a4->wBitsPerSample, v24, (__int64)&v98);
      v30 = *(_QWORD *)v98.SubFormat.Data4;
      v28 = *(_OWORD *)&v98.Format.wFormatTag;
      goto LABEL_29;
    }
LABEL_177:
    for ( i = 0; i < v13; ++i )
    {
      if ( IsFormatSupportedOnHostConnector )
        break;
      v90 = &v106;
      do
      {
        if ( IsFormatSupportedOnHostConnector )
          break;
        FillHrtfDesiredFormat(a5, *(unsigned __int16 *)v90, *((unsigned __int16 *)v90 + 1), *v8, (__int64)&v98);
        IsFormatSupportedOnHostConnector = CEndpointCharacteristics::IsFormatSupportedOnHostConnector(
                                             (CEndpointCharacteristics *)a2,
                                             &v98);
        if ( !IsFormatSupportedOnHostConnector && v98.dwChannelMask == 1599 )
        {
          v98.dwChannelMask = 255;
          IsFormatSupportedOnHostConnector = CEndpointCharacteristics::IsFormatSupportedOnHostConnector(
                                               (CEndpointCharacteristics *)a2,
                                               &v98);
        }
        ++v10;
        ++v90;
      }
      while ( v10 < 5 );
      ++v8;
      v10 = 0;
    }
    v30 = *(_QWORD *)v98.SubFormat.Data4;
    v28 = *(_OWORD *)&v98.Format.wFormatTag;
    goto LABEL_101;
  }
  v26 = 1;
  v91 = 1;
  v27 = *(_QWORD *)((char *)&a4[1].nSamplesPerSec + 2) - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
  if ( !v27 )
    v27 = *(_QWORD *)&a4[1].wBitsPerSample - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
  if ( v27 )
    goto LABEL_177;
  v28 = *(_OWORD *)&a4->wFormatTag;
  v29 = *(_OWORD *)&a4->cbSize;
  v30 = *(_QWORD *)&a4[1].wBitsPerSample;
  *(_OWORD *)&v98.Format.wFormatTag = *(_OWORD *)&a4->wFormatTag;
  *(_OWORD *)&v98.Format.cbSize = v29;
  *(_QWORD *)v98.SubFormat.Data4 = v30;
LABEL_29:
  v31 = 0LL;
  v92 = 0;
  while ( 1 )
  {
    if ( IsFormatSupportedOnHostConnector )
      goto LABEL_101;
    v32 = v98.Format.wBitsPerSample;
    v33 = 2 * v31;
    if ( word_180181968[2 * v31] == v98.Format.wBitsPerSample
      && (!v26 || word_180181968[v33 + 1] == v98.Samples.wValidBitsPerSample) )
    {
      break;
    }
LABEL_97:
    v10 = 0;
    v31 = (unsigned int)(v92 + 1);
    v92 = v31;
    if ( (unsigned int)v31 >= 4 )
      goto LABEL_175;
  }
  v98.Samples.wValidBitsPerSample = word_180181968[v33 + 1];
  if ( IsCompressedSpatialFormat(&v98.Format) )
  {
    IsCompressedFormatSupported = CEndpointCharacteristics::IsCompressedFormatSupported(
                                    (CEndpointCharacteristics *)a2,
                                    &v98.SubFormat);
    v30 = *(_QWORD *)v98.SubFormat.Data4;
    IsFormatSupportedOnHostConnector = IsCompressedFormatSupported;
    v28 = *(_OWORD *)&v98.Format.wFormatTag;
    if ( IsCompressedFormatSupported )
    {
LABEL_96:
      v26 = v91;
      goto LABEL_97;
    }
LABEL_171:
    if ( v98.dwChannelMask == 1599 )
    {
      v98.dwChannelMask = 255;
      v88 = CEndpointCharacteristics::IsFormatSupportedOnHostConnector((CEndpointCharacteristics *)a2, &v98);
      v30 = *(_QWORD *)v98.SubFormat.Data4;
      IsFormatSupportedOnHostConnector = v88;
      v28 = *(_OWORD *)&v98.Format.wFormatTag;
    }
    goto LABEL_96;
  }
  if ( !*((_BYTE *)a2 + 9727) )
  {
    v34 = (unsigned __int64 *)a2[10];
    if ( v34 )
    {
      *(_OWORD *)pvar = 0LL;
      v96 = 0LL;
      if ( (*(int (__fastcall **)(unsigned __int64 *, const PROPERTYKEY *, PROPVARIANT *))(*v34 + 40))(
             v34,
             &PKEY_AudioEndpoint_Disable_SysFx,
             pvar) >= 0
        && LOWORD(pvar[0]) == 19
        && LODWORD(pvar[1]) )
      {
        PropVariantClear(pvar);
        v35 = (SystemEffectDescriptor *)(a2 + 21);
        goto LABEL_45;
      }
      PropVariantClear(pvar);
    }
  }
  if ( !a2[224] )
    goto LABEL_174;
  SystemEffectDescriptor::ResolveAllOverridingChains(a2[225]);
  if ( !a2[226] )
    goto LABEL_174;
  SystemEffectDescriptor::ResolveAllOverridingChains(a2[227]);
  if ( !a2[228] )
    goto LABEL_174;
  SystemEffectDescriptor::ResolveAllOverridingChains(a2[229]);
  if ( !a2[19] )
    goto LABEL_174;
  v35 = a2[20];
LABEL_45:
  v36 = *((_DWORD *)v35 + 2);
  if ( v36 )
  {
    v37 = 0;
    if ( v36 <= 0 )
      goto LABEL_117;
    while ( 1 )
    {
      v38 = (_QWORD *)(*(_QWORD *)v35 + 16LL * v37);
      v39 = *v38 - *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
      if ( *v38 == *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1 )
        v39 = v38[1] - *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
      if ( !v39 )
        break;
      if ( ++v37 >= v36 )
        goto LABEL_117;
    }
    if ( v37 == -1 )
    {
LABEL_117:
      if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                           (__int64 *)v35,
                           &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3) == -1 )
        v40 = *(GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v72, 0);
      else
        v40 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
    }
    else
    {
      v40 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    }
  }
  else
  {
    v40 = GUID_00000000_0000_0000_0000_000000000000;
  }
  v34 = (unsigned __int64 *)(a2 + 232);
  v99 = v40;
  if ( a2[232] )
  {
    v41 = a2[233];
    v42 = 0;
    v43 = *((_DWORD *)v41 + 4);
    if ( v43 <= 0 )
      goto LABEL_54;
    v73 = *(_QWORD *)v41;
    while ( 1 )
    {
      v74 = *(_QWORD *)(v73 + 16LL * v42) - *(_QWORD *)&v99.Data1;
      if ( !v74 )
        v74 = *(_QWORD *)(v73 + 16LL * v42 + 8) - *(_QWORD *)v99.Data4;
      if ( !v74 )
        break;
      if ( ++v42 >= v43 )
        goto LABEL_54;
    }
    if ( v42 == -1 )
    {
LABEL_54:
      v105 = v40;
      v44 = &v105;
    }
    else
    {
      v75 = gsl::span<CAudioSignalProcessingModeMap,-1>::operator[](v34, 0LL);
      v99 = v40;
      v76 = 0;
      v77 = 0LL;
      v78 = *(_DWORD *)(v75 + 16);
      if ( v78 <= 0 )
        goto LABEL_133;
      while ( 1 )
      {
        v79 = (_QWORD *)(*(_QWORD *)v75 + 16LL * v76);
        v80 = *v79 - *(_QWORD *)&v99.Data1;
        if ( *v79 == *(_QWORD *)&v99.Data1 )
          v80 = v79[1] - *(_QWORD *)v99.Data4;
        if ( !v80 )
          break;
        ++v76;
        ++v77;
        if ( v76 >= v78 )
          goto LABEL_133;
      }
      if ( v77 == -1 )
      {
LABEL_133:
        v81 = GUID_00000000_0000_0000_0000_000000000000;
      }
      else
      {
        if ( v77 < 0 || v76 >= v78 )
        {
          ATL::_AtlRaiseException(0xC000008C, (unsigned int)v79);
          __debugbreak();
        }
        v81 = *(GUID *)(*(_QWORD *)(v75 + 8) + 16 * v77);
      }
      v104 = v81;
      v44 = &v104;
    }
    v45 = *v44;
    v46 = *(_QWORD *)&v44->Data1;
    v47 = *(_QWORD *)&v44->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
    v99 = v45;
    v48 = *(_QWORD *)v45.Data4;
    if ( !v47 )
      v47 = *(_QWORD *)v45.Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
    if ( !v47 )
    {
      v99 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
      v48 = *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
      v46 = *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
    }
    v49 = a2[28];
    v50 = a2[29];
    if ( v49 != v50 )
    {
      while ( 1 )
      {
        v51 = *(_QWORD **)v49;
        v52 = **(_QWORD **)v49 - v46;
        if ( !v52 )
          v52 = v51[1] - v48;
        if ( !v52 )
        {
          v53 = (unsigned __int16 ***)v51[2];
          v54 = (unsigned __int16 ***)v51[3];
          if ( v53 != v54 )
            break;
        }
LABEL_169:
        v49 = (SystemEffectDescriptor *)((char *)v49 + 8);
        if ( v49 == v50 )
          goto LABEL_170;
      }
      while ( 1 )
      {
        v55 = **v53;
        if ( v55 )
        {
          if ( v98.Format.wFormatTag == 0xFFFE )
          {
            if ( v98.Format.cbSize != 22 )
            {
              v82 = *(_QWORD *)&v98.SubFormat.Data1 - *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
              if ( *(_QWORD *)&v98.SubFormat.Data1 == *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 )
                v82 = *(_QWORD *)v98.SubFormat.Data4 - *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
              if ( v82 )
              {
                v83 = *(_QWORD *)&v98.SubFormat.Data1 - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
                if ( *(_QWORD *)&v98.SubFormat.Data1 == *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 )
                  v83 = *(_QWORD *)v98.SubFormat.Data4 - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
                if ( v83 )
                  goto LABEL_167;
              }
            }
            *(_QWORD *)&v103[16] = v30;
            *(_OWORD *)v103 = *(_OWORD *)&v98.Format.cbSize;
            dwChannelMask = v98.dwChannelMask;
            Buf1 = v28;
            v57 = v28;
            *(_WORD *)v103 = 22;
          }
          else
          {
            if ( v98.Format.cbSize && ((v98.Format.wFormatTag - 1) & 0xFFFD) != 0
              || (unsigned __int16)(v98.Format.nChannels - 1) > 1u
              || ((v32 - 8) & 0xFFE7) != 0 )
            {
              goto LABEL_167;
            }
            v57 = -2;
            *(_WORD *)&v103[2] = v32;
            *(_WORD *)v103 = 22;
            Buf1 = v28;
            LOWORD(Buf1) = -2;
            dwChannelMask = (v98.Format.nChannels == 1) + 3;
            *(GUID *)&v103[8] = GUID_00000000_0000_0010_8000_00aa00389b71;
            *(_DWORD *)&v103[4] = dwChannelMask;
            *(_DWORD *)&v103[8] = v98.Format.wFormatTag;
          }
          v58 = *v55;
          v59 = v55[8];
          if ( (_WORD)v58 == 0xFFFE )
          {
            if ( v59 == 22 )
              goto LABEL_70;
            v84 = *((_QWORD *)v55 + 3) - *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
            if ( !v84 )
              v84 = *((_QWORD *)v55 + 4) - *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
            if ( !v84 )
              goto LABEL_70;
            v85 = *((_QWORD *)v55 + 3) - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
            if ( !v85 )
              v85 = *((_QWORD *)v55 + 4) - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
            if ( !v85 )
            {
LABEL_70:
              v60 = *((_OWORD *)v55 + 1);
              Buf2 = *(_OWORD *)v55;
              v61 = Buf2;
              v62 = *((_QWORD *)v55 + 4);
              *(_OWORD *)v101 = v60;
              *(_WORD *)v101 = 22;
              v63 = DWORD1(v60);
              *(_QWORD *)&v101[16] = v62;
LABEL_71:
              if ( WORD1(Buf1) )
              {
                v64 = WORD1(Buf2);
              }
              else
              {
                v64 = 0;
                DWORD2(Buf2) = 0;
                WORD1(Buf2) = 0;
                WORD6(Buf2) = 0;
              }
              if ( DWORD1(Buf1) )
              {
                v65 = DWORD1(Buf2);
              }
              else
              {
                v65 = 0;
                *(_QWORD *)((char *)&Buf2 + 4) = 0LL;
              }
              if ( HIWORD(Buf1) )
              {
                v66 = HIWORD(Buf2);
              }
              else
              {
                v66 = 0;
                HIDWORD(Buf2) = 0;
              }
              if ( !dwChannelMask )
              {
                v63 = 0;
                *(_DWORD *)&v101[4] = 0;
              }
              if ( !v57 )
              {
                v61 = 0;
                LOWORD(Buf2) = 0;
              }
              if ( !v64 )
              {
                WORD1(Buf1) = 0;
                DWORD2(Buf1) = 0;
                WORD6(Buf1) = 0;
              }
              if ( !v65 )
                *(_QWORD *)((char *)&Buf1 + 4) = 0LL;
              if ( !v66 )
                HIDWORD(Buf1) = 0;
              if ( !v63 )
                *(_DWORD *)&v103[4] = 0;
              if ( !v61 )
                LOWORD(Buf1) = 0;
              v67 = *(_QWORD *)&v103[8] - *(_QWORD *)&v101[8];
              if ( *(_QWORD *)&v103[8] == *(_QWORD *)&v101[8] )
                v67 = *(_QWORD *)&v103[16] - *(_QWORD *)&v101[16];
              if ( !v67 && !memcmp_0(&Buf1, &Buf2, 0x28uLL) )
              {
                IsFormatSupportedOnHostConnector = 1;
                goto LABEL_96;
              }
              v32 = v98.Format.wBitsPerSample;
            }
          }
          else if ( !v59 || (((_WORD)v58 - 1) & 0xFFFD) == 0 )
          {
            v86 = v55[1];
            if ( (unsigned __int16)(v86 - 1) <= 1u )
            {
              v48 = *(_QWORD *)v99.Data4;
              if ( ((v55[7] - 8) & 0xFFE7) == 0 )
              {
                v87 = *(_OWORD *)v55;
                *(_WORD *)&v101[2] = v55[7];
                v61 = -2;
                Buf2 = v87;
                LOWORD(Buf2) = -2;
                *(_WORD *)v101 = 22;
                *(GUID *)&v101[8] = GUID_00000000_0000_0010_8000_00aa00389b71;
                *(_DWORD *)&v101[8] = v58;
                v63 = (v86 == 1) + 3;
                *(_DWORD *)&v101[4] = v63;
                goto LABEL_71;
              }
            }
          }
        }
LABEL_167:
        if ( ++v53 == v54 )
        {
          v50 = a2[29];
          goto LABEL_169;
        }
      }
    }
LABEL_170:
    IsFormatSupportedOnHostConnector = 0;
    goto LABEL_171;
  }
LABEL_174:
  _o_terminate(v34);
  __debugbreak();
LABEL_175:
  if ( !IsFormatSupportedOnHostConnector )
  {
    v8 = v94;
    v13 = v93;
    goto LABEL_177;
  }
LABEL_101:
  v68 = v97;
  result = IsFormatSupportedOnHostConnector;
  v70 = *(_OWORD *)&v98.Format.cbSize;
  *(_OWORD *)&v97->Format.wFormatTag = v28;
  *(_OWORD *)&v68->Format.cbSize = v70;
  *(_QWORD *)v68->SubFormat.Data4 = v30;
  return result;
}
