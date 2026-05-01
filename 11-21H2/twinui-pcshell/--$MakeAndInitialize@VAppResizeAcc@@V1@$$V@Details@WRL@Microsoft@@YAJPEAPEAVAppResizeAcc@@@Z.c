/*
 * XREFs of ??$MakeAndInitialize@VAppResizeAcc@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVAppResizeAcc@@@Z @ 0x180524714
 * Callers:
 *     ?AppResizeAcc_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x180524AD0 (-AppResizeAcc_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??0AppResizeAcc@@QEAA@XZ @ 0x1805247D0 (--0AppResizeAcc@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@AppResizeAcc@@QEAAJXZ @ 0x180525244 (-RuntimeClassInitialize@AppResizeAcc@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<AppResizeAcc,AppResizeAcc,>(AppResizeAcc **a1)
{
  AppResizeAcc *v2; // rax
  int v3; // edi
  AppResizeAcc *v4; // rsi
  AppResizeAcc *v6; // [rsp+40h] [rbp+8h] BYREF
  __int64 v7; // [rsp+48h] [rbp+10h]

  *a1 = 0LL;
  v2 = (AppResizeAcc *)operator new(0xB0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v2;
  if ( v2 )
  {
    v4 = AppResizeAcc::AppResizeAcc(v2);
    v6 = v4;
    v7 = 0LL;
    v3 = AppResizeAcc::RuntimeClassInitialize(v4);
    if ( v3 >= 0 )
    {
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v6);
      *a1 = v4;
      v3 = 0;
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v6);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v3;
}
