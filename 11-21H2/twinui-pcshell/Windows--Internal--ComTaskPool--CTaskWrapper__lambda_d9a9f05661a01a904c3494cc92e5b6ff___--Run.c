/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d9a9f05661a01a904c3494cc92e5b6ff___::Run @ 0x180143740
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@@XZ @ 0x180034084 (-ReleaseAndGetAddressOf@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d9a9f05661a01a904c3494cc92e5b6ff___::Run(
        _QWORD *a1)
{
  __int64 v2; // rsi
  void (__fastcall *v4)(__int64, _QWORD, __int64 *); // rbx
  __int64 *v5; // rax
  void (__fastcall *v6)(__int64, _QWORD, __int64 *); // rbx
  __int64 *AddressOf; // rax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1[2];
  v8 = 0LL;
  if ( a1[3] )
  {
    v6 = *(void (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v2 + 56LL);
    AddressOf = Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf(&v8);
    v6(v2, a1[3], AddressOf);
  }
  else if ( a1[4] )
  {
    v4 = *(void (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v2 + 48LL);
    v5 = Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf(&v8);
    v4(v2, a1[4], v5);
  }
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 144LL))(v2, v8);
  return Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v8);
}
