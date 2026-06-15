/*
 * XREFs of CEndpointCharacteristics::ForEachCandidateFormatForMode__lambda_0271267fe4b1063fcc66a341b5120ffb___ @ 0x1801402A0
 * Callers:
 *     ?DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@IPEATKSDATAFORMAT@@PEAUPacketSizeConstraints@@_N_JAEAV?$vector@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@2@@std@@PEAVCUnsupportedConnectorFormats@@@Z @ 0x180147248 (-DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_i.c)
 * Callees:
 *     ?GetProposedConnectorFormatForProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18002C580 (-GetProposedConnectorFormatForProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_.c)
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x18002E730 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?HasHardwareAudioEngine@CEndpointCharacteristics@@QEAAHXZ @ 0x180046328 (-HasHardwareAudioEngine@CEndpointCharacteristics@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18005F02C (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18005F9D8 (memset_0.c)
 *     memcpy_0 @ 0x180062529 (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z @ 0x18013F2C0 (-IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z.c)
 *     CEndpointCharacteristics::GetDeviceFormatInternal__lambda_0de3d14ddc76a6bb0bc0d93702434bc9___ @ 0x1801428B4 (CEndpointCharacteristics--GetDeviceFormatInternal__lambda_0de3d14ddc76a6bb0bc0d93702434bc9___.c)
 *     _lambda_0271267fe4b1063fcc66a341b5120ffb_::operator() @ 0x180144590 (_lambda_0271267fe4b1063fcc66a341b5120ffb_--operator().c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CEndpointCharacteristics::ForEachCandidateFormatForMode__lambda_0271267fe4b1063fcc66a341b5120ffb___(
        CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        size_t Size,
        unsigned int *a4,
        struct _GUID *a5,
        __int64 a6)
{
  size_t v6; // r15
  int v9; // r12d
  char *v10; // rdi
  int ProposedConnectorFormatForProcessingMode; // eax
  void *v12; // rbx
  __int64 v13; // rsi
  void *v14; // rcx
  int v15; // eax
  __int64 v16; // r13
  SIZE_T v17; // r14
  int i; // ebx
  __int64 v19; // rsi
  unsigned int *v20; // rax
  char v21; // r10
  bool *v22; // rdx
  size_t v23; // r9
  unsigned int *v24; // r8
  __int64 v25; // rcx
  __int64 v26; // rcx
  bool v27; // al
  __int64 v28; // rdx
  char *v29; // rcx
  unsigned int v30; // r11d
  unsigned int *v31; // rax
  char v32; // r10
  char *v33; // rdx
  size_t v34; // r9
  unsigned int *v35; // r8
  __int64 v36; // rcx
  __int64 v37; // rcx
  int v38; // esi
  char *v39; // rax
  int *v40; // rsi
  unsigned int v41; // eax
  unsigned int *v42; // rcx
  char v43; // r11
  char *v44; // r8
  size_t v45; // r10
  unsigned int *v46; // r9
  __int64 v47; // rdx
  int v48; // edx
  int v49; // r8d
  LPVOID pv; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v52; // [rsp+38h] [rbp-C8h]
  int v53; // [rsp+40h] [rbp-C0h]
  unsigned int v54; // [rsp+44h] [rbp-BCh]
  unsigned int *v55; // [rsp+48h] [rbp-B8h]
  char *v56; // [rsp+50h] [rbp-B0h]
  struct tagPROPVARIANT pvar; // [rsp+58h] [rbp-A8h] BYREF
  struct _GUID v58; // [rsp+70h] [rbp-90h] BYREF
  char *v59; // [rsp+80h] [rbp-80h]
  unsigned __int64 v60; // [rsp+88h] [rbp-78h]
  __int64 v61; // [rsp+90h] [rbp-70h]
  __int64 v62; // [rsp+98h] [rbp-68h]
  __int64 v63; // [rsp+A0h] [rbp-60h]
  __int64 v64[2]; // [rsp+B0h] [rbp-50h] BYREF
  __m256i v65; // [rsp+C0h] [rbp-40h]
  __int128 v66; // [rsp+E0h] [rbp-20h]
  _DWORD v67[14]; // [rsp+F0h] [rbp-10h] BYREF
  _OWORD v68[2]; // [rsp+128h] [rbp+28h] BYREF
  int v69; // [rsp+148h] [rbp+48h]
  int v70; // [rsp+14Ch] [rbp+4Ch]
  _DWORD v71[2]; // [rsp+150h] [rbp+50h]
  __int64 v72; // [rsp+158h] [rbp+58h]
  __int128 v73; // [rsp+160h] [rbp+60h]
  __int128 v74; // [rsp+170h] [rbp+70h]
  int v75; // [rsp+180h] [rbp+80h]
  __int64 v76; // [rsp+188h] [rbp+88h]
  __int128 v77; // [rsp+190h] [rbp+90h]
  int v78; // [rsp+1A0h] [rbp+A0h]
  __int64 v79; // [rsp+1A8h] [rbp+A8h]
  __int128 v80; // [rsp+1B0h] [rbp+B0h]
  int v81; // [rsp+1C0h] [rbp+C0h]
  __int64 v82; // [rsp+1C8h] [rbp+C8h]
  __int128 v83; // [rsp+1D0h] [rbp+D0h]

  v55 = a4;
  v6 = (unsigned int)Size;
  v52 = a6;
  v62 = 0LL;
  v63 = 0LL;
  v9 = 0;
  memset(&pvar, 0, sizeof(pvar));
  v67[0] = 8000;
  v67[1] = 11025;
  v67[2] = 16000;
  v67[3] = 22050;
  v67[4] = 24000;
  v67[5] = 32000;
  v67[6] = 44100;
  v67[7] = 48000;
  v67[8] = 88200;
  v67[9] = 96000;
  v67[10] = 176400;
  v67[11] = 192000;
  v67[12] = 352800;
  v67[13] = 384000;
  v68[0] = _mm_load_si128((const __m128i *)&_xmm);
  v68[1] = _mm_load_si128((const __m128i *)&_xmm);
  v69 = 32;
  v70 = 32;
  v71[0] = 0;
  v72 = 0LL;
  v73 = unk_1801787F8;
  v74 = unk_180178808;
  v75 = 0;
  v76 = 0LL;
  v77 = unk_1801787D8;
  v78 = 0;
  v79 = 0LL;
  v80 = unk_1801787E8;
  v81 = 0;
  v82 = 0LL;
  v83 = unk_1801787C8;
  v10 = 0LL;
  v59 = 0LL;
  CEndpointCharacteristics::HasHardwareAudioEngine(this);
  pv = 0LL;
  *(_OWORD *)v64 = *(_OWORD *)a6;
  v65 = *(__m256i *)(a6 + 16);
  v66 = *(_OWORD *)(a6 + 48);
  CEndpointCharacteristics::GetDeviceFormatInternal__lambda_0de3d14ddc76a6bb0bc0d93702434bc9___(
    this,
    (__int64)v64,
    (__int64)&pv);
  CoTaskMemFree(pv);
  pv = 0LL;
  *(_OWORD *)v64 = *(_OWORD *)v52;
  v65 = *(__m256i *)(v52 + 16);
  v66 = *(_OWORD *)(v52 + 48);
  CEndpointCharacteristics::GetDeviceFormatInternal__lambda_0de3d14ddc76a6bb0bc0d93702434bc9___(
    this,
    (__int64)v64,
    (__int64)&pv);
  CoTaskMemFree(pv);
  pv = 0LL;
  v58 = *a5;
  ProposedConnectorFormatForProcessingMode = CEndpointCharacteristics::GetProposedConnectorFormatForProcessingMode(
                                               this,
                                               a2,
                                               &v58,
                                               (struct tWAVEFORMATEX **)&pv);
  v12 = pv;
  if ( ProposedConnectorFormatForProcessingMode >= 0
    && *((_WORD *)pv + 7)
    && *((_DWORD *)pv + 2)
    && *((_WORD *)pv + 6)
    && *((_WORD *)pv + 1) )
  {
    v13 = v52;
    if ( *((_DWORD *)pv + 1) )
    {
      v9 = lambda_0271267fe4b1063fcc66a341b5120ffb_::operator()(v52, pv, 0LL);
      if ( v9 < 0 )
      {
        v14 = v12;
LABEL_9:
        CoTaskMemFree(v14);
        goto LABEL_80;
      }
    }
  }
  else
  {
    v13 = v52;
  }
  CoTaskMemFree(v12);
  *(_QWORD *)&v58.Data1 = 0LL;
  v15 = (*(__int64 (__fastcall **)(_QWORD, const PROPERTYKEY *, struct tagPROPVARIANT *))(**((_QWORD **)this + 5) + 40LL))(
          *((_QWORD *)this + 5),
          &PKEY_AudioEngine_DeviceFormat,
          &pvar);
  v16 = 0LL;
  if ( v15 >= 0 && pvar.vt == 65 && IsValidWfxBlob(&pvar) )
  {
    v9 = ValidateWaveFormatEx((const struct tWAVEFORMATEX *)pvar.bstrblobVal.pData);
    if ( v9 >= 0 )
    {
      v9 = lambda_0271267fe4b1063fcc66a341b5120ffb_::operator()(v13, pvar.bstrblobVal.pData, 0LL);
      if ( v9 < 0 )
      {
        v14 = 0LL;
        goto LABEL_9;
      }
    }
  }
  PropVariantClear((PROPVARIANT *)&pvar);
  CoTaskMemFree(0LL);
  v17 = (unsigned int)(3 * v6);
  *(_QWORD *)&v58.Data1 = v17;
  v10 = (char *)operator new[](v17, (const struct std::nothrow_t *)&std::nothrow);
  v59 = v10;
  if ( v10 )
  {
    for ( i = 0; (unsigned int)i < 9; ++i )
    {
      v60 = 16LL * i;
      v19 = (int)v71[v60 / 4];
      if ( (_DWORD)v19 )
      {
        memset_0(v10, 1, v17);
        v20 = v55;
        v21 = 0;
        if ( !(_DWORD)v6 )
          goto LABEL_35;
        v22 = (bool *)v10;
        v23 = v6;
        do
        {
          v24 = (unsigned int *)((char *)v20 + *v20);
          if ( *v22 )
          {
            v25 = *(_QWORD *)&GUID_73647561_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)v20 + 2);
            if ( *(_QWORD *)&GUID_73647561_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)v20 + 2) )
              v25 = *(_QWORD *)GUID_73647561_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)v20 + 3);
            if ( v25 )
              goto LABEL_32;
            v26 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)v20 + 4);
            if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)v20 + 4) )
              v26 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)v20 + 5);
            if ( v26 )
            {
LABEL_32:
              *v22 = 0;
            }
            else
            {
              v27 = i <= v20[16];
              *v22 = v27;
              if ( v27 )
                v21 = 1;
            }
          }
          ++v22;
          v20 = v24;
          --v23;
        }
        while ( v23 );
        if ( v21 )
        {
LABEL_35:
          v61 = v19;
          LODWORD(v28) = 0;
          if ( (int)v19 > 0 )
          {
            v29 = &v10[v6];
            while ( 2 )
            {
              v53 = v28;
              pv = v67;
              do
              {
                memcpy_0(v29, v10, v6);
                v30 = *(_DWORD *)pv;
                v31 = v55;
                v32 = 0;
                if ( !(_DWORD)v6 )
                  goto LABEL_53;
                v33 = &v10[v6];
                v34 = v6;
                do
                {
                  v35 = (unsigned int *)((char *)v31 + *v31);
                  if ( *v33 )
                  {
                    v36 = *(_QWORD *)&GUID_73647561_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)v31 + 2);
                    if ( *(_QWORD *)&GUID_73647561_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)v31 + 2) )
                      v36 = *(_QWORD *)GUID_73647561_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)v31 + 3);
                    if ( v36 )
                      goto LABEL_50;
                    v37 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)v31 + 4);
                    if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)v31 + 4) )
                      v37 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)v31 + 5);
                    if ( v37 || v30 < v31[19] || v30 > v31[20] )
                    {
LABEL_50:
                      *v33 = 0;
                    }
                    else
                    {
                      *v33 = 1;
                      v32 = 1;
                    }
                  }
                  ++v33;
                  v31 = v35;
                  --v34;
                }
                while ( v34 );
                v38 = v53;
                LODWORD(v28) = 0;
                if ( v32 )
                {
LABEL_53:
                  v54 = 0;
                  v39 = &v10[(unsigned int)(2 * v6)];
                  v56 = v39;
                  v40 = (int *)v68 + 1;
                  while ( 1 )
                  {
                    memcpy_0(v39, &v10[v6], v6);
                    v41 = *(v40 - 1);
                    v42 = v55;
                    LODWORD(v28) = 0;
                    v43 = 0;
                    if ( !(_DWORD)v6 )
                      goto LABEL_83;
                    v44 = v56;
                    v45 = v6;
                    do
                    {
                      v46 = (unsigned int *)((char *)v42 + *v42);
                      if ( *v44 != (_BYTE)v28 )
                      {
                        v47 = *(_QWORD *)&GUID_73647561_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)v42 + 2);
                        if ( *(_QWORD *)&GUID_73647561_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)v42 + 2) )
                          v47 = *(_QWORD *)GUID_73647561_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)v42 + 3);
                        if ( v47 )
                          goto LABEL_66;
                        v28 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)v42 + 4);
                        if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)v42 + 4) )
                          v28 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)v42 + 5);
                        if ( v28 || v41 < v42[17] || v41 > v42[18] )
                        {
LABEL_66:
                          LODWORD(v28) = 0;
                          *v44 = 0;
                        }
                        else
                        {
                          *v44 = 1;
                          v43 = 1;
                        }
                      }
                      ++v44;
                      v42 = v46;
                      --v45;
                    }
                    while ( v45 );
                    if ( v43 )
                    {
LABEL_83:
                      v48 = *(_DWORD *)(*(__int64 *)((char *)&v72 + v60) + 4 * v16);
                      v49 = *v40;
                      if ( !v48 && i <= 2 )
                        v48 = 4 - (i != 1);
                      v65.m256i_i16[1] = v41;
                      v65.m256i_i32[1] = v48;
                      *(GUID *)&v65.m256i_u64[1] = GUID_00000001_0000_0010_8000_00aa00389b71;
                      LOWORD(v64[0]) = -2;
                      HIWORD(v64[1]) = v49;
                      v65.m256i_i16[0] = 22;
                      WORD1(v64[0]) = i;
                      HIDWORD(v64[0]) = *(_DWORD *)pv;
                      WORD2(v64[1]) = i * ((unsigned __int16)v49 >> 3);
                      LODWORD(v64[1]) = HIDWORD(v64[0]) * WORD2(v64[1]);
                      v9 = lambda_0271267fe4b1063fcc66a341b5120ffb_::operator()(v52, v64, 0LL);
                      LODWORD(v28) = 0;
                      if ( v9 < 0 )
                        goto LABEL_80;
                    }
                    ++v54;
                    v40 += 2;
                    v39 = v56;
                    if ( v54 >= 5 )
                    {
                      v38 = v53;
                      break;
                    }
                  }
                }
                v53 = v38 + 1;
                pv = (char *)pv + 4;
                v29 = &v10[v6];
              }
              while ( (unsigned int)(v38 + 1) < 0xE );
              ++v16;
              v29 = &v10[v6];
              if ( v16 < v61 )
                continue;
              break;
            }
            v17 = *(_QWORD *)&v58.Data1;
          }
          v16 = 0LL;
        }
      }
    }
  }
  else
  {
    v9 = -2147024882;
  }
LABEL_80:
  PropVariantClear((PROPVARIANT *)&pvar);
  operator delete(v10);
  return (unsigned int)v9;
}
