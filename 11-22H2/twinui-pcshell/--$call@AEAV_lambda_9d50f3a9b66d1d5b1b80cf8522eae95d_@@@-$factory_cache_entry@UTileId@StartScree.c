/*
 * XREFs of ??$call@AEAV_lambda_9d50f3a9b66d1d5b1b80cf8522eae95d_@@@?$factory_cache_entry@UTileId@StartScreen@UI@WindowsUdk@winrt@@UITileIdStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_9d50f3a9b66d1d5b1b80cf8522eae95d_@@@Z @ 0x1805E0C08
 * Callers:
 *     ?TryGetTileIdForWindow@JointResize@@AEAA?AUTileId@StartScreen@UI@WindowsUdk@winrt@@PEAUHWND__@@@Z @ 0x1805E5090 (-TryGetTileIdForWindow@JointResize@@AEAA-AUTileId@StartScreen@UI@WindowsUdk@winrt@@PEAUHWND__@@@.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x1800B4460 (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1801CEFB9 (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$get_activation_factory@UITileIdStatics@StartScreen@UI@WindowsUdk@winrt@@@winrt@@YA?AUITileIdStatics@StartScreen@UI@WindowsUdk@0@AEBUhstring@param@0@@Z @ 0x1805E10BC (--$get_activation_factory@UITileIdStatics@StartScreen@UI@WindowsUdk@winrt@@@winrt@@YA-AUITileIdS.c)
 *     ?FromAppResolverId@?$consume_WindowsUdk_UI_StartScreen_ITileIdStatics@UITileIdStatics@StartScreen@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x1805E2D18 (-FromAppResolverId@-$consume_WindowsUdk_UI_StartScreen_ITileIdStatics@UITileIdStatics@StartScree.c)
 */

__int64 __fastcall winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::StartScreen::TileId,winrt::WindowsUdk::UI::StartScreen::ITileIdStatics>::call<_lambda_9d50f3a9b66d1d5b1b80cf8522eae95d_ &>(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 *),
        __int64 a2,
        _QWORD *a3)
{
  void (__fastcall ***v5)(_QWORD, _QWORD, _QWORD); // rbx
  bool v6; // zf
  __int64 v8[2]; // [rsp+28h] [rbp-38h] BYREF
  _BYTE v9[40]; // [rsp+38h] [rbp-28h] BYREF
  void (__fastcall ***v10)(_QWORD, __int64 *, __int64 *); // [rsp+80h] [rbp+20h] BYREF
  __int64 v11; // [rsp+98h] [rbp+38h] BYREF

  v10 = a1;
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v9, L"WindowsUdk.UI.StartScreen.TileId", 32);
  winrt::get_activation_factory<winrt::WindowsUdk::UI::StartScreen::ITileIdStatics>(&v10, v9);
  v5 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v10;
  if ( v10 && (v11 = 0LL, (**v10)(v10, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v11), (v8[0] = v11) != 0) )
  {
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(v8);
    v8[1] = (__int64)&qword_1809912F8;
    _InterlockedIncrement64(&qword_1809912F8);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::StartScreen::TileId,winrt::WindowsUdk::UI::StartScreen::ITileIdStatics>,
            (signed __int64)v10,
            0LL) )
    {
      v10 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_180991300);
    }
    winrt::impl::consume_WindowsUdk_UI_StartScreen_ITileIdStatics<winrt::WindowsUdk::UI::StartScreen::ITileIdStatics>::FromAppResolverId(
      &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::StartScreen::TileId,winrt::WindowsUdk::UI::StartScreen::ITileIdStatics>,
      a2,
      *a3);
    _InterlockedDecrement64(&qword_1809912F8);
    v6 = v10 == 0LL;
  }
  else
  {
    winrt::impl::consume_WindowsUdk_UI_StartScreen_ITileIdStatics<winrt::WindowsUdk::UI::StartScreen::ITileIdStatics>::FromAppResolverId(
      &v10,
      a2,
      *a3);
    v6 = v5 == 0LL;
  }
  if ( !v6 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v10);
  return a2;
}
