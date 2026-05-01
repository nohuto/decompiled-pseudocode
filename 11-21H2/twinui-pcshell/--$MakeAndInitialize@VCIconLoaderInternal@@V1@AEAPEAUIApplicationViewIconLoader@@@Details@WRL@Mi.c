/*
 * XREFs of ??$MakeAndInitialize@VCIconLoaderInternal@@V1@AEAPEAUIApplicationViewIconLoader@@@Details@WRL@Microsoft@@YAJPEAPEAVCIconLoaderInternal@@AEAPEAUIApplicationViewIconLoader@@@Z @ 0x180230F66
 * Callers:
 *     ?CIconLoaderInternal_CreateInstance@@YAJPEAUIApplicationViewIconLoader@@AEBU_GUID@@PEAPEAX@Z @ 0x1802311FC (-CIconLoaderInternal_CreateInstance@@YAJPEAUIApplicationViewIconLoader@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CIconLoaderInternal@@QEAA@XZ @ 0x18049809C (--0CIconLoaderInternal@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CIconLoaderInternal@@QEAAJPEAUIApplicationViewIconLoader@@@Z @ 0x180498F1C (-RuntimeClassInitialize@CIconLoaderInternal@@QEAAJPEAUIApplicationViewIconLoader@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CIconLoaderInternal,CIconLoaderInternal,IApplicationViewIconLoader * &>(
        CIconLoaderInternal **a1,
        struct IApplicationViewIconLoader **a2)
{
  CIconLoaderInternal *v4; // rax
  int v5; // edi
  CIconLoaderInternal *v6; // rbx
  CIconLoaderInternal *v8; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v4 = (CIconLoaderInternal *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v6 = CIconLoaderInternal::CIconLoaderInternal(v4);
    v8 = v6;
    v5 = CIconLoaderInternal::RuntimeClassInitialize(v6, *a2);
    if ( v5 >= 0 )
    {
      if ( v6 )
        (*(void (__fastcall **)(CIconLoaderInternal *))(*(_QWORD *)v6 + 8LL))(v6);
      *a1 = v6;
      v5 = 0;
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v8);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v5;
}
