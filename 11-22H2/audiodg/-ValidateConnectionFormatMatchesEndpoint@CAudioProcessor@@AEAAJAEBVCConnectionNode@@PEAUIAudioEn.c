/*
 * XREFs of ?ValidateConnectionFormatMatchesEndpoint@CAudioProcessor@@AEAAJAEBVCConnectionNode@@PEAUIAudioEndpoint@@@Z @ 0x14001CDFC
 * Callers:
 *     ?AttachEndpointToConnection@CAudioProcessor@@AEAAJ_KPEAUIAudioEndpoint@@AEAV?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@PEAPEAVCConnectionNode@@@Z @ 0x14001CC14 (-AttachEndpointToConnection@CAudioProcessor@@AEAAJ_KPEAUIAudioEndpoint@@AEAV-$CAtlList@PEAVCConn.c)
 * Callees:
 *     ?GetBitsPerSample@@YAIPEBUtWAVEFORMATEX@@@Z @ 0x14001CEFC (-GetBitsPerSample@@YAIPEBUtWAVEFORMATEX@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$unique_ptr@UKSDATAFORMAT_WAVEFORMATEX@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x14004A240 (--1-$unique_ptr@UKSDATAFORMAT_WAVEFORMATEX@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioProcessor::ValidateConnectionFormatMatchesEndpoint(
        CAudioProcessor *this,
        const struct CConnectionNode *a2,
        struct IAudioEndpoint *a3)
{
  struct IAudioEndpointVtbl *lpVtbl; // rax
  int v5; // edi
  struct tWAVEFORMATEX *v6; // rcx
  int *v7; // rcx
  __int16 v8; // ax
  __int64 v10; // rdx
  struct tWAVEFORMATEX *v11; // [rsp+28h] [rbp-18h] BYREF
  char v12; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  struct tWAVEFORMATEX *v14; // [rsp+50h] [rbp+10h] BYREF

  v14 = 0LL;
  lpVtbl = a3->lpVtbl;
  v11 = 0LL;
  v12 = 1;
  v5 = ((__int64 (__fastcall *)(struct IAudioEndpoint *, struct tWAVEFORMATEX **))lpVtbl->GetFrameFormat)(a3, &v11);
  if ( v12 )
  {
    v6 = v14;
    v14 = v11;
    if ( v6 )
      CoTaskMemFree(v6);
  }
  if ( v5 < 0 )
  {
    v10 = 2765LL;
    goto LABEL_17;
  }
  if ( v14->wBitsPerSample >> 3 != *((_DWORD *)a2 + 11)
    || v14->nChannels != *((_DWORD *)a2 + 10)
    || GetBitsPerSample(v14) != *((_DWORD *)a2 + 12)
    || (float)v7[1] != *((float *)a2 + 13) )
  {
    goto LABEL_15;
  }
  v8 = *(_WORD *)v7;
  if ( *(_WORD *)v7 == 0xFFFE )
    v8 = *((_WORD *)v7 + 12);
  if ( v8 != *((_WORD *)a2 + 12) )
  {
LABEL_15:
    v5 = -2005139426;
    v10 = 2772LL;
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
      (const char *)(unsigned int)v5,
      (int)&v14);
    wistd::unique_ptr<KSDATAFORMAT_WAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<KSDATAFORMAT_WAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(&v14);
    return (unsigned int)v5;
  }
  v14 = 0LL;
  if ( v7 )
    CoTaskMemFree(v7);
  return 0LL;
}
