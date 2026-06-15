/*
 * XREFs of ??$MakeAndInitialize@VCDuckingManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCDuckingManager@@@Z @ 0x18001B308
 * Callers:
 *     ?RuntimeClassInitialize@CWindowsPolicyManager@@QEAAJXZ @ 0x18001E5E8 (-RuntimeClassInitialize@CWindowsPolicyManager@@QEAAJXZ.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18000B5F0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??1?$MakeAllocator@VCAudioSessionPropertyStore@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180015FAC (--1-$MakeAllocator@VCAudioSessionPropertyStore@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180016E5C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0CDuckingManager@@QEAA@XZ @ 0x18001BBDC (--0CDuckingManager@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternalEvents@@UIAudioDuckingManager@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001DC50 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISe_ea_18001DC50.c)
 *     ?RuntimeClassInitialize@CDuckingManager@@QEAAJXZ @ 0x180022BD0 (-RuntimeClassInitialize@CDuckingManager@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CDuckingManager,CDuckingManager,>(CDuckingManager **a1)
{
  void *v2; // rax
  int v3; // edi
  CDuckingManager *v4; // rbx
  volatile int *v5; // rdx
  void *v7; // [rsp+40h] [rbp+8h] BYREF
  void *v8; // [rsp+48h] [rbp+10h]
  void *v9; // [rsp+50h] [rbp+18h]

  *a1 = 0LL;
  v2 = operator new(0x1D0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v2;
  v8 = v2;
  if ( v2 )
  {
    v9 = v2;
    v4 = CDuckingManager::CDuckingManager((CDuckingManager *)v2);
    v7 = 0LL;
    v3 = CDuckingManager::RuntimeClassInitialize(v4);
    if ( v3 >= 0 )
    {
      if ( v4 )
      {
        Microsoft::WRL::Details::SafeUnknownIncrementReference((CDuckingManager *)((char *)v4 + 20), v5);
        *a1 = v4;
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISessionInternalEvents,IAudioDuckingManager>::Release(v4);
      }
      else
      {
        *a1 = 0LL;
      }
      v3 = 0;
    }
    else if ( v4 )
    {
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISessionInternalEvents,IAudioDuckingManager>::Release(v4);
    }
  }
  else
  {
    v3 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CAudioSessionPropertyStore>::~MakeAllocator<CAudioSessionPropertyStore>(&v7);
  return (unsigned int)v3;
}
