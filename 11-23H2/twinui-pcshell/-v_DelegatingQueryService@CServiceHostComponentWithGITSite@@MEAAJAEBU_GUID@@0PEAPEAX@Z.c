/*
 * XREFs of ?v_DelegatingQueryService@CServiceHostComponentWithGITSite@@MEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x1806410E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180132F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?s_IUnknown_QueryService@CServiceHostComponent@@KAJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z @ 0x180640F80 (-s_IUnknown_QueryService@CServiceHostComponent@@KAJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CServiceHostComponentWithGITSite::v_DelegatingQueryService(
        CServiceHostComponentWithGITSite *this,
        const struct _GUID *a2,
        const struct _GUID *a3,
        void **a4)
{
  char *v7; // rdi
  void (__fastcall *v8)(char *, GUID *, struct IUnknown **); // rbx
  struct IUnknown *v10[5]; // [rsp+20h] [rbp-28h] BYREF

  v7 = (char *)this - 40;
  v10[0] = 0LL;
  v8 = *(void (__fastcall **)(char *, GUID *, struct IUnknown **))(*((_QWORD *)this - 5) + 32LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v10);
  v8(v7, &GUID_00000000_0000_0000_c000_000000000046, v10);
  LODWORD(v8) = CServiceHostComponent::s_IUnknown_QueryService(v10[0], a2, a3, a4);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v10);
  return (unsigned int)v8;
}
