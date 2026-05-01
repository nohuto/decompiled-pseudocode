/*
 * XREFs of ?Invoke@?$delegate@U?$EventHandler@URemoteDesktopConnectedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@V_lambda_ea07a5f018953ad2ff3189abd97fd978_@@@impl@winrt@@UEAAHPEAX0@Z @ 0x180721920
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??R?$EventHandler@URemoteDesktopConnectedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@QEBA@AEBUIInspectable@123@AEBURemoteDesktopConnectedEventArgs@Shell@Internal@23@@Z @ 0x1807207AC (--R-$EventHandler@URemoteDesktopConnectedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Win.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::delegate<winrt::Windows::Foundation::EventHandler<winrt::Windows::Internal::Shell::RemoteDesktopConnectedEventArgs>,_lambda_ea07a5f018953ad2ff3189abd97fd978_>::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = a3;
  v5 = a2;
  v4 = 0LL;
  (*(void (__fastcall **)(_QWORD, void *, __int64 *))(**(_QWORD **)(a1 + 8) + 24LL))(
    *(_QWORD *)(a1 + 8),
    &winrt::impl::guid_v<winrt::Windows::Foundation::EventHandler<winrt::Windows::Internal::Shell::RemoteDesktopConnectedEventArgs>>,
    &v4);
  try
  {
    winrt::Windows::Foundation::EventHandler<winrt::Windows::Internal::Shell::RemoteDesktopConnectedEventArgs>::operator()(
      &v4,
      &v5,
      &v6);
    if ( v4 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v4);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v4);
  }
  return result;
}
