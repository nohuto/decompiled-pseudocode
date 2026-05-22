/*
 * XREFs of ??$MakeAndInitialize@VForegroundManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVForegroundManager@@@Z @ 0x180028A68
 * Callers:
 *     ?Create@ForegroundManager@@SA?AV?$ComPtr@VForegroundManager@@@WRL@Microsoft@@XZ @ 0x180028A2C (-Create@ForegroundManager@@SA-AV-$ComPtr@VForegroundManager@@@WRL@Microsoft@@XZ.c)
 * Callees:
 *     ?RuntimeClassInitialize@ForegroundManager@@UEAAJXZ @ 0x1800294B0 (-RuntimeClassInitialize@ForegroundManager@@UEAAJXZ.c)
 *     ??0ForegroundManager@@AEAA@XZ @ 0x18003968C (--0ForegroundManager@@AEAA@XZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180047284 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VForegroundManager@@@WRL@Microsoft@@IEAAKXZ @ 0x180048C54 (-InternalRelease@-$ComPtr@VForegroundManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004B738 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ForegroundManager,ForegroundManager,>(
        ForegroundManager **a1)
{
  ForegroundManager *v2; // rax
  ForegroundManager *v3; // rdi
  volatile int *v4; // rdx
  int v5; // esi
  ForegroundManager *v7; // [rsp+40h] [rbp+8h] BYREF
  ForegroundManager *v8; // [rsp+48h] [rbp+10h]
  ForegroundManager *v9; // [rsp+50h] [rbp+18h]

  *a1 = 0LL;
  v2 = (ForegroundManager *)operator new(0x220uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v2;
  v8 = v2;
  if ( v2 )
  {
    v9 = v2;
    v3 = ForegroundManager::ForegroundManager(v2);
    v7 = v3;
    v5 = ForegroundManager::RuntimeClassInitialize(v3);
    if ( v5 >= 0 )
    {
      if ( v3 )
        Microsoft::WRL::Details::SafeUnknownIncrementReference((ForegroundManager *)((char *)v3 + 12), v4);
      *a1 = v3;
      v5 = 0;
    }
    Microsoft::WRL::ComPtr<ForegroundManager>::InternalRelease(&v7);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v5;
}
