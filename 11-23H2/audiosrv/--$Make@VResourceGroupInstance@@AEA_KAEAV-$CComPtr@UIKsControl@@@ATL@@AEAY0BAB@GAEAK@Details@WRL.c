/*
 * XREFs of ??$Make@VResourceGroupInstance@@AEA_KAEAV?$CComPtr@UIKsControl@@@ATL@@AEAY0BAB@GAEAK@Details@WRL@Microsoft@@YA?AV?$ComPtr@VResourceGroupInstance@@@12@AEA_KAEAV?$CComPtr@UIKsControl@@@ATL@@AEAY0BAB@GAEAK@Z @ 0x1800FE1DC
 * Callers:
 *     ??$MakeOrThrow@VResourceGroupInstance@@AEA_KAEAV?$CComPtr@UIKsControl@@@ATL@@AEAY0BAB@GAEAK@wil@@YA?AV?$ComPtr@VResourceGroupInstance@@@WRL@Microsoft@@AEA_KAEAV?$CComPtr@UIKsControl@@@ATL@@AEAY0BAB@GAEAK@Z @ 0x1800FE2FC (--$MakeOrThrow@VResourceGroupInstance@@AEA_KAEAV-$CComPtr@UIKsControl@@@ATL@@AEAY0BAB@GAEAK@wil@.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180067038 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180067088 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0ResourceGroupInstance@@QEAA@_KPEAUIKsControl@@PEBGK@Z @ 0x1800FE664 (--0ResourceGroupInstance@@QEAA@_KPEAUIKsControl@@PEBGK@Z.c)
 */

// Hidden C++ exception states: #wind=4
ResourceGroupInstance **__fastcall Microsoft::WRL::Details::Make<ResourceGroupInstance,unsigned __int64 &,ATL::CComPtr<IKsControl> &,unsigned short (&)[257],unsigned long &>(
        ResourceGroupInstance **a1,
        unsigned __int64 *a2,
        struct IKsControl **a3,
        const unsigned __int16 *a4,
        unsigned int *a5)
{
  ResourceGroupInstance *v9; // rax
  ResourceGroupInstance *v10; // rcx
  ResourceGroupInstance *v11; // rdi

  *a1 = 0LL;
  v9 = (ResourceGroupInstance *)operator new(0x228uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v9;
  if ( v9 )
  {
    v11 = ResourceGroupInstance::ResourceGroupInstance(v9, *a2, *a3, a4, *a5);
    if ( *a1 )
      (*(void (__fastcall **)(ResourceGroupInstance *))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v11;
    v10 = 0LL;
  }
  if ( v10 )
    operator delete(v10);
  return a1;
}
