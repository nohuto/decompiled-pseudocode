/*
 * XREFs of ?EnumerateSpatialEncoders@CSpatialProperties@@AEAAIPEAVEffectPack@@AEBUSpatialAudioSettings@@W4SpatialRendererSelectionMode@@PEBUtWAVEFORMATEX@@3W4SpatialAudioPolicyFlags@@KPEAUSpatialAudioEncoderDescriptor@@PEAUTechIndexes@@@Z @ 0x180034250
 * Callers:
 *     ?SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAXPEAVEffectPack@@_NPEBUtWAVEFORMATEX@@PEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x18002EE90 (-SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAXPEAVEffectPack@@_NPEBUtWAVEFORMATEX@@P.c)
 *     ?GetSpatialFormatForAudioFormat@CSpatialProperties@@QEAAJPEAVEffectPack@@_NPEBUtWAVEFORMATEX@@PEAUSpatialAudioSettings@@@Z @ 0x180060AC4 (-GetSpatialFormatForAudioFormat@CSpatialProperties@@QEAAJPEAVEffectPack@@_NPEBUtWAVEFORMATEX@@PE.c)
 *     ?SetSpatialAudioSettings@CSpatialProperties@@QEAAXPEAVEffectPack@@PEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@PEAUSpatialAudioRelatedGlobalSettings@@_N@Z @ 0x1800612A0 (-SetSpatialAudioSettings@CSpatialProperties@@QEAAXPEAVEffectPack@@PEBUSpatialAudioSettings@@PEBU.c)
 *     ?GetAudioFormatForSpatialFormat@CSpatialProperties@@QEAAJPEAVEffectPack@@_NPEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@3PEAUSpatialAudioRelatedGlobalSettings@@PEAUWAVEFORMATEXTENSIBLE@@PEA_N@Z @ 0x1801532D4 (-GetAudioFormatForSpatialFormat@CSpatialProperties@@QEAAJPEAVEffectPack@@_NPEBUSpatialAudioSetti.c)
 * Callees:
 *     GetPreferredSpatialAudioEncoderId @ 0x180019CC0 (GetPreferredSpatialAudioEncoderId.c)
 *     ?FormFactor@CEndpointCharacteristics@@QEAA?AW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@XZ @ 0x18001FE84 (-FormFactor@CEndpointCharacteristics@@QEAA-AW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@XZ.c)
 *     _tlgKeywordOn @ 0x180020530 (_tlgKeywordOn.c)
 *     DoesPlatformSupportSpatialAudio @ 0x180021C94 (DoesPlatformSupportSpatialAudio.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x180025144 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     IsHrtfEncoder @ 0x180056B88 (IsHrtfEncoder.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     memset_0 @ 0x180067A54 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$00@@U2@U?$_tlgWrapperByRef@$0BA@@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$00@@4AEBU?$_tlgWrapperByRef@$0BA@@@3@Z @ 0x180151BF8 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$00@@U2@U-$_tlgWrapperByRef@$0BA@@@U1@@-$_tlgWrite.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$00@@U2@U?$_tlgWrapperByRef@$0BA@@@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U4@U2@U4@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$00@@4AEBU?$_tlgWrapperByRef@$0BA@@@3AEBU?$_tlgWrapperByVal@$03@@44464645@Z @ 0x180151D0C (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$00@@U2@U-$_tlgWrapperByRef@$0BA@@@U1@U-$_tlgWrapp.c)
 */

__int64 __fastcall CSpatialProperties::EnumerateSpatialEncoders(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        char a7,
        int a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v11; // rdi
  unsigned __int8 v14; // r12
  unsigned __int8 v15; // si
  unsigned __int8 v16; // r14
  __int64 v17; // rbx
  int v18; // eax
  __int64 v19; // rdi
  int v20; // eax
  __int128 v21; // xmm0
  __int64 v22; // rax
  __int64 v23; // r15
  __int64 v24; // r8
  _WORD *v25; // rdx
  __int64 v26; // r9
  __int16 v27; // ax
  __int64 v28; // rax
  _WORD *v29; // rcx
  __int64 v30; // r8
  _QWORD *v31; // rsi
  __int64 v32; // r9
  __int64 v33; // rdx
  __int16 v34; // ax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // r8
  unsigned int v42; // r8d
  char v43; // cl
  _DWORD *v44; // rcx
  __int64 v45; // rcx
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  _DWORD *v48; // rcx
  int v49; // ecx
  int v50; // r8d
  int v51; // r9d
  char v52; // [rsp+90h] [rbp-80h]
  unsigned __int8 v53; // [rsp+91h] [rbp-7Fh] BYREF
  unsigned __int8 v54; // [rsp+92h] [rbp-7Eh] BYREF
  char v55; // [rsp+93h] [rbp-7Dh] BYREF
  unsigned __int8 v56; // [rsp+94h] [rbp-7Ch] BYREF
  unsigned __int8 v57; // [rsp+95h] [rbp-7Bh] BYREF
  unsigned __int8 v58; // [rsp+96h] [rbp-7Ah] BYREF
  unsigned __int8 v59; // [rsp+97h] [rbp-79h] BYREF
  char v60[4]; // [rsp+98h] [rbp-78h] BYREF
  unsigned int v61; // [rsp+9Ch] [rbp-74h]
  unsigned int v62; // [rsp+A0h] [rbp-70h]
  int v63; // [rsp+A4h] [rbp-6Ch] BYREF
  unsigned __int8 *v64; // [rsp+A8h] [rbp-68h]
  unsigned int v65; // [rsp+B0h] [rbp-60h] BYREF
  __int64 v66; // [rsp+B8h] [rbp-58h]
  unsigned int v67; // [rsp+C0h] [rbp-50h] BYREF
  unsigned int v68; // [rsp+C4h] [rbp-4Ch] BYREF
  __int64 v69; // [rsp+C8h] [rbp-48h] BYREF
  __int64 v70; // [rsp+D0h] [rbp-40h] BYREF
  __int64 v71; // [rsp+D8h] [rbp-38h]
  __int64 v72; // [rsp+E0h] [rbp-30h]
  __int64 v73; // [rsp+E8h] [rbp-28h]
  __int64 v74; // [rsp+F0h] [rbp-20h]
  __int64 v75; // [rsp+F8h] [rbp-18h]
  __int128 *v76; // [rsp+100h] [rbp-10h] BYREF
  _BYTE v77[40]; // [rsp+108h] [rbp-8h] BYREF
  __int128 v78; // [rsp+130h] [rbp+20h] BYREF
  char v79[16]; // [rsp+140h] [rbp+30h] BYREF
  _OWORD v80[2]; // [rsp+150h] [rbp+40h] BYREF

  v11 = a5;
  v72 = a6;
  v74 = a9;
  v75 = a3;
  v73 = a2;
  v71 = a5;
  *(_DWORD *)(a10 + 1) = -1;
  *(_BYTE *)a10 = -1;
  v64 = (unsigned __int8 *)a10;
  if ( DoesPlatformSupportSpatialAudio() )
  {
    v52 = g_ListOfSpatialTech[0];
    v14 = 0;
    v66 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 48LL);
    v62 = -1;
    v61 = -1;
    v15 = g_ListOfSpatialTech[0];
    v16 = 0;
    v78 = *GetPreferredSpatialAudioEncoderId(v80, a4, a3);
    if ( v52 )
    {
      do
      {
        v65 = 0;
        v55 = 0;
        memset(v77, 0, sizeof(v77));
        if ( v16 < (unsigned int)g_ListOfSpatialTech[0] )
        {
          v17 = qword_1801D00B8[v16];
          if ( v17 )
          {
            if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64, __int64, int, unsigned int *, char *, _BYTE *))(*(_QWORD *)v17 + 40LL))(
                   v17,
                   v73,
                   v11,
                   v72,
                   a8,
                   &v65,
                   &v55,
                   v77) )
            {
              v18 = *(_DWORD *)(a1 + 7728);
              if ( v18 != 2 )
              {
                if ( !v18
                  && v11
                  && *(_WORD *)(v11 + 2) == 8
                  && *(_WORD *)&v77[2] == 2
                  && (unsigned int)CEndpointCharacteristics::FormFactor(*(CEndpointCharacteristics **)(a1 + 40)) != 9 )
                {
                  v46 = *(_OWORD *)v77;
                  *(_DWORD *)(a1 + 7728) = 1;
                  v47 = *(_OWORD *)&v77[16];
                  *(_OWORD *)(a1 + 7732) = v46;
                  *(_QWORD *)&v46 = *(_QWORD *)&v77[32];
                  *(_OWORD *)(a1 + 7748) = v47;
                  *(_QWORD *)(a1 + 7764) = v46;
                }
LABEL_8:
                v63 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 32LL))(v17, v66);
                v19 = v74 + 834LL * v14;
                *(_DWORD *)(v19 + 784) = v63 >= 0;
                *(_OWORD *)(v19 + 768) = *(_OWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v17 + 16LL))(
                                                      v17,
                                                      v79);
                *(_DWORD *)(v19 + 788) = (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v17 + 48LL))(v17);
                *(_DWORD *)(v19 + 792) = (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v17 + 56LL))(v17);
                *(_DWORD *)(v19 + 796) = (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v17 + 72LL))(v17);
                v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 64LL))(v17);
                v21 = *(_OWORD *)&v77[24];
                *(_DWORD *)(v19 + 800) = v20;
                *(_DWORD *)(v19 + 804) = *(_DWORD *)&v77[4];
                *(_DWORD *)(v19 + 808) = *(_DWORD *)&v77[20];
                *(_WORD *)(v19 + 828) = *(_WORD *)&v77[2];
                *(_WORD *)(v19 + 830) = *(_WORD *)&v77[14];
                *(_WORD *)(v19 + 832) = *(_WORD *)&v77[18];
                *(_OWORD *)(v19 + 812) = v21;
                v22 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
                v23 = v75;
                v24 = 256LL;
                v25 = (_WORD *)v19;
                v26 = v22 - v19;
                while ( v24 != -2147483390 )
                {
                  v27 = *(_WORD *)((char *)v25 + v26);
                  if ( !v27 )
                    break;
                  *v25++ = v27;
                  if ( !--v24 )
                  {
                    --v25;
                    break;
                  }
                }
                *v25 = 0;
                v28 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v17 + 24LL))(
                        v17,
                        v66,
                        v24,
                        v26);
                v29 = (_WORD *)(v19 + 512);
                v30 = 128LL;
                v31 = (_QWORD *)(v19 + 768);
                v32 = v28 - (v19 + 512);
                while ( 1 )
                {
                  v33 = v30 + 2147483518;
                  if ( v30 == -2147483518 )
                    break;
                  v34 = *(_WORD *)((char *)v29 + v32);
                  if ( !v34 )
                    break;
                  *v29++ = v34;
                  if ( !--v30 )
                  {
                    --v29;
                    break;
                  }
                }
                *v29 = 0;
                v35 = *v31 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
                if ( *v31 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
                  v35 = *(_QWORD *)(v19 + 776) - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
                if ( !v35 )
                  goto LABEL_69;
                v36 = -1LL;
                do
                  ++v36;
                while ( *(_WORD *)(v19 + 2 * v36) );
                if ( v36 )
                {
                  v37 = *v31 - v78;
                  if ( *v31 == (_QWORD)v78 )
                    v37 = *(_QWORD *)(v19 + 776) - *((_QWORD *)&v78 + 1);
                  if ( !v37 )
                    *v64 = v14;
                  v38 = *v31 - *(_QWORD *)(v23 + 12);
                  if ( *v31 == *(_QWORD *)(v23 + 12) )
                    v38 = *(_QWORD *)(v19 + 776) - *(_QWORD *)(v23 + 20);
                  if ( !v38 )
                    v64[1] = v14;
                  v39 = *v31 - *(_QWORD *)(v23 + 28);
                  if ( *v31 == *(_QWORD *)(v23 + 28) )
                    v39 = *(_QWORD *)(v19 + 776) - *(_QWORD *)(v23 + 36);
                  if ( !v39 )
                    v64[2] = v14;
                  if ( *(_DWORD *)(v19 + 784) )
                  {
                    v42 = v65;
                    if ( v65 )
                    {
                      if ( v55
                        && v65 < v62
                        && (!(unsigned __int8)IsHrtfEncoder(v19 + 768, v33, v65, v32) || (a7 & 8) != 0) )
                      {
                        v62 = v42;
                        v64[3] = v14;
                      }
                      if ( v42 < v61 && v64[3] != v14 )
                      {
                        v61 = v42;
                        v64[4] = v14;
                      }
                    }
                  }
                  v40 = *(_QWORD *)(a1 + 48);
                  if ( *(_DWORD *)v40 > 4u
                    && (*(_BYTE *)(v40 + 16) & 0x10) != 0
                    && (*(_QWORD *)(v40 + 24) & 0x10LL) == *(_QWORD *)(v40 + 24) )
                  {
                    v76 = &v78;
                    v69 = v19;
                    v70 = v19 + 768;
                    v56 = v64[4];
                    v67 = v61;
                    v57 = v64[3];
                    v68 = v62;
                    v58 = v64[1];
                    v59 = *v64;
                    v60[0] = v64[2];
                    *(_QWORD *)&v80[0] = v66;
                    v53 = v14;
                    v54 = v16;
                    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>>(
                      v40,
                      (unsigned int)&unk_180198247,
                      v40,
                      v32,
                      (__int64)v80,
                      (__int64)&v54,
                      (__int64)&v53,
                      (__int64)&v70,
                      (__int64)&v69,
                      (__int64)&v63,
                      (__int64)v60,
                      (__int64)&v59,
                      (__int64)&v58,
                      (__int64)&v68,
                      (__int64)&v57,
                      (__int64)&v67,
                      (__int64)&v56,
                      (__int64)&v76);
                  }
                  ++v14;
                }
                else
                {
LABEL_69:
                  v48 = *(_DWORD **)(a1 + 48);
                  if ( *v48 > 2u && tlgKeywordOn((__int64)v48, 16LL) )
                  {
                    v69 = v66;
                    *(_QWORD *)&v80[0] = v19;
                    v70 = v19 + 768;
                    v54 = v14;
                    v53 = v16;
                    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>>(
                      v49,
                      (unsigned int)&unk_180198361,
                      v50,
                      v51,
                      (__int64)&v69,
                      (__int64)&v53,
                      (__int64)&v54,
                      (__int64)&v70,
                      (__int64)v80);
                  }
                  memset_0((void *)v19, 0, 0x342uLL);
                }
                v15 = v52;
                v11 = v71;
                goto LABEL_41;
              }
              if ( *(_WORD *)&v77[2] != 2 )
                goto LABEL_8;
              v43 = dword_1801D0678++;
              if ( (v43 & 0xF) == 0 )
              {
                v44 = *(_DWORD **)(a1 + 48);
                if ( *v44 > 4u )
                {
                  if ( tlgKeywordOn((__int64)v44, 16LL) )
                    tlgWriteTransfer_EtwEventWriteTransfer(v45, byte_1801983C1, 0LL, 0LL, 2, (__int64)v80);
                }
              }
            }
          }
        }
LABEL_41:
        ++v16;
      }
      while ( v16 < v15 );
    }
    if ( !*(_DWORD *)(a1 + 7728) )
      *(_DWORD *)(a1 + 7728) = 3;
    return v14;
  }
  else
  {
    *(_DWORD *)(a1 + 7728) = 3;
    return 0LL;
  }
}
