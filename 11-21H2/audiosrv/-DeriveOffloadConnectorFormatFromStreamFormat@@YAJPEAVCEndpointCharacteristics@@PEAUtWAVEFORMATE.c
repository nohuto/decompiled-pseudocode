/*
 * XREFs of ?DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@U_GUID@@22KPEAPEAU2@@Z @ 0x1800E9124
 * Callers:
 *     AudioServerIsFormatSupported @ 0x180021540 (AudioServerIsFormatSupported.c)
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@KU_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x18002C050 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 * Callees:
 *     ?IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3PEAPEAU4@@Z @ 0x18002D350 (-IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_i.c)
 *     ?GetVirtualSurroundEffectMode@CEndpointCharacteristics@@QEAAIXZ @ 0x180038290 (-GetVirtualSurroundEffectMode@CEndpointCharacteristics@@QEAAIXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x1800E803C (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?IsOffloadConnectorFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3@Z @ 0x1800E9E00 (-IsOffloadConnectorFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MID.c)
 *     ?GetOffloadDeviceFormat@CEndpointCharacteristics@@QEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x180149300 (-GetOffloadDeviceFormat@CEndpointCharacteristics@@QEAAJPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?IsFormatSupportedByHwAudioEngine@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z @ 0x18014A8D4 (-IsFormatSupportedByHwAudioEngine@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall DeriveOffloadConnectorFormatFromStreamFormat(
        struct CEndpointCharacteristics *a1,
        struct tWAVEFORMATEX *a2,
        struct tWAVEFORMATEX *a3,
        struct _GUID *a4,
        struct tWAVEFORMATEX *Src,
        unsigned int a6,
        struct tWAVEFORMATEX **pv)
{
  struct tWAVEFORMATEX **v9; // r12
  char v10; // r15
  int OffloadDeviceFormat; // ebx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v12; // r8d
  void *v13; // rcx
  WORD nChannels; // cx
  bool v15; // si
  int IsFormatSupportedByHwAudioEngine; // edi
  void *v17; // rcx
  unsigned __int64 v18; // r9
  __int64 v19; // rdx
  void *v20; // rcx
  struct tWAVEFORMATEX *v21; // rcx
  DWORD nSamplesPerSec; // edx
  struct tWAVEFORMATEX **v23; // rax
  struct tWAVEFORMATEX **v24; // rcx
  struct tWAVEFORMATEX *v25; // rcx
  struct _GUID *v26; // rdi
  int v27; // eax
  void *v28; // rcx
  __int64 v29; // rdx
  int v30; // eax
  unsigned __int64 v31; // r9
  struct tWAVEFORMATEX **v32; // rax
  struct tWAVEFORMATEX **v33; // rcx
  struct _GUID *v34; // rcx
  struct tWAVEFORMATEX *v36; // [rsp+30h] [rbp-30h] BYREF
  struct _GUID v37; // [rsp+40h] [rbp-20h] BYREF
  char v38; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  struct tWAVEFORMATEX *v40; // [rsp+B0h] [rbp+50h] BYREF
  struct _GUID *v41; // [rsp+B8h] [rbp+58h]

  v41 = a4;
  v40 = a3;
  v9 = pv;
  *pv = 0LL;
  v10 = 1;
  Src = 0LL;
  *(_QWORD *)&v37.Data1 = &Src;
  *(_QWORD *)v37.Data4 = 0LL;
  v38 = 1;
  OffloadDeviceFormat = CEndpointCharacteristics::GetOffloadDeviceFormat(a1, (struct tWAVEFORMATEX **)v37.Data4);
  if ( v38 )
  {
    v13 = **(void ***)&v37.Data1;
    **(_QWORD **)&v37.Data1 = *(_QWORD *)v37.Data4;
    if ( v13 )
      CoTaskMemFree(v13);
  }
  if ( OffloadDeviceFormat < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15B,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
      (const char *)(unsigned int)OffloadDeviceFormat);
    goto LABEL_54;
  }
  nChannels = Src->nChannels;
  v15 = nChannels != a2->nChannels;
  if ( a2->nChannels > 2u
    && nChannels == 2
    && dword_180192F00[a6]
    && !(*(unsigned int (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)a1 + 56LL))(a1)
    && (unsigned int)CEndpointCharacteristics::GetVirtualSurroundEffectMode(a1) == 1 )
  {
    v10 = 0;
    v15 = 1;
  }
  IsFormatSupportedByHwAudioEngine = -2147023728;
  pv = 0LL;
  if ( !v10 )
  {
LABEL_20:
    if ( v15 )
    {
      v40 = 0LL;
      *(_QWORD *)&v37.Data1 = &v40;
      *(_QWORD *)v37.Data4 = 0LL;
      v38 = 1;
      OffloadDeviceFormat = CloneWaveFormat(Src, (struct tWAVEFORMATEX **)v37.Data4);
      if ( v38 )
      {
        v20 = **(void ***)&v37.Data1;
        **(_QWORD **)&v37.Data1 = *(_QWORD *)v37.Data4;
        if ( v20 )
          CoTaskMemFree(v20);
      }
      if ( OffloadDeviceFormat < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x185,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
          (const char *)(unsigned int)OffloadDeviceFormat);
        v21 = v40;
        v40 = 0LL;
        goto LABEL_50;
      }
      nSamplesPerSec = a2->nSamplesPerSec;
      v40->nSamplesPerSec = nSamplesPerSec;
      v40->nAvgBytesPerSec = nSamplesPerSec * v40->nBlockAlign;
      IsFormatSupportedByHwAudioEngine = CEndpointCharacteristics::IsFormatSupportedByHwAudioEngine(a1, v40);
      if ( !IsFormatSupportedByHwAudioEngine )
      {
        v23 = (struct tWAVEFORMATEX **)v40;
        v40 = 0LL;
        v24 = pv;
        pv = v23;
        if ( v24 )
          CoTaskMemFree(v24);
      }
      v25 = v40;
      v40 = 0LL;
      if ( v25 )
        CoTaskMemFree(v25);
    }
LABEL_31:
    if ( IsFormatSupportedByHwAudioEngine < 0 )
    {
      OffloadDeviceFormat = -2005139333;
      if ( IsFormatSupportedByHwAudioEngine != -2005139333 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x192,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
          (const char *)(unsigned int)IsFormatSupportedByHwAudioEngine);
        OffloadDeviceFormat = IsFormatSupportedByHwAudioEngine;
      }
      goto LABEL_52;
    }
    v26 = v41;
    v37 = *v41;
    v27 = IsOffloadConnectorFormatSupportedForMixFormat(
            a1,
            &v37,
            v12,
            (const struct tWAVEFORMATEX *)pv,
            (const struct tWAVEFORMATEX *)pv);
    OffloadDeviceFormat = v27;
    if ( v27 < 0 )
    {
      v18 = (unsigned int)v27;
      v19 = 406LL;
      goto LABEL_36;
    }
    v36 = 0LL;
    *(_QWORD *)&v37.Data1 = &v36;
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
    if ( OffloadDeviceFormat >= 0 )
    {
      v37 = *v26;
      v30 = IsStreamFormatSupportedForMixFormat(
              (struct _RTL_CRITICAL_SECTION *)a1,
              &v37,
              eOffloadConnector,
              (const struct tWAVEFORMATEX *)pv,
              v36,
              0LL);
      OffloadDeviceFormat = v30;
      if ( v30 < 0 )
      {
        v31 = (unsigned int)v30;
        v29 = 413LL;
LABEL_47:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v29,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
          (const char *)v31);
LABEL_49:
        v21 = v36;
        v36 = 0LL;
LABEL_50:
        if ( v21 )
          CoTaskMemFree(v21);
        goto LABEL_52;
      }
      if ( !v30 )
      {
        v32 = pv;
        pv = 0LL;
        *v9 = (struct tWAVEFORMATEX *)v32;
        OffloadDeviceFormat = 0;
        goto LABEL_49;
      }
      OffloadDeviceFormat = -2005073917;
      v29 = 414LL;
    }
    else
    {
      v29 = 409LL;
    }
    v31 = (unsigned int)OffloadDeviceFormat;
    goto LABEL_47;
  }
  IsFormatSupportedByHwAudioEngine = CEndpointCharacteristics::IsFormatSupportedByHwAudioEngine(a1, a2);
  if ( IsFormatSupportedByHwAudioEngine )
    goto LABEL_19;
  *(_QWORD *)&v37.Data1 = &pv;
  *(_QWORD *)v37.Data4 = 0LL;
  v38 = 1;
  OffloadDeviceFormat = CloneWaveFormat(a2, (struct tWAVEFORMATEX **)v37.Data4);
  if ( v38 )
  {
    v17 = **(void ***)&v37.Data1;
    **(_QWORD **)&v37.Data1 = *(_QWORD *)v37.Data4;
    if ( v17 )
      CoTaskMemFree(v17);
  }
  if ( OffloadDeviceFormat >= 0 )
  {
LABEL_19:
    if ( pv )
      goto LABEL_31;
    goto LABEL_20;
  }
  v18 = (unsigned int)OffloadDeviceFormat;
  v19 = 382LL;
LABEL_36:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v19,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
    (const char *)v18);
LABEL_52:
  v33 = pv;
  pv = 0LL;
  if ( v33 )
    CoTaskMemFree(v33);
LABEL_54:
  v34 = (struct _GUID *)Src;
  Src = 0LL;
  if ( v34 )
    CoTaskMemFree(v34);
  return (unsigned int)OffloadDeviceFormat;
}
