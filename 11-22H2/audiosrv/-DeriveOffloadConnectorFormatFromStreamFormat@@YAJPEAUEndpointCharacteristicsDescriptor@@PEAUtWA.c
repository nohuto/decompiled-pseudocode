/*
 * XREFs of ?DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@PEAUtWAVEFORMATEX@@U_GUID@@22KPEAPEAU2@@Z @ 0x180115360
 * Callers:
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@KU_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x18000D804 (-DeriveDeviceGraphFormatsForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@_NW4__MIDL___MIDL_.c)
 *     AudioServerIsFormatSupported @ 0x180123880 (AudioServerIsFormatSupported.c)
 * Callees:
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180020D54 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?GetVirtualSurroundEffectMode@CEndpointCharacteristics@@QEAAIXZ @ 0x18002D434 (-GetVirtualSurroundEffectMode@CEndpointCharacteristics@@QEAAIXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$unique_ptr@USpatialAudioEncoderDescriptor@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x180080F10 (--1-$unique_ptr@USpatialAudioEncoderDescriptor@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@.c)
 *     ?IsStreamFormatSupportedForMixFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3PEAPEAU4@@Z @ 0x18008364E (-IsStreamFormatSupportedForMixFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@U_GUID@@W4__MIDL.c)
 *     ?IsOffloadConnectorFormatSupportedForMixFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3@Z @ 0x18011646C (-IsOffloadConnectorFormatSupportedForMixFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@U_GUID.c)
 *     ?GetOffloadDeviceFormat@CEndpointCharacteristics@@QEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x18014CD38 (-GetOffloadDeviceFormat@CEndpointCharacteristics@@QEAAJPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?IsFormatSupportedByHwAudioEngine@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z @ 0x18014DA78 (-IsFormatSupportedByHwAudioEngine@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall DeriveOffloadConnectorFormatFromStreamFormat(
        CEndpointCharacteristics **a1,
        struct tWAVEFORMATEX *a2,
        struct tWAVEFORMATEX *a3,
        struct _GUID *a4,
        struct tWAVEFORMATEX *Src,
        unsigned int a6,
        struct tWAVEFORMATEX **pv)
{
  struct tWAVEFORMATEX **v10; // r12
  char v11; // si
  int OffloadDeviceFormat; // ebx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 Data1; // r8d
  void *v14; // rcx
  WORD nChannels; // cx
  bool v16; // di
  int v17; // esi
  void *v18; // rcx
  void *v19; // rcx
  struct tWAVEFORMATEX **v20; // rcx
  DWORD nSamplesPerSec; // edx
  struct tWAVEFORMATEX *v22; // rax
  struct tWAVEFORMATEX *v23; // rcx
  struct tWAVEFORMATEX **v24; // rcx
  unsigned __int64 v25; // r9
  __int64 v26; // rdx
  int v27; // eax
  void *v28; // rcx
  __int64 v29; // rdx
  int v30; // eax
  unsigned __int64 v31; // r9
  struct tWAVEFORMATEX *v33; // rax
  struct tWAVEFORMATEX *v34; // rcx
  struct tWAVEFORMATEX *v35; // rax
  struct _GUID *v36; // rcx
  struct _GUID v37; // [rsp+30h] [rbp-20h] BYREF
  char v38; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  struct tWAVEFORMATEX *v40; // [rsp+90h] [rbp+40h] BYREF
  struct tWAVEFORMATEX *v41; // [rsp+A0h] [rbp+50h] BYREF

  v41 = a3;
  v10 = pv;
  *pv = 0LL;
  v11 = 1;
  Src = 0LL;
  *(_QWORD *)&v37.Data1 = &Src;
  *(_QWORD *)v37.Data4 = 0LL;
  v38 = 1;
  OffloadDeviceFormat = CEndpointCharacteristics::GetOffloadDeviceFormat(*a1, (struct tWAVEFORMATEX **)v37.Data4);
  if ( v38 )
  {
    Data1 = v37.Data1;
    v14 = **(void ***)&v37.Data1;
    **(_QWORD **)&v37.Data1 = *(_QWORD *)v37.Data4;
    if ( v14 )
      CoTaskMemFree(v14);
  }
  if ( OffloadDeviceFormat < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15D,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
      (const char *)(unsigned int)OffloadDeviceFormat);
LABEL_51:
    wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>((void **)&Src);
    return (unsigned int)OffloadDeviceFormat;
  }
  nChannels = Src->nChannels;
  v16 = nChannels != a2->nChannels;
  if ( a2->nChannels > 2u
    && nChannels == 2
    && dword_180199650[a6]
    && !(*(unsigned int (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)*a1 + 56LL))(*a1)
    && (unsigned int)CEndpointCharacteristics::GetVirtualSurroundEffectMode(*a1) == 1 )
  {
    v11 = 0;
    v16 = 1;
  }
  OffloadDeviceFormat = -2147023728;
  v41 = 0LL;
  if ( !v11 )
    goto LABEL_20;
  OffloadDeviceFormat = CEndpointCharacteristics::IsFormatSupportedByHwAudioEngine(*a1, a2);
  if ( !OffloadDeviceFormat )
  {
    *(_QWORD *)&v37.Data1 = &v41;
    *(_QWORD *)v37.Data4 = 0LL;
    v38 = 1;
    v17 = CloneWaveFormat(a2, (struct tWAVEFORMATEX **)v37.Data4);
    if ( v38 )
    {
      Data1 = v37.Data1;
      v18 = **(void ***)&v37.Data1;
      **(_QWORD **)&v37.Data1 = *(_QWORD *)v37.Data4;
      if ( v18 )
        CoTaskMemFree(v18);
    }
    if ( v17 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x180,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
        (const char *)(unsigned int)v17);
      wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>((void **)&v41);
      OffloadDeviceFormat = v17;
      goto LABEL_51;
    }
  }
  if ( !v41 )
  {
LABEL_20:
    if ( v16 )
    {
      pv = 0LL;
      *(_QWORD *)&v37.Data1 = &pv;
      *(_QWORD *)v37.Data4 = 0LL;
      v38 = 1;
      OffloadDeviceFormat = CloneWaveFormat(Src, (struct tWAVEFORMATEX **)v37.Data4);
      if ( v38 )
      {
        v19 = **(void ***)&v37.Data1;
        **(_QWORD **)&v37.Data1 = *(_QWORD *)v37.Data4;
        if ( v19 )
          CoTaskMemFree(v19);
      }
      if ( OffloadDeviceFormat < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x187,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
          (const char *)(unsigned int)OffloadDeviceFormat);
        v20 = pv;
        pv = 0LL;
        if ( v20 )
          CoTaskMemFree(v20);
        goto LABEL_50;
      }
      nSamplesPerSec = a2->nSamplesPerSec;
      *((_DWORD *)pv + 1) = nSamplesPerSec;
      *((_DWORD *)pv + 2) = nSamplesPerSec * *((unsigned __int16 *)pv + 6);
      OffloadDeviceFormat = CEndpointCharacteristics::IsFormatSupportedByHwAudioEngine(
                              *a1,
                              (const struct tWAVEFORMATEX *)pv);
      if ( !OffloadDeviceFormat )
      {
        v22 = (struct tWAVEFORMATEX *)pv;
        pv = 0LL;
        v23 = v41;
        v41 = v22;
        if ( v23 )
          CoTaskMemFree(v23);
      }
      v24 = pv;
      pv = 0LL;
      if ( v24 )
        CoTaskMemFree(v24);
    }
  }
  if ( OffloadDeviceFormat < 0 )
  {
    if ( OffloadDeviceFormat == -2005139333 )
    {
      wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>((void **)&v41);
      OffloadDeviceFormat = -2005139333;
      goto LABEL_51;
    }
    v25 = (unsigned int)OffloadDeviceFormat;
    v26 = 404LL;
    goto LABEL_36;
  }
  v37 = *a4;
  v27 = IsOffloadConnectorFormatSupportedForMixFormat(
          (struct EndpointCharacteristicsDescriptor *)a1,
          &v37,
          Data1,
          v41,
          v41);
  OffloadDeviceFormat = v27;
  if ( v27 < 0 )
  {
    v25 = (unsigned int)v27;
    v26 = 408LL;
LABEL_36:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v26,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
      (const char *)v25);
LABEL_50:
    wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>((void **)&v41);
    goto LABEL_51;
  }
  v40 = 0LL;
  *(_QWORD *)&v37.Data1 = &v40;
  *(_QWORD *)v37.Data4 = 0LL;
  v38 = 1;
  OffloadDeviceFormat = CloneWaveFormat(a2, (struct tWAVEFORMATEX **)v37.Data4);
  if ( v38 )
  {
    v28 = **(void ***)&v37.Data1;
    **(_QWORD **)&v37.Data1 = *(_QWORD *)v37.Data4;
    if ( v28 )
      CoTaskMemFree(v28);
  }
  if ( OffloadDeviceFormat < 0 )
  {
    v29 = 411LL;
LABEL_48:
    v31 = (unsigned int)OffloadDeviceFormat;
    goto LABEL_49;
  }
  v37 = *a4;
  v30 = IsStreamFormatSupportedForMixFormat(a1, &v37, eOffloadConnector, v41, v40, 0LL);
  OffloadDeviceFormat = v30;
  if ( v30 < 0 )
  {
    v31 = (unsigned int)v30;
    v29 = 415LL;
LABEL_49:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v29,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
      (const char *)v31);
    wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>((void **)&v40);
    goto LABEL_50;
  }
  if ( v30 )
  {
    OffloadDeviceFormat = -2005073917;
    v29 = 416LL;
    goto LABEL_48;
  }
  v33 = v41;
  v34 = 0LL;
  v41 = 0LL;
  *v10 = v33;
  v35 = v40;
  v40 = 0LL;
  if ( v35 )
  {
    CoTaskMemFree(v35);
    v34 = v41;
  }
  v41 = 0LL;
  if ( v34 )
    CoTaskMemFree(v34);
  v36 = (struct _GUID *)Src;
  Src = 0LL;
  if ( v36 )
    CoTaskMemFree(v36);
  return 0LL;
}
