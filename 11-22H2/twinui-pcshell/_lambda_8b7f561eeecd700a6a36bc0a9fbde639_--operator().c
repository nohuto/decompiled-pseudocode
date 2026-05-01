/*
 * XREFs of _lambda_8b7f561eeecd700a6a36bc0a9fbde639_::operator() @ 0x1804B2530
 * Callers:
 *     ?FindViewInfoByApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@AEAV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z @ 0x1804B33FC (-FindViewInfoByApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@AEAV-$shared_pt.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall lambda_8b7f561eeecd700a6a36bc0a9fbde639_::operator()(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rdi
  void (__fastcall *v5)(__int64, _QWORD, __int64 *); // rbx
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  if ( !*(_QWORD *)(*(_QWORD *)a2 + 48LL) )
    return 0;
  v7 = 0LL;
  v4 = *(_QWORD *)(a1[1] + 344LL);
  v5 = *(void (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v4 + 48LL);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v7);
  v5(v4, *(_QWORD *)(*(_QWORD *)a2 + 48LL), &v7);
  LOBYTE(v5) = v7 == *a1;
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v7);
  return (char)v5;
}
