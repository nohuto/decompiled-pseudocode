/*
 * XREFs of ?Invoke@?$delegate@U?$TypedEventHandler@UAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UAppViewChangedEventArgs@23456@@Foundation@Windows@winrt@@V_lambda_e811ed625de1c9f36d6dae6db721db2b_@@@impl@winrt@@UEAAHPEAX0@Z @ 0x18001A020
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher,winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewChangedEventArgs>,_lambda_e811ed625de1c9f36d6dae6db721db2b_>::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rdi
  void (__fastcall *v5)(__int64, __int64 *, __int64 *); // rsi
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v4 = *(_QWORD *)(a1 + 8);
  v5 = *(void (__fastcall **)(__int64, __int64 *, __int64 *))(a1 + 16);
  v7 = a3;
  if ( a3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
  v8 = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  v5(v4, &v8, &v7);
  return 0LL;
}
