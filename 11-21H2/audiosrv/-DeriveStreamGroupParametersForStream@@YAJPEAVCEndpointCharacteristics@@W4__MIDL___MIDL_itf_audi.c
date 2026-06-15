/*
 * XREFs of ?DeriveStreamGroupParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SYSTEM_AUDIO_STREAM_TYPE@@_JU_GUID@@4_N5PEBUtWAVEFORMATEX@@HHAEAV?$unique_ptr@UStreamGroupParams@@U?$default_delete@UStreamGroupParams@@@std@@@std@@@Z @ 0x18002BA30
 * Callers:
 *     ?BuildDeviceGraphForStream@@YAJPEAVCEndpointCharacteristics@@PEAUIAudioStreamInfo@@PEAUIAudioProcess@@PEAUIDeviceGraphObjectsStore@@KKW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@6PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEBUtWAVEFORMATEX@@W4SYSTEM_AUDIO_STREAM_TYPE@@PEAUIAudioGraphCallback@@K_NPEAUIProcessSubmixProxy@@PEAUSystemAudioStream@@@Z @ 0x18002B4F0 (-BuildDeviceGraphForStream@@YAJPEAVCEndpointCharacteristics@@PEAUIAudioStreamInfo@@PEAUIAudioPro.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_JPEAUIStreamGroupProxy@@PEAUSystemAudioStream@@@Z @ 0x1800FEAD8 (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_JPEAUIStreamGroupProxy@@PEAUSyste.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18005EFFC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x180062529 (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1StreamGroupParams@@QEAA@XZ @ 0x1800FE530 (--1StreamGroupParams@@QEAA@XZ.c)
 *     WPP_SF_Idd @ 0x1801027C8 (WPP_SF_Idd.c)
 *     ?CreateInstance@CAecAttributes@@SAJPEBGW4AEC_LOOPBACK_SELECTION_MODE@@PEAPEAVCStreamGroupAttributes@@@Z @ 0x1801053D8 (-CreateInstance@CAecAttributes@@SAJPEBGW4AEC_LOOPBACK_SELECTION_MODE@@PEAPEAVCStreamGroupAttribu.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall DeriveStreamGroupParametersForStream(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        LPVOID a5,
        __int128 *a6,
        unsigned __int8 a7,
        unsigned __int8 a8,
        unsigned __int16 *Src,
        int a10,
        int a11,
        StreamGroupParams **a12)
{
  int v15; // eax
  unsigned int v16; // esi
  unsigned __int16 *v17; // rsi
  __int64 v18; // rbx
  void *v19; // rax
  void *v20; // rdi
  StreamGroupParams *v21; // rax
  StreamGroupParams *v22; // rdi
  StreamGroupParams *v23; // rbx
  LPVOID v24; // rsi
  void *v25; // rsi
  __int64 v26; // rdx
  __int128 v27; // xmm0
  int v28; // ebp
  int v29; // r14d
  _QWORD *v30; // r8
  StreamGroupParams *v31; // rsi
  __int64 v33; // rax
  int Instance; // eax
  __int64 v35; // rdx
  int v36; // [rsp+20h] [rbp-58h]
  int v37; // [rsp+20h] [rbp-58h]
  StreamGroupParams *v38; // [rsp+30h] [rbp-48h] BYREF
  __int128 v39; // [rsp+40h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  void *pv; // [rsp+80h] [rbp+8h]

  a5 = 0LL;
  v15 = (*(__int64 (__fastcall **)(_QWORD, LPVOID *))(**(_QWORD **)(a1 + 16) + 40LL))(*(_QWORD *)(a1 + 16), &a5);
  v16 = v15;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x35D,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v15,
      v36);
    goto LABEL_19;
  }
  v17 = Src;
  v18 = Src[8];
  v19 = CoTaskMemAlloc(v18 + 18);
  v20 = v19;
  if ( v19 )
  {
    memcpy_0(v19, v17, v18 + 18);
    v16 = 0;
  }
  else
  {
    v16 = -2147024882;
  }
  pv = v20;
  if ( (v16 & 0x80000000) == 0 )
  {
    v21 = (StreamGroupParams *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
    v22 = v21;
    if ( v21 )
    {
      *((_QWORD *)v21 + 1) = 0LL;
      *((_QWORD *)v21 + 3) = 0LL;
      *((_QWORD *)v21 + 4) = 0LL;
      *((_QWORD *)v21 + 5) = 0LL;
      *((_QWORD *)v21 + 6) = 0LL;
      *(_QWORD *)v21 = 0LL;
      *((_QWORD *)v21 + 2) = 0LL;
      *((_QWORD *)v21 + 7) = 0LL;
    }
    else
    {
      v22 = 0LL;
    }
    v23 = v22;
    v38 = v22;
    if ( !v22 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x363,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)0x8007000ELL,
        v36);
      v16 = -2147024882;
      goto LABEL_15;
    }
    v24 = a5;
    a5 = 0LL;
    CoTaskMemFree(*(LPVOID *)v22);
    *(_QWORD *)v22 = v24;
    *((_BYTE *)v22 + 49) = a2 == 3;
    v25 = pv;
    pv = 0LL;
    CoTaskMemFree(*((LPVOID *)v22 + 2));
    *((_QWORD *)v22 + 2) = v25;
    *((_QWORD *)v22 + 3) = a4;
    v27 = *a6;
    *((_OWORD *)v22 + 2) = *a6;
    v28 = a7;
    *((_BYTE *)v22 + 48) = a7;
    v29 = a8;
    *((_BYTE *)v22 + 50) = a8;
    *((_DWORD *)v22 + 2) = a3;
    v39 = v27;
    v30 = (_QWORD *)((char *)v22 + 56);
    *((_QWORD *)v22 + 7) = 0LL;
    if ( a10 && a11 )
    {
      v33 = v39 - *(_QWORD *)&GUID_98951333_b9cd_48b1_a0a3_ff40682d73f7.Data1;
      if ( (_QWORD)v39 == *(_QWORD *)&GUID_98951333_b9cd_48b1_a0a3_ff40682d73f7.Data1 )
        v33 = *((_QWORD *)&v39 + 1) - *(_QWORD *)GUID_98951333_b9cd_48b1_a0a3_ff40682d73f7.Data4;
      if ( v33 )
      {
        Instance = CAecAttributes::CreateInstance(0LL, 0LL);
        v16 = Instance;
        if ( Instance < 0 )
        {
          v35 = 834LL;
          goto LABEL_35;
        }
      }
      else
      {
        Instance = CAecAttributes::CreateInstance(0LL, 2LL);
        v16 = Instance;
        if ( Instance < 0 )
        {
          v35 = 829LL;
LABEL_35:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v35,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
            (const char *)(unsigned int)Instance,
            v36);
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x36E,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
            (const char *)v16,
            v37);
LABEL_15:
          if ( v23 )
          {
            StreamGroupParams::~StreamGroupParams(v23);
            operator delete(v23, 0x40uLL);
          }
          goto LABEL_17;
        }
      }
    }
    if ( a12 != &v38 )
    {
      v23 = 0LL;
      v31 = *a12;
      *a12 = v22;
      if ( v31 )
      {
        StreamGroupParams::~StreamGroupParams(v31);
        operator delete(v31, 0x40uLL);
      }
    }
    if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_Idd(*((_QWORD *)WPP_GLOBAL_Control + 2), v26, v30, a4, v28, v29, v38);
    }
    v16 = 0;
    goto LABEL_15;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x360,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
    (const char *)v16,
    v36);
LABEL_17:
  if ( pv )
    CoTaskMemFree(pv);
LABEL_19:
  if ( a5 )
    CoTaskMemFree(a5);
  return v16;
}
