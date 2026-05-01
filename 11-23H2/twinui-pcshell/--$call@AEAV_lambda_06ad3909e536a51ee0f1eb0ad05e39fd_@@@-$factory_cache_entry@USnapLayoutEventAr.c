/*
 * XREFs of ??$call@AEAV_lambda_06ad3909e536a51ee0f1eb0ad05e39fd_@@@?$factory_cache_entry@USnapLayoutEventArgs@TaskGroups@Shell@Internal@Windows@winrt@@UISnapLayoutEventArgsFactory@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_06ad3909e536a51ee0f1eb0ad05e39fd_@@@Z @ 0x18064665C
 * Callers:
 *     ?OnGuidedSnapAssistCompletedEvent@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@AEAAXAEBUIGuidedSnapAssistController@WindowSnapping@4567@AEBUGuidedSnapAssistCompletedArgs@94567@@Z @ 0x1806493E0 (-OnGuidedSnapAssistCompletedEvent@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@W.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x1800B4460 (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1801CEFB9 (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$get_activation_factory@UISnapLayoutEventArgsFactory@TaskGroups@Shell@Internal@Windows@winrt@@@winrt@@YA?AUISnapLayoutEventArgsFactory@TaskGroups@Shell@Internal@Windows@0@AEBUhstring@param@0@@Z @ 0x180646910 (--$get_activation_factory@UISnapLayoutEventArgsFactory@TaskGroups@Shell@Internal@Windows@winrt@@.c)
 *     ??R_lambda_06ad3909e536a51ee0f1eb0ad05e39fd_@@QEBA@AEBUISnapLayoutEventArgsFactory@TaskGroups@Shell@Internal@Windows@winrt@@@Z @ 0x180646D90 (--R_lambda_06ad3909e536a51ee0f1eb0ad05e39fd_@@QEBA@AEBUISnapLayoutEventArgsFactory@TaskGroups@Sh.c)
 */

__int64 __fastcall winrt::impl::factory_cache_entry<winrt::Windows::Internal::Shell::TaskGroups::SnapLayoutEventArgs,winrt::Windows::Internal::Shell::TaskGroups::ISnapLayoutEventArgsFactory>::call<_lambda_06ad3909e536a51ee0f1eb0ad05e39fd_ &>(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 *),
        __int64 a2,
        __int64 a3)
{
  void (__fastcall ***v5)(_QWORD, _QWORD, _QWORD); // rbx
  bool v6; // zf
  __int64 v8[2]; // [rsp+28h] [rbp-38h] BYREF
  _BYTE v9[40]; // [rsp+38h] [rbp-28h] BYREF
  void (__fastcall ***v10)(_QWORD, __int64 *, __int64 *); // [rsp+80h] [rbp+20h] BYREF
  __int64 v11; // [rsp+98h] [rbp+38h] BYREF

  v10 = a1;
  winrt::param::hstring::create_string_reference(
    (winrt::param::hstring *)v9,
    L"Windows.Internal.Shell.TaskGroups.SnapLayoutEventArgs",
    53);
  winrt::get_activation_factory<winrt::Windows::Internal::Shell::TaskGroups::ISnapLayoutEventArgsFactory>(&v10, v9);
  v5 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v10;
  if ( v10 && (v11 = 0LL, (**v10)(v10, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v11), (v8[0] = v11) != 0) )
  {
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(v8);
    v8[1] = (__int64)&qword_1809914E8;
    _InterlockedIncrement64(&qword_1809914E8);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::Shell::TaskGroups::SnapLayoutEventArgs,winrt::Windows::Internal::Shell::TaskGroups::ISnapLayoutEventArgsFactory>,
            (signed __int64)v10,
            0LL) )
    {
      v10 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_1809914F0);
    }
    _lambda_06ad3909e536a51ee0f1eb0ad05e39fd_::operator()(
      a3,
      a2,
      &winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::Shell::TaskGroups::SnapLayoutEventArgs,winrt::Windows::Internal::Shell::TaskGroups::ISnapLayoutEventArgsFactory>);
    _InterlockedDecrement64(&qword_1809914E8);
    v6 = v10 == 0LL;
  }
  else
  {
    _lambda_06ad3909e536a51ee0f1eb0ad05e39fd_::operator()(a3, a2, &v10);
    v6 = v5 == 0LL;
  }
  if ( !v6 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v10);
  return a2;
}
