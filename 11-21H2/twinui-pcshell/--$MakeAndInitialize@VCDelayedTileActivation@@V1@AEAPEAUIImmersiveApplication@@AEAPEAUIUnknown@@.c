/*
 * XREFs of ??$MakeAndInitialize@VCDelayedTileActivation@@V1@AEAPEAUIImmersiveApplication@@AEAPEAUIUnknown@@AEAW4ACTIVATEOPTIONSINTERNAL@@@Details@WRL@Microsoft@@YAJPEAPEAVCDelayedTileActivation@@AEAPEAUIImmersiveApplication@@AEAPEAUIUnknown@@AEAW4ACTIVATEOPTIONSINTERNAL@@@Z @ 0x1804E6A10
 * Callers:
 *     ?CDelayedTileActivation_CreateInstance@@YAJPEAUIImmersiveApplication@@PEAUIUnknown@@W4ACTIVATEOPTIONSINTERNAL@@AEBU_GUID@@PEAPEAX@Z @ 0x1804E7784 (-CDelayedTileActivation_CreateInstance@@YAJPEAUIImmersiveApplication@@PEAUIUnknown@@W4ACTIVATEOP.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??0CDelayedTileActivation@@QEAA@XZ @ 0x1804E6DF8 (--0CDelayedTileActivation@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VCDelayedTileActivation@@@WRL@Microsoft@@QEAAXPEAVCDelayedTileActivation@@@Z @ 0x1804E7750 (-Attach@-$ComPtr@VCDelayedTileActivation@@@WRL@Microsoft@@QEAAXPEAVCDelayedTileActivation@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCDelayedTileActivation@@@WRL@Microsoft@@IEAAKXZ @ 0x1804E835C (-InternalRelease@-$ComPtr@VCDelayedTileActivation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@CDelayedTileActivation@@QEAAJPEAUIImmersiveApplication@@PEAUIUnknown@@W4ACTIVATEOPTIONSINTERNAL@@@Z @ 0x1804E867C (-RuntimeClassInitialize@CDelayedTileActivation@@QEAAJPEAUIImmersiveApplication@@PEAUIUnknown@@W4.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CDelayedTileActivation,CDelayedTileActivation,IImmersiveApplication * &,IUnknown * &,enum ACTIVATEOPTIONSINTERNAL &>(
        CDelayedTileActivation **a1,
        _QWORD *a2,
        _QWORD *a3,
        unsigned int *a4)
{
  CDelayedTileActivation *v8; // rax
  int v9; // esi
  CDelayedTileActivation *v10; // rax
  __int64 v11; // r9
  CDelayedTileActivation *v12; // rbx
  volatile int *v13; // rdx
  CDelayedTileActivation *v15; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0LL;
  v8 = (CDelayedTileActivation *)operator new(0xA8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v15 = v8;
  if ( v8 )
  {
    v10 = CDelayedTileActivation::CDelayedTileActivation(v8);
    v15 = 0LL;
    Microsoft::WRL::ComPtr<CDelayedTileActivation>::Attach(&v15, v10);
    v11 = *a4;
    v12 = v15;
    v9 = CDelayedTileActivation::RuntimeClassInitialize(v15, *a2, *a3, v11, 0LL);
    if ( v9 >= 0 )
    {
      if ( v12 )
        Microsoft::WRL::Details::SafeUnknownIncrementReference((CDelayedTileActivation *)((char *)v12 + 44), v13);
      *a1 = v12;
      v9 = 0;
    }
    Microsoft::WRL::ComPtr<CDelayedTileActivation>::InternalRelease(&v15);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v9;
}
