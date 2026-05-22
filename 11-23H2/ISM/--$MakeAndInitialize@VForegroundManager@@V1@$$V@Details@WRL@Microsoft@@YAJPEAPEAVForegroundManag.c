/*
 * XREFs of ??$MakeAndInitialize@VForegroundManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVForegroundManager@@@Z @ 0x180040B2C
 * Callers:
 *     ?Create@ForegroundManager@@SA?AV?$ComPtr@VForegroundManager@@@WRL@Microsoft@@XZ @ 0x180040AF0 (-Create@ForegroundManager@@SA-AV-$ComPtr@VForegroundManager@@@WRL@Microsoft@@XZ.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180012900 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ??0ForegroundManager@@AEAA@XZ @ 0x18003D7DC (--0ForegroundManager@@AEAA@XZ.c)
 *     ?RuntimeClassInitialize@ForegroundManager@@UEAAJXZ @ 0x180040BC0 (-RuntimeClassInitialize@ForegroundManager@@UEAAJXZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180050B58 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180057604 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VForegroundManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180063F38 (--1-$MakeAllocator@VForegroundManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAA@XZ @ 0x180098B88 (--1-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ForegroundManager,ForegroundManager,>(
        ForegroundManager **a1)
{
  ForegroundManager *v2; // rax
  ForegroundManager *v3; // rbx
  volatile int *v4; // rdx
  int v5; // edi
  ForegroundManager *v7; // [rsp+40h] [rbp+8h] BYREF
  ForegroundManager *v8; // [rsp+48h] [rbp+10h] BYREF
  ForegroundManager *v9; // [rsp+50h] [rbp+18h]

  *a1 = 0LL;
  v2 = (ForegroundManager *)operator new(0x220uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v2;
  v8 = v2;
  if ( !v2 )
  {
    v5 = -2147024882;
LABEL_9:
    Microsoft::WRL::Details::MakeAllocator<ForegroundManager>::~MakeAllocator<ForegroundManager>(&v7);
    return (unsigned int)v5;
  }
  v9 = v2;
  v3 = ForegroundManager::ForegroundManager(v2);
  v8 = v3;
  v7 = 0LL;
  v5 = ForegroundManager::RuntimeClassInitialize(v3);
  if ( v5 < 0 )
  {
    Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::~ComPtr<Microsoft::WRL::Details::EventTargetArray>(&v8);
    goto LABEL_9;
  }
  if ( v3 )
  {
    Microsoft::WRL::Details::SafeUnknownIncrementReference((ForegroundManager *)((char *)v3 + 12), v4);
    *a1 = v3;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v3);
  }
  else
  {
    *a1 = 0LL;
  }
  return 0LL;
}
