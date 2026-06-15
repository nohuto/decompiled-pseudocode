/*
 * XREFs of ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@$$QEA_K@Z @ 0x14001CCA8
 * Callers:
 *     ?AddInternal@?$EventSource@U?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAU?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x14001E920 (-AddInternal@-$EventSource@U-$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Wi.c)
 *     ?AddInternal@?$EventSource@U?$ITypedEventHandler@PEAVAudioDeviceModulesManager@Devices@Media@Windows@@PEAVAudioDeviceModuleNotificationEventArgs@234@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAU?$ITypedEventHandler@PEAVAudioDeviceModulesManager@Devices@Media@Windows@@PEAVAudioDeviceModuleNotificationEventArgs@234@@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x140074E1C (-AddInternal@-$EventSource@U-$ITypedEventHandler@PEAVAudioDeviceModulesManager@Devices@Media@Win.c)
 * Callees:
 *     ?RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z @ 0x140015680 (-RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z.c)
 *     ?Attach@?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAXPEAVEventTargetArray@Details@23@@Z @ 0x14001CD4C (-Attach@-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAXPEAVEventTargetAr.c)
 *     ??0EventTargetArray@Details@WRL@Microsoft@@QEAA@XZ @ 0x14001CF28 (--0EventTargetArray@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x140024740 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x140025A40 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14002FC5C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64>(
        Microsoft::WRL::Details::EventTargetArray **a1,
        unsigned __int64 *a2)
{
  Microsoft::WRL::Details::EventTargetArray *v4; // rax
  __int64 v5; // rax
  unsigned __int64 v6; // rdx
  Microsoft::WRL::Details::EventTargetArray *v7; // rbx
  volatile int *v8; // rdx
  int v9; // edi
  Microsoft::WRL::Details::EventTargetArray *v11; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v4 = (Microsoft::WRL::Details::EventTargetArray *)operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v5 = Microsoft::WRL::Details::EventTargetArray::EventTargetArray(v4);
    v11 = 0LL;
    Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::Attach(&v11, v5);
    v6 = *a2;
    v7 = v11;
    v9 = Microsoft::WRL::Details::EventTargetArray::RuntimeClassInitialize(v11, v6);
    if ( v9 >= 0 )
    {
      if ( v7 )
        Microsoft::WRL::Details::SafeUnknownIncrementReference(
          (Microsoft::WRL::Details::EventTargetArray *)((char *)v7 + 12),
          v8);
      *a1 = v7;
      v9 = 0;
    }
    if ( v7 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v7);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v9;
}
