/*
 * XREFs of ??$call@AEAV_lambda_6f34e705270e868253aa28e6dfc0cbd7_@@@?$factory_cache_entry@UMRTHelper@UnifiedTile@Shell@WindowsInternal@winrt@@UIMRTHelperStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_6f34e705270e868253aa28e6dfc0cbd7_@@@Z @ 0x18069C244
 * Callers:
 *     _anonymous_namespace_::TryGetPackagedAppTileLogo @ 0x1806A776C (_anonymous_namespace_--TryGetPackagedAppTileLogo.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x1800B4460 (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1801CEFB9 (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$get_activation_factory@UIMRTHelperStatics@UnifiedTile@Shell@WindowsInternal@winrt@@@winrt@@YA?AUIMRTHelperStatics@UnifiedTile@Shell@WindowsInternal@0@AEBUhstring@param@0@@Z @ 0x18069C9D0 (--$get_activation_factory@UIMRTHelperStatics@UnifiedTile@Shell@WindowsInternal@winrt@@@winrt@@YA.c)
 *     ?CreateForPackageFullName@?$consume_WindowsInternal_Shell_UnifiedTile_IMRTHelperStatics@UIMRTHelperStatics@UnifiedTile@Shell@WindowsInternal@winrt@@@impl@winrt@@QEBA@AEBUUser@System@Windows@3@AEBUhstring@param@3@@Z @ 0x1806A0864 (-CreateForPackageFullName@-$consume_WindowsInternal_Shell_UnifiedTile_IMRTHelperStatics@UIMRTHel.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::impl::factory_cache_entry<winrt::WindowsInternal::Shell::UnifiedTile::MRTHelper,winrt::WindowsInternal::Shell::UnifiedTile::IMRTHelperStatics>::call<_lambda_6f34e705270e868253aa28e6dfc0cbd7_ &>(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 *),
        __int64 a2,
        _QWORD *a3)
{
  __int64 v6[2]; // [rsp+28h] [rbp-38h] BYREF
  _BYTE v7[40]; // [rsp+38h] [rbp-28h] BYREF
  void (__fastcall ***v8)(_QWORD, __int64 *, __int64 *); // [rsp+70h] [rbp+10h] BYREF
  __int64 v9; // [rsp+88h] [rbp+28h] BYREF

  v8 = a1;
  winrt::param::hstring::create_string_reference(
    (winrt::param::hstring *)v7,
    L"WindowsInternal.Shell.UnifiedTile.MRTHelper",
    43);
  winrt::get_activation_factory<winrt::WindowsInternal::Shell::UnifiedTile::IMRTHelperStatics>(&v8, v7);
  if ( v8 && (v9 = 0LL, (**v8)(v8, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v9), (v6[0] = v9) != 0) )
  {
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(v6);
    v6[1] = (__int64)&qword_180992048;
    _InterlockedIncrement64(&qword_180992048);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::WindowsInternal::Shell::UnifiedTile::MRTHelper,winrt::WindowsInternal::Shell::UnifiedTile::IMRTHelperStatics>,
            (signed __int64)v8,
            0LL) )
    {
      v8 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_180992050);
    }
    winrt::impl::consume_WindowsInternal_Shell_UnifiedTile_IMRTHelperStatics<winrt::WindowsInternal::Shell::UnifiedTile::IMRTHelperStatics>::CreateForPackageFullName(
      &winrt::impl::factory_cache_entry_v<winrt::WindowsInternal::Shell::UnifiedTile::MRTHelper,winrt::WindowsInternal::Shell::UnifiedTile::IMRTHelperStatics>,
      a2,
      *a3,
      a3[1]);
    _InterlockedDecrement64(&qword_180992048);
  }
  else
  {
    winrt::impl::consume_WindowsInternal_Shell_UnifiedTile_IMRTHelperStatics<winrt::WindowsInternal::Shell::UnifiedTile::IMRTHelperStatics>::CreateForPackageFullName(
      &v8,
      a2,
      *a3,
      a3[1]);
  }
  if ( v8 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v8);
  return a2;
}
