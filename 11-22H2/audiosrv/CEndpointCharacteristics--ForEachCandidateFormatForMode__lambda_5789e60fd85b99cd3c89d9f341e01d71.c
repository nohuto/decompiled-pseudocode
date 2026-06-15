/*
 * XREFs of CEndpointCharacteristics::ForEachCandidateFormatForMode__lambda_5789e60fd85b99cd3c89d9f341e01d71___ @ 0x180032A30
 * Callers:
 *     ?DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@IPEATKSDATAFORMAT@@PEAUPacketSizeConstraints@@_N_JAEAV?$vector@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@2@@std@@PEAVCUnsupportedConnectorFormats@@@Z @ 0x18002C610 (-DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_i.c)
 * Callees:
 *     CEndpointCharacteristics::GetDeviceFormatInternal__lambda_8e14c3ef8ca8112e9c42aed54b541fda___ @ 0x180020858 (CEndpointCharacteristics--GetDeviceFormatInternal__lambda_8e14c3ef8ca8112e9c42aed54b541fda___.c)
 *     ?IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z @ 0x180020D20 (-IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z.c)
 *     ?GetProposedConnectorFormatForProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x1800291A8 (-GetProposedConnectorFormatForProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_.c)
 *     ?HasHardwareAudioEngine@CEndpointCharacteristics@@QEAAHXZ @ 0x18002EDFC (-HasHardwareAudioEngine@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x180032880 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?DiscoverPeriodicityCharacteristicsForFormat@@YAJPEAUIMMDevice@@W4AUDIO_DIRECTION@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@PEAUPacketSizeConstraints@@W4DPCF_OPTIONS@@_JPEAI8888@Z @ 0x1800336A0 (-DiscoverPeriodicityCharacteristicsForFormat@@YAJPEAUIMMDevice@@W4AUDIO_DIRECTION@@W4__MIDL___MI.c)
 *     ?AddConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@IIIII@Z @ 0x1800347A0 (-AddConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@IIIII@Z.c)
 *     _lambda_5789e60fd85b99cd3c89d9f341e01d71_::operator() @ 0x180041F80 (_lambda_5789e60fd85b99cd3c89d9f341e01d71_--operator().c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x180067028 (--3@YAXPEAX_K@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006706C (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180067A54 (memset_0.c)
 *     memcmp_0 @ 0x18006A7FD (memcmp_0.c)
 *     memcpy_0 @ 0x18006A809 (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AddProbableConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z @ 0x180168960 (-AddProbableConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CEndpointCharacteristics::ForEachCandidateFormatForMode__lambda_5789e60fd85b99cd3c89d9f341e01d71___(
        CEndpointCharacteristics *this,
        __int32 a2,
        unsigned int a3,
        unsigned int *a4,
        struct _GUID *a5,
        __int128 *a6)
{
  int v8; // r12d
  char *v9; // rdi
  char v10; // bl
  int ProposedConnectorFormatForProcessingMode; // eax
  void *v12; // rbx
  int v13; // eax
  BYTE *pData; // rbx
  unsigned int v15; // r14d
  unsigned __int64 v16; // r15
  unsigned int v17; // r13d
  unsigned int *v18; // rsi
  __int64 v19; // rbx
  unsigned int *v20; // rax
  char v21; // r10
  size_t v22; // r15
  bool *v23; // rdx
  __int64 v24; // r9
  unsigned int *v25; // r8
  __int64 v26; // rcx
  __int64 v27; // rcx
  bool v28; // al
  char *v30; // r13
  unsigned int v31; // ebx
  __int64 v32; // rsi
  unsigned int v33; // r11d
  unsigned int *v34; // rax
  char v35; // r8
  char *v36; // rdx
  size_t v37; // r10
  unsigned int *v38; // r9
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // r13
  char *v42; // rbx
  unsigned int v43; // r11d
  unsigned int *v44; // rax
  char v45; // r10
  int v46; // edx
  int v47; // ecx
  CConnectorProcessingModeCharacteristics ***v48; // r12
  CConnectorProcessingModeCharacteristics **v49; // r15
  unsigned __int16 ***v50; // rsi
  unsigned __int16 ***v51; // rbx
  __int64 v52; // r9
  __int64 v53; // r10
  CConnectorProcessingModeCharacteristics **v54; // rax
  CConnectorProcessingModeCharacteristics **v55; // rsi
  __m128i *v56; // rbx
  int v57; // eax
  int v58; // r14d
  __int64 v59; // rdx
  __m128i v60; // xmm1
  __int16 v61; // ax
  __int64 v62; // r8
  __int16 v63; // r11
  unsigned __int16 v64; // cx
  int v65; // r8d
  __int16 v66; // r9
  __int64 v67; // r10
  int v68; // r11d
  __int16 v69; // r8
  __int64 v70; // r10
  __int16 v71; // r10
  __int64 v72; // r11
  __int16 v73; // ax
  unsigned __int64 v74; // rcx
  __int64 v75; // r8
  char *v76; // rdx
  size_t v77; // r9
  unsigned int *v78; // r8
  __int64 v79; // rcx
  __int64 v80; // rcx
  __int64 v81; // xmm6_8
  __int128 v82; // xmm7
  __int128 v83; // xmm8
  unsigned __int16 *v84; // rcx
  int v85; // eax
  int v86; // r8d
  unsigned __int16 v87; // dx
  __int16 v88; // r11
  int v89; // r8d
  __int16 v90; // r10
  __int16 v91; // dx
  int v92; // ecx
  __int16 v93; // ax
  __int64 v94; // rax
  unsigned int v95; // r8d
  __int64 v96; // r8
  __int64 v97; // rdx
  __int64 v98; // rdx
  unsigned __int16 v99; // r9
  unsigned __int16 v100; // dx
  BOOL v101; // ecx
  LPVOID pv; // [rsp+78h] [rbp-90h] BYREF
  unsigned int Size; // [rsp+80h] [rbp-88h]
  int Size_4; // [rsp+84h] [rbp-84h]
  unsigned int v105; // [rsp+88h] [rbp-80h]
  unsigned int v106; // [rsp+8Ch] [rbp-7Ch]
  unsigned int *v107; // [rsp+90h] [rbp-78h]
  unsigned int v108; // [rsp+98h] [rbp-70h]
  unsigned int v109; // [rsp+9Ch] [rbp-6Ch] BYREF
  unsigned int v110; // [rsp+A0h] [rbp-68h] BYREF
  unsigned int v111; // [rsp+A4h] [rbp-64h] BYREF
  unsigned int v112; // [rsp+A8h] [rbp-60h] BYREF
  unsigned int v113; // [rsp+ACh] [rbp-5Ch] BYREF
  size_t v114; // [rsp+B0h] [rbp-58h]
  char *v115; // [rsp+B8h] [rbp-50h]
  __int64 v116; // [rsp+C0h] [rbp-48h]
  char *v117; // [rsp+C8h] [rbp-40h]
  CConnectorProcessingModeCharacteristics ***v118; // [rsp+D0h] [rbp-38h]
  __int64 v119; // [rsp+D8h] [rbp-30h]
  __int64 v120; // [rsp+E0h] [rbp-28h]
  struct tagPROPVARIANT pvar; // [rsp+E8h] [rbp-20h] BYREF
  struct _GUID v122; // [rsp+108h] [rbp+0h] BYREF
  unsigned __int64 v123; // [rsp+118h] [rbp+10h]
  __m128i v124; // [rsp+128h] [rbp+20h] BYREF
  __int64 v125; // [rsp+138h] [rbp+30h]
  __int64 v126; // [rsp+140h] [rbp+38h]
  __int128 Buf2; // [rsp+148h] [rbp+40h] BYREF
  _BYTE v128[24]; // [rsp+158h] [rbp+50h]
  __int128 v129; // [rsp+170h] [rbp+68h] BYREF
  _BYTE v130[24]; // [rsp+180h] [rbp+78h]
  __int128 Buf1; // [rsp+198h] [rbp+90h] BYREF
  __int128 v132; // [rsp+1A8h] [rbp+A0h]
  __int128 v133; // [rsp+1B8h] [rbp+B0h]
  __int128 v134; // [rsp+1C8h] [rbp+C0h]
  _DWORD v135[14]; // [rsp+1D8h] [rbp+D0h]
  _OWORD v136[2]; // [rsp+210h] [rbp+108h]
  int v137; // [rsp+230h] [rbp+128h]
  int v138; // [rsp+234h] [rbp+12Ch]
  _DWORD v139[2]; // [rsp+238h] [rbp+130h]
  __int64 v140; // [rsp+240h] [rbp+138h]
  __int128 v141; // [rsp+248h] [rbp+140h]
  __int128 v142; // [rsp+258h] [rbp+150h]
  int v143; // [rsp+268h] [rbp+160h]
  __int64 v144; // [rsp+270h] [rbp+168h]
  __int128 v145; // [rsp+278h] [rbp+170h]
  int v146; // [rsp+288h] [rbp+180h]
  __int64 v147; // [rsp+290h] [rbp+188h]
  __int128 v148; // [rsp+298h] [rbp+190h]
  int v149; // [rsp+2A8h] [rbp+1A0h]
  __int64 v150; // [rsp+2B0h] [rbp+1A8h]
  __int128 v151; // [rsp+2B8h] [rbp+1B0h]

  v107 = a4;
  Size = a3;
  v118 = (CConnectorProcessingModeCharacteristics ***)a6;
  v125 = 0LL;
  v126 = 0LL;
  v8 = 0;
  memset(&pvar, 0, sizeof(pvar));
  v135[0] = 8000;
  v135[1] = 11025;
  v135[2] = 16000;
  v135[3] = 22050;
  v135[4] = 24000;
  v135[5] = 32000;
  v135[6] = 44100;
  v135[7] = 48000;
  v135[8] = 88200;
  v135[9] = 96000;
  v135[10] = 176400;
  v135[11] = 192000;
  v135[12] = 352800;
  v135[13] = 384000;
  v136[0] = _mm_load_si128((const __m128i *)&_xmm);
  v136[1] = _mm_load_si128((const __m128i *)&_xmm);
  v137 = 32;
  v138 = 32;
  v139[0] = 0;
  v140 = 0LL;
  v141 = unk_180171010;
  v142 = unk_180171000;
  v143 = 0;
  v144 = 0LL;
  v145 = unk_180170FF0;
  v146 = 0;
  v147 = 0LL;
  v148 = unk_180170FE0;
  v149 = 0;
  v150 = 0LL;
  v151 = unk_180170FD0;
  v9 = 0LL;
  v117 = 0LL;
  v10 = (unsigned int)CEndpointCharacteristics::HasHardwareAudioEngine(this) != 0;
  pv = 0LL;
  Buf1 = *a6;
  v132 = a6[1];
  v133 = a6[2];
  v134 = a6[3];
  CEndpointCharacteristics::GetDeviceFormatInternal__lambda_8e14c3ef8ca8112e9c42aed54b541fda___(
    this,
    0,
    v10,
    a2,
    &Buf1,
    (struct tWAVEFORMATEX **)&pv);
  CoTaskMemFree(pv);
  pv = 0LL;
  Buf1 = *a6;
  v132 = a6[1];
  v133 = a6[2];
  v134 = a6[3];
  CEndpointCharacteristics::GetDeviceFormatInternal__lambda_8e14c3ef8ca8112e9c42aed54b541fda___(
    this,
    1,
    v10,
    a2,
    &Buf1,
    (struct tWAVEFORMATEX **)&pv);
  CoTaskMemFree(pv);
  pv = 0LL;
  v122 = *a5;
  ProposedConnectorFormatForProcessingMode = CEndpointCharacteristics::GetProposedConnectorFormatForProcessingMode(
                                               this,
                                               (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a2,
                                               &v122,
                                               (struct tWAVEFORMATEX **)&pv);
  v12 = pv;
  if ( ProposedConnectorFormatForProcessingMode >= 0 )
  {
    if ( *((_WORD *)pv + 7) )
    {
      if ( *((_DWORD *)pv + 2) )
      {
        if ( *((_WORD *)pv + 6) )
        {
          if ( *((_WORD *)pv + 1) )
          {
            if ( *((_DWORD *)pv + 1) )
            {
              v8 = lambda_5789e60fd85b99cd3c89d9f341e01d71_::operator()(a6, pv, 0LL);
              if ( v8 < 0 )
              {
                CoTaskMemFree(v12);
                goto LABEL_25;
              }
            }
          }
        }
      }
    }
  }
  CoTaskMemFree(v12);
  *(_QWORD *)&v122.Data1 = 0LL;
  if ( (*(int (__fastcall **)(_QWORD, const PROPERTYKEY *, struct tagPROPVARIANT *))(**((_QWORD **)this + 9) + 40LL))(
         *((_QWORD *)this + 9),
         &PKEY_AudioEngine_DeviceFormat,
         &pvar) >= 0
    && pvar.vt == 65 )
  {
    LOBYTE(v13) = IsValidWfxBlob(&pvar);
    if ( v13 )
    {
      pData = pvar.bstrblobVal.pData;
      v8 = ValidateWaveFormatEx((const struct tWAVEFORMATEX *)pvar.bstrblobVal.pData);
      if ( v8 >= 0 )
      {
        v8 = lambda_5789e60fd85b99cd3c89d9f341e01d71_::operator()(a6, pData, 0LL);
        if ( v8 < 0 )
        {
          CoTaskMemFree(0LL);
          goto LABEL_25;
        }
      }
    }
  }
  PropVariantClear((PROPVARIANT *)&pvar);
  CoTaskMemFree(0LL);
  v15 = Size;
  v16 = 3 * Size;
  pv = (LPVOID)v16;
  v9 = (char *)operator new[](v16, (const struct std::nothrow_t *)&std::nothrow);
  v117 = v9;
  if ( !v9 )
  {
    v8 = -2147024882;
    goto LABEL_25;
  }
  v17 = 0;
  Size_4 = 0;
  v18 = v107;
  while ( 1 )
  {
    v123 = 16LL * (int)v17;
    v19 = (int)v139[v123 / 4];
    if ( (_DWORD)v19 )
      break;
LABEL_24:
    Size_4 = ++v17;
    if ( v17 >= 9 )
      goto LABEL_25;
  }
  memset_0(v9, 1, v16);
  v20 = v18;
  v21 = 0;
  v22 = v15;
  v114 = v15;
  if ( v15 )
  {
    v23 = (bool *)v9;
    v24 = v15;
    do
    {
      v25 = (unsigned int *)((char *)v20 + *v20);
      if ( *v23 )
      {
        v26 = *(_QWORD *)&GUID_73647561_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)v20 + 2);
        if ( *(_QWORD *)&GUID_73647561_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)v20 + 2) )
          v26 = *(_QWORD *)GUID_73647561_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)v20 + 3);
        if ( v26 )
          goto LABEL_153;
        v27 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)v20 + 4);
        if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)v20 + 4) )
          v27 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)v20 + 5);
        if ( v27 )
        {
LABEL_153:
          *v23 = 0;
        }
        else
        {
          v28 = v17 <= v20[16];
          *v23 = v28;
          if ( v28 )
            v21 = 1;
        }
      }
      ++v23;
      v20 = v25;
      --v24;
    }
    while ( v24 );
    if ( !v21 )
      goto LABEL_23;
  }
  v116 = 0LL;
  *(_QWORD *)&v122.Data1 = v19;
  if ( (int)v19 <= 0 )
  {
LABEL_23:
    v16 = (unsigned __int64)pv;
    goto LABEL_24;
  }
  v30 = &v9[v15];
LABEL_28:
  v31 = 0;
  v106 = 0;
  v32 = 0LL;
  v120 = 0LL;
  while ( 1 )
  {
    memcpy_0(v30, v9, v22);
    v33 = v135[v32];
    v108 = v33;
    v34 = v107;
    v35 = 0;
    if ( !v15 )
      break;
    v36 = v30;
    v37 = v22;
    do
    {
      v38 = (unsigned int *)((char *)v34 + *v34);
      if ( *v36 )
      {
        v39 = *(_QWORD *)&GUID_73647561_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)v34 + 2);
        if ( *(_QWORD *)&GUID_73647561_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)v34 + 2) )
          v39 = *(_QWORD *)GUID_73647561_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)v34 + 3);
        if ( v39 )
          goto LABEL_41;
        v40 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)v34 + 4);
        if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)v34 + 4) )
          v40 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)v34 + 5);
        if ( v40 || v33 < v34[19] || v33 > v34[20] )
        {
LABEL_41:
          *v36 = 0;
        }
        else
        {
          *v36 = 1;
          v35 = 1;
        }
      }
      ++v36;
      v34 = v38;
      --v37;
    }
    while ( v37 );
    if ( v35 )
      break;
LABEL_98:
    v106 = ++v31;
    v120 = ++v32;
    if ( v31 >= 0xE )
    {
      if ( ++v116 < *(__int64 *)&v122.Data1 )
        goto LABEL_28;
      v17 = Size_4;
      v18 = v107;
      goto LABEL_23;
    }
  }
  v105 = 0;
  v41 = 0LL;
  v119 = 0LL;
  v42 = &v9[2 * v15];
  v115 = v42;
  while ( 2 )
  {
    memcpy_0(v42, &v9[v22], v22);
    v43 = *((_DWORD *)v136 + 2 * v41);
    v44 = v107;
    v45 = 0;
    if ( v15 )
    {
      v76 = v42;
      v77 = v22;
      do
      {
        v78 = (unsigned int *)((char *)v44 + *v44);
        if ( *v76 )
        {
          v79 = *(_QWORD *)&GUID_73647561_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)v44 + 2);
          if ( *(_QWORD *)&GUID_73647561_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)v44 + 2) )
            v79 = *(_QWORD *)GUID_73647561_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)v44 + 3);
          if ( v79 )
            goto LABEL_136;
          v80 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)v44 + 4);
          if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)v44 + 4) )
            v80 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)v44 + 5);
          if ( v80 || v43 < v44[17] || v43 > v44[18] )
          {
LABEL_136:
            *v76 = 0;
          }
          else
          {
            *v76 = 1;
            v45 = 1;
          }
        }
        ++v76;
        v44 = v78;
        --v77;
      }
      while ( v77 );
      if ( !v45 )
        goto LABEL_96;
    }
    v46 = *(_DWORD *)(*(__int64 *)((char *)&v140 + v123) + 4 * v116);
    v47 = *((_DWORD *)v136 + 2 * v41 + 1);
    if ( !v46 && Size_4 <= 2 )
      v46 = (Size_4 == 1) + 3;
    *(_WORD *)&v130[2] = v43;
    *(_DWORD *)&v130[4] = v46;
    *(GUID *)&v130[8] = GUID_00000001_0000_0010_8000_00aa00389b71;
    LOWORD(v129) = -2;
    HIWORD(v129) = v47;
    *(_WORD *)v130 = 22;
    WORD1(v129) = Size_4;
    DWORD1(v129) = v108;
    WORD6(v129) = Size_4 * ((unsigned __int16)v47 >> 3);
    DWORD2(v129) = v108 * WORD6(v129);
    v48 = v118;
    v49 = *v118;
    v124.m128i_i64[0] = (__int64)v49;
    v50 = (unsigned __int16 ***)*((_QWORD *)*v49 + 3);
    v51 = (unsigned __int16 ***)*((_QWORD *)*v49 + 2);
    if ( v51 == v50 )
      goto LABEL_48;
    v81 = *(_QWORD *)&v130[16];
    v82 = *(_OWORD *)v130;
    v83 = v129;
    while ( 2 )
    {
      v84 = **v51;
      if ( !v84 )
        goto LABEL_133;
      Buf1 = v83;
      v132 = v82;
      *(_QWORD *)&v133 = v81;
      LOWORD(v132) = 22;
      v85 = 0;
      v86 = *v84;
      v87 = v84[8];
      if ( (_WORD)v86 == 0xFFFE )
      {
        if ( v87 == 22 )
          goto LABEL_105;
        v97 = *((_QWORD *)v84 + 3) - *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
        if ( !v97 )
          v97 = *((_QWORD *)v84 + 4) - *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
        if ( !v97 )
          goto LABEL_105;
        v98 = *((_QWORD *)v84 + 3) - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
        if ( !v98 )
          v98 = *((_QWORD *)v84 + 4) - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
        if ( v98 )
        {
          v88 = *(_WORD *)v128;
        }
        else
        {
LABEL_105:
          Buf2 = *(_OWORD *)v84;
          *(_OWORD *)v128 = *((_OWORD *)v84 + 1);
          *(_QWORD *)&v128[16] = *((_QWORD *)v84 + 4);
          v88 = 22;
          *(_WORD *)v128 = 22;
          v85 = 1;
        }
        if ( v85 )
        {
          v89 = *(_DWORD *)&v128[4];
          v90 = Buf2;
          goto LABEL_108;
        }
        goto LABEL_133;
      }
      if ( v87 && (((_WORD)v86 - 1) & 0xFFFD) != 0 )
        goto LABEL_133;
      v99 = v84[1];
      if ( (unsigned __int16)(v99 - 1) > 1u )
        goto LABEL_133;
      v100 = v84[7];
      if ( ((v100 - 8) & 0xFFE7) != 0 )
        goto LABEL_133;
      Buf2 = *(_OWORD *)v84;
      v90 = -2;
      LOWORD(Buf2) = -2;
      v88 = 22;
      *(_WORD *)v128 = 22;
      *(_WORD *)&v128[2] = v100;
      *(GUID *)&v128[8] = GUID_00000000_0000_0010_8000_00aa00389b71;
      *(_DWORD *)&v128[8] = v86;
      v89 = (v99 == 1) + 3;
      *(_DWORD *)&v128[4] = v89;
LABEL_108:
      if ( WORD1(Buf1) )
      {
        v91 = WORD1(Buf2);
      }
      else
      {
        v91 = 0;
        WORD1(Buf2) = 0;
        DWORD2(Buf2) = 0;
        WORD6(Buf2) = 0;
      }
      if ( DWORD1(Buf1) )
      {
        v92 = DWORD1(Buf2);
      }
      else
      {
        v92 = 0;
        *(_QWORD *)((char *)&Buf2 + 4) = 0LL;
      }
      if ( HIWORD(Buf1) )
      {
        v93 = HIWORD(Buf2);
      }
      else
      {
        v93 = 0;
        HIDWORD(Buf2) = 0;
      }
      if ( !DWORD1(v132) )
      {
        v89 = 0;
        *(_DWORD *)&v128[4] = 0;
      }
      if ( !(_WORD)Buf1 )
      {
        v90 = 0;
        LOWORD(Buf2) = 0;
      }
      if ( !v91 )
      {
        WORD1(Buf1) = 0;
        DWORD2(Buf1) = 0;
        WORD6(Buf1) = 0;
      }
      if ( !v92 )
        *(_QWORD *)((char *)&Buf1 + 4) = 0LL;
      if ( !v93 )
        HIDWORD(Buf1) = 0;
      if ( !v89 )
        DWORD1(v132) = 0;
      if ( !v90 )
        LOWORD(Buf1) = 0;
      v94 = *((_QWORD *)&v132 + 1) - *(_QWORD *)&v128[8];
      if ( *((_QWORD *)&v132 + 1) == *(_QWORD *)&v128[8] )
        v94 = v133 - *(_QWORD *)&v128[16];
      if ( v94 || v88 != 22 || memcmp_0(&Buf1, &Buf2, 0x28uLL) )
      {
LABEL_133:
        if ( ++v51 == v50 )
          break;
        continue;
      }
      break;
    }
    v9 = v117;
    v49 = (CConnectorProcessingModeCharacteristics **)v124.m128i_i64[0];
    v41 = v119;
    v15 = Size;
    v48 = v118;
    if ( v51 != v50 )
    {
      v22 = Size;
      goto LABEL_78;
    }
LABEL_48:
    v101 = *(_BYTE *)v48[1] != 0;
    v52 = (__int64)*v48[6];
    v53 = (__int64)*v48[5];
    v54 = v48[3];
    v55 = v48[2];
    v56 = (__m128i *)v48[4];
    v124 = *v56;
    v57 = DiscoverPeriodicityCharacteristicsForFormat(
            v55[5],
            *((unsigned int *)v55 + 53),
            *(unsigned int *)v54,
            &v124,
            &v129,
            v53,
            v101,
            v52,
            &v113,
            &v112,
            &v111,
            &v110,
            &v109);
    v58 = v57;
    if ( v57 < 0 )
    {
      if ( v57 >= -2005139389 )
      {
        switch ( v57 )
        {
          case -2005139389:
          case -2005139364:
          case -2005139363:
          case -2005139362:
          case -2005139361:
          case -2005139360:
            CConnectorProcessingModeCharacteristics::AddProbableConnectorFormat(
              *v49,
              (const struct tWAVEFORMATEX *)&v129);
            *((_DWORD *)v55 + 59) = 1;
            break;
          default:
            goto LABEL_50;
        }
      }
      else
      {
LABEL_50:
        v59 = (__int64)*v48[7];
        if ( v59 )
        {
          v60 = *v56;
          v61 = 0;
          v62 = *(__int16 *)(v59 + 228);
          if ( (__int16)v62 <= 0 )
          {
LABEL_54:
            if ( (int)v62 >= 15 )
            {
              v61 = *(_WORD *)(v59 + 228);
            }
            else
            {
              *(_DWORD *)(v59 + 4 * v62 + 4) = DWORD1(v129);
              v61 = *(_WORD *)(v59 + 228);
              *(_WORD *)(v59 + 228) = v61 + 1;
            }
          }
          else
          {
            while ( *(_DWORD *)(v59 + 4LL * v61 + 4) != DWORD1(v129) )
            {
              if ( ++v61 >= (__int16)v62 )
                goto LABEL_54;
            }
          }
          v63 = v129;
          if ( (_WORD)v129 == 0xFFFE )
            v64 = *(_WORD *)&v130[2];
          else
            v64 = HIWORD(v129);
          v65 = HIWORD(v129) | (v64 << 8);
          v66 = 0;
          v67 = *(__int16 *)(v59 + 230);
          if ( (__int16)v67 <= 0 )
          {
LABEL_61:
            if ( (int)v67 >= 7 )
            {
              v66 = *(_WORD *)(v59 + 230);
            }
            else
            {
              *(_DWORD *)(v59 + 4 * v67 + 68) = v65;
              v66 = *(_WORD *)(v59 + 230);
              *(_WORD *)(v59 + 230) = v66 + 1;
              v63 = v129;
            }
          }
          else
          {
            while ( *(_DWORD *)(v59 + 4LL * v66 + 68) != v65 )
            {
              if ( ++v66 >= (__int16)v67 )
                goto LABEL_61;
            }
          }
          if ( v63 == -2 )
            v68 = *(_DWORD *)&v130[4];
          else
            v68 = 0;
          v69 = 0;
          v70 = *(__int16 *)(v59 + 232);
          if ( (__int16)v70 <= 0 )
          {
LABEL_68:
            if ( (int)v70 >= 15 )
            {
              v69 = *(_WORD *)(v59 + 232);
            }
            else
            {
              *(_DWORD *)(v59 + 4 * v70 + 100) = v68;
              v69 = *(_WORD *)(v59 + 232);
              *(_WORD *)(v59 + 232) = v69 + 1;
            }
          }
          else
          {
            while ( *(_DWORD *)(v59 + 4LL * v69 + 100) != v68 )
            {
              if ( ++v69 >= (__int16)v70 )
                goto LABEL_68;
            }
          }
          v71 = 0;
          v72 = *(__int16 *)(v59 + 234);
          if ( (__int16)v72 <= 0 )
          {
LABEL_137:
            if ( (int)v72 >= 15 )
            {
              v71 = *(_WORD *)(v59 + 234);
            }
            else
            {
              *(_DWORD *)(v59 + 4 * v72 + 164) = v58;
              v71 = *(_WORD *)(v59 + 234);
              *(_WORD *)(v59 + 234) = v71 + 1;
            }
          }
          else
          {
            while ( *(_DWORD *)(v59 + 4LL * v71 + 164) != v58 )
            {
              if ( ++v71 >= (__int16)v72 )
                goto LABEL_137;
            }
          }
          v73 = v71 | (16 * (v69 | (16 * (v66 | (8 * v61)))));
          v74 = v60.m128i_i64[0] - *(_QWORD *)(v59 + 4336);
          if ( v60.m128i_i64[0] == *(_QWORD *)(v59 + 4336) )
            v74 = _mm_srli_si128(v60, 8).m128i_u64[0] - *(_QWORD *)(v59 + 4344);
          if ( v74 )
          {
            v95 = *(_DWORD *)(v59 + 4332);
            if ( v95 + 1 < 0x1000 )
              *(_WORD *)(v95 + v59 + 236) = -1;
            *(_DWORD *)(v59 + 4332) += 2;
            v96 = *(unsigned int *)(v59 + 4332);
            if ( (unsigned __int64)(v96 + 16) < 0x1000 )
              *(__m128i *)(v59 + v96 + 236) = v60;
            *(_DWORD *)(v59 + 4332) += 16;
            *(__m128i *)(v59 + 4336) = v60;
          }
          v75 = *(unsigned int *)(v59 + 4332);
          if ( (unsigned __int64)(v75 + 2) < 0x1000 )
          {
            *(_WORD *)(v59 + v75 + 236) = v73;
            *(_DWORD *)(v59 + 4332) += 2;
          }
        }
      }
      v15 = Size;
      v22 = v114;
LABEL_78:
      v8 = 0;
LABEL_95:
      v42 = v115;
LABEL_96:
      ++v105;
      v119 = ++v41;
      if ( v105 >= 5 )
      {
        v31 = v106;
        v32 = v120;
        v30 = &v9[v22];
        goto LABEL_98;
      }
      continue;
    }
    break;
  }
  v8 = CConnectorProcessingModeCharacteristics::AddConnectorFormat(
         *v49,
         (const struct tWAVEFORMATEX *)&v129,
         v113,
         v112,
         v111,
         v110,
         v109);
  if ( v8 >= 0 )
  {
    v15 = Size;
    v22 = v114;
    goto LABEL_95;
  }
LABEL_25:
  PropVariantClear((PROPVARIANT *)&pvar);
  operator delete(v9, 1uLL);
  return (unsigned int)v8;
}
