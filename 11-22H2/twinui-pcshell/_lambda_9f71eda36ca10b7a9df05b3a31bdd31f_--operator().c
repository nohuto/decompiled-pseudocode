/*
 * XREFs of _lambda_9f71eda36ca10b7a9df05b3a31bdd31f_::operator() @ 0x180059D64
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a61a72d02543b99baa10fb55a6e7a2f5___::Run @ 0x180059D50 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_a61a72d02543b99baa10fb55a6e7a2f5___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_9f71eda36ca10b7a9df05b3a31bdd31f_::operator()(__int64 a1, __int64 a2)
{
  int (__fastcall *v4)(__int64, _QWORD, __int64 *); // rbx
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0LL;
  v4 = *(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)a2 + 48LL);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v6);
  if ( v4(a2, *(_QWORD *)(*(_QWORD *)a1 + 128LL), &v6) >= 0 )
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)v6 + 296LL))(
      v6,
      0LL,
      *(_QWORD *)a1 + 152LL,
      0LL);
  return Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v6);
}
