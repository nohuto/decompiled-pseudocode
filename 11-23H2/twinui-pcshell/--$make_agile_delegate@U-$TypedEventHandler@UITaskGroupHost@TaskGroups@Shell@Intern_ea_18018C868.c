/*
 * XREFs of ??$make_agile_delegate@U?$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@USnapLayoutEventArgs@23456@@Foundation@Windows@winrt@@@impl@winrt@@YA?AU?$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@USnapLayoutEventArgs@23456@@Foundation@Windows@1@AEBU2341@@Z @ 0x18018C868
 * Callers:
 *     ?add@?$event@U?$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@USnapLayoutEventArgs@23456@@Foundation@Windows@winrt@@@winrt@@QEAA?AUevent_token@2@AEBU?$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@USnapLayoutEventArgs@23456@@Foundation@Windows@2@@Z @ 0x18018C75C (-add@-$event@U-$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@USnap.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180176DC4 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?get_agile_reference@impl@winrt@@YA?AUhresult@2@AEBUguid@2@PEAXPEAPEAX@Z @ 0x180412B0C (-get_agile_reference@impl@winrt@@YA-AUhresult@2@AEBUguid@2@PEAXPEAPEAX@Z.c)
 *     ??$?0V_lambda_c94a48d978abc8a263e59e418b20be63_@@@?$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@USnapLayoutEventArgs@23456@@Foundation@Windows@winrt@@QEAA@V_lambda_c94a48d978abc8a263e59e418b20be63_@@@Z @ 0x180645ADC (--$-0V_lambda_c94a48d978abc8a263e59e418b20be63_@@@-$TypedEventHandler@UITaskGroupHost@TaskGroups.c)
 */

winrt::Windows::Foundation::IUnknown *__fastcall winrt::impl::make_agile_delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost,winrt::Windows::Internal::Shell::TaskGroups::SnapLayoutEventArgs>>(
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
    &winrt::impl::guid_v<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost,winrt::Windows::Internal::Shell::TaskGroups::SnapLayoutEventArgs>>,
    v6,
    &v9);
  v7 = v9;
  if ( v9 )
  {
    v9 = 0LL;
    v8 = v7;
    winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost,winrt::Windows::Internal::Shell::TaskGroups::SnapLayoutEventArgs>::TypedEventHandler<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost,winrt::Windows::Internal::Shell::TaskGroups::SnapLayoutEventArgs>(
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
