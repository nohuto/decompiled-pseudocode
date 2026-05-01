/*
 * XREFs of ?EvaluateHolographicContext@HolographicPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAH@Z @ 0x1800757B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_IsViewContextHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800765C0 (-_IsViewContextHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUIPropertySet@C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall HolographicPositioner::EvaluateHolographicContext(
        HolographicPositioner *this,
        struct IApplicationView *a2,
        struct IUnknown *a3,
        int *a4)
{
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rbx
  struct Windows::Foundation::Collections::IPropertySet *v10; // [rsp+50h] [rbp+18h] BYREF

  *a4 = 0;
  v10 = 0LL;
  if ( a3 )
  {
    QueryInterface = a3->lpVtbl->QueryInterface;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v10);
    if ( ((int (__fastcall *)(struct IUnknown *, GUID *, struct Windows::Foundation::Collections::IPropertySet **))QueryInterface)(
           a3,
           &GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c,
           &v10) >= 0
      && HolographicPositioner::_IsViewContextHolographic((HolographicPositioner *)((char *)this - 120), a2, v10) )
    {
      *a4 = 1;
    }
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v10);
  return 0LL;
}
