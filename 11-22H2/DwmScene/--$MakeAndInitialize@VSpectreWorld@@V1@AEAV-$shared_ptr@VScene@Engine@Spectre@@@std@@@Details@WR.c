/*
 * XREFs of ??$MakeAndInitialize@VSpectreWorld@@V1@AEAV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Details@WRL@Microsoft@@YAJPEAPEAVSpectreWorld@@AEAV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x180016A78
 * Callers:
 *     ??$MakeAndInitialize@VSpectreWorld@@V1@AEAV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VSpectreWorld@@@WRL@Microsoft@@@012@AEAV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x180016B9C (--$MakeAndInitialize@VSpectreWorld@@V1@AEAV-$shared_ptr@VScene@Engine@Spectre@@@std_ea_180016B9C.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$MakeAllocator@VSpectreTexture@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180010214 (--1-$MakeAllocator@VSpectreTexture@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@SpectreWorld@@QEAAJAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x18001BF8C (-RuntimeClassInitialize@SpectreWorld@@QEAAJAEBV-$shared_ptr@VScene@Engine@Spectre@@@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18001C138 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0SphericalHarmonics@Engine@Spectre@@QEAA@XZ @ 0x1800A3994 (--0SphericalHarmonics@Engine@Spectre@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<SpectreWorld,SpectreWorld,std::shared_ptr<Spectre::Engine::Scene> &>(
        _QWORD *a1,
        __int64 a2)
{
  _DWORD *v4; // rax
  _QWORD *v5; // rbx
  int v6; // edi
  _QWORD *v8; // [rsp+30h] [rbp+8h] BYREF
  void *v9; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v4 = operator new(0xC8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  v9 = v4;
  v8 = v4;
  if ( v4 )
  {
    *(_QWORD *)v4 = &ISpectreWorld::`vftable';
    v4[3] = 1;
    *(_QWORD *)v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISpectreWorld>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *v5 = &SpectreWorld::`vftable';
    v5[2] = 0LL;
    v5[3] = 0LL;
    v5[4] = 0LL;
    v5[5] = 0LL;
    Spectre::Engine::SphericalHarmonics::SphericalHarmonics((Spectre::Engine::SphericalHarmonics *)(v5 + 6));
    v8 = v5;
    v9 = 0LL;
    v6 = SpectreWorld::RuntimeClassInitialize(v5, a2);
    if ( v6 >= 0 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v5 + 8LL))(v5);
      *a1 = v5;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v8);
      v6 = 0;
    }
    else
    {
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v8);
    }
  }
  else
  {
    v6 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<SpectreTexture>::~MakeAllocator<SpectreTexture>(&v9);
  return (unsigned int)v6;
}
