/*
 * XREFs of ?GetDefault@?$consume_Windows_Storage_IUserDataPathsStatics@UIUserDataPathsStatics@Storage@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1801B38F8
 * Callers:
 *     ?CompleteInitializationTask@BroadcastDVRComponent@@AEAAXXZ @ 0x1800905A0 (-CompleteInitializationTask@BroadcastDVRComponent@@AEAAXXZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_6303e3e5e10b4f0abde3a9b07bd3902f_@@CA@AEBUIUserDataPathsStatics@Storage@Windows@winrt@@@Z @ 0x1801B38D0 (-_lambda_invoker_cdecl_@_lambda_6303e3e5e10b4f0abde3a9b07bd3902f_@@CA@AEBUIUserDataPathsStatics@.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_Storage_IUserDataPathsStatics<winrt::Windows::Storage::IUserDataPathsStatics>::GetDefault(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v2; // rcx
  int v4; // eax
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v2 = *a1;
  v6 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 56LL))(v2, &v6);
  if ( v4 < 0 )
    winrt::throw_hresult((unsigned int)v4);
  *a2 = v6;
  return a2;
}
