/*
 * XREFs of ??$MakeAndInitialize@VAppLayoutCache@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVAppLayoutCache@@@Z @ 0x1800D1D0C
 * Callers:
 *     ?AppLayoutCache_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D1B98 (-AppLayoutCache_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0AppLayoutCache@@QEAA@XZ @ 0x1800D1D98 (--0AppLayoutCache@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<AppLayoutCache,AppLayoutCache,>(AppLayoutCache **a1)
{
  unsigned int v2; // ebx
  AppLayoutCache *v3; // rax
  AppLayoutCache *v4; // rax
  AppLayoutCache *v5; // rdi
  AppLayoutCache *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  *a1 = 0LL;
  v3 = (AppLayoutCache *)operator new(0xB0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v3 )
  {
    v4 = AppLayoutCache::AppLayoutCache(v3);
    v5 = v4;
    v7 = v4;
    if ( v4 )
      (*(void (__fastcall **)(AppLayoutCache *))(*(_QWORD *)v4 + 8LL))(v4);
    *a1 = v5;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v7);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v2;
}
