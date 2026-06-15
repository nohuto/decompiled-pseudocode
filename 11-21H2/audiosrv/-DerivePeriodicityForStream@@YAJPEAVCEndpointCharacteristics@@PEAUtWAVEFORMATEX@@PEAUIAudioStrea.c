/*
 * XREFs of ?DerivePeriodicityForStream@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@PEAUIAudioStreamInfo@@KW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@1U_GUID@@55_N6_J7PEAUIProcessSubmixProxy@@PEA_J9@Z @ 0x18002BC80
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSystemAudioStream@@@Z @ 0x180028DE0 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAV.c)
 * Callees:
 *     ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x1800021E0 (-GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ??A?$span@VCAudioSignalProcessingModeMap@@$0?0@gsl@@QEBAAEAVCAudioSignalProcessingModeMap@@_K@Z @ 0x18000ED54 (--A-$span@VCAudioSignalProcessingModeMap@@$0-0@gsl@@QEBAAEAVCAudioSignalProcessingModeMap@@_K@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@KU_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x18002C050 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     ?GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18002E8D0 (-GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     memcmp_0 @ 0x18006251D (memcmp_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800C5F24 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     ?TranslateFrameCountBetweenSamplingRates@@YAIIII@Z @ 0x1800F08B8 (-TranslateFrameCountBetweenSamplingRates@@YAIIII@Z.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall DerivePeriodicityForStream(
        struct CEndpointCharacteristics *a1,
        struct tWAVEFORMATEX *a2,
        struct IAudioStreamInfo *a3,
        int a4,
        enum _AUDCLNT_SHAREMODE a5,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a6,
        struct tWAVEFORMATEX *a7,
        struct _GUID *a8,
        struct _GUID *a9,
        struct _GUID *a10,
        bool a11,
        bool a12,
        __int64 a13,
        __int64 a14,
        struct IProcessSubmixProxy *a15,
        __int64 *a16,
        __int64 *a17)
{
  __int64 v18; // rbx
  __int64 v19; // r11
  GUID v20; // xmm0
  unsigned __int64 *v21; // rcx
  __int64 v22; // r8
  int v23; // r10d
  int v24; // r9d
  LPVOID v25; // rdx
  __int64 v26; // r15
  __int64 v27; // rax
  _QWORD *v28; // r14
  _QWORD *v29; // r8
  _QWORD *v30; // rcx
  __int64 v31; // rax
  struct tWAVEFORMATEX *v32; // rdi
  struct tWAVEFORMATEX *v33; // rcx
  struct tWAVEFORMATEX *v34; // rax
  unsigned __int16 **v35; // rdi
  unsigned __int16 *v36; // rcx
  int wFormatTag; // edx
  WORD cbSize; // ax
  int v39; // r10d
  __int16 v40; // r11
  int v41; // edx
  unsigned __int16 v42; // ax
  int v43; // r9d
  __int16 v44; // bx
  __int16 v45; // dx
  int v46; // ecx
  __int16 v47; // ax
  __int64 v48; // rax
  signed int v49; // ebx
  unsigned int v50; // r15d
  unsigned int v51; // r14d
  unsigned int v52; // edi
  _QWORD *v53; // r14
  __int64 v55; // rax
  __int64 v56; // r11
  unsigned __int64 v57; // rax
  __int64 v58; // r10
  int v59; // ecx
  int v60; // r9d
  LPVOID *v61; // r8
  unsigned __int64 v62; // rdx
  __int64 v63; // rax
  __int64 v64; // rax
  WORD nChannels; // r8
  WORD wBitsPerSample; // r9
  __int64 v67; // rax
  __int64 v68; // rax
  unsigned __int16 v69; // r8
  unsigned __int16 v70; // r9
  signed int nSamplesPerSec; // r9d
  unsigned int v72; // r12d
  unsigned int v73; // r8d
  unsigned int v74; // edx
  unsigned int v75; // r8d
  unsigned int v76; // r12d
  unsigned int v77; // edx
  unsigned int v78; // r8d
  unsigned int v79; // edx
  unsigned int v80; // r8d
  unsigned int v81; // eax
  unsigned int v82; // r10d
  int v83; // r11d
  double v84; // xmm4_8
  int v85; // r8d
  unsigned int v86; // ecx
  int MixFormat; // edi
  void *v88; // rdx
  struct _GUID *v89; // r15
  void *v90; // rdx
  void *v91; // rdx
  void *v92; // rdx
  void *v93; // rdx
  __int64 v94; // rdx
  int SharedModeEnginePeriodicity; // eax
  unsigned __int64 v96; // r9
  __int64 v97; // rax
  void *v98; // rcx
  void *v99; // rcx
  void *v100; // rcx
  void *v101; // rcx
  struct tWAVEFORMATEX *v102; // rcx
  void *v103; // rcx
  void *v104; // rcx
  void *v105; // rcx
  void *v106; // rcx
  struct tWAVEFORMATEX *v107; // rcx
  int pdwType; // [rsp+20h] [rbp-E0h]
  int pdwTypea; // [rsp+20h] [rbp-E0h]
  DWORD pcbData[2]; // [rsp+70h] [rbp-90h] BYREF
  LPVOID v111; // [rsp+78h] [rbp-88h] BYREF
  int pvData; // [rsp+80h] [rbp-80h] BYREF
  LPVOID v113; // [rsp+88h] [rbp-78h] BYREF
  LPVOID pv; // [rsp+90h] [rbp-70h] BYREF
  void **v115; // [rsp+98h] [rbp-68h]
  struct tWAVEFORMATEX *v116; // [rsp+A0h] [rbp-60h] BYREF
  char v117; // [rsp+A8h] [rbp-58h]
  struct _GUID *v118; // [rsp+B0h] [rbp-50h]
  struct _GUID v119; // [rsp+C0h] [rbp-40h] BYREF
  struct _GUID v120; // [rsp+D0h] [rbp-30h] BYREF
  LPVOID *v121; // [rsp+E0h] [rbp-20h]
  struct tWAVEFORMATEX *v122; // [rsp+E8h] [rbp-18h] BYREF
  char v123; // [rsp+F0h] [rbp-10h]
  struct tWAVEFORMATEX *v124; // [rsp+F8h] [rbp-8h]
  struct _GUID v125; // [rsp+100h] [rbp+0h] BYREF
  __int64 *v126; // [rsp+110h] [rbp+10h]
  LPVOID v127[2]; // [rsp+120h] [rbp+20h] BYREF
  __int128 Buf1; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v129[24]; // [rsp+140h] [rbp+40h]
  __int128 Buf2; // [rsp+158h] [rbp+58h] BYREF
  _BYTE v131[24]; // [rsp+168h] [rbp+68h]
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+D8h]

  *(_QWORD *)&v119.Data1 = a3;
  v124 = a2;
  *(_QWORD *)&v125.Data1 = a8;
  v118 = a9;
  *(_QWORD *)&v120.Data1 = a10;
  v18 = (__int64)a16;
  v111 = a16;
  v126 = a17;
  v19 = a14;
  *a16 = a14;
  if ( a5 )
    return 0LL;
  if ( (a4 & 0x20000) != 0 && a15 )
  {
    v55 = *(_QWORD *)a15;
    v127[0] = 0LL;
    (*(void (__fastcall **)(struct IProcessSubmixProxy *, LPVOID *))(v55 + 80))(a15, v127);
    *a16 = (*(__int64 (__fastcall **)(LPVOID))(*(_QWORD *)v127[0] + 104LL))(v127[0]);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v127);
    return 0LL;
  }
  if ( (a4 & 1) != 0 )
  {
LABEL_189:
    if ( !v19 )
      *(_QWORD *)v18 = a13;
    return 0LL;
  }
  v18 = 224LL;
  if ( a6 == eKeywordDetectorConnector )
    v18 = 248LL;
  v20 = *a8;
  *(struct _GUID *)v127 = *a8;
  v21 = (unsigned __int64 *)((char *)a1 + 1856);
  if ( (unsigned __int64)(int)a6 >= *((_QWORD *)a1 + 232) )
  {
    _o_terminate(v21);
    __debugbreak();
    goto LABEL_189;
  }
  v22 = *((_QWORD *)a1 + 233);
  v23 = 0;
  v24 = *(_DWORD *)(v22 + 24LL * (int)a6 + 16);
  if ( v24 > 0 )
  {
    v56 = *(_QWORD *)(v22 + 24LL * (int)a6);
    while ( 1 )
    {
      v57 = *(_QWORD *)(v56 + 16LL * v23) - (unsigned __int64)v127[0];
      if ( !v57 )
        v57 = *(_QWORD *)(v56 + 16LL * v23 + 8) - (unsigned __int64)v127[1];
      if ( !v57 )
        break;
      if ( ++v23 >= v24 )
        goto LABEL_8;
    }
    if ( v23 != -1 )
    {
      v58 = gsl::span<CAudioSignalProcessingModeMap,-1>::operator[](v21, a6);
      *(struct _GUID *)v127 = *a8;
      v59 = 0;
      v60 = *(_DWORD *)(v58 + 16);
      if ( v60 <= 0 )
        goto LABEL_71;
      while ( 1 )
      {
        v61 = (LPVOID *)(*(_QWORD *)v58 + 16LL * v59);
        v62 = (_BYTE *)*v61 - (char *)v127[0];
        if ( *v61 == v127[0] )
          v62 = (_BYTE *)v61[1] - (char *)v127[1];
        if ( !v62 )
          break;
        if ( ++v59 >= v60 )
          goto LABEL_71;
      }
      if ( v59 == -1 )
      {
LABEL_71:
        v20 = GUID_00000000_0000_0000_0000_000000000000;
      }
      else
      {
        if ( v59 < 0 || v59 >= v60 )
        {
          ATL::_AtlRaiseException(0xC000008C, 0);
          __debugbreak();
        }
        v20 = *(GUID *)(*(_QWORD *)(v58 + 8) + 16LL * v59);
      }
    }
  }
LABEL_8:
  *(GUID *)v127 = v20;
  v26 = *(_QWORD *)v20.Data4;
  v25 = *(LPVOID *)&v20.Data1;
  v113 = *(LPVOID *)&v20.Data1;
  v27 = *(_QWORD *)&v20.Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  if ( *(_QWORD *)&v20.Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
    v27 = *(_QWORD *)v20.Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  if ( !v27 )
  {
    *(GUID *)v127 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    v26 = *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
    v25 = *(LPVOID *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
    v113 = *(LPVOID *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
  }
  v28 = *(_QWORD **)((char *)a1 + v18);
  v29 = *(_QWORD **)((char *)a1 + v18 + 8);
  pv = v29;
  if ( v28 == v29 )
  {
LABEL_110:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4A3,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)0x88890008LL,
      pdwType);
    return 2290679816LL;
  }
  while ( 1 )
  {
    v30 = (_QWORD *)*v28;
    v31 = *(_QWORD *)*v28 - (_QWORD)v25;
    if ( !v31 )
      v31 = v30[1] - v26;
    if ( !v31 )
    {
      v32 = (struct tWAVEFORMATEX *)v30[2];
      v127[0] = v32;
      v33 = (struct tWAVEFORMATEX *)v30[3];
      *(_QWORD *)pcbData = v33;
      if ( v32 != v33 )
        break;
    }
LABEL_109:
    if ( ++v28 == v29 )
      goto LABEL_110;
  }
  v34 = v33;
  while ( 1 )
  {
    v35 = *(unsigned __int16 ***)&v32->wFormatTag;
    v36 = *v35;
    if ( !a7 )
    {
      if ( !v36 )
        goto LABEL_50;
      goto LABEL_107;
    }
    if ( v36 )
      break;
LABEL_107:
    v32 = (struct tWAVEFORMATEX *)((char *)v127[0] + 8);
    v127[0] = v32;
    if ( v32 == v34 )
    {
      v25 = v113;
      v29 = pv;
      goto LABEL_109;
    }
  }
  wFormatTag = a7->wFormatTag;
  cbSize = a7->cbSize;
  if ( (_WORD)wFormatTag == 0xFFFE )
  {
    if ( cbSize != 22 )
    {
      v63 = *(_QWORD *)((char *)&a7[1].nSamplesPerSec + 2) - *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
      if ( !v63 )
        v63 = *(_QWORD *)&a7[1].wBitsPerSample - *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
      if ( v63 )
      {
        v64 = *(_QWORD *)((char *)&a7[1].nSamplesPerSec + 2)
            - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
        if ( !v64 )
          v64 = *(_QWORD *)&a7[1].wBitsPerSample - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
        if ( v64 )
          goto LABEL_106;
      }
    }
    Buf1 = *(_OWORD *)&a7->wFormatTag;
    *(_OWORD *)v129 = *(_OWORD *)&a7->cbSize;
    *(_QWORD *)&v129[16] = *(_QWORD *)&a7[1].wBitsPerSample;
    *(_WORD *)v129 = 22;
    v39 = *(_DWORD *)&v129[4];
    v40 = Buf1;
  }
  else
  {
    if ( cbSize && (((_WORD)wFormatTag - 1) & 0xFFFD) != 0 )
      goto LABEL_106;
    nChannels = a7->nChannels;
    if ( (unsigned __int16)(nChannels - 1) > 1u )
      goto LABEL_106;
    wBitsPerSample = a7->wBitsPerSample;
    if ( ((wBitsPerSample - 8) & 0xFFE7) != 0 )
      goto LABEL_106;
    Buf1 = *(_OWORD *)&a7->wFormatTag;
    v40 = -2;
    LOWORD(Buf1) = -2;
    *(_WORD *)v129 = 22;
    *(_WORD *)&v129[2] = wBitsPerSample;
    *(GUID *)&v129[8] = GUID_00000000_0000_0010_8000_00aa00389b71;
    *(_DWORD *)&v129[8] = wFormatTag;
    v39 = (nChannels == 1) + 3;
    *(_DWORD *)&v129[4] = v39;
  }
  v41 = *v36;
  v42 = v36[8];
  if ( (_WORD)v41 != 0xFFFE )
  {
    if ( !v42 || (((_WORD)v41 - 1) & 0xFFFD) == 0 )
    {
      v69 = v36[1];
      if ( (unsigned __int16)(v69 - 1) <= 1u )
      {
        v70 = v36[7];
        v44 = -2;
        if ( ((v70 - 8) & 0xFFE7) == 0 )
        {
          Buf2 = *(_OWORD *)v36;
          LOWORD(Buf2) = -2;
          *(_WORD *)v131 = 22;
          *(_WORD *)&v131[2] = v70;
          *(GUID *)&v131[8] = GUID_00000000_0000_0010_8000_00aa00389b71;
          *(_DWORD *)&v131[8] = v41;
          v43 = (v69 == 1) + 3;
          *(_DWORD *)&v131[4] = v43;
          goto LABEL_26;
        }
      }
    }
LABEL_106:
    v34 = *(struct tWAVEFORMATEX **)pcbData;
    goto LABEL_107;
  }
  if ( v42 != 22 )
  {
    v67 = *((_QWORD *)v36 + 3) - *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
    if ( !v67 )
      v67 = *((_QWORD *)v36 + 4) - *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
    if ( v67 )
    {
      v68 = *((_QWORD *)v36 + 3) - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
      if ( !v68 )
        v68 = *((_QWORD *)v36 + 4) - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
      if ( v68 )
        goto LABEL_106;
    }
  }
  Buf2 = *(_OWORD *)v36;
  *(_OWORD *)v131 = *((_OWORD *)v36 + 1);
  *(_QWORD *)&v131[16] = *((_QWORD *)v36 + 4);
  *(_WORD *)v131 = 22;
  v43 = *(_DWORD *)&v131[4];
  v44 = Buf2;
LABEL_26:
  if ( WORD1(Buf1) )
  {
    v45 = WORD1(Buf2);
  }
  else
  {
    v45 = 0;
    WORD1(Buf2) = 0;
    DWORD2(Buf2) = 0;
    WORD6(Buf2) = 0;
  }
  if ( DWORD1(Buf1) )
  {
    v46 = DWORD1(Buf2);
  }
  else
  {
    v46 = 0;
    *(_QWORD *)((char *)&Buf2 + 4) = 0LL;
  }
  if ( HIWORD(Buf1) )
  {
    v47 = HIWORD(Buf2);
  }
  else
  {
    v47 = 0;
    HIDWORD(Buf2) = 0;
  }
  if ( !v39 )
  {
    v43 = 0;
    *(_DWORD *)&v131[4] = 0;
  }
  if ( !v40 )
  {
    v44 = 0;
    LOWORD(Buf2) = 0;
  }
  if ( !v45 )
  {
    WORD1(Buf1) = 0;
    DWORD2(Buf1) = 0;
    WORD6(Buf1) = 0;
  }
  if ( !v46 )
    *(_QWORD *)((char *)&Buf1 + 4) = 0LL;
  if ( !v47 )
    HIDWORD(Buf1) = 0;
  if ( !v43 )
    *(_DWORD *)&v129[4] = 0;
  if ( !v44 )
    LOWORD(Buf1) = 0;
  v48 = *(_QWORD *)&v129[8] - *(_QWORD *)&v131[8];
  if ( *(_QWORD *)&v129[8] == *(_QWORD *)&v131[8] )
    v48 = *(_QWORD *)&v129[16] - *(_QWORD *)&v131[16];
  if ( v48 || memcmp_0(&Buf1, &Buf2, 0x28uLL) )
    goto LABEL_106;
LABEL_50:
  v49 = *((_DWORD *)v35 + 3);
  v50 = *((_DWORD *)v35 + 2);
  v51 = *((_DWORD *)v35 + 4);
  if ( a11 )
    v52 = *((_DWORD *)v35 + 6);
  else
    v52 = *((_DWORD *)v35 + 5);
  if ( !a14 )
  {
    v53 = v111;
    *(_QWORD *)v111 = (unsigned int)(int)((double)v49 * 10000000.0 / (double)(int)a7->nSamplesPerSec + 0.5);
    goto LABEL_54;
  }
  pvData = 0;
  pcbData[0] = 4;
  RegGetValueW(
    HKEY_LOCAL_MACHINE,
    L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
    L"SkipPeriodicityValidation",
    0x18u,
    0LL,
    &pvData,
    pcbData);
  nSamplesPerSec = a7->nSamplesPerSec;
  v72 = (int)((double)nSamplesPerSec * (double)(int)a14 / 10000000.0 + 0.5);
  if ( pvData )
  {
    v53 = v111;
    goto LABEL_54;
  }
  if ( v72 >= v51 && v72 <= v52 && (!(v72 % v50) || v72 == v49 || v72 == v51 || v72 == v52) )
  {
    v53 = v111;
    goto LABEL_136;
  }
  v73 = v124->nSamplesPerSec;
  if ( v73 == nSamplesPerSec )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4C2,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)0x88890020LL,
      pdwType);
    return 2290679840LL;
  }
  TranslateFrameCountBetweenSamplingRates(v49, nSamplesPerSec, v73);
  v76 = TranslateFrameCountBetweenSamplingRates(v50, v74, v75);
  TranslateFrameCountBetweenSamplingRates(v51, v77, v78);
  v81 = TranslateFrameCountBetweenSamplingRates(v52, v79, v80);
  v86 = (int)((double)v85 * (double)(int)a14 / 10000000.0 + 0.5);
  if ( v86 < v82 || v86 > v81 )
    goto LABEL_139;
  if ( !(v86 % v76) )
    goto LABEL_127;
  if ( v86 == v83 )
    goto LABEL_131;
  if ( v86 == v82 )
  {
LABEL_132:
    v72 = v51;
    goto LABEL_134;
  }
  if ( v86 != v81 )
  {
LABEL_139:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4D6,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)0x88890020LL,
      pdwType);
    return 2290679840LL;
  }
LABEL_127:
  if ( v86 == v83 )
  {
LABEL_131:
    v72 = v49;
    goto LABEL_134;
  }
  if ( v86 == v82 )
    goto LABEL_132;
  if ( v86 == v81 )
    v72 = v52;
  else
    v72 = v50 * (v86 / v76);
LABEL_134:
  v53 = v111;
  *(_QWORD *)v111 = (unsigned int)(int)((double)(int)v72 * 10000000.0 / v84 + 0.5);
LABEL_136:
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)&v119.Data1 + 144LL))(*(_QWORD *)&v119.Data1)
    && v72 < v49 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4E6,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)0x88890020LL,
      pdwType);
    return 2290679840LL;
  }
LABEL_54:
  if ( !a12 )
  {
LABEL_55:
    *v126 = (unsigned int)(int)((double)v49 * 10000000.0 / (double)(int)a7->nSamplesPerSec + 0.5);
    return 0LL;
  }
  *(_QWORD *)pcbData = 0LL;
  v111 = 0LL;
  v127[0] = 0LL;
  v113 = 0LL;
  pv = 0LL;
  v115 = (void **)pcbData;
  v116 = 0LL;
  v117 = 1;
  v119 = *v118;
  MixFormat = CEndpointCharacteristics::GetMixFormat(a1, a6, &v119, &v116);
  if ( v117 )
  {
    v88 = *v115;
    *v115 = v116;
    if ( v88 )
      CoTaskMemFree(v88);
  }
  if ( MixFormat < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4F0,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)MixFormat,
      pdwType);
    goto LABEL_167;
  }
  Buf2 = (unsigned __int64)&v111;
  v131[0] = 1;
  Buf1 = (unsigned __int64)&pv;
  v129[0] = 1;
  v121 = &v113;
  v122 = 0LL;
  v123 = 1;
  v115 = v127;
  v116 = 0LL;
  v117 = 1;
  v89 = *(struct _GUID **)&v125.Data1;
  v125 = *(struct _GUID *)*(_QWORD *)&v125.Data1;
  v120 = *(struct _GUID *)*(_QWORD *)&v120.Data1;
  v119 = *v118;
  MixFormat = DeriveDeviceGraphFormatsForStream(
                a1,
                0,
                a6,
                AUDCLNT_SHAREMODE_SHARED,
                0,
                &v119,
                &v120,
                &v125,
                *(struct tWAVEFORMATEX **)pcbData,
                &v116,
                &v122,
                (struct tWAVEFORMATEX **)&Buf1 + 1,
                (struct tWAVEFORMATEX **)&Buf2 + 1);
  if ( v117 )
  {
    v90 = *v115;
    *v115 = v116;
    if ( v90 )
      CoTaskMemFree(v90);
  }
  if ( v123 )
  {
    v91 = *v121;
    *v121 = v122;
    if ( v91 )
      CoTaskMemFree(v91);
  }
  if ( v129[0] )
  {
    v92 = *(void **)Buf1;
    *(_QWORD *)Buf1 = *((_QWORD *)&Buf1 + 1);
    if ( v92 )
      CoTaskMemFree(v92);
  }
  if ( v131[0] )
  {
    v93 = *(void **)Buf2;
    *(_QWORD *)Buf2 = *((_QWORD *)&Buf2 + 1);
    if ( v93 )
      CoTaskMemFree(v93);
  }
  if ( MixFormat < 0 )
  {
    v94 = 1265LL;
    goto LABEL_165;
  }
  pvData = 0;
  v120 = *v89;
  SharedModeEnginePeriodicity = CEndpointCharacteristics::GetSharedModeEnginePeriodicity(
                                  (__int64)a1,
                                  a6,
                                  (const struct tWAVEFORMATEX *)v111,
                                  (__int128 *)&v120,
                                  0,
                                  &pvData,
                                  0LL,
                                  0LL,
                                  0LL);
  MixFormat = SharedModeEnginePeriodicity;
  if ( SharedModeEnginePeriodicity >= 0 )
  {
    v97 = (unsigned int)(int)((double)pvData * 10000000.0 / (double)*((int *)v111 + 1) + 0.5);
    if ( *v53 - v97 <= 5 * v97 / 100 )
    {
      v103 = pv;
      pv = 0LL;
      if ( v103 )
        CoTaskMemFree(v103);
      v104 = v113;
      v113 = 0LL;
      if ( v104 )
        CoTaskMemFree(v104);
      v105 = v127[0];
      v127[0] = 0LL;
      if ( v105 )
        CoTaskMemFree(v105);
      v106 = v111;
      v111 = 0LL;
      if ( v106 )
        CoTaskMemFree(v106);
      v107 = *(struct tWAVEFORMATEX **)pcbData;
      *(_QWORD *)pcbData = 0LL;
      if ( v107 )
        CoTaskMemFree(v107);
      goto LABEL_55;
    }
    MixFormat = -2004287448;
    v94 = 1271LL;
LABEL_165:
    v96 = (unsigned int)MixFormat;
  }
  else
  {
    v96 = (unsigned int)SharedModeEnginePeriodicity;
    v94 = 1268LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v94,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
    (const char *)v96,
    pdwTypea);
LABEL_167:
  v98 = pv;
  pv = 0LL;
  if ( v98 )
    CoTaskMemFree(v98);
  v99 = v113;
  v113 = 0LL;
  if ( v99 )
    CoTaskMemFree(v99);
  v100 = v127[0];
  v127[0] = 0LL;
  if ( v100 )
    CoTaskMemFree(v100);
  v101 = v111;
  v111 = 0LL;
  if ( v101 )
    CoTaskMemFree(v101);
  v102 = *(struct tWAVEFORMATEX **)pcbData;
  *(_QWORD *)pcbData = 0LL;
  if ( v102 )
    CoTaskMemFree(v102);
  return (unsigned int)MixFormat;
}
