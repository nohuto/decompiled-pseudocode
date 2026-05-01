/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d4ad7b1cd28a5da3164b15e881c20e9b___::Run @ 0x1802E76B0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@@XZ @ 0x180034084 (-ReleaseAndGetAddressOf@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d4ad7b1cd28a5da3164b15e881c20e9b___::Run(
        __int64 a1)
{
  __int64 v2; // rsi
  int (__fastcall *v3)(__int64, _QWORD, __int64 *); // rbx
  __int64 *AddressOf; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  v6 = 0LL;
  v3 = *(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v2 + 56LL);
  AddressOf = Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf(&v6);
  if ( v3(v2, *(_QWORD *)(a1 + 24), AddressOf) >= 0 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 152LL))(v2, v6);
  return Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v6);
}
