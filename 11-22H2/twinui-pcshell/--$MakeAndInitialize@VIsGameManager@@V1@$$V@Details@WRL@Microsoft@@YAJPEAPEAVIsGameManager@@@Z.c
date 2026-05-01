/*
 * XREFs of ??$MakeAndInitialize@VIsGameManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVIsGameManager@@@Z @ 0x18008DDA0
 * Callers:
 *     ?CreateIsGameManager@@YAJPEAPEAUIIsGameManager@@@Z @ 0x18008DEFC (-CreateIsGameManager@@YAJPEAPEAUIIsGameManager@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?RuntimeClassInitialize@IsGameManager@@QEAAJXZ @ 0x18008DBF4 (-RuntimeClassInitialize@IsGameManager@@QEAAJXZ.c)
 *     ??0IsGameManager@@QEAA@XZ @ 0x18008DE50 (--0IsGameManager@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<IsGameManager,IsGameManager,>(IsGameManager **a1)
{
  IsGameManager *v2; // rax
  IsGameManager *v3; // rdi
  int v4; // esi
  IsGameManager *v6; // [rsp+40h] [rbp+8h] BYREF
  __int64 v7; // [rsp+48h] [rbp+10h]

  *a1 = 0LL;
  v2 = (IsGameManager *)operator new(0x70uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v2;
  if ( v2 )
  {
    v3 = IsGameManager::IsGameManager(v2);
    v6 = v3;
    v7 = 0LL;
    v4 = IsGameManager::RuntimeClassInitialize(v3);
    if ( v4 >= 0 )
    {
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v6);
      *a1 = v3;
      v4 = 0;
    }
    if ( v3 )
      (*(void (__fastcall **)(IsGameManager *))(*(_QWORD *)v3 + 16LL))(v3);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v4;
}
