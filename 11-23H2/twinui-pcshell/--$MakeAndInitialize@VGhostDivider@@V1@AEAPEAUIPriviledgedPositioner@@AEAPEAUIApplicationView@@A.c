/*
 * XREFs of ??$MakeAndInitialize@VGhostDivider@@V1@AEAPEAUIPriviledgedPositioner@@AEAPEAUIApplicationView@@AEAW4GhostDividerPlacement@@AEAW4GhostDividerSize@@@Details@WRL@Microsoft@@YAJPEAPEAVGhostDivider@@AEAPEAUIPriviledgedPositioner@@AEAPEAUIApplicationView@@AEAW4GhostDividerPlacement@@AEAW4GhostDividerSize@@@Z @ 0x1805E67C8
 * Callers:
 *     ?GhostDivider_CreateInstance@@YAJPEAUIPriviledgedPositioner@@PEAUIApplicationView@@W4GhostDividerPlacement@@W4GhostDividerSize@@AEBU_GUID@@PEAPEAX@Z @ 0x1805E6E94 (-GhostDivider_CreateInstance@@YAJPEAUIPriviledgedPositioner@@PEAUIApplicationView@@W4GhostDivide.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@VGhostDivider@@@WRL@Microsoft@@IEAAKXZ @ 0x1802E7008 (-InternalRelease@-$ComPtr@VGhostDivider@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0GhostDivider@@QEAA@XZ @ 0x1805E690C (--0GhostDivider@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@GhostDivider@@QEAAJPEAUIPriviledgedPositioner@@PEAUIApplicationView@@W4GhostDividerPlacement@@W4GhostDividerSize@@@Z @ 0x1805E7148 (-RuntimeClassInitialize@GhostDivider@@QEAAJPEAUIPriviledgedPositioner@@PEAUIApplicationView@@W4G.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<GhostDivider,GhostDivider,IPriviledgedPositioner * &,IApplicationView * &,enum GhostDividerPlacement &,enum GhostDividerSize &>(
        GhostDivider **a1,
        _QWORD *a2,
        _QWORD *a3,
        unsigned int *a4,
        _DWORD *a5)
{
  GhostDivider *v9; // rax
  int v10; // esi
  GhostDivider *v11; // rdi
  volatile int *v12; // rdx
  GhostDivider *v14; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v9 = (GhostDivider *)operator new(0x70uLL, (const struct std::nothrow_t *)&std::nothrow);
  v14 = v9;
  if ( v9 )
  {
    v11 = GhostDivider::GhostDivider(v9);
    v14 = v11;
    v10 = GhostDivider::RuntimeClassInitialize(v11, *a2, *a3, *a4, *a5);
    if ( v10 >= 0 )
    {
      if ( v11 )
        Microsoft::WRL::Details::SafeUnknownIncrementReference((GhostDivider *)((char *)v11 + 12), v12);
      *a1 = v11;
      v10 = 0;
    }
    Microsoft::WRL::ComPtr<GhostDivider>::InternalRelease((__int64 *)&v14);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v10;
}
