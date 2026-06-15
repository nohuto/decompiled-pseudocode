/*
 * XREFs of CEndpointCharacteristics::GetDeviceFormatInternal__lambda_cc1fbeea7d61a5d688c074f297f6e07b___ @ 0x18002E210
 * Callers:
 *     ?GetDeviceFormat@CEndpointCharacteristics@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18000CA8C (-GetDeviceFormat@CEndpointCharacteristics@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_.c)
 *     ?GetProcessingPeriod@CEndpointCharacteristics@@QEAAJHPEA_J0@Z @ 0x18002C880 (-GetProcessingPeriod@CEndpointCharacteristics@@QEAAJHPEA_J0@Z.c)
 *     ?GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x18002F320 (-GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 *     ?GetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HPEAPEAUtWAVEFORMATEX@@PEAPEAUSpatialAudioSettings@@PEAIPEAPEAUSpatialAudioEncoderDescriptor@@@Z @ 0x18003EB14 (-GetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengin.c)
 * Callees:
 *     ??A?$span@VCAudioSignalProcessingModeMap@@$0?0@gsl@@QEBAAEAVCAudioSignalProcessingModeMap@@_K@Z @ 0x18000ED54 (--A-$span@VCAudioSignalProcessingModeMap@@$0-0@gsl@@QEBAAEAVCAudioSignalProcessingModeMap@@_K@Z.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     memcmp_0 @ 0x18006251D (memcmp_0.c)
 *     memcpy_0 @ 0x180062529 (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C5F8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     CEndpointCharacteristics::GetDefaultFormat__lambda_cc1fbeea7d61a5d688c074f297f6e07b___ @ 0x1801425C8 (CEndpointCharacteristics--GetDefaultFormat__lambda_cc1fbeea7d61a5d688c074f297f6e07b___.c)
 *     ?Log_Win32@in1diag3@details@wil@@YAKPEAXIPEBDK@Z @ 0x18014B678 (-Log_Win32@in1diag3@details@wil@@YAKPEAXIPEBDK@Z.c)
 *     ?Log_Win32Msg@in1diag3@details@wil@@YAKPEAXIPEBDK1ZZ @ 0x18014B69C (-Log_Win32Msg@in1diag3@details@wil@@YAKPEAXIPEBDK1ZZ.c)
 *     ?Lookup@CAudioSignalProcessingModeMap@@QEAA?AU_GUID@@U2@@Z @ 0x18014B6D8 (-Lookup@CAudioSignalProcessingModeMap@@QEAA-AU_GUID@@U2@@Z.c)
 *     ?UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18014D3F4 (-UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineen.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CEndpointCharacteristics::GetDeviceFormatInternal__lambda_cc1fbeea7d61a5d688c074f297f6e07b___(
        CEndpointCharacteristics *this,
        char a2,
        bool a3,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a4,
        __int64 *a5,
        LPVOID *a6)
{
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v6; // r12d
  bool v7; // r13
  CEndpointCharacteristics *v8; // rbx
  LPVOID *v9; // rdi
  const PROPERTYKEY *v10; // rax
  int v11; // eax
  unsigned int v12; // r8d
  const char *v13; // r9
  unsigned __int16 *v14; // rsi
  __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  __int64 v17; // rbx
  struct _GUID v18; // xmm0
  __int64 v19; // rax
  int v20; // r10d
  int v21; // r9d
  struct _GUID *v22; // rax
  struct _GUID v23; // xmm0
  GUID v24; // kr00_16
  __int64 v25; // rax
  _QWORD *v26; // rdi
  _QWORD *v27; // rdx
  _QWORD *v28; // rcx
  __int64 v29; // rax
  unsigned __int16 ***v30; // r15
  unsigned __int16 *v31; // rcx
  int v32; // edx
  unsigned __int16 v33; // ax
  int v34; // r10d
  __int16 v35; // r11
  int v36; // edx
  unsigned __int16 v37; // ax
  int v38; // r9d
  __int16 v39; // bx
  __int16 v40; // dx
  int v41; // ecx
  __int16 v42; // ax
  __int64 v43; // rax
  __int64 v44; // rbx
  void *v45; // rax
  void *v46; // rdi
  unsigned int v47; // ebx
  int v48; // r11d
  int v49; // r9d
  int v50; // r10d
  int v51; // ebx
  unsigned __int16 v52; // dx
  __int64 v53; // rdx
  __int64 v54; // rax
  unsigned __int16 v55; // dx
  unsigned __int16 v56; // ax
  int v57; // edx
  void *v58; // rax
  int DefaultFormat__lambda_cc1fbeea7d61a5d688c074f297f6e07b; // edi
  void *v61; // rcx
  __int64 v62; // r11
  __int64 v63; // rax
  CAudioSignalProcessingModeMap *v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  unsigned __int16 v67; // r8
  unsigned __int16 v68; // r9
  __int64 v69; // rax
  __int64 v70; // rax
  unsigned __int16 v71; // r8
  unsigned __int16 v72; // r9
  unsigned __int64 v73; // r9
  __int64 v74; // rdx
  int v75; // edi
  void *v76; // rcx
  int updated; // eax
  __int64 v78; // rdx
  unsigned __int16 v79; // ax
  int v80; // edx
  unsigned int v81; // [rsp+20h] [rbp-E0h]
  char *v82; // [rsp+28h] [rbp-D8h]
  LPVOID pv; // [rsp+48h] [rbp-B8h] BYREF
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v85; // [rsp+50h] [rbp-B0h]
  LPVOID *v86; // [rsp+58h] [rbp-A8h]
  PROPVARIANT pvar[2]; // [rsp+60h] [rbp-A0h] BYREF
  void *Src; // [rsp+70h] [rbp-90h]
  CEndpointCharacteristics *v89; // [rsp+78h] [rbp-88h]
  unsigned __int16 ***v90; // [rsp+80h] [rbp-80h]
  __int128 Buf2; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v92[24]; // [rsp+98h] [rbp-68h]
  __int128 Buf1; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v94[24]; // [rsp+C0h] [rbp-40h]
  struct _GUID v95; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v96; // [rsp+F0h] [rbp-10h]
  struct _GUID v97; // [rsp+100h] [rbp+0h] BYREF
  char v98; // [rsp+110h] [rbp+10h]
  struct _GUID fmtid; // [rsp+120h] [rbp+20h] BYREF
  __int128 v100; // [rsp+130h] [rbp+30h]
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+88h]

  v6 = a4;
  v85 = a4;
  v7 = a3;
  v8 = this;
  v89 = this;
  v9 = a6;
  v86 = a6;
  *a6 = 0LL;
  pv = 0LL;
  if ( a2 )
  {
    pvar[0] = &pv;
    pvar[1] = 0LL;
    LOBYTE(Src) = 1;
    fmtid = *(struct _GUID *)a5;
    v100 = *((_OWORD *)a5 + 1);
    DefaultFormat__lambda_cc1fbeea7d61a5d688c074f297f6e07b = CEndpointCharacteristics::GetDefaultFormat__lambda_cc1fbeea7d61a5d688c074f297f6e07b___(
                                                               this,
                                                               (struct tWAVEFORMATEX **)&pvar[1]);
    if ( (_BYTE)Src )
    {
      v61 = *(void **)pvar[0];
      *(_QWORD *)pvar[0] = pvar[1];
      if ( v61 )
        CoTaskMemFree(v61);
    }
    if ( DefaultFormat__lambda_cc1fbeea7d61a5d688c074f297f6e07b < 0 )
    {
      v47 = -2004287484;
      if ( DefaultFormat__lambda_cc1fbeea7d61a5d688c074f297f6e07b != -2004287484 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x173D,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)DefaultFormat__lambda_cc1fbeea7d61a5d688c074f297f6e07b,
          v81);
        v47 = DefaultFormat__lambda_cc1fbeea7d61a5d688c074f297f6e07b;
      }
      goto LABEL_153;
    }
    v9 = v86;
LABEL_61:
    if ( !pv )
    {
      v47 = -2147467261;
      goto LABEL_152;
    }
    v48 = *((unsigned __int16 *)pv + 1);
    if ( (_WORD)v48 )
    {
      v49 = *((_DWORD *)pv + 1);
      if ( v49 )
      {
        v50 = *((_DWORD *)pv + 2);
        if ( v50 )
        {
          v51 = *((unsigned __int16 *)pv + 6);
          if ( (_WORD)v51 )
          {
            v52 = *((_WORD *)pv + 8);
            if ( v52 <= 0x400u )
            {
              if ( ((*(_WORD *)pv - 1) & 0xFFFD) != 0 )
              {
                if ( *(_WORD *)pv != 0xFFFE )
                {
LABEL_81:
                  v58 = 0LL;
                  *v9 = pv;
                  v47 = 0;
                  goto LABEL_82;
                }
                if ( v52 < 0x16u )
                  goto LABEL_85;
                v53 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)pv + 3);
                if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)pv + 3) )
                  v53 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)pv + 4);
                if ( v53 )
                {
                  v78 = *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)pv + 3);
                  if ( *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)pv + 3) )
                    v78 = *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)pv + 4);
                  if ( v78 )
                    goto LABEL_81;
                }
                v54 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)pv + 3);
                if ( !v54 )
                  v54 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)pv + 4);
                if ( v54 )
                {
                  v79 = *((_WORD *)pv + 7);
                  v55 = v79;
                  if ( v79 == 32 || v79 == 64 )
                  {
LABEL_77:
                    v56 = *((_WORD *)pv + 9);
                    if ( v56 )
                    {
                      if ( v55 >= v56 )
                      {
                        v57 = v48 * v55;
                        if ( v50 == (unsigned int)(v49 * v57) >> 3 && v51 == v57 / 8 )
                          goto LABEL_81;
                      }
                    }
                  }
                }
                else
                {
                  v55 = *((_WORD *)pv + 7);
                  if ( ((v55 - 8) & 0xFFE7) == 0 )
                    goto LABEL_77;
                }
              }
              else if ( !v52 )
              {
                v80 = *((unsigned __int16 *)pv + 7);
                if ( (v80 & 7) == 0 && (unsigned __int16)v48 <= 2u && v50 == (unsigned int)(v49 * v80 * v48) >> 3 )
                  goto LABEL_81;
              }
            }
          }
        }
      }
    }
LABEL_85:
    v47 = -2147024809;
LABEL_152:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1772,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)v47,
      v81);
    goto LABEL_153;
  }
  v10 = &PKEY_AudioEngine_DeviceFormat;
  if ( a4 == eKeywordDetectorConnector )
    v10 = (const PROPERTYKEY *)&PKEY_AudioEngine_KeywordDetector_DeviceFormat;
  fmtid = v10->fmtid;
  LODWORD(v100) = v10->pid;
  *(_OWORD *)pvar = 0LL;
  Src = 0LL;
  v11 = (*(__int64 (__fastcall **)(_QWORD, struct _GUID *, PROPVARIANT *))(**((_QWORD **)this + 5) + 40LL))(
          *((_QWORD *)this + 5),
          &fmtid,
          pvar);
  if ( v11 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1746,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v11,
      v81);
    goto LABEL_59;
  }
  if ( !LOWORD(pvar[0]) )
  {
LABEL_59:
    if ( !pv )
    {
      *(_QWORD *)&v97.Data1 = &pv;
      *(_QWORD *)v97.Data4 = 0LL;
      v98 = 1;
      v95 = *(struct _GUID *)a5;
      v96 = *((_OWORD *)a5 + 1);
      v75 = CEndpointCharacteristics::GetDefaultFormat__lambda_cc1fbeea7d61a5d688c074f297f6e07b___(
              v8,
              (struct tWAVEFORMATEX **)v97.Data4);
      if ( v98 )
      {
        v76 = **(void ***)&v97.Data1;
        **(_QWORD **)&v97.Data1 = *(_QWORD *)v97.Data4;
        if ( v76 )
          CoTaskMemFree(v76);
      }
      if ( v75 < 0 )
      {
        v47 = -2004287484;
        if ( v75 != -2004287484 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x176A,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)(unsigned int)v75,
            v81);
          v47 = v75;
        }
        goto LABEL_148;
      }
      updated = CEndpointCharacteristics::UpdateDeviceFormatEPProperty(v8, v7, v6, (const struct tWAVEFORMATEX *)pv);
      v47 = updated;
      if ( updated < 0 )
      {
        v73 = (unsigned int)updated;
        v74 = 5997LL;
        goto LABEL_147;
      }
      v9 = v86;
    }
    PropVariantClear(pvar);
    goto LABEL_61;
  }
  if ( LOWORD(pvar[0]) != 65 )
  {
    LODWORD(v82) = LOWORD(pvar[0]);
    wil::details::in1diag3::Log_Win32Msg(
      retaddr,
      (void *)0x1763,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)0xD,
      (unsigned int)"Unexpected vartype %d (0x%08x)",
      v82);
    goto LABEL_59;
  }
  if ( LODWORD(pvar[1]) < 0x12
    || (v14 = (unsigned __int16 *)Src, LODWORD(pvar[1]) != *((unsigned __int16 *)Src + 8) + 18LL) )
  {
LABEL_138:
    wil::details::in1diag3::Log_Win32(retaddr, (void *)0x1757, v12, v13, v81);
    goto LABEL_59;
  }
  v15 = *a5;
  v16 = *((int *)a5 + 2);
  v17 = 224LL;
  if ( (_DWORD)v16 == 3 )
    v17 = 248LL;
  v8 = (CEndpointCharacteristics *)(v15 + v17);
  v18 = *(struct _GUID *)((char *)a5 + 12);
  v95 = v18;
  if ( v16 >= *(_QWORD *)(v15 + 1856) )
  {
    _o_terminate(v15);
    __debugbreak();
    goto LABEL_138;
  }
  v19 = *(_QWORD *)(v15 + 1864);
  v20 = 0;
  v21 = *(_DWORD *)(v19 + 24 * v16 + 16);
  if ( v21 <= 0 )
    goto LABEL_13;
  v62 = *(_QWORD *)(v19 + 24 * v16);
  while ( 1 )
  {
    v63 = *(_QWORD *)(v62 + 16LL * v20) - *(_QWORD *)&v95.Data1;
    if ( !v63 )
      v63 = *(_QWORD *)(v62 + 16LL * v20 + 8) - *(_QWORD *)v95.Data4;
    if ( !v63 )
      break;
    if ( ++v20 >= v21 )
      goto LABEL_13;
  }
  if ( v20 == -1 )
  {
LABEL_13:
    v95 = v18;
    v22 = &v95;
  }
  else
  {
    v64 = (CAudioSignalProcessingModeMap *)gsl::span<CAudioSignalProcessingModeMap,-1>::operator[](
                                             (unsigned __int64 *)(v15 + 1856),
                                             v16);
    v95 = *(struct _GUID *)((char *)a5 + 12);
    v22 = CAudioSignalProcessingModeMap::Lookup(v64, &v97, &v95);
  }
  v23 = *v22;
  v95 = v23;
  v24 = v23;
  v25 = *(_QWORD *)&v23.Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  if ( *(_QWORD *)&v23.Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
    v25 = *(_QWORD *)v23.Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  if ( !v25 )
  {
    v95 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    v24 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
  }
  v26 = *(_QWORD **)v8;
  v27 = (_QWORD *)*((_QWORD *)v8 + 1);
  *(_QWORD *)&v95.Data1 = v27;
  if ( v26 == v27 )
  {
LABEL_58:
    v9 = v86;
    v8 = v89;
    v6 = v85;
    v7 = a3;
    goto LABEL_59;
  }
  while ( 1 )
  {
    v28 = (_QWORD *)*v26;
    v29 = *(_QWORD *)*v26 - *(_QWORD *)&v24.Data1;
    if ( !v29 )
      v29 = v28[1] - *(_QWORD *)v24.Data4;
    if ( !v29 )
    {
      v30 = (unsigned __int16 ***)v28[2];
      v90 = (unsigned __int16 ***)v28[3];
      if ( v30 != v90 )
        break;
    }
LABEL_133:
    if ( ++v26 == v27 )
      goto LABEL_58;
  }
  while ( 1 )
  {
    v31 = **v30;
    if ( !v14 )
    {
      if ( !v31 )
        goto LABEL_55;
      goto LABEL_131;
    }
    if ( !v31 )
      goto LABEL_131;
    v32 = *v14;
    v33 = v14[8];
    if ( (_WORD)v32 == 0xFFFE )
    {
      if ( v33 != 22 )
      {
        v65 = *((_QWORD *)v14 + 3) - *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
        if ( !v65 )
          v65 = *((_QWORD *)v14 + 4) - *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
        if ( v65 )
        {
          v66 = *((_QWORD *)v14 + 3) - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
          if ( !v66 )
            v66 = *((_QWORD *)v14 + 4) - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
          if ( v66 )
            goto LABEL_131;
        }
      }
      Buf1 = *(_OWORD *)v14;
      *(_OWORD *)v94 = *((_OWORD *)v14 + 1);
      *(_QWORD *)&v94[16] = *((_QWORD *)v14 + 4);
      *(_WORD *)v94 = 22;
      v34 = *(_DWORD *)&v94[4];
      v35 = Buf1;
    }
    else
    {
      if ( v33 && (((_WORD)v32 - 1) & 0xFFFD) != 0 )
        goto LABEL_131;
      v67 = v14[1];
      if ( (unsigned __int16)(v67 - 1) > 1u )
        goto LABEL_131;
      v68 = v14[7];
      if ( ((v68 - 8) & 0xFFE7) != 0 )
        goto LABEL_131;
      Buf1 = *(_OWORD *)v14;
      v35 = -2;
      LOWORD(Buf1) = -2;
      *(_WORD *)v94 = 22;
      *(_WORD *)&v94[2] = v68;
      *(GUID *)&v94[8] = GUID_00000000_0000_0010_8000_00aa00389b71;
      *(_DWORD *)&v94[8] = v32;
      v34 = (v67 == 1) + 3;
      *(_DWORD *)&v94[4] = v34;
    }
    v36 = *v31;
    v37 = v31[8];
    if ( (_WORD)v36 == 0xFFFE )
      break;
    if ( !v37 || (((_WORD)v36 - 1) & 0xFFFD) == 0 )
    {
      v71 = v31[1];
      if ( (unsigned __int16)(v71 - 1) <= 1u )
      {
        v72 = v31[7];
        if ( ((v72 - 8) & 0xFFE7) == 0 )
        {
          Buf2 = *(_OWORD *)v31;
          v39 = -2;
          LOWORD(Buf2) = -2;
          *(_WORD *)v92 = 22;
          *(_WORD *)&v92[2] = v72;
          *(GUID *)&v92[8] = GUID_00000000_0000_0010_8000_00aa00389b71;
          *(_DWORD *)&v92[8] = v36;
          v38 = (v71 == 1) + 3;
          *(_DWORD *)&v92[4] = v38;
          goto LABEL_31;
        }
      }
    }
LABEL_131:
    if ( ++v30 == v90 )
    {
      v27 = *(_QWORD **)&v95.Data1;
      goto LABEL_133;
    }
  }
  if ( v37 != 22 )
  {
    v69 = *((_QWORD *)v31 + 3) - *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
    if ( !v69 )
      v69 = *((_QWORD *)v31 + 4) - *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
    if ( v69 )
    {
      v70 = *((_QWORD *)v31 + 3) - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
      if ( !v70 )
        v70 = *((_QWORD *)v31 + 4) - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
      if ( v70 )
        goto LABEL_131;
    }
  }
  Buf2 = *(_OWORD *)v31;
  *(_OWORD *)v92 = *((_OWORD *)v31 + 1);
  *(_QWORD *)&v92[16] = *((_QWORD *)v31 + 4);
  *(_WORD *)v92 = 22;
  v38 = *(_DWORD *)&v92[4];
  v39 = Buf2;
LABEL_31:
  if ( WORD1(Buf1) )
  {
    v40 = WORD1(Buf2);
  }
  else
  {
    v40 = 0;
    WORD1(Buf2) = 0;
    DWORD2(Buf2) = 0;
    WORD6(Buf2) = 0;
  }
  if ( DWORD1(Buf1) )
  {
    v41 = DWORD1(Buf2);
  }
  else
  {
    v41 = 0;
    *(_QWORD *)((char *)&Buf2 + 4) = 0LL;
  }
  if ( HIWORD(Buf1) )
  {
    v42 = HIWORD(Buf2);
  }
  else
  {
    v42 = 0;
    HIDWORD(Buf2) = 0;
  }
  if ( !v34 )
  {
    v38 = 0;
    *(_DWORD *)&v92[4] = 0;
  }
  if ( !v35 )
  {
    v39 = 0;
    LOWORD(Buf2) = 0;
  }
  if ( !v40 )
  {
    WORD1(Buf1) = 0;
    DWORD2(Buf1) = 0;
    WORD6(Buf1) = 0;
  }
  if ( !v41 )
    *(_QWORD *)((char *)&Buf1 + 4) = 0LL;
  if ( !v42 )
    HIDWORD(Buf1) = 0;
  if ( !v38 )
    *(_DWORD *)&v94[4] = 0;
  if ( !v39 )
    LOWORD(Buf1) = 0;
  v43 = *(_QWORD *)&v94[8] - *(_QWORD *)&v92[8];
  if ( *(_QWORD *)&v94[8] == *(_QWORD *)&v92[8] )
    v43 = *(_QWORD *)&v94[16] - *(_QWORD *)&v92[16];
  if ( v43 || memcmp_0(&Buf1, &Buf2, 0x28uLL) )
    goto LABEL_131;
LABEL_55:
  v44 = v14[8];
  v45 = CoTaskMemAlloc(v44 + 18);
  v46 = v45;
  if ( v45 )
  {
    memcpy_0(v45, v14, v44 + 18);
    v47 = 0;
  }
  else
  {
    v47 = -2147024882;
  }
  pv = v46;
  if ( (v47 & 0x80000000) == 0 )
    goto LABEL_58;
  v73 = v47;
  v74 = 5970LL;
LABEL_147:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v74,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)v73,
    v81);
LABEL_148:
  PropVariantClear(pvar);
LABEL_153:
  v58 = pv;
LABEL_82:
  pv = 0LL;
  if ( v58 )
    CoTaskMemFree(v58);
  return v47;
}
