/*
 * XREFs of ??$MakeAndInitialize@VCApplicationManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCApplicationManager@@@Z @ 0x18001B25C
 * Callers:
 *     ?RuntimeClassInitialize@CWindowsPolicyManager@@QEAAJXZ @ 0x18001E5E8 (-RuntimeClassInitialize@CWindowsPolicyManager@@QEAAJXZ.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18000B5F0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??1?$MakeAllocator@VCAudioSessionPropertyStore@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180015FAC (--1-$MakeAllocator@VCAudioSessionPropertyStore@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180016E5C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0CApplicationManager@@QEAA@XZ @ 0x18001BB34 (--0CApplicationManager@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioStreamPreStartContext@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001DCE0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioStreamPreS.c)
 *     ?RuntimeClassInitialize@CApplicationManager@@QEAAJXZ @ 0x18002F39C (-RuntimeClassInitialize@CApplicationManager@@QEAAJXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CApplicationManager,CApplicationManager,>(
        CApplicationManager **a1)
{
  void *v2; // rax
  int v3; // edi
  CApplicationManager *v4; // rax
  CApplicationManager *v5; // rbx
  volatile int *v6; // rdx
  void *v8; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v2 = operator new(0xB0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v2;
  if ( v2 )
  {
    v4 = CApplicationManager::CApplicationManager((CApplicationManager *)v2);
    v8 = 0LL;
    v5 = v4;
    v3 = CApplicationManager::RuntimeClassInitialize(v4);
    if ( v3 >= 0 )
    {
      if ( v5 )
      {
        Microsoft::WRL::Details::SafeUnknownIncrementReference((CApplicationManager *)((char *)v5 + 12), v6);
        *a1 = v5;
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioStreamPreStartContext>::Release(v5);
      }
      else
      {
        *a1 = 0LL;
      }
      v3 = 0;
    }
    else if ( v5 )
    {
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioStreamPreStartContext>::Release(v5);
    }
  }
  else
  {
    v3 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CAudioSessionPropertyStore>::~MakeAllocator<CAudioSessionPropertyStore>(&v8);
  return (unsigned int)v3;
}
