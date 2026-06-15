/*
 * XREFs of ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@AEA_K@Z @ 0x14007E7B8
 * Callers:
 *     ?Remove@?$EventSource@U?$ITypedEventHandler@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x14008AD70 (-Remove@-$EventSource@U-$ITypedEventHandler@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@W.c)
 * Callees:
 *     ?Attach@?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAXPEAVEventTargetArray@Details@23@@Z @ 0x140004CA4 (-Attach@-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAXPEAVEventTargetAr.c)
 *     ?RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z @ 0x140004F84 (-RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z.c)
 *     ??0EventTargetArray@Details@WRL@Microsoft@@QEAA@XZ @ 0x140005238 (--0EventTargetArray@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x14001F1C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x14001F7FC (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1400284DC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VGraphStreamingResourceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x14004F10C (--1-$MakeAllocator@VGraphStreamingResourceManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAA@XZ @ 0x1400803E8 (--1-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64 &>(
        Microsoft::WRL::Details::EventTargetArray **a1,
        unsigned __int64 *a2)
{
  void *v4; // rax
  int v5; // edi
  Microsoft::WRL::Details::EventTargetArray *v6; // rax
  unsigned __int64 v7; // rdx
  Microsoft::WRL::Details::EventTargetArray *v8; // rbx
  volatile int *v9; // rdx
  Microsoft::WRL::Details::EventTargetArray *v11; // [rsp+30h] [rbp+8h] BYREF
  void *v12; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v4 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = v4;
  if ( !v4 )
  {
    v5 = -2147024882;
LABEL_5:
    Microsoft::WRL::Details::MakeAllocator<GraphStreamingResourceManager>::~MakeAllocator<GraphStreamingResourceManager>(&v12);
    return (unsigned int)v5;
  }
  v6 = Microsoft::WRL::Details::EventTargetArray::EventTargetArray((Microsoft::WRL::Details::EventTargetArray *)v4);
  v11 = 0LL;
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::Attach(&v11, (__int64)v6);
  v7 = *a2;
  v8 = v11;
  v12 = 0LL;
  v5 = Microsoft::WRL::Details::EventTargetArray::RuntimeClassInitialize(v11, v7);
  if ( v5 < 0 )
  {
    Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::~ComPtr<Microsoft::WRL::Details::EventTargetArray>(&v11);
    goto LABEL_5;
  }
  if ( v8 )
    Microsoft::WRL::Details::SafeUnknownIncrementReference(
      (Microsoft::WRL::Details::EventTargetArray *)((char *)v8 + 12),
      v9);
  *a1 = v8;
  if ( v8 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(
      (__int64)v8,
      v9);
  return 0LL;
}
