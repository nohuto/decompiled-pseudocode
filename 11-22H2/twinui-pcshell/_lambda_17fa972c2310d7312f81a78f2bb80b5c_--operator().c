/*
 * XREFs of _lambda_17fa972c2310d7312f81a78f2bb80b5c_::operator() @ 0x1803A8920
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4d39dc8836a747feab7d20b0af3bfeac___::Run @ 0x1802D0460 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_4d39dc8836a747feab7d20b0af3bfeac___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_17fa972c2310d7312f81a78f2bb80b5c_::operator()(unsigned int *a1, __int64 a2)
{
  int (__fastcall *v4)(__int64, __int64, __int64 *); // rbx
  __int64 v5; // rax
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0LL;
  v4 = *(int (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)a2 + 48LL);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v7);
  v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)a1 + 24LL))(*(_QWORD *)a1);
  if ( v4(a2, v5, &v7) >= 0 )
    (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)a2 + 168LL))(a2, v7, a1[2], 0LL);
  return Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v7);
}
