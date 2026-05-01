/*
 * XREFs of _lambda_b503fe08d4c0fbc06a8f8acb1e7e9643_::operator() @ 0x180175474
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d9a9f05661a01a904c3494cc92e5b6ff___::Run @ 0x180175460 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_d9a9f05661a01a904c3494cc92e5b6ff___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_b503fe08d4c0fbc06a8f8acb1e7e9643_::operator()(_QWORD *a1, __int64 a2)
{
  void (__fastcall *v4)(__int64, _QWORD, __int64 *); // rbx
  void (__fastcall *v6)(__int64, _QWORD, __int64 *); // rbx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0LL;
  if ( *a1 )
  {
    v6 = *(void (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)a2 + 56LL);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v7);
    v6(a2, *a1, &v7);
  }
  else if ( a1[1] )
  {
    v4 = *(void (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)a2 + 48LL);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v7);
    v4(a2, a1[1], &v7);
  }
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 144LL))(a2, v7);
  return Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v7);
}
