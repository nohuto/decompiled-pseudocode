/*
 * XREFs of ?DerivePeriodicityForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@PEAUtWAVEFORMATEX@@PEAUIAudioStreamInfo@@KW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@1U_GUID@@55_N6_J7PEAUIProcessSubmixProxy@@PEA_J9@Z @ 0x18000DE94
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHHH_JPEAUEndpointCharacteristicsDescriptor@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@W4_BridgeStreamProperties@@2PEAUIProcessSubmixProxy@@U8@PEAUSystemAudioStream@@@Z @ 0x18006CF90 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHHH_JPEA.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@KU_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x18000D804 (-DeriveDeviceGraphFormatsForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@_NW4__MIDL___MIDL_.c)
 *     ?GetSharedModeEnginePeriodicity@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x18000E360 (-GetSharedModeEnginePeriodicity@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_00.c)
 *     ?GetMixFormat@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x1800179D0 (-GetMixFormat@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$unique_ptr@USpatialAudioEncoderDescriptor@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x180080F10 (--1-$unique_ptr@USpatialAudioEncoderDescriptor@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@.c)
 *     ?TranslateFrameCountBetweenSamplingRates@@YAIIII@Z @ 0x1801205B4 (-TranslateFrameCountBetweenSamplingRates@@YAIIII@Z.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall DerivePeriodicityForStream(
        struct EndpointCharacteristicsDescriptor *a1,
        struct tWAVEFORMATEX *a2,
        struct IAudioStreamInfo *a3,
        int a4,
        enum _AUDCLNT_SHAREMODE pvData,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a6,
        struct tWAVEFORMATEX *a7,
        struct _GUID *a8,
        struct _GUID *a9,
        struct _GUID *a10,
        bool a11,
        bool a12,
        __int64 a13,
        int *pcbData,
        struct IProcessSubmixProxy *a15,
        struct tWAVEFORMATEX *pv,
        __int64 *a17)
{
  int *v19; // rbx
  struct tWAVEFORMATEX *v20; // rdi
  struct tWAVEFORMATEX *v21; // r15
  int SharedModeEnginePeriodicity; // eax
  unsigned int v23; // esi
  enum _AUDCLNT_SHAREMODE v24; // esi
  __int64 v26; // rax
  signed int nSamplesPerSec; // r14d
  double v28; // xmm3_8
  unsigned int v29; // ebx
  unsigned int v30; // r15d
  DWORD v31; // r11d
  __int64 v32; // rdx
  unsigned int MixFormat; // ebx
  unsigned int v34; // r12d
  unsigned int v35; // edx
  unsigned int v36; // r8d
  unsigned int v37; // edx
  unsigned int v38; // r8d
  unsigned int v39; // r9d
  unsigned int v40; // ebx
  unsigned int v41; // edx
  unsigned int v42; // r8d
  unsigned int v43; // r10d
  unsigned int v44; // eax
  unsigned int v45; // r9d
  unsigned int v46; // r10d
  double v47; // xmm4_8
  int v48; // r11d
  unsigned int v49; // ecx
  struct _GUID *v50; // r14
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v51; // r12d
  void *v52; // rcx
  unsigned __int64 v53; // r9
  __int64 v54; // rdx
  void *v55; // rcx
  void *v56; // rcx
  void *v57; // rcx
  void *v58; // rcx
  int v59; // eax
  __int64 v60; // rax
  void *v61; // rcx
  void *v62; // rcx
  void *v63; // rcx
  int *v64; // rcx
  __int64 *v65; // rcx
  void *v66; // rcx
  void *v67; // rcx
  void *v68; // rcx
  int *v69; // rcx
  __int64 *v70; // rcx
  int pdwType; // [rsp+28h] [rbp-E0h]
  LPVOID v72; // [rsp+78h] [rbp-90h] BYREF
  LPVOID v73; // [rsp+80h] [rbp-88h] BYREF
  LPVOID v74[2]; // [rsp+88h] [rbp-80h] BYREF
  struct _GUID v75; // [rsp+98h] [rbp-70h] BYREF
  char v76; // [rsp+A8h] [rbp-60h]
  LPVOID *v77; // [rsp+B8h] [rbp-50h]
  struct tWAVEFORMATEX *v78; // [rsp+C0h] [rbp-48h] BYREF
  char v79; // [rsp+C8h] [rbp-40h]
  LPVOID *v80; // [rsp+D0h] [rbp-38h]
  struct tWAVEFORMATEX *v81; // [rsp+D8h] [rbp-30h] BYREF
  char v82; // [rsp+E0h] [rbp-28h]
  LPVOID *v83; // [rsp+E8h] [rbp-20h]
  struct tWAVEFORMATEX *v84; // [rsp+F0h] [rbp-18h] BYREF
  char v85; // [rsp+F8h] [rbp-10h]
  void **p_pcbData; // [rsp+100h] [rbp-8h]
  struct tWAVEFORMATEX *v87; // [rsp+108h] [rbp+0h] BYREF
  char v88; // [rsp+110h] [rbp+8h]
  struct _GUID v89; // [rsp+118h] [rbp+10h] BYREF
  struct _GUID v90; // [rsp+128h] [rbp+20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+160h] [rbp+58h]

  v19 = pcbData;
  v20 = pv;
  *(_QWORD *)&pv->wFormatTag = pcbData;
  if ( pvData )
    return 0LL;
  if ( (a4 & 0x20000) != 0 && a15 )
  {
    v26 = *(_QWORD *)a15;
    pcbData = 0LL;
    (*(void (__fastcall **)(struct IProcessSubmixProxy *, int **))(v26 + 80))(a15, &pcbData);
    *(_QWORD *)&v20->wFormatTag = (*(__int64 (__fastcall **)(int *))(*(_QWORD *)pcbData + 144LL))(pcbData);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&pcbData);
    return 0LL;
  }
  if ( (a4 & 1) != 0 )
  {
    if ( !v19 )
      *(_QWORD *)&v20->wFormatTag = a13;
    return 0LL;
  }
  *(struct _GUID *)v74 = *a8;
  v21 = a7;
  SharedModeEnginePeriodicity = EffectPack::GetSharedModeEnginePeriodicity(
                                  *((_QWORD *)a1 + 1),
                                  (unsigned int)a6,
                                  a7,
                                  v74,
                                  a11,
                                  &pvData,
                                  &v72,
                                  &v73,
                                  &pv);
  v23 = SharedModeEnginePeriodicity;
  if ( SharedModeEnginePeriodicity < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4DB,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)SharedModeEnginePeriodicity,
      pdwType);
    return v23;
  }
  v24 = pvData;
  if ( v19 )
  {
    pvData = AUDCLNT_SHAREMODE_SHARED;
    LODWORD(pcbData) = 4;
    RegGetValueW(
      HKEY_LOCAL_MACHINE,
      L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
      L"SkipPeriodicityValidation",
      0x18u,
      0LL,
      &pvData,
      (LPDWORD)&pcbData);
    nSamplesPerSec = v21->nSamplesPerSec;
    v28 = (double)(int)v19;
    v29 = (int)((double)nSamplesPerSec * (double)(int)v19 / 10000000.0 + 0.5);
    if ( pvData )
      goto LABEL_7;
    v30 = (unsigned int)v72;
    if ( v29 >= (unsigned int)v73
      && v29 <= (unsigned int)pv
      && (!(v29 % (unsigned int)v72) || v29 == v24 || v29 == (_DWORD)v73 || v29 == (_DWORD)pv) )
    {
      goto LABEL_33;
    }
    v31 = a2->nSamplesPerSec;
    if ( v31 == nSamplesPerSec )
    {
      v32 = 1274LL;
      goto LABEL_23;
    }
    v34 = TranslateFrameCountBetweenSamplingRates(v24, nSamplesPerSec, v31);
    LODWORD(pv) = TranslateFrameCountBetweenSamplingRates(v30, v35, v36);
    v40 = TranslateFrameCountBetweenSamplingRates(v39, v37, v38);
    v44 = TranslateFrameCountBetweenSamplingRates(v43, v41, v42);
    v49 = (int)((double)v48 * v28 / 10000000.0 + 0.5);
    if ( v49 < v40 || v49 > v44 )
      goto LABEL_22;
    if ( v49 % (unsigned int)pv )
    {
      if ( v49 != v34 )
      {
        if ( v49 != v40 )
        {
          if ( v49 == v44 )
            goto LABEL_31;
LABEL_22:
          v32 = 1294LL;
          goto LABEL_23;
        }
LABEL_41:
        v29 = v45;
        goto LABEL_32;
      }
    }
    else if ( v49 != v34 )
    {
      if ( v49 != v40 )
      {
        if ( v49 != v44 )
        {
          v29 = v30 * (v49 / (unsigned int)pv);
          goto LABEL_32;
        }
LABEL_31:
        v29 = v46;
LABEL_32:
        *(_QWORD *)&v20->wFormatTag = (unsigned int)(int)((double)(int)v29 * 10000000.0 / v47 + 0.5);
LABEL_33:
        if ( !(*(unsigned __int8 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a3 + 144LL))(a3) || v29 >= v24 )
        {
          v21 = a7;
          goto LABEL_7;
        }
        v32 = 1310LL;
LABEL_23:
        MixFormat = -2004287456;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v32,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)0x88890020LL,
          pdwType);
        return MixFormat;
      }
      goto LABEL_41;
    }
    v29 = v24;
    goto LABEL_32;
  }
  *(_QWORD *)&v20->wFormatTag = (unsigned int)(int)((double)(int)pvData * 10000000.0 / (double)(int)v21->nSamplesPerSec
                                                  + 0.5);
LABEL_7:
  if ( !a12 )
  {
LABEL_8:
    *a17 = (unsigned int)(int)((double)(int)v24 * 10000000.0 / (double)(int)v21->nSamplesPerSec + 0.5);
    return 0LL;
  }
  pv = 0LL;
  pcbData = 0LL;
  v74[0] = 0LL;
  v72 = 0LL;
  v73 = 0LL;
  *(_QWORD *)&v75.Data1 = &pv;
  *(_QWORD *)v75.Data4 = 0LL;
  v76 = 1;
  v50 = a9;
  v89 = *a9;
  v51 = a6;
  MixFormat = EffectPack::GetMixFormat(*((EffectPack **)a1 + 1), a6, &v89, (struct tWAVEFORMATEX **)v75.Data4);
  if ( v76 )
  {
    v52 = **(void ***)&v75.Data1;
    **(_QWORD **)&v75.Data1 = *(_QWORD *)v75.Data4;
    if ( v52 )
      CoTaskMemFree(v52);
  }
  if ( (MixFormat & 0x80000000) == 0 )
  {
    p_pcbData = (void **)&pcbData;
    v87 = 0LL;
    v88 = 1;
    v83 = &v73;
    v84 = 0LL;
    v85 = 1;
    v80 = &v72;
    v81 = 0LL;
    v82 = 1;
    v77 = v74;
    v78 = 0LL;
    v79 = 1;
    v89 = *a8;
    v90 = *a10;
    v75 = *v50;
    MixFormat = DeriveDeviceGraphFormatsForStream(
                  (CEndpointCharacteristics **)a1,
                  0,
                  (struct _GUID *)(unsigned int)v51,
                  AUDCLNT_SHAREMODE_SHARED,
                  0,
                  (IAudioMediaType *)&v75,
                  &v90,
                  &v89,
                  pv,
                  &v78,
                  &v81,
                  &v84,
                  &v87);
    if ( v79 )
    {
      v55 = *v77;
      *v77 = v78;
      if ( v55 )
        CoTaskMemFree(v55);
    }
    if ( v82 )
    {
      v56 = *v80;
      *v80 = v81;
      if ( v56 )
        CoTaskMemFree(v56);
    }
    if ( v85 )
    {
      v57 = *v83;
      *v83 = v84;
      if ( v57 )
        CoTaskMemFree(v57);
    }
    if ( v88 )
    {
      v58 = *p_pcbData;
      *p_pcbData = v87;
      if ( v58 )
        CoTaskMemFree(v58);
    }
    if ( (MixFormat & 0x80000000) == 0 )
    {
      pvData = AUDCLNT_SHAREMODE_SHARED;
      v75 = *a8;
      v59 = EffectPack::GetSharedModeEnginePeriodicity(
              *((_QWORD *)a1 + 1),
              (unsigned int)v51,
              pcbData,
              &v75,
              0,
              &pvData,
              0LL,
              0LL,
              0LL);
      MixFormat = v59;
      if ( v59 >= 0 )
      {
        v60 = (unsigned int)(int)((double)(int)pvData * 10000000.0 / (double)pcbData[1] + 0.5);
        if ( *(_QWORD *)&v20->wFormatTag - v60 <= 5 * v60 / 100 )
        {
          v66 = v73;
          v73 = 0LL;
          if ( v66 )
            CoTaskMemFree(v66);
          v67 = v72;
          v72 = 0LL;
          if ( v67 )
            CoTaskMemFree(v67);
          v68 = v74[0];
          v74[0] = 0LL;
          if ( v68 )
            CoTaskMemFree(v68);
          v69 = pcbData;
          pcbData = 0LL;
          if ( v69 )
            CoTaskMemFree(v69);
          v70 = (__int64 *)pv;
          pv = 0LL;
          if ( v70 )
            CoTaskMemFree(v70);
          goto LABEL_8;
        }
        MixFormat = -2004287448;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x52F,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)0x88890028LL,
          pdwType);
        v61 = v73;
        v73 = 0LL;
        if ( v61 )
          CoTaskMemFree(v61);
        v62 = v72;
        v72 = 0LL;
        if ( v62 )
          CoTaskMemFree(v62);
        v63 = v74[0];
        v74[0] = 0LL;
        if ( v63 )
          CoTaskMemFree(v63);
        v64 = pcbData;
        pcbData = 0LL;
        if ( v64 )
          CoTaskMemFree(v64);
        v65 = (__int64 *)pv;
        pv = 0LL;
        if ( v65 )
          CoTaskMemFree(v65);
        return MixFormat;
      }
      v53 = (unsigned int)v59;
      v54 = 1324LL;
    }
    else
    {
      v53 = MixFormat;
      v54 = 1321LL;
    }
  }
  else
  {
    v53 = MixFormat;
    v54 = 1320LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v54,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
    (const char *)v53,
    pdwType);
  wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(&v73);
  wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(&v72);
  wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(v74);
  wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(&pcbData);
  wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(&pv);
  return MixFormat;
}
