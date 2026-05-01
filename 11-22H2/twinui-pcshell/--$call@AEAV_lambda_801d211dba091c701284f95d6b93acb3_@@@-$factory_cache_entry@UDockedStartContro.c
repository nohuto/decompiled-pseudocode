/*
 * XREFs of ??$call@AEAV_lambda_801d211dba091c701284f95d6b93acb3_@@@?$factory_cache_entry@UDockedStartController@Implementation@StartScreen@UI@WindowsUdk@winrt@@UIDockedStartControllerFactory@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_801d211dba091c701284f95d6b93acb3_@@@Z @ 0x1801E0F9C
 * Callers:
 *     ??0DockedStartController@Implementation@StartScreen@UI@WindowsUdk@winrt@@QEAA@XZ @ 0x1801E117C (--0DockedStartController@Implementation@StartScreen@UI@WindowsUdk@winrt@@QEAA@XZ.c)
 * Callees:
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x180087AA4 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ??$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@AEBUguid@1@PEAPEAX@Z @ 0x1800B4384 (--$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA-AUhresult@1@AEBUhstring@param@1@AEBUg.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1801CEFB9 (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     ??R_lambda_801d211dba091c701284f95d6b93acb3_@@QEBA@AEBUIDockedStartControllerFactory@Implementation@StartScreen@UI@WindowsUdk@winrt@@@Z @ 0x1801E1394 (--R_lambda_801d211dba091c701284f95d6b93acb3_@@QEBA@AEBUIDockedStartControllerFactory@Implementat.c)
 *     ??$try_as@UIAgileObject@impl@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA?A_PXZ @ 0x1802CECBA (--$try_as@UIAgileObject@impl@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA-A_PXZ.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::StartScreen::Implementation::DockedStartController,winrt::WindowsUdk::UI::StartScreen::Implementation::IDockedStartControllerFactory>::call<_lambda_801d211dba091c701284f95d6b93acb3_ &>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // rsi
  signed __int64 v7; // [rsp+28h] [rbp-48h] BYREF
  __int64 v8[2]; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v9[2]; // [rsp+40h] [rbp-30h] BYREF
  _QWORD v10[4]; // [rsp+50h] [rbp-20h] BYREF
  __int64 v11; // [rsp+90h] [rbp+20h] BYREF
  signed __int64 v12; // [rsp+A8h] [rbp+38h] BYREF

  v11 = a1;
  v9[0] = L"WindowsUdk.UI.StartScreen.Implementation.DockedStartController";
  v9[1] = 62LL;
  winrt::param::hstring::hstring((winrt::param::hstring *)v10, (__int64)v9);
  v7 = 0LL;
  winrt::impl::get_runtime_activation_factory_impl<0>(
    &v11,
    v10,
    (__int64)&winrt::impl::guid_v<winrt::WindowsUdk::UI::StartScreen::Implementation::IDockedStartControllerFactory>,
    (__int64)&v7);
  if ( (int)v11 < 0 )
    winrt::throw_hresult((unsigned int)v11);
  v12 = v7;
  v5 = *(_QWORD *)winrt::Windows::Foundation::IUnknown::try_as<winrt::impl::IAgileObject>(&v12, v8);
  if ( v8[0] )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(v8);
  if ( v5 )
  {
    v8[1] = (__int64)&qword_18098E228;
    _InterlockedIncrement64(&qword_18098E228);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::StartScreen::Implementation::DockedStartController,winrt::WindowsUdk::UI::StartScreen::Implementation::IDockedStartControllerFactory>,
            v7,
            0LL) )
    {
      v12 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_18098E230);
    }
    _lambda_801d211dba091c701284f95d6b93acb3_::operator()(
      a3,
      a2,
      &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::StartScreen::Implementation::DockedStartController,winrt::WindowsUdk::UI::StartScreen::Implementation::IDockedStartControllerFactory>);
    _InterlockedDecrement64(&qword_18098E228);
  }
  else
  {
    _lambda_801d211dba091c701284f95d6b93acb3_::operator()(a3, a2, &v12);
  }
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v12);
  return a2;
}
