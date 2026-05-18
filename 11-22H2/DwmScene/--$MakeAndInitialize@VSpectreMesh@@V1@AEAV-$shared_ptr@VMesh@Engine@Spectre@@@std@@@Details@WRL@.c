/*
 * XREFs of ??$MakeAndInitialize@VSpectreMesh@@V1@AEAV?$shared_ptr@VMesh@Engine@Spectre@@@std@@@Details@WRL@Microsoft@@YAJPEAPEAVSpectreMesh@@AEAV?$shared_ptr@VMesh@Engine@Spectre@@@std@@@Z @ 0x1800166AC
 * Callers:
 *     ??$MakeAndInitialize@VSpectreMesh@@V1@AEAV?$shared_ptr@VMesh@Engine@Spectre@@@std@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VSpectreMesh@@@WRL@Microsoft@@@012@AEAV?$shared_ptr@VMesh@Engine@Spectre@@@std@@@Z @ 0x1800167D0 (--$MakeAndInitialize@VSpectreMesh@@V1@AEAV-$shared_ptr@VMesh@Engine@Spectre@@@std@@_ea_1800167D0.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$MakeAllocator@VSpectreTexture@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180010214 (--1-$MakeAllocator@VSpectreTexture@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@SpectreMesh@@QEAAJAEBV?$shared_ptr@VMesh@Engine@Spectre@@@std@@@Z @ 0x180013A90 (-RuntimeClassInitialize@SpectreMesh@@QEAAJAEBV-$shared_ptr@VMesh@Engine@Spectre@@@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18001C138 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<SpectreMesh,SpectreMesh,std::shared_ptr<Spectre::Engine::Mesh> &>(
        __int64 *a1,
        _QWORD *a2)
{
  _DWORD *v4; // rax
  __int64 v5; // rbx
  int v6; // edi
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  void *v9; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v4 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = (__int64)v4;
  v9 = v4;
  if ( v4 )
  {
    *(_QWORD *)v4 = &ISpectreMesh::`vftable';
    v4[3] = 1;
    *(_QWORD *)v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISpectreMesh>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v5 = &SpectreMesh::`vftable';
    *(_QWORD *)(v5 + 16) = 0LL;
    *(_QWORD *)(v5 + 24) = 0LL;
    *(_DWORD *)(v5 + 32) = 0;
    *(_DWORD *)(v5 + 36) = 0;
    *(_DWORD *)(v5 + 40) = 0;
    *(_DWORD *)(v5 + 44) = 1065353216;
    *(_DWORD *)(v5 + 48) = 1065353216;
    *(_DWORD *)(v5 + 52) = 1065353216;
    v8 = v5;
    v9 = 0LL;
    v6 = SpectreMesh::RuntimeClassInitialize(v5, a2);
    if ( v6 >= 0 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
      *a1 = v5;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v8);
      v6 = 0;
    }
    else
    {
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v8);
    }
  }
  else
  {
    v6 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<SpectreTexture>::~MakeAllocator<SpectreTexture>(&v9);
  return (unsigned int)v6;
}
