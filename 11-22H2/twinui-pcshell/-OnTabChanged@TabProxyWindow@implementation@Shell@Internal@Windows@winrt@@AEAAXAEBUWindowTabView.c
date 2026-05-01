/*
 * XREFs of ?OnTabChanged@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabView@3UI@456@AEBUWindowTabViewPropertyChangedEventArgs@38456@@Z @ 0x1800511E0
 * Callers:
 *     <none>
 * Callees:
 *     ?TreatAsSecondaryTileId@?$consume_Windows_Internal_UI_Shell_IWindowTabView@UIWindowTabView@Shell@UI@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180051134 (-TreatAsSecondaryTileId@-$consume_Windows_Internal_UI_Shell_IWindowTabView@UIWindowTabView@Shell.c)
 *     ?Tab@?$consume_Windows_Internal_UI_Shell_IWindowTabViewPropertyChangedEventArgs@UIWindowTabViewPropertyChangedEventArgs@Shell@UI@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180051594 (-Tab@-$consume_Windows_Internal_UI_Shell_IWindowTabViewPropertyChangedEventArgs@UIWindowTabViewP.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TabThumbnailsRefreshedOnDemand@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800515E8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TabThumbnailsRefreshedOnDemand@@@details@.c)
 *     ?Title@?$consume_Windows_Internal_UI_Shell_IWindowTabView@UIWindowTabView@Shell@UI@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18005166C (-Title@-$consume_Windows_Internal_UI_Shell_IWindowTabView@UIWindowTabView@Shell@UI@Internal@Wind.c)
 *     ?IconGlyph@?$consume_Windows_Internal_UI_Shell_IWindowTabView@UIWindowTabView@Shell@UI@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800516C0 (-IconGlyph@-$consume_Windows_Internal_UI_Shell_IWindowTabView@UIWindowTabView@Shell@UI@Internal@.c)
 *     ?GetAt@?$consume_Windows_Foundation_Collections_IVectorView@U?$IVectorView@Uhstring@winrt@@@Collections@Foundation@Windows@winrt@@Uhstring@5@@impl@winrt@@QEBA@I@Z @ 0x180051714 (-GetAt@-$consume_Windows_Foundation_Collections_IVectorView@U-$IVectorView@Uhstring@winrt@@@Coll.c)
 *     ?TileId@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstring@6@@Z @ 0x180051930 (-TileId@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstring@6@@Z.c)
 *     ??$_Traits_equal@U?$char_traits@G@std@@@std@@YA_NQEBG_K01@Z @ 0x18008FC14 (--$_Traits_equal@U-$char_traits@G@std@@@std@@YA_NQEBG_K01@Z.c)
 *     ??Bhstring@winrt@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x1800B5528 (--Bhstring@winrt@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std@@@std@@XZ.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800B6CE4 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?SetAndCreateIconFromGlyphAsync@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@XZ @ 0x18021B96C (-SetAndCreateIconFromGlyphAsync@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA.c)
 *     ?SetWindowIconAsync@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@XZ @ 0x18021C544 (-SetWindowIconAsync@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA-AUfire_and_.c)
 *     ?SetWindowThumbnailAsync@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@XZ @ 0x18021D5E8 (-SetWindowThumbnailAsync@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA-AUfire.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IconFontFamily@?$consume_Windows_Internal_UI_Shell_IWindowTabView@UIWindowTabView@Shell@UI@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1802E865C (-IconFontFamily@-$consume_Windows_Internal_UI_Shell_IWindowTabView@UIWindowTabView@Shell@UI@Inte.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?RegisterTaskbarGlom@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstring@6@@Z @ 0x18063BC48 (-RegisterTaskbarGlom@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstrin.c)
 *     ?UpdateTileGuid@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18063C650 (-UpdateTileGuid@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=10
void __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::OnTabChanged(
        HWND *this,
        const struct winrt::Windows::Internal::UI::Shell::WindowTabView *a2,
        const struct winrt::Windows::Internal::UI::Shell::WindowTabViewPropertyChangedEventArgs *a3)
{
  int v5; // ebx
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // rax
  char v11; // r14
  int v12; // eax
  int v13; // eax
  __int64 v14; // r15
  int v15; // ebx
  unsigned int v16; // r14d
  int v17; // eax
  __int64 v18; // r8
  __int64 v19; // r9
  __m128i v20; // xmm1
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  winrt::hstring *v24; // rax
  const WCHAR *v25; // rax
  __m128i v26; // xmm1
  __int64 *v27; // rax
  const struct winrt::hstring *v28; // rax
  __int64 *v29; // rax
  const struct winrt::hstring *v30; // rax
  __int64 v31; // [rsp+20h] [rbp-60h] BYREF
  __int64 v32; // [rsp+28h] [rbp-58h] BYREF
  __int64 v33; // [rsp+30h] [rbp-50h] BYREF
  __int64 v34; // [rsp+38h] [rbp-48h] BYREF
  __int64 v35; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v36[8]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v37; // [rsp+50h] [rbp-30h] BYREF
  __int64 v38; // [rsp+58h] [rbp-28h] BYREF
  _BYTE v39[16]; // [rsp+60h] [rbp-20h] BYREF
  _BYTE v40[16]; // [rsp+70h] [rbp-10h] BYREF
  int v41; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v42; // [rsp+C8h] [rbp+48h] BYREF

  v5 = 0;
  v41 = 0;
  v6 = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)a3 + 56LL))(*(_QWORD *)a3, &v41);
  if ( v6 < 0 )
    winrt::throw_hresult((unsigned int)v6);
  if ( (_BYTE)v41 && *((_BYTE *)this + 184) )
  {
    v8 = winrt::impl::consume_Windows_Internal_UI_Shell_IWindowTabViewPropertyChangedEventArgs<winrt::Windows::Internal::UI::Shell::IWindowTabViewPropertyChangedEventArgs>::Tab(
           a3,
           &v31);
    v41 = 1;
    v9 = (_QWORD *)winrt::impl::consume_Windows_Internal_UI_Shell_IWindowTabView<winrt::Windows::Internal::UI::Shell::IWindowTabView>::IconGlyph(
                     v8,
                     &v32);
    v5 = 3;
    v41 = 3;
    if ( !*v9
      || (v10 = winrt::impl::consume_Windows_Internal_UI_Shell_IWindowTabViewPropertyChangedEventArgs<winrt::Windows::Internal::UI::Shell::IWindowTabViewPropertyChangedEventArgs>::Tab(
                  a3,
                  &v42),
          v41 = 7,
          v5 = 15,
          v11 = 0,
          !*(_QWORD *)winrt::impl::consume_Windows_Internal_UI_Shell_IWindowTabView<winrt::Windows::Internal::UI::Shell::IWindowTabView>::IconFontFamily(
                        v10,
                        &v33)) )
    {
      v11 = 1;
    }
    if ( (v5 & 8) != 0 )
    {
      v5 &= ~8u;
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v33);
    }
    if ( (v5 & 4) != 0 )
    {
      v5 &= ~4u;
      if ( v42 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v42);
    }
    if ( (v5 & 2) != 0 )
    {
      v5 &= ~2u;
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v32);
    }
    if ( (v5 & 1) != 0 )
    {
      v5 &= ~1u;
      if ( v31 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v31);
    }
    if ( v11 )
      winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowIconAsync(this, &v41);
    else
      winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetAndCreateIconFromGlyphAsync(this, &v41);
  }
  LOBYTE(v7) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TabThumbnailsRefreshedOnDemand>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_TabThumbnailsRefreshedOnDemand>::GetImpl'::`2'::impl,
    v7);
  LOBYTE(v41) = 0;
  v12 = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)a3 + 64LL))(*(_QWORD *)a3, &v41);
  if ( v12 < 0 )
    winrt::throw_hresult((unsigned int)v12);
  if ( (_BYTE)v41 )
    winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowThumbnailAsync(this, &v41);
  v31 = 0LL;
  v13 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)a3 + 72LL))(*(_QWORD *)a3, &v31);
  if ( v13 < 0 )
    winrt::throw_hresult((unsigned int)v13);
  v14 = v31;
  v33 = v31;
  v15 = v5 | 0x10;
  v16 = 0;
  v41 = 0;
  v17 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v31 + 56LL))(v31, &v41);
  if ( v17 < 0 )
    winrt::throw_hresult((unsigned int)v17);
  while ( v16 != v41 )
  {
    winrt::impl::consume_Windows_Foundation_Collections_IVectorView<winrt::Windows::Foundation::Collections::IVectorView<winrt::hstring>,winrt::hstring>::GetAt(
      &v33,
      &v42,
      v16);
    v15 |= 0x20u;
    v20 = *(__m128i *)winrt::hstring::operator std::basic_string_view<unsigned short>(&v42, v39, v18, v19);
    if ( (unsigned __int8)std::_Traits_equal<std::char_traits<unsigned short>>(
                            v20.m128i_i64[0],
                            _mm_srli_si128(v20, 8).m128i_u64[0],
                            L"Title",
                            5LL) )
    {
      v23 = winrt::impl::consume_Windows_Internal_UI_Shell_IWindowTabViewPropertyChangedEventArgs<winrt::Windows::Internal::UI::Shell::IWindowTabViewPropertyChangedEventArgs>::Tab(
              a3,
              &v34);
      v24 = (winrt::hstring *)winrt::impl::consume_Windows_Internal_UI_Shell_IWindowTabView<winrt::Windows::Internal::UI::Shell::IWindowTabView>::Title(
                                v23,
                                v36);
      v25 = winrt::hstring::c_str(v24);
      SetWindowTextW(this[4], v25);
      winrt::handle_type<winrt::impl::hstring_traits>::close(v36);
      if ( v34 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v34);
    }
    else
    {
      v26 = *(__m128i *)winrt::hstring::operator std::basic_string_view<unsigned short>(&v42, v40, v21, v22);
      if ( (unsigned __int8)std::_Traits_equal<std::char_traits<unsigned short>>(
                              v26.m128i_i64[0],
                              _mm_srli_si128(v26, 8).m128i_u64[0],
                              L"TreatAsSecondaryTileId",
                              22LL) )
      {
        v27 = (__int64 *)winrt::impl::consume_Windows_Internal_UI_Shell_IWindowTabViewPropertyChangedEventArgs<winrt::Windows::Internal::UI::Shell::IWindowTabViewPropertyChangedEventArgs>::Tab(
                           a3,
                           &v35);
        v28 = (const struct winrt::hstring *)winrt::impl::consume_Windows_Internal_UI_Shell_IWindowTabView<winrt::Windows::Internal::UI::Shell::IWindowTabView>::TreatAsSecondaryTileId(
                                               v27,
                                               &v37);
        winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TileId(
          (winrt::Windows::Internal::Shell::implementation::TabProxyWindow *)this,
          v28);
        winrt::handle_type<winrt::impl::hstring_traits>::close(&v37);
        if ( v35 )
          winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v35);
        v29 = (__int64 *)winrt::impl::consume_Windows_Internal_UI_Shell_IWindowTabViewPropertyChangedEventArgs<winrt::Windows::Internal::UI::Shell::IWindowTabViewPropertyChangedEventArgs>::Tab(
                           a3,
                           &v32);
        v30 = (const struct winrt::hstring *)winrt::impl::consume_Windows_Internal_UI_Shell_IWindowTabView<winrt::Windows::Internal::UI::Shell::IWindowTabView>::TreatAsSecondaryTileId(
                                               v29,
                                               &v38);
        winrt::Windows::Internal::Shell::implementation::TabProxyWindow::RegisterTaskbarGlom(
          (winrt::Windows::Internal::Shell::implementation::TabProxyWindow *)this,
          v30);
        winrt::handle_type<winrt::impl::hstring_traits>::close(&v38);
        if ( v32 )
          winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v32);
        winrt::Windows::Internal::Shell::implementation::TabProxyWindow::UpdateTileGuid((winrt::Windows::Internal::Shell::implementation::TabProxyWindow *)this);
      }
    }
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v42);
    ++v16;
  }
  if ( v14 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v33);
}
