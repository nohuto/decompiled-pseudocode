/*
 * XREFs of ?EnumerateSpatialEncoders@CSpatialProperties@@AEAAIAEBUSpatialAudioSettings@@IPEBUSpatialAudioEncoderDescriptor@@W4SpatialRendererSelectionMode@@PEBUtWAVEFORMATEX@@3W4SpatialAudioPolicyFlags@@KPEAU3@PEAUTechIndexes@@@Z @ 0x1800543B0
 * Callers:
 *     ?SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAX_NPEBUtWAVEFORMATEX@@PEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x1800526A0 (-SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAX_NPEBUtWAVEFORMATEX@@PEAUWAVEFORMATEXT.c)
 *     ?SetSpatialAudioSettings@CSpatialProperties@@QEAAXPEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@PEAUSpatialAudioRelatedGlobalSettings@@_N@Z @ 0x1800675AC (-SetSpatialAudioSettings@CSpatialProperties@@QEAAXPEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@P.c)
 *     ?GetAudioFormatForSpatialFormat@CSpatialProperties@@QEAAJ_NPEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@2PEAUSpatialAudioRelatedGlobalSettings@@PEAUWAVEFORMATEXTENSIBLE@@PEA_N@Z @ 0x18013D7C4 (-GetAudioFormatForSpatialFormat@CSpatialProperties@@QEAAJ_NPEBUSpatialAudioSettings@@PEBUtWAVEFO.c)
 *     ?GetSpatialFormatForAudioFormat@CSpatialProperties@@QEAAJ_NPEBUtWAVEFORMATEX@@PEAUSpatialAudioSettings@@@Z @ 0x18013E334 (-GetSpatialFormatForAudioFormat@CSpatialProperties@@QEAAJ_NPEBUtWAVEFORMATEX@@PEAUSpatialAudioSe.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$00@@U2@U?$_tlgWrapperByRef@$0BA@@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$00@@4AEBU?$_tlgWrapperByRef@$0BA@@@3@Z @ 0x180001008 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$00@@U2@U-$_tlgWrapperByRef@$0BA@@@U1@@-$_tlgWrite.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$00@@U2@U?$_tlgWrapperByRef@$0BA@@@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U4@U2@U4@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$00@@4AEBU?$_tlgWrapperByRef@$0BA@@@3AEBU?$_tlgWrapperByVal@$03@@444464645@Z @ 0x18000111C (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$00@@U2@U-$_tlgWrapperByRef@$0BA@@@U1@U-$_tlgWrapp.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DisableAtmosLicenseCheckAllowed@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180040A08 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DisableAtmosLicenseCheckAllowed@@@details.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x1800464AC (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     ?FormFactor@CEndpointCharacteristics@@QEAA?AW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@XZ @ 0x180053BA4 (-FormFactor@CEndpointCharacteristics@@QEAA-AW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@XZ.c)
 *     IsHrtfEncoder @ 0x180054F5C (IsHrtfEncoder.c)
 *     GetPreferredSpatialAudioEncoderId @ 0x180054FF8 (GetPreferredSpatialAudioEncoderId.c)
 *     DoesPlatformSupportSpatialAudio @ 0x180055020 (DoesPlatformSupportSpatialAudio.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     memset_0 @ 0x18005F9D8 (memset_0.c)
 *     memcmp_0 @ 0x18006251D (memcmp_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetTechnologyByID@CSpatialAudioTechnologies@@QEBAPEBVCSpatialAudioTech@@AEBU_GUID@@@Z @ 0x18013F8BC (-GetTechnologyByID@CSpatialAudioTechnologies@@QEBAPEBVCSpatialAudioTech@@AEBU_GUID@@@Z.c)
 */

__int64 __fastcall CSpatialProperties::EnumerateSpatialEncoders(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        unsigned __int16 *a7,
        char a8,
        int a9,
        __int64 a10,
        unsigned __int8 *a11)
{
  __int64 v12; // r15
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int8 v16; // r12
  __int128 *PreferredSpatialAudioEncoderId; // rax
  __int64 v18; // r10
  struct _GUID v19; // xmm0
  unsigned __int8 v20; // cl
  unsigned __int8 v21; // di
  __int128 v22; // xmm1
  __int64 v23; // rbx
  int v24; // eax
  char v25; // cl
  __int64 v26; // r10
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int64 v30; // r15
  _QWORD *v31; // rdi
  int v32; // eax
  __int128 v33; // xmm0
  __int64 v34; // rax
  __int64 v35; // r8
  _WORD *v36; // rdx
  __int64 v37; // rax
  __int16 v38; // cx
  _WORD *v39; // rax
  __int64 v40; // rax
  __int64 v41; // r9
  _WORD *v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rax
  __int16 v45; // dx
  _WORD *v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rax
  int v49; // ecx
  unsigned __int16 v50; // ax
  __int128 v51; // xmm1
  __int16 v52; // r11
  __int64 v53; // xmm0_8
  int v54; // ecx
  unsigned __int16 v55; // r8
  __int128 v56; // xmm0
  int v57; // eax
  __int16 v58; // r10
  int v59; // r9d
  __int16 v60; // r8
  unsigned __int8 v61; // bl
  unsigned int v62; // r8d
  __int64 v63; // r15
  CSpatialAudioTechnologies *v64; // rcx
  const struct CSpatialAudioTech *TechnologyByID; // rax
  void *v66; // r9
  unsigned int v67; // ebx
  __int64 v68; // r8
  __int64 v69; // r8
  unsigned __int8 v70; // [rsp+A0h] [rbp-80h] BYREF
  char v71; // [rsp+A1h] [rbp-7Fh]
  unsigned __int8 v72; // [rsp+A2h] [rbp-7Eh] BYREF
  char v73; // [rsp+A3h] [rbp-7Dh] BYREF
  unsigned __int8 v74; // [rsp+A4h] [rbp-7Ch] BYREF
  unsigned __int8 v75; // [rsp+A5h] [rbp-7Bh] BYREF
  unsigned __int8 v76; // [rsp+A6h] [rbp-7Ah] BYREF
  unsigned __int8 v77; // [rsp+A7h] [rbp-79h] BYREF
  unsigned __int8 v78; // [rsp+A8h] [rbp-78h] BYREF
  char v79[3]; // [rsp+A9h] [rbp-77h] BYREF
  unsigned int v80; // [rsp+ACh] [rbp-74h] BYREF
  unsigned int v81; // [rsp+B0h] [rbp-70h]
  unsigned int v82; // [rsp+B4h] [rbp-6Ch] BYREF
  unsigned int v83; // [rsp+B8h] [rbp-68h]
  int v84; // [rsp+BCh] [rbp-64h] BYREF
  unsigned int v85; // [rsp+C0h] [rbp-60h]
  __int64 v86; // [rsp+C8h] [rbp-58h]
  void *v87; // [rsp+D0h] [rbp-50h]
  _DWORD *v88; // [rsp+D8h] [rbp-48h] BYREF
  __int64 v89; // [rsp+E0h] [rbp-40h]
  void *v90; // [rsp+E8h] [rbp-38h] BYREF
  _QWORD *v91; // [rsp+F0h] [rbp-30h] BYREF
  void *v92; // [rsp+F8h] [rbp-28h] BYREF
  __int64 v93; // [rsp+100h] [rbp-20h]
  __int64 v94; // [rsp+108h] [rbp-18h]
  __int128 *p_i; // [rsp+110h] [rbp-10h] BYREF
  __int128 Buf2; // [rsp+118h] [rbp-8h] BYREF
  _BYTE v97[24]; // [rsp+128h] [rbp+8h]
  __int128 Buf1; // [rsp+140h] [rbp+20h] BYREF
  _BYTE v99[24]; // [rsp+150h] [rbp+30h]
  _BYTE v100[40]; // [rsp+168h] [rbp+48h] BYREF
  struct _GUID v101; // [rsp+190h] [rbp+70h] BYREF
  __int128 i; // [rsp+1A0h] [rbp+80h] BYREF
  char v103[16]; // [rsp+1B0h] [rbp+90h] BYREF

  v12 = a6;
  *(_DWORD *)(a11 + 2) = -1;
  *(_WORD *)a11 = -1;
  v86 = a4;
  v85 = a3;
  v93 = a2;
  v89 = a6;
  v94 = a10;
  if ( !(unsigned __int8)DoesPlatformSupportSpatialAudio() )
  {
    *(_DWORD *)(a1 + 7728) = 3;
    return 0LL;
  }
  v16 = 0;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_DisableAtmosLicenseCheckAllowed>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_DisableAtmosLicenseCheckAllowed>::GetImpl'::`2'::impl,
    0,
    v13,
    v14);
  v71 = g_ListOfSpatialTech[0];
  v87 = *(void **)(*(_QWORD *)(a1 + 40) + 24LL);
  v83 = -1;
  v81 = -1;
  PreferredSpatialAudioEncoderId = (__int128 *)GetPreferredSpatialAudioEncoderId(&v101, a5, v93);
  v19 = *(struct _GUID *)(v18 + 28);
  v20 = v71;
  v21 = 0;
  v70 = 0;
  v22 = *PreferredSpatialAudioEncoderId;
  v101 = v19;
  for ( i = v22; v21 < v20; v70 = ++v21 )
  {
    v73 = 0;
    v80 = 0;
    memset(v100, 0, sizeof(v100));
    if ( v21 >= (unsigned int)g_ListOfSpatialTech[0] )
      continue;
    v23 = qword_1801C2D98[v21];
    if ( !v23 )
      continue;
    if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, __int64, unsigned __int16 *, int, unsigned int *, char *, _BYTE *))(*(_QWORD *)v23 + 40LL))(
           v23,
           *(_QWORD *)(a1 + 40),
           v12,
           a7,
           a9,
           &v80,
           &v73,
           v100) )
    {
      v24 = *(_DWORD *)(a1 + 7728);
      if ( v24 != 2 )
      {
        if ( !v24
          && v12
          && *(_WORD *)(v12 + 2) == 8
          && *(_WORD *)&v100[2] == 2
          && (unsigned int)CEndpointCharacteristics::FormFactor(*(CEndpointCharacteristics **)(a1 + 40)) != 9 )
        {
          v28 = *(_OWORD *)v100;
          *(_DWORD *)(a1 + 7728) = 1;
          v29 = *(_OWORD *)&v100[16];
          *(_OWORD *)(a1 + 7732) = v28;
          *(_QWORD *)&v28 = *(_QWORD *)&v100[32];
          *(_OWORD *)(a1 + 7748) = v29;
          *(_QWORD *)(a1 + 7764) = v28;
        }
LABEL_28:
        v84 = (*(__int64 (__fastcall **)(__int64, void *))(*(_QWORD *)v23 + 32LL))(v23, v87);
        v30 = v94 + 834LL * v16;
        v88 = (_DWORD *)v30;
        *(_DWORD *)(v30 + 784) = v84 >= 0;
        v31 = (_QWORD *)(v30 + 768);
        *(_OWORD *)(v30 + 768) = *(_OWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v23 + 16LL))(
                                              v23,
                                              v103);
        *(_DWORD *)(v30 + 788) = (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v23 + 48LL))(v23);
        *(_DWORD *)(v30 + 792) = (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v23 + 56LL))(v23);
        *(_DWORD *)(v30 + 796) = (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v23 + 72LL))(v23);
        v32 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23 + 64LL))(v23);
        v33 = *(_OWORD *)&v100[24];
        *(_DWORD *)(v30 + 800) = v32;
        *(_DWORD *)(v30 + 804) = *(_DWORD *)&v100[4];
        *(_DWORD *)(v30 + 808) = *(_DWORD *)&v100[20];
        *(_WORD *)(v30 + 828) = *(_WORD *)&v100[2];
        *(_WORD *)(v30 + 830) = *(_WORD *)&v100[14];
        *(_WORD *)(v30 + 832) = *(_WORD *)&v100[18];
        *(_OWORD *)(v30 + 812) = v33;
        v34 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23 + 8LL))(v23);
        v35 = 256LL;
        v36 = (_WORD *)v30;
        v37 = v34 - v30;
        do
        {
          if ( v35 == -2147483390 )
            break;
          v38 = *(_WORD *)((char *)v36 + v37);
          if ( !v38 )
            break;
          *v36++ = v38;
          --v35;
        }
        while ( v35 );
        v39 = v36 - 1;
        if ( v35 )
          v39 = v36;
        *v39 = 0;
        v40 = (*(__int64 (__fastcall **)(__int64, void *))(*(_QWORD *)v23 + 24LL))(v23, v87);
        v42 = (_WORD *)(v30 + 512);
        v43 = 128LL;
        v44 = v40 - (v30 + 512);
        do
        {
          if ( v43 == -2147483518 )
            break;
          v45 = *(_WORD *)((char *)v42 + v44);
          if ( !v45 )
            break;
          *v42++ = v45;
          --v43;
        }
        while ( v43 );
        v46 = v42 - 1;
        if ( v43 )
          v46 = v42;
        *v46 = 0;
        v47 = *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
        if ( *v31 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1
          && *(_QWORD *)(v30 + 776) == *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4 )
        {
          goto LABEL_140;
        }
        v48 = -1LL;
        do
          ++v48;
        while ( *(_WORD *)(v30 + 2 * v48) );
        if ( !v48 )
        {
LABEL_140:
          v69 = *(_QWORD *)(a1 + 48);
          if ( *(_DWORD *)v69 > 2u
            && (*(_BYTE *)(v69 + 16) & 0x10) != 0
            && (*(_QWORD *)(v69 + 24) & 0x10LL) == *(_QWORD *)(v69 + 24) )
          {
            v90 = v87;
            v91 = (_QWORD *)(v30 + 768);
            v21 = v70;
            v92 = (void *)v30;
            v75 = v16;
            v74 = v70;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>>(
              v69,
              (int)&unk_18018E0D6,
              v69,
              v41,
              &v90,
              (__int64)&v74,
              (__int64)&v75,
              (__int64 *)&v91,
              &v92);
          }
          else
          {
            v21 = v70;
          }
          memset_0((void *)v30, 0, 0x342uLL);
          v20 = v71;
          v12 = v89;
          continue;
        }
        if ( !v73
          || a5
          || *(_QWORD *)&v101.Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1
          && *(_QWORD *)v101.Data4 == *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4
          || *v31 == *(_QWORD *)&v101.Data1 && *(_QWORD *)(v30 + 776) == *(_QWORD *)v101.Data4
          || !*(_DWORD *)(v30 + 784) )
        {
          goto LABEL_115;
        }
        if ( !a7 )
          goto LABEL_101;
        v49 = *a7;
        v50 = a7[8];
        if ( (_WORD)v49 == 0xFFFE )
        {
          if ( v50 == 22
            || *((_QWORD *)a7 + 3) == *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1
            && *((_QWORD *)a7 + 4) == *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4
            || *((_QWORD *)a7 + 3) == *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1
            && *((_QWORD *)a7 + 4) == *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 )
          {
            v51 = *((_OWORD *)a7 + 1);
            Buf1 = *(_OWORD *)a7;
            v52 = Buf1;
            v53 = *((_QWORD *)a7 + 4);
            *(_OWORD *)v99 = v51;
            v54 = DWORD1(v51);
            *(_QWORD *)&v99[16] = v53;
            *(_WORD *)v99 = 22;
            goto LABEL_65;
          }
          goto LABEL_115;
        }
        if ( v50 )
        {
          v47 = 65533LL;
          if ( (((_WORD)v49 - 1) & 0xFFFD) != 0 )
            goto LABEL_115;
        }
        v55 = a7[1];
        if ( (unsigned __int16)(v55 - 1) > 1u )
          goto LABEL_115;
        v47 = a7[7];
        v52 = -2;
        if ( (((_WORD)v47 - 8) & 0xFFE7) != 0 )
          goto LABEL_115;
        v56 = *(_OWORD *)a7;
        *(_WORD *)&v99[2] = a7[7];
        *(_WORD *)v99 = 22;
        *(GUID *)&v99[8] = GUID_00000000_0000_0010_8000_00aa00389b71;
        *(_DWORD *)&v99[8] = v49;
        Buf1 = v56;
        v54 = (v55 == 1) + 3;
        LOWORD(Buf1) = -2;
LABEL_65:
        if ( *(_WORD *)v100 == 0xFFFE )
        {
          if ( *(_WORD *)&v100[16] != 22 )
          {
            v47 = *(_QWORD *)&v100[24];
            if ( *(_OWORD *)&v100[24] != *(_OWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71
              && (*(_QWORD *)&v100[24] != *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1
               || *(_QWORD *)&v100[32] != *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4) )
            {
              goto LABEL_115;
            }
          }
          Buf2 = *(_OWORD *)v100;
          v47 = *(unsigned __int16 *)v100;
          *(_OWORD *)v97 = *(_OWORD *)&v100[16];
          *(_WORD *)v97 = 22;
          v57 = *(_DWORD *)&v100[20];
          *(_QWORD *)&v97[16] = *(_QWORD *)&v100[32];
        }
        else
        {
          if ( *(_WORD *)&v100[16] && ((*(_WORD *)v100 - 1) & 0xFFFD) != 0
            || (unsigned __int16)(*(_WORD *)&v100[2] - 1) > 1u
            || ((*(_WORD *)&v100[14] - 8) & 0xFFE7) != 0 )
          {
            goto LABEL_115;
          }
          *(_WORD *)&v97[2] = *(_WORD *)&v100[14];
          v47 = 65534LL;
          Buf2 = *(_OWORD *)v100;
          LOWORD(Buf2) = -2;
          *(_WORD *)v97 = 22;
          *(GUID *)&v97[8] = GUID_00000000_0000_0010_8000_00aa00389b71;
          v57 = (*(_WORD *)&v100[2] == 1) + 3;
          *(_DWORD *)&v97[8] = *(unsigned __int16 *)v100;
        }
        if ( WORD1(Buf1) )
        {
          v58 = WORD1(Buf2);
        }
        else
        {
          v58 = 0;
          WORD1(Buf2) = 0;
          DWORD2(Buf2) = 0;
          WORD6(Buf2) = 0;
        }
        if ( DWORD1(Buf1) )
        {
          v59 = DWORD1(Buf2);
        }
        else
        {
          v59 = 0;
          *(_QWORD *)((char *)&Buf2 + 4) = 0LL;
        }
        if ( HIWORD(Buf1) )
        {
          v60 = HIWORD(Buf2);
        }
        else
        {
          v60 = 0;
          HIDWORD(Buf2) = 0;
        }
        if ( !v54 )
          v57 = 0;
        *(_DWORD *)&v97[4] = v57;
        if ( !v52 )
        {
          v47 = 0LL;
          LOWORD(Buf2) = 0;
        }
        if ( !v58 )
        {
          WORD1(Buf1) = 0;
          DWORD2(Buf1) = 0;
          WORD6(Buf1) = 0;
        }
        if ( !v59 )
          *(_QWORD *)((char *)&Buf1 + 4) = 0LL;
        if ( !v60 )
          HIDWORD(Buf1) = 0;
        if ( !v57 )
          v54 = 0;
        *(_DWORD *)&v99[4] = v54;
        if ( !(_WORD)v47 )
          LOWORD(Buf1) = 0;
        if ( *(_OWORD *)&v99[8] != *(_OWORD *)&v97[8] || memcmp_0(&Buf1, &Buf2, 0x28uLL) )
        {
LABEL_115:
          v62 = v80;
        }
        else
        {
LABEL_101:
          v61 = 0;
          if ( !v85 )
            goto LABEL_115;
          v62 = v80;
          v63 = v89;
          v47 = v86;
          do
          {
            v64 = (CSpatialAudioTechnologies *)(834LL * v61);
            if ( !*(_DWORD *)((char *)v64 + v47 + 784)
              && *(_QWORD *)((char *)v64 + v47 + 768) == *v31
              && *(_QWORD *)((char *)v64 + v47 + 776) == v31[1] )
            {
              v72 = 0;
              v82 = 0;
              TechnologyByID = CSpatialAudioTechnologies::GetTechnologyByID(v64, &v101);
              if ( TechnologyByID
                && (*(unsigned __int8 (__fastcall **)(const struct CSpatialAudioTech *, _QWORD, __int64, unsigned __int16 *, int, unsigned int *, unsigned __int8 *, _BYTE *))(*(_QWORD *)TechnologyByID + 40LL))(
                     TechnologyByID,
                     *(_QWORD *)(a1 + 40),
                     v63,
                     a7,
                     a9,
                     &v82,
                     &v72,
                     v100) )
              {
                v62 = v80;
                if ( !v72 || v80 < v82 )
                  a11[2] = v16;
              }
              else
              {
                v62 = v80;
              }
              v47 = v86;
            }
            ++v61;
          }
          while ( v61 < v85 );
        }
        if ( *(_OWORD *)v31 == i )
          *a11 = v16;
        if ( *v31 == *(_QWORD *)(v93 + 12) && v31[1] == *(_QWORD *)(v93 + 20) )
          a11[1] = v16;
        if ( *v31 == *(_QWORD *)&v101.Data1 && v31[1] == *(_QWORD *)v101.Data4 )
          a11[3] = v16;
        v66 = v88;
        if ( v88[196] && v62 )
        {
          if ( v73 && v62 < v83 && (!(unsigned __int8)IsHrtfEncoder(v31, v47) || (a8 & 8) != 0) )
          {
            v83 = v62;
            a11[4] = v16;
          }
          v67 = v81;
          if ( v62 < v81 && a11[4] != v16 )
          {
            v67 = v62;
            a11[5] = v16;
            v81 = v62;
          }
        }
        else
        {
          v67 = v81;
        }
        v68 = *(_QWORD *)(a1 + 48);
        if ( *(_DWORD *)v68 > 4u
          && (*(_BYTE *)(v68 + 16) & 0x10) != 0
          && (*(_QWORD *)(v68 + 24) & 0x10LL) == *(_QWORD *)(v68 + 24) )
        {
          v91 = v31;
          v21 = v70;
          p_i = &i;
          v72 = a11[5];
          v76 = a11[4];
          LODWORD(v88) = v83;
          v77 = a11[2];
          v78 = a11[1];
          v79[0] = *a11;
          v74 = a11[3];
          v92 = v87;
          v82 = v67;
          v90 = v66;
          v75 = v16;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>>(
            v68,
            (int)&unk_18018DFAE,
            v68,
            (__int64)v66,
            &v92,
            (__int64)&v70,
            (__int64)&v75,
            (__int64 *)&v91,
            &v90,
            (__int64)&v84,
            (__int64)&v74,
            (__int64)v79,
            (__int64)&v78,
            (__int64)&v77,
            (__int64)&v88,
            (__int64)&v76,
            (__int64)&v82,
            (__int64)&v72,
            (__int64 *)&p_i);
          v12 = v89;
          ++v16;
        }
        else
        {
          v21 = v70;
          ++v16;
          v12 = v89;
        }
        goto LABEL_17;
      }
      if ( *(_WORD *)&v100[2] != 2 )
        goto LABEL_28;
      v25 = dword_1801C26DC++;
      if ( (v25 & 0xF) == 0 )
      {
        v26 = *(_QWORD *)(a1 + 48);
        if ( *(_DWORD *)v26 > 4u
          && (*(_BYTE *)(v26 + 16) & 0x10) != 0
          && (*(_QWORD *)(v26 + 24) & 0x10LL) == *(_QWORD *)(v26 + 24) )
        {
          tlgWriteTransfer_EtwEventWriteTransfer(v26, byte_18018E136, 0LL, 0LL, 2, (__int64)&Buf2);
        }
      }
    }
LABEL_17:
    v20 = v71;
  }
  if ( !*(_DWORD *)(a1 + 7728) )
    *(_DWORD *)(a1 + 7728) = 3;
  return v16;
}
