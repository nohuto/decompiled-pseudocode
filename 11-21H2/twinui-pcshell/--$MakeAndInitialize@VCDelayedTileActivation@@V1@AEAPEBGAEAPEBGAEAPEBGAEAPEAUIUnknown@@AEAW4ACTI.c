/*
 * XREFs of ??$MakeAndInitialize@VCDelayedTileActivation@@V1@AEAPEBGAEAPEBGAEAPEBGAEAPEAUIUnknown@@AEAW4ACTIVATEOPTIONSINTERNAL@@@Details@WRL@Microsoft@@YAJPEAPEAVCDelayedTileActivation@@AEAPEBG11AEAPEAUIUnknown@@AEAW4ACTIVATEOPTIONSINTERNAL@@@Z @ 0x1804E6AFC
 * Callers:
 *     ?CDelayedTileActivation_CreateInstance@@YAJPEBG00PEAUIUnknown@@W4ACTIVATEOPTIONSINTERNAL@@AEBU_GUID@@PEAPEAX@Z @ 0x1804E783C (-CDelayedTileActivation_CreateInstance@@YAJPEBG00PEAUIUnknown@@W4ACTIVATEOPTIONSINTERNAL@@AEBU_G.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??0CDelayedTileActivation@@QEAA@XZ @ 0x1804E6DF8 (--0CDelayedTileActivation@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VCDelayedTileActivation@@@WRL@Microsoft@@QEAAXPEAVCDelayedTileActivation@@@Z @ 0x1804E7750 (-Attach@-$ComPtr@VCDelayedTileActivation@@@WRL@Microsoft@@QEAAXPEAVCDelayedTileActivation@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCDelayedTileActivation@@@WRL@Microsoft@@IEAAKXZ @ 0x1804E835C (-InternalRelease@-$ComPtr@VCDelayedTileActivation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@CDelayedTileActivation@@QEAAJPEBG00PEAUIUnknown@@W4ACTIVATEOPTIONSINTERNAL@@@Z @ 0x1804E8764 (-RuntimeClassInitialize@CDelayedTileActivation@@QEAAJPEBG00PEAUIUnknown@@W4ACTIVATEOPTIONSINTERN.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CDelayedTileActivation,CDelayedTileActivation,unsigned short const * &,unsigned short const * &,unsigned short const * &,IUnknown * &,enum ACTIVATEOPTIONSINTERNAL &>(
        CDelayedTileActivation **a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 *a4,
        _QWORD *a5,
        _DWORD *a6)
{
  CDelayedTileActivation *v10; // rax
  int v11; // esi
  CDelayedTileActivation *v12; // rax
  __int64 v13; // r9
  CDelayedTileActivation *v14; // rbx
  volatile int *v15; // rdx
  CDelayedTileActivation *v17; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v10 = (CDelayedTileActivation *)operator new(0xA8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v17 = v10;
  if ( v10 )
  {
    v12 = CDelayedTileActivation::CDelayedTileActivation(v10);
    v17 = 0LL;
    Microsoft::WRL::ComPtr<CDelayedTileActivation>::Attach(&v17, v12);
    v13 = *a4;
    v14 = v17;
    v11 = CDelayedTileActivation::RuntimeClassInitialize(v17, *a2, *a3, v13, *a5, *a6, 0LL);
    if ( v11 >= 0 )
    {
      if ( v14 )
        Microsoft::WRL::Details::SafeUnknownIncrementReference((CDelayedTileActivation *)((char *)v14 + 44), v15);
      *a1 = v14;
      v11 = 0;
    }
    Microsoft::WRL::ComPtr<CDelayedTileActivation>::InternalRelease(&v17);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v11;
}
