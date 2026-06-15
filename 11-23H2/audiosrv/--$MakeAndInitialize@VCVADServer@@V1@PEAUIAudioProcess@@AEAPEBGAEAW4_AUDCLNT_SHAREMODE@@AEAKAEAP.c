/*
 * XREFs of ??$MakeAndInitialize@VCVADServer@@V1@PEAUIAudioProcess@@AEAPEBGAEAW4_AUDCLNT_SHAREMODE@@AEAKAEAPEBUtWAVEFORMATEX@@AEAPEBU_GUID@@AEAPEAUVadServerSettings@@AEAPEAPEAGAEAPEAUIProcessSubmixProxy@@@Details@WRL@Microsoft@@YAJPEAPEAVCVADServer@@$$QEAPEAUIAudioProcess@@AEAPEBGAEAW4_AUDCLNT_SHAREMODE@@AEAKAEAPEBUtWAVEFORMATEX@@AEAPEBU_GUID@@AEAPEAUVadServerSettings@@AEAPEAPEAGAEAPEAUIProcessSubmixProxy@@@Z @ 0x18003DAC0
 * Callers:
 *     ?AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@PEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@PEAPEAX@Z @ 0x18003D84C (-AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180012B00 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIUnknown@@@Detail.c)
 *     ??0CVADServer@@QEAA@XZ @ 0x18003DC04 (--0CVADServer@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CVADServer@@QEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@PEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@@Z @ 0x18003E018 (-RuntimeClassInitialize@CVADServer@@QEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVE.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18003F104 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180067088 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VEffectPackConfigurationManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800CF338 (--1-$MakeAllocator@VEffectPackConfigurationManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$ComPtr@VCVADServer@@@WRL@Microsoft@@QEAA@XZ @ 0x18011C5B4 (--1-$ComPtr@VCVADServer@@@WRL@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CVADServer,CVADServer,IAudioProcess *,unsigned short const * &,enum _AUDCLNT_SHAREMODE &,unsigned long &,tWAVEFORMATEX const * &,_GUID const * &,VadServerSettings * &,unsigned short * * &,IProcessSubmixProxy * &>(
        volatile signed __int64 **a1,
        struct IAudioProcess **a2,
        const unsigned __int16 **a3,
        enum _AUDCLNT_SHAREMODE *a4,
        unsigned int *a5,
        const struct tWAVEFORMATEX **a6,
        const struct _GUID **a7,
        struct VadServerSettings **a8,
        unsigned __int16 ***a9,
        struct IProcessSubmixProxy **a10)
{
  CVADServer *v14; // rax
  volatile signed __int64 *v15; // rbx
  volatile int *v16; // rdx
  int v17; // edi
  signed __int64 v18; // rax
  signed __int64 v19; // rtt
  void *v21; // [rsp+50h] [rbp-28h] BYREF
  CVADServer *v22; // [rsp+80h] [rbp+8h] BYREF

  *a1 = 0LL;
  v14 = (CVADServer *)operator new(0x260uLL, (const struct std::nothrow_t *)&std::nothrow);
  v22 = v14;
  v21 = v14;
  if ( !v14 )
  {
    v17 = -2147024882;
LABEL_14:
    Microsoft::WRL::Details::MakeAllocator<EffectPackConfigurationManager>::~MakeAllocator<EffectPackConfigurationManager>(&v22);
    return (unsigned int)v17;
  }
  v15 = (volatile signed __int64 *)CVADServer::CVADServer(v14);
  v21 = (void *)v15;
  v22 = 0LL;
  v17 = CVADServer::RuntimeClassInitialize((CVADServer *)v15, *a2, *a3, *a4, *a5, *a6, *a7, *a8, *a9, *a10);
  if ( v17 < 0 )
  {
    Microsoft::WRL::ComPtr<CVADServer>::~ComPtr<CVADServer>(&v21);
    goto LABEL_14;
  }
  if ( v15 )
  {
    v18 = *((_QWORD *)v15 + 4);
    while ( v18 >= 0 )
    {
      if ( (_DWORD)v18 != 0x7FFFFFFF )
      {
        v19 = v18;
        v18 = _InterlockedCompareExchange64(v15 + 4, v18 + 1, v18);
        if ( v19 != v18 )
          continue;
      }
      goto LABEL_8;
    }
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v18 + 16), v16);
  }
LABEL_8:
  *a1 = v15;
  if ( v15 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IUnknown>::Release((__int64)v15);
  return 0LL;
}
