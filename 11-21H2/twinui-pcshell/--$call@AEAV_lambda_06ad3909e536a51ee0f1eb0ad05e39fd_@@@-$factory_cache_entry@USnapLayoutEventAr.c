/*
 * XREFs of ??$call@AEAV_lambda_06ad3909e536a51ee0f1eb0ad05e39fd_@@@?$factory_cache_entry@USnapLayoutEventArgs@TaskGroups@Shell@Internal@Windows@winrt@@UISnapLayoutEventArgsFactory@23456@@impl@winrt@@QEAA?AUSnapLayoutEventArgs@TaskGroups@Shell@Internal@Windows@2@AEAV_lambda_06ad3909e536a51ee0f1eb0ad05e39fd_@@@Z @ 0x1805886A0
 * Callers:
 *     ?OnGuidedSnapAssistCompletedEvent@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@AEAAXAEBUIGuidedSnapAssistController@WindowSnapping@4567@AEBUGuidedSnapAssistCompletedArgs@94567@@Z @ 0x18058AF40 (-OnGuidedSnapAssistCompletedEvent@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@W.c)
 * Callees:
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x180067B6C (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800F70DC (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x18018F6EB (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$get_activation_factory@UISnapLayoutEventArgsFactory@TaskGroups@Shell@Internal@Windows@winrt@@@winrt@@YA?AUISnapLayoutEventArgsFactory@TaskGroups@Shell@Internal@Windows@0@AEBUhstring@param@0@@Z @ 0x1805889B0 (--$get_activation_factory@UISnapLayoutEventArgsFactory@TaskGroups@Shell@Internal@Windows@winrt@@.c)
 *     ??R_lambda_06ad3909e536a51ee0f1eb0ad05e39fd_@@QEBA?AUSnapLayoutEventArgs@TaskGroups@Shell@Internal@Windows@winrt@@AEBUISnapLayoutEventArgsFactory@23456@@Z @ 0x180589118 (--R_lambda_06ad3909e536a51ee0f1eb0ad05e39fd_@@QEBA-AUSnapLayoutEventArgs@TaskGroups@Shell@Intern.c)
 */

__int64 __fastcall winrt::impl::factory_cache_entry<winrt::Windows::Internal::Shell::TaskGroups::SnapLayoutEventArgs,winrt::Windows::Internal::Shell::TaskGroups::ISnapLayoutEventArgsFactory>::call<_lambda_06ad3909e536a51ee0f1eb0ad05e39fd_ &>(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 *),
        __int64 a2,
        __int64 a3)
{
  void (__fastcall ***v5)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 v6; // rax
  char v7; // si
  bool v8; // zf
  __int64 v10[2]; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v11[32]; // [rsp+30h] [rbp-20h] BYREF
  void (__fastcall ***v12)(_QWORD, __int64 *, __int64 *); // [rsp+70h] [rbp+20h] BYREF
  __int64 v13; // [rsp+88h] [rbp+38h] BYREF

  v12 = a1;
  winrt::param::hstring::create_string_reference(
    (winrt::param::hstring *)v11,
    L"Windows.Internal.Shell.TaskGroups.SnapLayoutEventArgs",
    53LL);
  winrt::get_activation_factory<winrt::Windows::Internal::Shell::TaskGroups::ISnapLayoutEventArgsFactory>(&v12, v11);
  v5 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v12;
  if ( !v12 )
  {
    v6 = 0LL;
    v10[0] = 0LL;
LABEL_3:
    v7 = 0;
    goto LABEL_4;
  }
  v13 = 0LL;
  (**v12)(v12, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v13);
  v6 = v13;
  v10[0] = v13;
  if ( !v13 )
    goto LABEL_3;
  v7 = 1;
LABEL_4:
  if ( v6 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(v10);
  if ( v7 )
  {
    v10[1] = (__int64)&qword_1807B63C8;
    _InterlockedIncrement64(&qword_1807B63C8);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::Shell::TaskGroups::SnapLayoutEventArgs,winrt::Windows::Internal::Shell::TaskGroups::ISnapLayoutEventArgsFactory>,
            (signed __int64)v12,
            0LL) )
    {
      v12 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_1807B63D0);
    }
    _lambda_06ad3909e536a51ee0f1eb0ad05e39fd_::operator()(
      a3,
      a2,
      &winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::Shell::TaskGroups::SnapLayoutEventArgs,winrt::Windows::Internal::Shell::TaskGroups::ISnapLayoutEventArgsFactory>);
    _InterlockedDecrement64(&qword_1807B63C8);
    v8 = v12 == 0LL;
  }
  else
  {
    _lambda_06ad3909e536a51ee0f1eb0ad05e39fd_::operator()(a3, a2, &v12);
    v8 = v5 == 0LL;
  }
  if ( !v8 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v12);
  return a2;
}
