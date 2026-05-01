/*
 * XREFs of ?_IsViewTypeHolographicCompatible@HolographicPositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x180099BAC
 * Callers:
 *     ?_IsViewContextHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180099AFC (-_IsViewContextHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUIPropertySet@C.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveApplication@@XZ @ 0x18013E64C (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveAp.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall HolographicPositioner::_IsViewTypeHolographicCompatible(
        HolographicPositioner *this,
        struct IApplicationView *a2)
{
  char v2; // si
  __int64 v3; // rbx
  int (__fastcall *v4)(__int64, __int64); // rdi
  __int64 AddressOf; // rax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  v7 = 0LL;
  v8 = 0LL;
  if ( (**(int (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))a2)(
         a2,
         &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b,
         &v8) < 0
    || (v3 = v8,
        v4 = *(int (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 24LL),
        AddressOf = Microsoft::WRL::ComPtr<IImmersiveApplication>::ReleaseAndGetAddressOf(&v7),
        v4(v3, AddressOf) < 0)
    || !(*(unsigned int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 328LL))(v7, 0LL)
    && !(*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 328LL))(v7, 5LL) )
  {
    v2 = 1;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v8);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v7);
  return v2;
}
