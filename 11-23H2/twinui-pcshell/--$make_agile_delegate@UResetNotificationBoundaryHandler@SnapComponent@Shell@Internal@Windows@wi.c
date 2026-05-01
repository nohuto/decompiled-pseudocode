/*
 * XREFs of ??$make_agile_delegate@UResetNotificationBoundaryHandler@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@YA?AUResetNotificationBoundaryHandler@SnapComponent@Shell@Internal@Windows@1@AEBU234561@@Z @ 0x18018EFAC
 * Callers:
 *     ?add@?$event@UResetNotificationBoundaryHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@QEAA?AUevent_token@2@AEBUResetNotificationBoundaryHandler@SnapComponent@Shell@Internal@Windows@2@@Z @ 0x18018EE5C (-add@-$event@UResetNotificationBoundaryHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winr.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180176DC4 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?get_agile_reference@impl@winrt@@YA?AUhresult@2@AEBUguid@2@PEAXPEAPEAX@Z @ 0x180412B0C (-get_agile_reference@impl@winrt@@YA-AUhresult@2@AEBUguid@2@PEAXPEAPEAX@Z.c)
 *     ??$?0V_lambda_2f694db03869fd8df1a58b7a10d320a2_@@@ResetNotificationBoundaryHandler@SnapComponent@Shell@Internal@Windows@winrt@@QEAA@V_lambda_2f694db03869fd8df1a58b7a10d320a2_@@@Z @ 0x180680B80 (--$-0V_lambda_2f694db03869fd8df1a58b7a10d320a2_@@@ResetNotificationBoundaryHandler@SnapComponent.c)
 */

winrt::Windows::Foundation::IUnknown *__fastcall winrt::impl::make_agile_delegate<winrt::Windows::Internal::Shell::SnapComponent::ResetNotificationBoundaryHandler>(
        winrt::Windows::Foundation::IUnknown *this,
        void (__fastcall ****a2)(_QWORD, __int64 *, __int64 *))
{
  void (__fastcall ***v4)(_QWORD, __int64 *, __int64 *); // rcx
  void (__fastcall ***v6)(_QWORD, __int64 *, __int64 *); // r8
  __int64 v7; // rax
  __int64 v8; // [rsp+38h] [rbp+18h] BYREF
  __int64 v9; // [rsp+40h] [rbp+20h] BYREF

  v4 = *a2;
  if ( *a2 )
  {
    v8 = 0LL;
    (**v4)(v4, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v8);
    if ( v8 )
    {
      winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v8);
      *(_QWORD *)this = *a2;
      winrt::Windows::Foundation::IUnknown::add_ref(this);
      return this;
    }
    v6 = *a2;
  }
  else
  {
    v6 = 0LL;
  }
  v9 = 0LL;
  winrt::impl::get_agile_reference(
    &v8,
    &winrt::impl::guid_v<winrt::Windows::Internal::Shell::SnapComponent::ResetNotificationBoundaryHandler>,
    v6,
    &v9);
  v7 = v9;
  if ( v9 )
  {
    v9 = 0LL;
    v8 = v7;
    winrt::Windows::Internal::Shell::SnapComponent::ResetNotificationBoundaryHandler::ResetNotificationBoundaryHandler(
      this,
      &v8);
  }
  else
  {
    *(_QWORD *)this = *a2;
    winrt::Windows::Foundation::IUnknown::add_ref(this);
  }
  if ( v9 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v9);
  return this;
}
