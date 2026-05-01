/*
 * XREFs of ??$MakeAndInitialize@VCVirtualDesktopDefaultForegroundHandler@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopDefaultForegroundHandler@@@Z @ 0x180165880
 * Callers:
 *     ?CVirtualDesktopDefaultForegroundHandler_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1801657CC (-CVirtualDesktopDefaultForegroundHandler_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VCVirtualDesktopDefaultForegroundHandler@@@WRL@Microsoft@@IEAAKXZ @ 0x18017C958 (-InternalRelease@-$ComPtr@VCVirtualDesktopDefaultForegroundHandler@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CVirtualDesktopDefaultForegroundHandler,CVirtualDesktopDefaultForegroundHandler,>(
        _QWORD *a1)
{
  unsigned int v2; // ebx
  _QWORD *v3; // rax
  volatile int *v4; // rdx
  _QWORD *v5; // rdi
  _QWORD *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  *a1 = 0LL;
  v3 = operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v3;
  if ( v3 )
  {
    *((_DWORD *)v3 + 3) = 1;
    *v3 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IVirtualDesktopDefaultForegroundHandler>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *v5 = &CVirtualDesktopDefaultForegroundHandler::`vftable';
    v7 = v5;
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)((char *)v5 + 12), v4);
    *a1 = v5;
    Microsoft::WRL::ComPtr<CVirtualDesktopDefaultForegroundHandler>::InternalRelease(&v7);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v2;
}
