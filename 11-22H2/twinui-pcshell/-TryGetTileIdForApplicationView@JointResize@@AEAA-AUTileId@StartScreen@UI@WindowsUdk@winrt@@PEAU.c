/*
 * XREFs of ?TryGetTileIdForApplicationView@JointResize@@AEAA?AUTileId@StartScreen@UI@WindowsUdk@winrt@@PEAUIApplicationView@@@Z @ 0x1805E4ECC
 * Callers:
 *     JointResize::TagViewWithLogoAsync$_ResumeCoro$1 @ 0x180213B40 (JointResize--TagViewWithLogoAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180098C40 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x1800B4460 (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Traits_find_ch@U?$char_traits@G@std@@@std@@YA_KQEBG_K1G@Z @ 0x18045722C (--$_Traits_find_ch@U-$char_traits@G@std@@@std@@YA_KQEBG_K1G@Z.c)
 *     ??$call@AEAV_lambda_8c93f79d967566fb00a2a4bc6e814545_@@@?$factory_cache_entry@UTileId@StartScreen@UI@WindowsUdk@winrt@@UITileIdStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_8c93f79d967566fb00a2a4bc6e814545_@@@Z @ 0x1805E0AD0 (--$call@AEAV_lambda_8c93f79d967566fb00a2a4bc6e814545_@@@-$factory_cache_entry@UTileId@StartScree.c)
 *     ?FromAppUserModelId@?$consume_WindowsUdk_UI_StartScreen_ITileIdStatics@UITileIdStatics@StartScreen@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x1805E2D70 (-FromAppUserModelId@-$consume_WindowsUdk_UI_StartScreen_ITileIdStatics@UITileIdStatics@StartScre.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall JointResize::TryGetTileIdForApplicationView(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v3; // rdi
  _QWORD *v4; // rax
  unsigned __int64 v5; // rdx
  __int64 v6; // rbx
  __int64 v7; // r8
  void (__fastcall ***v8)(_QWORD, __int64 *, __int64 *); // rcx
  __int64 v10; // [rsp+20h] [rbp-88h] BYREF
  unsigned __int16 *v11; // [rsp+28h] [rbp-80h] BYREF
  __int64 v12; // [rsp+30h] [rbp-78h] BYREF
  _QWORD *v13; // [rsp+40h] [rbp-68h] BYREF
  _QWORD *v14; // [rsp+48h] [rbp-60h]
  __int64 *v15; // [rsp+50h] [rbp-58h]
  _QWORD v16[4]; // [rsp+58h] [rbp-50h] BYREF
  _QWORD v17[4]; // [rsp+78h] [rbp-30h] BYREF

  v3 = a2;
  v14 = a2;
  if ( (*(int (__fastcall **)(__int64, unsigned __int16 **))(*(_QWORD *)a3 + 136LL))(a3, &v11) < 0 || !v11 )
    goto LABEL_15;
  v4 = std::wstring::wstring(v17, v11);
  v5 = v4[2];
  if ( v4[3] >= 8uLL )
    v4 = (_QWORD *)*v4;
  v6 = std::_Traits_find_ch<std::char_traits<unsigned short>>((__int64)v4, v5, 0LL, 33);
  std::wstring::_Tidy_deallocate((__int64)v17);
  if ( v6 == -1 )
  {
LABEL_15:
    *v3 = 0LL;
  }
  else
  {
    v12 = 0LL;
    try
    {
      v7 = -1LL;
      do
        ++v7;
      while ( v11[v7] );
      winrt::param::hstring::create_string_reference((winrt::param::hstring *)v16, v11, v7);
      v13 = v16;
      v15 = &qword_1809912F8;
      _InterlockedIncrement64(&qword_1809912F8);
      if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::StartScreen::TileId,winrt::WindowsUdk::UI::StartScreen::ITileIdStatics> )
      {
        winrt::impl::consume_WindowsUdk_UI_StartScreen_ITileIdStatics<winrt::WindowsUdk::UI::StartScreen::ITileIdStatics>::FromAppUserModelId(
          &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::StartScreen::TileId,winrt::WindowsUdk::UI::StartScreen::ITileIdStatics>,
          &v10,
          v16);
        _InterlockedDecrement64(&qword_1809912F8);
      }
      else
      {
        _InterlockedDecrement64(&qword_1809912F8);
        winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::StartScreen::TileId,winrt::WindowsUdk::UI::StartScreen::ITileIdStatics>::call<_lambda_8c93f79d967566fb00a2a4bc6e814545_ &>(
          v8,
          (__int64)&v10,
          &v13);
      }
      winrt::Windows::Foundation::IUnknown::operator=(
        (winrt::Windows::Foundation::IUnknown *)&v12,
        (winrt::Windows::Foundation::IUnknown *)&v10);
      if ( v10 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v10);
    }
    catch ( ... )
    {
      v3 = v14;
    }
    *v3 = v12;
  }
  return v3;
}
