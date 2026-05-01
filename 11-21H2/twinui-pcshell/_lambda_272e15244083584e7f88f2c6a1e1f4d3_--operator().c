/*
 * XREFs of _lambda_272e15244083584e7f88f2c6a1e1f4d3_::operator() @ 0x1802EE5EC
 * Callers:
 *     ?GetDefaultApplication@CImmersiveWindowManager@@UEAAJPEAUIImmersiveMonitor@@PEAPEAUIImmersiveApplication@@@Z @ 0x1802EEA70 (-GetDefaultApplication@CImmersiveWindowManager@@UEAAJPEAUIImmersiveMonitor@@PEAPEAUIImmersiveApp.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveApplicationInternal@@@Z @ 0x18006A280 (--4-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveApplicatio.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180075C24 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18015DFA8 (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall lambda_272e15244083584e7f88f2c6a1e1f4d3_::operator()(__int64 a1, __int64 a2)
{
  void (__fastcall *v4)(__int64, __int64 *); // rbx
  __int64 *AddressOf; // rax
  struct IUnknown *v7; // [rsp+30h] [rbp+8h] BYREF

  if ( !*(_QWORD *)(a1 + 8)
    || (v7 = 0LL,
        v4 = *(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2 + 464LL),
        AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf((__int64 *)&v7),
        v4(a2, AddressOf),
        LOBYTE(v4) = (unsigned int)SHIsSameObject(v7, *(struct IUnknown **)(a1 + 8)) != 0,
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v7),
        (_BYTE)v4) )
  {
    if ( ((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 280LL))(a2) & 4) != 0 )
      Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>::operator=(*(__int64 **)(a1 + 16), a2);
  }
  return **(_QWORD **)(a1 + 16) == 0LL;
}
