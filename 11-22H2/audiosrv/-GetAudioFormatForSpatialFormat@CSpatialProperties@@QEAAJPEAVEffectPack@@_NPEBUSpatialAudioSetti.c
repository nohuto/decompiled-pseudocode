/*
 * XREFs of ?GetAudioFormatForSpatialFormat@CSpatialProperties@@QEAAJPEAVEffectPack@@_NPEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@3PEAUSpatialAudioRelatedGlobalSettings@@PEAUWAVEFORMATEXTENSIBLE@@PEA_N@Z @ 0x1801532D4
 * Callers:
 *     ?GetAudioFormatForSpatialFormat@EffectPack@@AEAAJPEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@1PEAUWAVEFORMATEXTENSIBLE@@PEA_N@Z @ 0x18014C0B8 (-GetAudioFormatForSpatialFormat@EffectPack@@AEAAJPEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@1P.c)
 * Callees:
 *     GetPreferredSpatialAudioEncoderId @ 0x180019CC0 (GetPreferredSpatialAudioEncoderId.c)
 *     BlockSpatialAudioRegistryGates @ 0x18001E4B4 (BlockSpatialAudioRegistryGates.c)
 *     ?FormFactor@CEndpointCharacteristics@@QEAA?AW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@XZ @ 0x18001FE84 (-FormFactor@CEndpointCharacteristics@@QEAA-AW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@XZ.c)
 *     _tlgKeywordOn @ 0x180020530 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x180025144 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     IsSpatialOnlyFormat @ 0x18002E870 (IsSpatialOnlyFormat.c)
 *     ?GetDeviceFormatAndSpatialSettings@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HPEAPEAUtWAVEFORMATEX@@PEAPEAUSpatialAudioSettings@@PEAIPEAPEAUSpatialAudioEncoderDescriptor@@@Z @ 0x18002EC58 (-GetDeviceFormatAndSpatialSettings@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 *     ?EnumerateSpatialEncoders@CSpatialProperties@@AEAAIPEAVEffectPack@@AEBUSpatialAudioSettings@@W4SpatialRendererSelectionMode@@PEBUtWAVEFORMATEX@@3W4SpatialAudioPolicyFlags@@KPEAUSpatialAudioEncoderDescriptor@@PEAUTechIndexes@@@Z @ 0x180034250 (-EnumerateSpatialEncoders@CSpatialProperties@@AEAAIPEAVEffectPack@@AEBUSpatialAudioSettings@@W4S.c)
 *     ??$GetAsUInt32WithDefault@U_tagpropertykey@@@?$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagpropertykey@@KPEAK@Z @ 0x180043838 (--$GetAsUInt32WithDefault@U_tagpropertykey@@@-$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJ.c)
 *     ??0AudioFormatForLogging@@QEAA@PEBUtWAVEFORMATEX@@@Z @ 0x180044F08 (--0AudioFormatForLogging@@QEAA@PEBUtWAVEFORMATEX@@@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x18004B3A4 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     memset_0 @ 0x180067A54 (memset_0.c)
 *     _alloca_probe @ 0x180075970 (_alloca_probe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180080F6A (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?CopyToWaveFormatExtensible@@YAHPEAUWAVEFORMATEXTENSIBLE@@PEBUtWAVEFORMATEX@@@Z @ 0x1800D9154 (-CopyToWaveFormatExtensible@@YAHPEAUWAVEFORMATEXTENSIBLE@@PEBUtWAVEFORMATEX@@@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByRef@$0BA@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByRef@$0BA@@@@Z @ 0x180151770 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByRef@$0BA@@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByRef@$0BA@@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByRef@$0BA@@@4@Z @ 0x18015192C (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByRef@$0BA@@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvi.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U3@U?$_tlgWrapperByRef@$0BA@@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@5AEBU?$_tlgWrapperByRef@$0BA@@@44@Z @ 0x180152524 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U3@U-$__ea_180152524.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$01@@U5@U5@U5@U2@U2@U4@U5@U5@U5@U2@U2@U4@U5@U5@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$01@@77744677744677@Z @ 0x18015298C (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U-$_tlg_ea_18015298C.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CSpatialProperties::GetAudioFormatForSpatialFormat(
        CSpatialProperties *this,
        struct EffectPack *a2,
        char a3,
        const struct SpatialAudioSettings *a4,
        struct tWAVEFORMATEX *a5,
        struct tWAVEFORMATEX *a6,
        struct SpatialAudioRelatedGlobalSettings *a7,
        struct WAVEFORMATEXTENSIBLE *a8,
        bool *a9)
{
  int AsUInt32With; // edi
  int v11; // r12d
  __int64 v12; // rbx
  __int64 v13; // r15
  void *v14; // r15
  PROPVARIANT *v15; // r13
  struct tWAVEFORMATEX *v16; // rdx
  struct tWAVEFORMATEX *v17; // r8
  _DWORD *v18; // r9
  __int64 v19; // r8
  __int16 v20; // r10
  _DWORD *v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  const WCHAR **v25; // rax
  unsigned __int8 *v26; // rdx
  char v27; // al
  void *v28; // r10
  _DWORD *v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  void *v33; // rdx
  void *v34; // rcx
  _DWORD *v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  _DWORD *v39; // rcx
  __int64 v40; // rcx
  char *v41; // rax
  __int64 v42; // r8
  __int64 v43; // r9
  struct tWAVEFORMATEX *v44; // rcx
  _DWORD *v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // r8
  _DWORD *v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  _DWORD *v54; // rcx
  _DWORD *v55; // rcx
  _DWORD *v56; // rcx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  WORD v60; // ax
  DWORD v61; // edx
  WORD v62; // cx
  int v63; // eax
  _DWORD *v64; // rcx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  LPVOID pv; // [rsp+C0h] [rbp-80h] BYREF
  char v70; // [rsp+C8h] [rbp-78h] BYREF
  char v71; // [rsp+C9h] [rbp-77h]
  __int16 v72; // [rsp+CAh] [rbp-76h] BYREF
  _WORD v73[2]; // [rsp+CCh] [rbp-74h] BYREF
  int v74; // [rsp+D0h] [rbp-70h] BYREF
  int v75; // [rsp+D4h] [rbp-6Ch] BYREF
  int v76; // [rsp+D8h] [rbp-68h] BYREF
  __int16 v77; // [rsp+DCh] [rbp-64h] BYREF
  __int16 v78; // [rsp+DEh] [rbp-62h] BYREF
  __int16 v79; // [rsp+E0h] [rbp-60h] BYREF
  __int16 v80; // [rsp+E2h] [rbp-5Eh] BYREF
  __int16 v81; // [rsp+E4h] [rbp-5Ch] BYREF
  int v82; // [rsp+E8h] [rbp-58h] BYREF
  __int128 v83; // [rsp+F0h] [rbp-50h] BYREF
  struct tWAVEFORMATEX *v84; // [rsp+100h] [rbp-40h]
  struct tWAVEFORMATEX *v85; // [rsp+108h] [rbp-38h]
  const struct SpatialAudioSettings *v86; // [rsp+110h] [rbp-30h]
  bool *v87; // [rsp+118h] [rbp-28h]
  int v88; // [rsp+120h] [rbp-20h] BYREF
  int v89; // [rsp+124h] [rbp-1Ch] BYREF
  int v90; // [rsp+128h] [rbp-18h] BYREF
  const WCHAR *v91; // [rsp+130h] [rbp-10h] BYREF
  PROPVARIANT *v92; // [rsp+138h] [rbp-8h] BYREF
  EffectPack *v93; // [rsp+140h] [rbp+0h]
  char *v94; // [rsp+148h] [rbp+8h] BYREF
  PROPVARIANT pvar[2]; // [rsp+150h] [rbp+10h] BYREF
  __int64 v96; // [rsp+160h] [rbp+20h]
  _WORD v97[2]; // [rsp+170h] [rbp+30h] BYREF
  int v98; // [rsp+174h] [rbp+34h]
  __int16 v99; // [rsp+178h] [rbp+38h]
  __int16 v100; // [rsp+17Ah] [rbp+3Ah]
  char v101; // [rsp+17Ch] [rbp+3Ch] BYREF
  int v102; // [rsp+18Ch] [rbp+4Ch]
  __int128 v103; // [rsp+190h] [rbp+50h] BYREF
  _DWORD v104[3]; // [rsp+1A0h] [rbp+60h] BYREF
  __int128 v105; // [rsp+1ACh] [rbp+6Ch]
  __int128 v106; // [rsp+1BCh] [rbp+7Ch]
  int v107; // [rsp+1E4h] [rbp+A4h]
  _WORD v108[2]; // [rsp+1F0h] [rbp+B0h] BYREF
  int v109; // [rsp+1F4h] [rbp+B4h]
  __int16 v110; // [rsp+1F8h] [rbp+B8h]
  __int16 v111; // [rsp+1FAh] [rbp+BAh]
  _BYTE v112[16]; // [rsp+1FCh] [rbp+BCh] BYREF
  int v113; // [rsp+20Ch] [rbp+CCh]
  _BYTE v114[7520]; // [rsp+210h] [rbp+D0h] BYREF

  v86 = a4;
  v71 = a3;
  v93 = a2;
  v85 = a6;
  v84 = a5;
  v87 = a9;
  AsUInt32With = 0;
  v11 = BlockSpatialAudioRegistryGates();
  v75 = 0;
  memset_0(v104, 0, 0x48uLL);
  v12 = *((_QWORD *)this + 7);
  *(_QWORD *)&v83 = v12;
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  *(_QWORD *)&v103 = this;
  v13 = *((_QWORD *)this + 5);
  if ( v13 && *((_QWORD *)this + 8) )
  {
    v14 = *(void **)(v13 + 48);
    *((_BYTE *)this + 99) = 1;
    if ( !v87
      || (*v87 = 0, !a8)
      || (*(_OWORD *)&a8->Format.wFormatTag = 0LL,
          *(_OWORD *)&a8->Format.cbSize = 0LL,
          *(_QWORD *)a8->SubFormat.Data4 = 0LL,
          !v86)
      || !a6 )
    {
      AsUInt32With = -2147467261;
      goto LABEL_94;
    }
    v104[0] = *(_DWORD *)v86;
    v15 = (PROPVARIANT *)((char *)v86 + 12);
    v105 = *(_OWORD *)((char *)v86 + 12);
    v106 = v105;
    v107 = *((_DWORD *)v86 + 17);
    v74 = CEndpointCharacteristics::FormFactor(*((CEndpointCharacteristics **)this + 5));
    AsUInt32With = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 10) + 32LL))(
                     *((_QWORD *)this + 10),
                     &v75);
    if ( AsUInt32With >= 0 )
    {
      if ( (v11 & 2) != 0 )
      {
        if ( v74 == 1 )
        {
          *(_OWORD *)pvar = 0LL;
          v96 = 0LL;
          if ( (*(int (__fastcall **)(_QWORD, void *, PROPVARIANT *))(**((_QWORD **)this + 7) + 40LL))(
                 *((_QWORD *)this + 7),
                 &PKEY_Endpoint_SpatialNotAllowed,
                 pvar) < 0
            || !LOWORD(pvar[0])
            || LOWORD(pvar[0]) == 11 && !LOWORD(pvar[1]) )
          {
            v11 &= ~2u;
          }
          PropVariantClear(pvar);
        }
        else
        {
          v11 &= ~2u;
        }
      }
      AudioFormatForLogging::AudioFormatForLogging((AudioFormatForLogging *)v108, v84);
      AudioFormatForLogging::AudioFormatForLogging((AudioFormatForLogging *)v97, v85);
      v18 = (_DWORD *)*((_QWORD *)this + 6);
      if ( *v18 > 4u )
      {
        if ( tlgKeywordOn(*((_QWORD *)this + 6), 16LL) )
        {
          v77 = v100;
          v78 = v99;
          v94 = &v101;
          v88 = v98;
          v89 = v102;
          v79 = v97[0];
          v80 = v111;
          v81 = v110;
          v91 = (const WCHAR *)v112;
          v90 = v109;
          v82 = v113;
          LOWORD(v76) = v108[0];
          v72 = v20;
          v73[0] = v75;
          LOWORD(v74) = *((_WORD *)v86 + 34);
          v92 = v15;
          v70 = *(_BYTE *)v86;
          LODWORD(pv) = v11;
          pvar[0] = v14;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>>(
            (__int64)v18,
            byte_180197127,
            v19,
            (__int64)v18,
            (const WCHAR **)pvar,
            (__int64)&pv,
            (__int64)&v70,
            (__int64 *)&v92,
            (__int64)&v74,
            (__int64)v73,
            (__int64)&v72,
            (__int64)&v76,
            (__int64)&v82,
            (__int64)&v90,
            (__int64 *)&v91,
            (__int64)&v81,
            (__int64)&v80,
            (__int64)&v79,
            (__int64)&v89,
            (__int64)&v88,
            (__int64 *)&v94,
            (__int64)&v78,
            (__int64)&v77);
        }
        v17 = v84;
        v16 = v85;
      }
      if ( *(_DWORD *)v86 )
      {
        if ( v71 )
        {
          v39 = (_DWORD *)*((_QWORD *)this + 6);
          if ( *v39 > 4u && tlgKeywordOn((__int64)v39, 16LL) )
            tlgWriteTransfer_EtwEventWriteTransfer(v40, byte_18019701C, 0LL, 0LL, 2, (__int64)v108);
          goto LABEL_32;
        }
        *(_OWORD *)pvar = *GetPreferredSpatialAudioEncoderId(pvar, v75, (__int64)v104);
        v41 = (char *)((char *)pvar[0] - (char *)*v15);
        if ( pvar[0] == *v15 )
          v41 = (char *)((char *)pvar[1] - (char *)v15[1]);
        if ( v41 )
        {
          if ( **((_DWORD **)this + 6) > 4u && tlgKeywordOn(*((_QWORD *)this + 6), 16LL) )
          {
            v103 = *GetPreferredSpatialAudioEncoderId(&v83, v75, (__int64)v104);
            pvar[0] = &v103;
            v92 = v15;
            v91 = (const WCHAR *)v14;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>>(
              v43,
              byte_180196FAE,
              v42,
              v43,
              &v91,
              (__int64 *)&v92,
              (__int64 *)pvar);
          }
          goto LABEL_32;
        }
        *(_DWORD *)((char *)&pv + 1) = -1;
        LOBYTE(pv) = -1;
        v76 = 2;
        memset_0(v114, 0, 0x1D52uLL);
        if ( g_ListOfSpatialTech[0] <= 9u )
        {
          *(_OWORD *)pvar = PKEY_Endpoint_PreferedPcmChannelCountForHrtf;
          LODWORD(v96) = 2;
          AsUInt32With = CPropertyStoreHelperBase<IPropertyStore>::GetAsUInt32WithDefault<_tagpropertykey>(
                           &v83,
                           (__int128 *)pvar,
                           2u,
                           (ULONG *)&v76);
          if ( AsUInt32With >= 0 )
          {
            v44 = v85;
            if ( v84 )
              v44 = 0LL;
            CSpatialProperties::EnumerateSpatialEncoders(
              (__int64)this,
              (__int64)v93,
              (__int64)v104,
              v75,
              (__int64)v44,
              (__int64)v84,
              v11,
              v76,
              (__int64)v114,
              (__int64)&pv);
            if ( BYTE1(pv) == 0xFF )
            {
              v45 = (_DWORD *)*((_QWORD *)this + 6);
              if ( *v45 > 2u && tlgKeywordOn((__int64)v45, 16LL) )
              {
                *(_QWORD *)&v83 = v15;
                pvar[0] = v14;
                _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>>(
                  v46,
                  byte_180196E46,
                  v47,
                  v48,
                  (const WCHAR **)pvar,
                  (__int64 *)&v83);
              }
              goto LABEL_32;
            }
            v49 = 834LL * BYTE1(pv);
            if ( *(_DWORD *)&v114[v49 + 784] )
            {
              if ( *(_BYTE *)a7 )
              {
                v54 = (_DWORD *)*((_QWORD *)this + 6);
                if ( *v54 <= 2u || !tlgKeywordOn((__int64)v54, 16LL) )
                  goto LABEL_32;
                *(_QWORD *)&v83 = v14;
                v25 = (const WCHAR **)&v83;
                v26 = (unsigned __int8 *)&unk_180196EE2;
                goto LABEL_31;
              }
              if ( *((_DWORD *)v86 + 17) == 1 && (v11 & 4) != 0 )
              {
                v55 = (_DWORD *)*((_QWORD *)this + 6);
                if ( *v55 <= 2u || !tlgKeywordOn((__int64)v55, 16LL) )
                  goto LABEL_32;
                *(_QWORD *)&v83 = v14;
                v25 = (const WCHAR **)&v83;
                v26 = (unsigned __int8 *)&unk_180196E9D;
                goto LABEL_31;
              }
              if ( (v11 & 3) != 0 )
              {
                v56 = (_DWORD *)*((_QWORD *)this + 6);
                if ( *v56 > 2u && tlgKeywordOn((__int64)v56, 16LL) )
                {
                  LODWORD(pv) = v11;
                  *(_QWORD *)&v83 = v14;
                  _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
                    v57,
                    byte_180196BE9,
                    v58,
                    v59,
                    (const WCHAR **)&v83,
                    (__int64)&pv);
                }
                goto LABEL_32;
              }
              a8->Format.wFormatTag = -2;
              v60 = *(_WORD *)&v114[v49 + 828];
              a8->Format.nChannels = v60;
              v61 = *(_DWORD *)&v114[v49 + 804];
              a8->Format.nSamplesPerSec = v61;
              v62 = *(_WORD *)&v114[v49 + 830];
              a8->Format.wBitsPerSample = v62;
              v63 = (unsigned __int16)(v60 * (v62 >> 3));
              a8->Format.nBlockAlign = v63;
              a8->Format.nAvgBytesPerSec = v61 * v63;
              a8->Format.cbSize = 22;
              a8->dwChannelMask = *(_DWORD *)&v114[v49 + 808];
              a8->SubFormat = *(GUID *)&v114[v49 + 812];
              a8->Samples.wValidBitsPerSample = *(_WORD *)&v114[v49 + 832];
              AudioFormatForLogging::AudioFormatForLogging((AudioFormatForLogging *)v108, &a8->Format);
              v64 = (_DWORD *)*((_QWORD *)this + 6);
              if ( *v64 > 4u && tlgKeywordOn((__int64)v64, 16LL) )
              {
                LOWORD(v74) = v111;
                v73[0] = v110;
                *(_QWORD *)&v83 = v112;
                LODWORD(pv) = v109;
                v82 = v113;
                v72 = v108[0];
                pvar[0] = v14;
                _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>>(
                  v65,
                  byte_180196B62,
                  v66,
                  v67,
                  (const WCHAR **)pvar,
                  (__int64)&v72,
                  (__int64)&v82,
                  (__int64)&pv,
                  (__int64 *)&v83,
                  (__int64)v73,
                  (__int64)&v74);
              }
              *v87 = 1;
            }
            else
            {
              v50 = (_DWORD *)*((_QWORD *)this + 6);
              if ( *v50 > 2u && tlgKeywordOn((__int64)v50, 16LL) )
              {
                *(_QWORD *)&v83 = v15;
                pvar[0] = v14;
                _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>>(
                  v51,
                  byte_180196DF0,
                  v52,
                  v53,
                  (const WCHAR **)pvar,
                  (__int64 *)&v83);
              }
              AsUInt32With = -2147009035;
            }
          }
        }
        else
        {
          AsUInt32With = -2147418113;
        }
      }
      else
      {
        if ( v17 )
        {
          if ( v17->wFormatTag == 0xFFFE
            && IsSpatialOnlyFormat(
                 (DWORD *)((char *)&v17[1].nSamplesPerSec + 2),
                 (__int64)v16,
                 (__int64)v17,
                 (__int64)v18) )
          {
            v21 = (_DWORD *)*((_QWORD *)this + 6);
            if ( *v21 <= 2u || !tlgKeywordOn((__int64)v21, 16LL) )
              goto LABEL_32;
            pvar[0] = v14;
            v25 = (const WCHAR **)pvar;
            v26 = (unsigned __int8 *)&unk_1801970E0;
LABEL_31:
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
              v22,
              v26,
              v23,
              v24,
              v25);
LABEL_32:
            AsUInt32With = -2147024846;
            goto LABEL_94;
          }
          goto LABEL_49;
        }
        if ( v16->wFormatTag != 0xFFFE
          || (v27 = IsSpatialOnlyFormat((DWORD *)((char *)&v16[1].nSamplesPerSec + 2), (__int64)v16, 0LL, (__int64)v18),
              v28 = 0LL,
              !v27) )
        {
LABEL_49:
          v35 = (_DWORD *)*((_QWORD *)this + 6);
          if ( *v35 > 4u && tlgKeywordOn((__int64)v35, 16LL) )
          {
            pvar[0] = v14;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
              v36,
              byte_180196F23,
              v37,
              v38,
              (const WCHAR **)pvar);
          }
          *v87 = 0;
          goto LABEL_94;
        }
        v29 = (_DWORD *)*((_QWORD *)this + 6);
        if ( *v29 > 4u && tlgKeywordOn((__int64)v29, 16LL) )
        {
          pvar[0] = v14;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
            v30,
            byte_180196F65,
            v31,
            v32,
            (const WCHAR **)pvar);
          v28 = 0LL;
        }
        pv = v28;
        pvar[0] = &pv;
        pvar[1] = v28;
        LOBYTE(v96) = 1;
        AsUInt32With = EffectPack::GetDeviceFormatAndSpatialSettings(
                         (CEndpointCharacteristics **)v93,
                         0,
                         1LL,
                         (struct tWAVEFORMATEX **)&pvar[1],
                         (struct SpatialAudioSettings **)v28,
                         (unsigned int *)v28,
                         (struct SpatialAudioEncoderDescriptor **)v28);
        if ( (_BYTE)v96 )
        {
          v33 = *(void **)pvar[0];
          *(_QWORD *)pvar[0] = pvar[1];
          if ( v33 )
            CoTaskMemFree(v33);
        }
        if ( AsUInt32With >= 0 )
        {
          if ( (unsigned int)CopyToWaveFormatExtensible(a8, (const struct tWAVEFORMATEX *)pv) )
            *v87 = 1;
          else
            AsUInt32With = -2147418113;
          v34 = pv;
          pv = 0LL;
        }
        else
        {
          v34 = pv;
          pv = 0LL;
        }
        if ( v34 )
          CoTaskMemFree(v34);
      }
    }
  }
LABEL_94:
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  return (unsigned int)AsUInt32With;
}
