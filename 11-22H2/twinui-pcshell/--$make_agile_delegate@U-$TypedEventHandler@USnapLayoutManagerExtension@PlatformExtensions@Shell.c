/*
 * XREFs of ??$make_agile_delegate@U?$TypedEventHandler@USnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@Windows@winrt@@@impl@winrt@@YA?AU?$TypedEventHandler@USnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@Windows@1@AEBU2341@@Z @ 0x1806825E0
 * Callers:
 *     ?add@?$event@U?$TypedEventHandler@USnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@Windows@winrt@@@winrt@@QEAA?AUevent_token@2@AEBU?$TypedEventHandler@USnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@Windows@2@@Z @ 0x180685EA4 (-add@-$event@U-$TypedEventHandler@USnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180176DC4 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?get_agile_reference@impl@winrt@@YA?AUhresult@2@AEBUguid@2@PEAXPEAPEAX@Z @ 0x180412B0C (-get_agile_reference@impl@winrt@@YA-AUhresult@2@AEBUguid@2@PEAXPEAPEAX@Z.c)
 *     ??$?0V_lambda_89d4671aa2b99863dcb737fe59bf32df_@@@?$TypedEventHandler@USnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@Windows@winrt@@QEAA@V_lambda_89d4671aa2b99863dcb737fe59bf32df_@@@Z @ 0x180680C00 (--$-0V_lambda_89d4671aa2b99863dcb737fe59bf32df_@@@-$TypedEventHandler@USnapLayoutManagerExtensio.c)
 */

winrt::Windows::Foundation::IUnknown *__fastcall winrt::impl::make_agile_delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::PlatformExtensions::SnapLayoutManagerExtension,winrt::Windows::Foundation::IInspectable>>(
        winrt::Windows::Foundation::IUnknown *this,
        __int64 *a2)
{
  void (__fastcall ***v4)(_QWORD, __int64 *, __int64 *); // rcx
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v8; // [rsp+38h] [rbp+18h] BYREF
  __int64 v9; // [rsp+40h] [rbp+20h] BYREF

  v4 = (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))*a2;
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
    v5 = *a2;
  }
  else
  {
    v5 = 0LL;
  }
  v9 = 0LL;
  winrt::impl::get_agile_reference(
    &v8,
    (__int64)&winrt::impl::guid_v<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::PlatformExtensions::SnapLayoutManagerExtension,winrt::Windows::Foundation::IInspectable>>,
    v5,
    (__int64)&v9);
  v6 = v9;
  if ( v9 )
  {
    v9 = 0LL;
    v8 = v6;
    winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::PlatformExtensions::SnapLayoutManagerExtension,winrt::Windows::Foundation::IInspectable>::TypedEventHandler<winrt::Windows::Internal::Shell::PlatformExtensions::SnapLayoutManagerExtension,winrt::Windows::Foundation::IInspectable>(
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
