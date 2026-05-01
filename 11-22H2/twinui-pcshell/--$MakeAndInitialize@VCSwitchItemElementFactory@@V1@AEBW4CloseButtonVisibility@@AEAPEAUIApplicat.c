/*
 * XREFs of ??$MakeAndInitialize@VCSwitchItemElementFactory@@V1@AEBW4CloseButtonVisibility@@AEAPEAUIApplicationViewIconLoader@@@Details@WRL@Microsoft@@YAJPEAPEAVCSwitchItemElementFactory@@AEBW4CloseButtonVisibility@@AEAPEAUIApplicationViewIconLoader@@@Z @ 0x180568CB0
 * Callers:
 *     ?CSwitchItemElementFactory_CreateInstance@@YAJAEBUSwitchItemElementFactoryCreateParams@@PEAUIApplicationViewIconLoader@@AEBU_GUID@@PEAPEAX@Z @ 0x18056933C (-CSwitchItemElementFactory_CreateInstance@@YAJAEBUSwitchItemElementFactoryCreateParams@@PEAUIApp.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIApplicationViewIconLoader@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationViewIconLoader@@@Z @ 0x18013A9E4 (--4-$ComPtr@UIApplicationViewIconLoader@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationViewIconLoa.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CSwitchItemElementFactory@@QEAA@XZ @ 0x180568EF4 (--0CSwitchItemElementFactory@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CSwitchItemElementFactory,CSwitchItemElementFactory,enum CloseButtonVisibility const &,IApplicationViewIconLoader * &>(
        CSwitchItemElementFactory **a1,
        int *a2,
        __int64 *a3)
{
  unsigned int v6; // edi
  CSwitchItemElementFactory *v7; // rax
  CSwitchItemElementFactory *v8; // rsi
  int v9; // ebx
  CSwitchItemElementFactory *v11; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0;
  *a1 = 0LL;
  v7 = (CSwitchItemElementFactory *)operator new(0x160uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
  {
    v8 = CSwitchItemElementFactory::CSwitchItemElementFactory(v7);
    v11 = v8;
    v9 = *a2;
    Microsoft::WRL::ComPtr<IApplicationViewIconLoader>::operator=((__int64 *)v8 + 40, *a3);
    *((_DWORD *)v8 + 74) = v9;
    if ( v8 )
      (*(void (__fastcall **)(CSwitchItemElementFactory *))(*(_QWORD *)v8 + 8LL))(v8);
    *a1 = v8;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v11);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v6;
}
