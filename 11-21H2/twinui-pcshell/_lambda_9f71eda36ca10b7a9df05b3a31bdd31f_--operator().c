/*
 * XREFs of _lambda_9f71eda36ca10b7a9df05b3a31bdd31f_::operator() @ 0x180151D84
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a61a72d02543b99baa10fb55a6e7a2f5___::Run @ 0x180151D70 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_a61a72d02543b99baa10fb55a6e7a2f5___--Run.c)
 * Callees:
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@@XZ @ 0x180034084 (-ReleaseAndGetAddressOf@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_9f71eda36ca10b7a9df05b3a31bdd31f_::operator()(__int64 a1, __int64 a2)
{
  int (__fastcall *v4)(__int64, _QWORD, __int64 *); // rbx
  __int64 *AddressOf; // rax
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0LL;
  v4 = *(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)a2 + 48LL);
  AddressOf = Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf(&v7);
  if ( v4(a2, *(_QWORD *)(*(_QWORD *)a1 + 128LL), AddressOf) >= 0 )
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)v7 + 296LL))(
      v7,
      0LL,
      *(_QWORD *)a1 + 152LL,
      0LL);
  return Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v7);
}
