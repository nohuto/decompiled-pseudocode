/*
 * XREFs of ?IsTechnologySupported@CSpatialAudioTechHRTF@@UEBA_NPEAVEffectPack@@PEBUtWAVEFORMATEX@@1KPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x1800322F0
 * Callers:
 *     ?IsTechnologySupported@CSpatialAudioDolbyStereo@@UEBA_NPEAVEffectPack@@PEBUtWAVEFORMATEX@@1KPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x18001F750 (-IsTechnologySupported@CSpatialAudioDolbyStereo@@UEBA_NPEAVEffectPack@@PEBUtWAVEFORMATEX@@1KPEAI.c)
 *     ?IsTechnologySupported@CSpatialAudioDtsxHeadphones@@UEBA_NPEAVEffectPack@@PEBUtWAVEFORMATEX@@1KPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x18001F950 (-IsTechnologySupported@CSpatialAudioDtsxHeadphones@@UEBA_NPEAVEffectPack@@PEBUtWAVEFORMATEX@@1KP.c)
 *     ?IsTechnologySupported@CSpatialAudioMSHRTF@@UEBA_NPEAVEffectPack@@PEBUtWAVEFORMATEX@@1KPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x18001FA40 (-IsTechnologySupported@CSpatialAudioMSHRTF@@UEBA_NPEAVEffectPack@@PEBUtWAVEFORMATEX@@1KPEAIPEA_N.c)
 * Callees:
 *     ?IsFormatSupportedOnHostConnector@EffectPack@@QEAA_NPEBUWAVEFORMATEXTENSIBLE@@@Z @ 0x180004928 (-IsFormatSupportedOnHostConnector@EffectPack@@QEAA_NPEBUWAVEFORMATEXTENSIBLE@@@Z.c)
 *     FillHrtfDesiredFormat @ 0x180005004 (FillHrtfDesiredFormat.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x18002D110 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x18002EC18 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x180031990 (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     ?IsCompressedSpatialFormat@@YA_NPEBUtWAVEFORMATEX@@@Z @ 0x1800321B8 (-IsCompressedSpatialFormat@@YA_NPEBUtWAVEFORMATEX@@@Z.c)
 *     ?ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ @ 0x180033E70 (-ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ.c)
 *     ?Lookup@CAudioSignalProcessingModeMap@@QEAA?AU_GUID@@U2@@Z @ 0x180054774 (-Lookup@CAudioSignalProcessingModeMap@@QEAA-AU_GUID@@U2@@Z.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsCompressedFormatSupported@EffectPack@@AEAA_NAEBU_GUID@@@Z @ 0x18014D2FC (-IsCompressedFormatSupported@EffectPack@@AEAA_NAEBU_GUID@@@Z.c)
 */

__int64 __fastcall CSpatialAudioTechHRTF::IsTechnologySupported(
        CSpatialAudioTechHRTF *this,
        struct EffectPack *a2,
        const struct tWAVEFORMATEX *a3,
        const struct tWAVEFORMATEX *a4,
        __int16 a5,
        unsigned int *a6,
        bool *a7,
        struct WAVEFORMATEXTENSIBLE *a8)
{
  int *v8; // r13
  unsigned __int64 v9; // r12
  const struct tWAVEFORMATEX *v11; // r14
  __int64 v14; // rax
  unsigned int v15; // r11d
  const struct tWAVEFORMATEX *v16; // r15
  __int64 v17; // rax
  DWORD nSamplesPerSec; // ecx
  unsigned int v19; // edx
  __int64 v20; // rax
  WORD wBitsPerSample; // dx
  WORD wFormatTag; // r8
  unsigned int v23; // ecx
  _WORD *v24; // rax
  DWORD v25; // r9d
  __int64 v26; // rcx
  WORD v27; // ax
  bool IsFormatSupportedOnHostConnector; // r11
  __int64 v29; // rax
  __int128 v30; // xmm1
  __int64 v31; // rcx
  _QWORD *v32; // rcx
  __int64 v33; // rax
  char *v34; // r11
  int v35; // edx
  int v36; // r8d
  __int64 v37; // rax
  GUID v38; // xmm0
  CAudioSignalProcessingModeMap *v39; // rcx
  int v40; // edx
  int v41; // eax
  struct _GUID *v42; // rax
  _QWORD *v43; // rcx
  __int64 v44; // rax
  __int64 result; // rax
  __int128 v46; // xmm1
  __int64 v47; // xmm0_8
  __int64 v48; // r11
  _QWORD *v49; // r9
  __int64 v50; // r8
  unsigned int v51; // [rsp+30h] [rbp-D0h]
  int *v52; // [rsp+38h] [rbp-C8h]
  PROPVARIANT pvar[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v54; // [rsp+58h] [rbp-A8h]
  struct WAVEFORMATEXTENSIBLE v55; // [rsp+60h] [rbp-A0h] BYREF
  struct _GUID v56; // [rsp+90h] [rbp-70h] BYREF
  GUID v57; // [rsp+A0h] [rbp-60h] BYREF
  struct _GUID v58; // [rsp+B0h] [rbp-50h] BYREF
  int v59; // [rsp+C0h] [rbp-40h] BYREF
  _DWORD v60[5]; // [rsp+C4h] [rbp-3Ch] BYREF
  _DWORD v61[4]; // [rsp+D8h] [rbp-28h] BYREF
  _DWORD v62[6]; // [rsp+E8h] [rbp-18h] BYREF

  v8 = v61;
  v9 = (unsigned __int64)a8;
  v61[0] = 48000;
  LOBYTE(v11) = 0;
  *a6 = 0;
  v61[1] = 48000;
  *(_QWORD *)v55.SubFormat.Data4 = 0LL;
  *a7 = 0;
  v14 = *(_QWORD *)this;
  memset(&v55, 0, 32);
  v61[2] = 44100;
  v61[3] = 32000;
  v62[0] = 96000;
  v62[1] = 96000;
  v62[2] = 48000;
  v62[3] = 44100;
  v62[4] = 32000;
  v52 = v61;
  v51 = 4;
  if ( (*(unsigned __int8 (__fastcall **)(CSpatialAudioTechHRTF *))(v14 + 80))(this) )
  {
    v8 = v62;
    v15 = 5;
    v52 = v62;
    v51 = 5;
  }
  else
  {
    v15 = 4;
  }
  LODWORD(v16) = *(_DWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
  if ( !a3 )
    goto LABEL_11;
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
    if ( ++v19 >= v15 )
      goto LABEL_11;
  }
  *v8 = nSamplesPerSec;
LABEL_11:
  v59 = 1048592;
  v60[0] = 1048592;
  v60[1] = 1572896;
  v60[2] = 1572888;
  v60[3] = 524296;
  if ( !a3 )
    goto LABEL_21;
  if ( a3->wFormatTag == 0xFFFE )
  {
    v20 = *(_QWORD *)((char *)&a3[1].nSamplesPerSec + 2) - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
    if ( !v20 )
      v20 = *(_QWORD *)&a3[1].wBitsPerSample - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
    if ( v20 )
      goto LABEL_21;
    wBitsPerSample = a3->wBitsPerSample;
    wFormatTag = a3[1].wFormatTag;
  }
  else
  {
    if ( ((a3->wFormatTag - 1) & 0xFFFD) != 0 )
      goto LABEL_21;
    wBitsPerSample = a3->wBitsPerSample;
    wFormatTag = wBitsPerSample;
  }
  v23 = 1;
  v24 = (_WORD *)v60 + 1;
  while ( *(v24 - 1) != wBitsPerSample || *v24 != wFormatTag )
  {
    ++v23;
    v24 += 2;
    if ( v23 >= 5 )
      goto LABEL_21;
  }
  LOWORD(v59) = wBitsPerSample;
  HIWORD(v59) = wFormatTag;
LABEL_21:
  if ( a4 )
  {
    v25 = a4->nSamplesPerSec;
    v26 = 0LL;
    while ( v25 != v8[v26] )
    {
      v26 = (unsigned int)(v26 + 1);
      if ( (unsigned int)v26 >= v15 )
        goto LABEL_72;
    }
    v27 = a4->wFormatTag;
    IsFormatSupportedOnHostConnector = 0;
    if ( a4->wFormatTag == 0xFFFE )
    {
      LOBYTE(v8) = 1;
      v29 = *(_QWORD *)((char *)&a4[1].nSamplesPerSec + 2) - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
      if ( !v29 )
        v29 = *(_QWORD *)&a4[1].wBitsPerSample - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
      if ( !v29 )
      {
        v30 = *(_OWORD *)&a4->cbSize;
        *(_OWORD *)&v55.Format.wFormatTag = *(_OWORD *)&a4->wFormatTag;
        *(_QWORD *)v55.SubFormat.Data4 = *(_QWORD *)&a4[1].wBitsPerSample;
        *(_OWORD *)&v55.Format.cbSize = v30;
LABEL_29:
        v9 = 0LL;
        while ( 1 )
        {
          if ( IsFormatSupportedOnHostConnector )
          {
LABEL_64:
            v9 = (unsigned __int64)a8;
            LOBYTE(v11) = IsFormatSupportedOnHostConnector;
            if ( IsFormatSupportedOnHostConnector )
              goto LABEL_65;
            break;
          }
          v31 = 2 * v9;
          if ( word_180187DF8[2 * v9] == v55.Format.wBitsPerSample
            && (!(_BYTE)v8 || word_180187DF8[v31 + 1] == v55.Samples.wValidBitsPerSample) )
          {
            v55.Samples.wValidBitsPerSample = word_180187DF8[v31 + 1];
            if ( !IsCompressedSpatialFormat(&v55.Format) )
            {
              v33 = *((_QWORD *)a2 + 161);
              if ( *(_BYTE *)(v33 + 8235) )
                goto LABEL_113;
              v32 = *(_QWORD **)(v33 + 80);
              LODWORD(a3) = 1;
              if ( !v32 )
                goto LABEL_113;
              *(_OWORD *)pvar = 0LL;
              v54 = 0LL;
              if ( (*(int (__fastcall **)(_QWORD *, const PROPERTYKEY *, PROPVARIANT *))(*v32 + 40LL))(
                     v32,
                     &PKEY_AudioEndpoint_Disable_SysFx,
                     pvar) >= 0
                && LOWORD(pvar[0]) == 19 )
              {
                LODWORD(a3) = LODWORD(pvar[1]) == 0;
              }
              PropVariantClear(pvar);
              if ( (_DWORD)a3 )
              {
LABEL_113:
                if ( !*((_QWORD *)a2 + 144) )
                  goto LABEL_108;
                SystemEffectDescriptor::ResolveAllOverridingChains(*((SystemEffectDescriptor **)a2 + 145));
                if ( !*((_QWORD *)a2 + 146) )
                  goto LABEL_108;
                SystemEffectDescriptor::ResolveAllOverridingChains(*((SystemEffectDescriptor **)a2 + 147));
                if ( !*((_QWORD *)a2 + 148) )
                  goto LABEL_108;
                SystemEffectDescriptor::ResolveAllOverridingChains(*((SystemEffectDescriptor **)a2 + 149));
                if ( !*((_QWORD *)a2 + 174) )
                  goto LABEL_108;
                v34 = (char *)*((_QWORD *)a2 + 175);
              }
              else
              {
                v34 = (char *)a2 + 1632;
              }
              v35 = *((_DWORD *)v34 + 2);
              if ( v35 )
              {
                v36 = 0;
                if ( v35 <= 0 )
                  goto LABEL_92;
                while ( 1 )
                {
                  v32 = (_QWORD *)(*(_QWORD *)v34 + 16LL * v36);
                  v37 = *v32 - *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
                  if ( *v32 == *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1 )
                    v37 = v32[1] - *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
                  if ( !v37 )
                    break;
                  if ( ++v36 >= v35 )
                    goto LABEL_92;
                }
                if ( v36 == -1 )
                {
LABEL_92:
                  if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                                       (__int64 *)v34,
                                       &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3) == -1 )
                    v38 = *(GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v48, 0);
                  else
                    v38 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
                }
                else
                {
                  v38 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
                }
              }
              else
              {
                v38 = GUID_00000000_0000_0000_0000_000000000000;
              }
              if ( !*((_QWORD *)a2 + 192) )
              {
LABEL_108:
                _o_terminate(v32);
                __debugbreak();
                goto LABEL_109;
              }
              v39 = (CAudioSignalProcessingModeMap *)*((_QWORD *)a2 + 193);
              v40 = 0;
              a3 = (const struct tWAVEFORMATEX *)*((_QWORD *)a2 + 161);
              v56 = v38;
              v41 = *((_DWORD *)v39 + 4);
              if ( v41 <= 0 )
                goto LABEL_55;
              while ( 1 )
              {
                v49 = (_QWORD *)(*(_QWORD *)v39 + 16LL * v40);
                v50 = *v49 - *(_QWORD *)&v56.Data1;
                if ( *v49 == *(_QWORD *)&v56.Data1 )
                  v50 = v49[1] - *(_QWORD *)v56.Data4;
                if ( !v50 )
                  break;
                if ( ++v40 >= v41 )
                  goto LABEL_55;
              }
              if ( v40 == -1 )
              {
LABEL_55:
                v57 = v38;
                v42 = &v57;
              }
              else
              {
                v56 = v38;
                v42 = CAudioSignalProcessingModeMap::Lookup(v39, &v58, &v56);
              }
              a4 = *(const struct tWAVEFORMATEX **)((char *)&a3[13].nSamplesPerSec + 2);
              v16 = *(const struct tWAVEFORMATEX **)&a3[13].wBitsPerSample;
              v56 = *v42;
              if ( a4 != v16 )
              {
                while ( 1 )
                {
                  v43 = *(_QWORD **)&a4->wFormatTag;
                  v44 = **(_QWORD **)&a4->wFormatTag - *(_QWORD *)&v56.Data1;
                  if ( !v44 )
                    v44 = v43[1] - *(_QWORD *)v56.Data4;
                  if ( !v44 )
                  {
                    a3 = (const struct tWAVEFORMATEX *)v43[2];
                    v11 = (const struct tWAVEFORMATEX *)v43[3];
                    if ( a3 != v11 )
                      break;
                  }
LABEL_104:
                  a4 = (const struct tWAVEFORMATEX *)((char *)a4 + 8);
                  if ( a4 == v16 )
                    goto LABEL_105;
                }
                while ( !(unsigned int)CompareWaveFormat(&v55.Format, **(const struct tWAVEFORMATEX ***)&a3->wFormatTag) )
                {
                  a3 = (const struct tWAVEFORMATEX *)((char *)a3 + 8);
                  if ( a3 == v11 )
                    goto LABEL_104;
                }
                IsFormatSupportedOnHostConnector = 1;
                goto LABEL_63;
              }
LABEL_105:
              IsFormatSupportedOnHostConnector = 0;
LABEL_106:
              if ( v55.dwChannelMask == 1599 )
              {
                v55.dwChannelMask = 255;
                IsFormatSupportedOnHostConnector = EffectPack::IsFormatSupportedOnHostConnector(a2, &v55);
              }
              goto LABEL_63;
            }
            IsFormatSupportedOnHostConnector = EffectPack::IsCompressedFormatSupported(a2, &v55.SubFormat);
            if ( !IsFormatSupportedOnHostConnector )
              goto LABEL_106;
          }
LABEL_63:
          v9 = (unsigned int)(v9 + 1);
          if ( (unsigned int)v9 >= 4 )
            goto LABEL_64;
        }
      }
    }
    else
    {
      LOBYTE(v8) = 0;
      if ( v27 == 1 || v27 == 3 )
      {
        FillHrtfDesiredFormat(a4->nChannels, a4->wBitsPerSample, a4->wBitsPerSample, v25, (__int64)&v55);
        goto LABEL_29;
      }
    }
  }
LABEL_72:
  v8 = v52;
  LODWORD(a3) = 0;
  do
  {
    if ( (_BYTE)v11 )
      break;
    LODWORD(v16) = 0;
    a4 = (const struct tWAVEFORMATEX *)&v59;
    do
    {
      if ( (_BYTE)v11 )
        break;
      FillHrtfDesiredFormat(a5, a4->wFormatTag, a4->nChannels, *v8, (__int64)&v55);
      LOBYTE(v11) = EffectPack::IsFormatSupportedOnHostConnector(a2, &v55);
      if ( !(_BYTE)v11 )
      {
LABEL_109:
        if ( v55.dwChannelMask == 1599 )
        {
          v55.dwChannelMask = 255;
          LOBYTE(v11) = EffectPack::IsFormatSupportedOnHostConnector(a2, &v55);
        }
      }
      LODWORD(v16) = (_DWORD)v16 + 1;
      a4 = (const struct tWAVEFORMATEX *)((char *)a4 + 4);
    }
    while ( (unsigned int)v16 < 5 );
    LODWORD(a3) = (_DWORD)a3 + 1;
    ++v8;
  }
  while ( (unsigned int)a3 < v51 );
LABEL_65:
  result = (unsigned __int8)v11;
  v46 = *(_OWORD *)&v55.Format.cbSize;
  *(_OWORD *)v9 = *(_OWORD *)&v55.Format.wFormatTag;
  v47 = *(_QWORD *)v55.SubFormat.Data4;
  *(_OWORD *)(v9 + 16) = v46;
  *(_QWORD *)(v9 + 32) = v47;
  return result;
}
