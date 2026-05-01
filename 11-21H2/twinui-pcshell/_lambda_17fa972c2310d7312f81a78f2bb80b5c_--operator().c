/*
 * XREFs of _lambda_17fa972c2310d7312f81a78f2bb80b5c_::operator() @ 0x1802EFE40
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4d39dc8836a747feab7d20b0af3bfeac___::Run @ 0x18022AA90 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_4d39dc8836a747feab7d20b0af3bfeac___--Run.c)
 * Callees:
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@@XZ @ 0x180034084 (-ReleaseAndGetAddressOf@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_17fa972c2310d7312f81a78f2bb80b5c_::operator()(unsigned int *a1, __int64 a2)
{
  int (__fastcall *v4)(__int64, __int64, __int64 *); // rdi
  __int64 *AddressOf; // rbx
  __int64 v6; // rax
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = 0LL;
  v4 = *(int (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)a2 + 48LL);
  AddressOf = Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf(&v8);
  v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)a1 + 24LL))(*(_QWORD *)a1);
  if ( v4(a2, v6, AddressOf) >= 0 )
    (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)a2 + 168LL))(a2, v8, a1[2], 0LL);
  return Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v8);
}
