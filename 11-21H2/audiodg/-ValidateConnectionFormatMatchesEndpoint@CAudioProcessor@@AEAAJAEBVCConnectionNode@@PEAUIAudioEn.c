/*
 * XREFs of ?ValidateConnectionFormatMatchesEndpoint@CAudioProcessor@@AEAAJAEBVCConnectionNode@@PEAUIAudioEndpoint@@@Z @ 0x14000A170
 * Callers:
 *     ?AttachEndpointToConnection@CAudioProcessor@@AEAAJ_KPEAUIAudioEndpoint@@AEAV?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@PEAPEAVCConnectionNode@@@Z @ 0x14000A294 (-AttachEndpointToConnection@CAudioProcessor@@AEAAJ_KPEAUIAudioEndpoint@@AEAV-$CAtlList@PEAVCConn.c)
 * Callees:
 *     ?GetBitsPerSample@@YAIPEBUtWAVEFORMATEX@@@Z @ 0x14000A278 (-GetBitsPerSample@@YAIPEBUtWAVEFORMATEX@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioProcessor::ValidateConnectionFormatMatchesEndpoint(
        CAudioProcessor *this,
        const struct CConnectionNode *a2,
        struct IAudioEndpoint *a3)
{
  struct IAudioEndpointVtbl *lpVtbl; // rax
  int v5; // ebx
  struct tWAVEFORMATEX *v6; // rcx
  struct tWAVEFORMATEX *v7; // rcx
  struct tWAVEFORMATEX *v8; // rdx
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
  }
  else
  {
    if ( v14->wBitsPerSample >> 3 == *((_DWORD *)a2 + 11)
      && v14->nChannels == *((_DWORD *)a2 + 10)
      && GetBitsPerSample(v14) == *((_DWORD *)a2 + 12)
      && (float)(int)v7->nSamplesPerSec == *((float *)a2 + 13) )
    {
      v8 = (struct tWAVEFORMATEX *)((char *)v7 + 24);
      if ( v7->wFormatTag != 0xFFFE )
        v8 = v7;
      if ( v8->wFormatTag == *((_WORD *)a2 + 12) )
      {
        v5 = 0;
        goto LABEL_13;
      }
    }
    v5 = -2005139426;
    v10 = 2772LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
    (const char *)(unsigned int)v5,
    (int)&v14);
  v7 = v14;
LABEL_13:
  v14 = 0LL;
  if ( v7 )
    CoTaskMemFree(v7);
  return (unsigned int)v5;
}
