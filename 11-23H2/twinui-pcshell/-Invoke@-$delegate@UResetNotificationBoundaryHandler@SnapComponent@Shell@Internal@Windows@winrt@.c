/*
 * XREFs of ?Invoke@?$delegate@UResetNotificationBoundaryHandler@SnapComponent@Shell@Internal@Windows@winrt@@V_lambda_2f694db03869fd8df1a58b7a10d320a2_@@@impl@winrt@@UEAAHPEAX@Z @ 0x180684800
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??RResetNotificationBoundaryHandler@SnapComponent@Shell@Internal@Windows@winrt@@QEBA@AEBUDesktopSnapLayoutManager@12345@@Z @ 0x180683064 (--RResetNotificationBoundaryHandler@SnapComponent@Shell@Internal@Windows@winrt@@QEBA@AEBUDesktop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::delegate<winrt::Windows::Internal::Shell::SnapComponent::ResetNotificationBoundaryHandler,_lambda_2f694db03869fd8df1a58b7a10d320a2_>::Invoke(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  v3 = 0LL;
  (*(void (__fastcall **)(_QWORD, _QWORD *, __int64 *))(**(_QWORD **)(a1 + 8) + 24LL))(
    *(_QWORD *)(a1 + 8),
    winrt::impl::guid_v<winrt::Windows::Internal::Shell::SnapComponent::ResetNotificationBoundaryHandler>,
    &v3);
  try
  {
    winrt::Windows::Internal::Shell::SnapComponent::ResetNotificationBoundaryHandler::operator()(&v3, &v4);
    if ( v3 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v3);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v3);
  }
  return result;
}
