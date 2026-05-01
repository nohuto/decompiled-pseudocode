/*
 * XREFs of ?UpdateTileGuid@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18063C650
 * Callers:
 *     ?CreateWindow@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAAJXZ @ 0x180050D84 (-CreateWindow@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAAJXZ.c)
 *     ?OnTabChanged@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabView@3UI@456@AEBUWindowTabViewPropertyChangedEventArgs@38456@@Z @ 0x1800511E0 (-OnTabChanged@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabView.c)
 * Callees:
 *     ??8winrt@@YA_NAEBUhstring@0@0@Z @ 0x18004CF30 (--8winrt@@YA_NAEBUhstring@0@0@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z @ 0x1800DBAC0 (-duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?Type@?$consume_Windows_Internal_Tiles_ITile@UITile@Tiles@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180637F14 (-Type@-$consume_Windows_Internal_Tiles_ITile@UITile@Tiles@Internal@Windows@winrt@@@impl@winrt@@Q.c)
 *     ?AppSpecifiedId@?$consume_Windows_Internal_Tiles_ITile@UITile@Tiles@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18063AC60 (-AppSpecifiedId@-$consume_Windows_Internal_Tiles_ITile@UITile@Tiles@Internal@Windows@winrt@@@imp.c)
 *     ?FindTiles@?$consume_Windows_Internal_Tiles_ITileStore@UITileStore@Tiles@Internal@Windows@winrt@@@impl@winrt@@QEBA@_JAEBUTileQueryFilter@Tiles@Internal@Windows@3@@Z @ 0x18063AFC4 (-FindTiles@-$consume_Windows_Internal_Tiles_ITileStore@UITileStore@Tiles@Internal@Windows@winrt@.c)
 *     ?GetAt@?$consume_Windows_Foundation_Collections_IVectorView@U?$IVectorView@UITile@Tiles@Internal@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UITile@Tiles@Internal@45@@impl@winrt@@QEBA@I@Z @ 0x18063B02C (-GetAt@-$consume_Windows_Foundation_Collections_IVectorView@U-$IVectorView@UITile@Tiles@Internal.c)
 *     ?WindowTabHostActivePinnedSite@WindowTabHostTelemetry@@SAXXZ @ 0x18063C844 (-WindowTabHostActivePinnedSite@WindowTabHostTelemetry@@SAXXZ.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::UpdateTileGuid(
        winrt::Windows::Internal::Shell::implementation::TabProxyWindow *this)
{
  signed int v2; // eax
  unsigned int v3; // esi
  __int64 v4; // rbx
  signed int v5; // eax
  struct winrt::impl::hstring_header *v6; // rdx
  unsigned int v7; // r8d
  __int64 v8; // r8
  char v9; // di
  signed int v10; // eax
  int v11; // [rsp+20h] [rbp-40h] BYREF
  __int64 v12; // [rsp+28h] [rbp-38h] BYREF
  volatile signed __int32 *v13; // [rsp+30h] [rbp-30h] BYREF
  __int64 v14; // [rsp+38h] [rbp-28h] BYREF
  __int128 v15; // [rsp+40h] [rbp-20h] BYREF

  *(_QWORD *)&v15 = 0LL;
  winrt::impl::consume_Windows_Internal_Tiles_ITileStore<winrt::Windows::Internal::Tiles::ITileStore>::FindTiles(
    (__int64 *)this + 15,
    &v14,
    *((_QWORD *)this + 16),
    &v15);
  v13 = 0LL;
  v2 = (*(__int64 (__fastcall **)(_QWORD, volatile signed __int32 **))(**((_QWORD **)this + 15) + 64LL))(
         *((_QWORD *)this + 15),
         &v13);
  if ( v2 < 0 )
    winrt::throw_hresult(v2);
  *((_QWORD *)this + 16) = v13;
  v3 = 0;
  v11 = 0;
  v4 = v14;
  v5 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v14 + 56LL))(v14, &v11);
  if ( v5 < 0 )
    winrt::throw_hresult(v5);
  while ( v3 != v11 )
  {
    winrt::impl::consume_Windows_Foundation_Collections_IVectorView<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Internal::Tiles::ITile>,winrt::Windows::Internal::Tiles::ITile>::GetAt(
      &v14,
      &v12,
      v3);
    if ( (unsigned int)winrt::impl::consume_Windows_Internal_Tiles_ITile<winrt::Windows::Internal::Tiles::ITile>::Type(&v12) == 1 )
    {
      winrt::impl::consume_Windows_Internal_Tiles_ITile<winrt::Windows::Internal::Tiles::ITile>::AppSpecifiedId(
        &v12,
        &v13);
      *(_QWORD *)&v15 = winrt::impl::duplicate_hstring(*((winrt::impl **)this + 8), v6, v7);
      v9 = winrt::operator==((__int64)&v13, (__int64)&v15, v8);
      winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v15);
      if ( v9 )
      {
        v15 = 0LL;
        v10 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v12 + 48LL))(v12, &v15);
        if ( v10 < 0 )
          winrt::throw_hresult(v10);
        *(_OWORD *)((char *)this + 72) = v15;
        WindowTabHostTelemetry::WindowTabHostActivePinnedSite();
        winrt::handle_type<winrt::impl::hstring_traits>::close(&v13);
        if ( v12 )
          winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v12);
        break;
      }
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v13);
    }
    if ( v12 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v12);
    ++v3;
  }
  if ( v4 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v14);
}
