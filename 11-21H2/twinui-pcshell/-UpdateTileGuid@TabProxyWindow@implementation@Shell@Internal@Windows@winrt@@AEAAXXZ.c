/*
 * XREFs of ?UpdateTileGuid@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18057C7B0
 * Callers:
 *     ?OnTabChanged@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabView@3UI@456@AEBUWindowTabViewPropertyChangedEventArgs@38456@@Z @ 0x180024200 (-OnTabChanged@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabView.c)
 *     ?CreateWindow@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAAJXZ @ 0x180024750 (-CreateWindow@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAAJXZ.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800F2B84 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z @ 0x1800F2CB4 (-duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??8winrt@@YA_NAEBUhstring@0@0@Z @ 0x1800FC0F8 (--8winrt@@YA_NAEBUhstring@0@0@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Type@?$consume_Windows_Internal_Tiles_ITile@UITile@Tiles@Internal@Windows@winrt@@@impl@winrt@@QEBA?AW4TileTypes@Tiles@Internal@Windows@3@XZ @ 0x180238AB2 (-Type@-$consume_Windows_Internal_Tiles_ITile@UITile@Tiles@Internal@Windows@winrt@@@impl@winrt@@Q.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?AppSpecifiedId@?$consume_Windows_Internal_Tiles_ITile@UITile@Tiles@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUhstring@3@XZ @ 0x18057AF80 (-AppSpecifiedId@-$consume_Windows_Internal_Tiles_ITile@UITile@Tiles@Internal@Windows@winrt@@@imp.c)
 *     ?FindTiles@?$consume_Windows_Internal_Tiles_ITileStore@UITileStore@Tiles@Internal@Windows@winrt@@@impl@winrt@@QEBA?AU?$IVectorView@UITile@Tiles@Internal@Windows@winrt@@@Collections@Foundation@Windows@3@_JAEBUTileQueryFilter@Tiles@Internal@73@@Z @ 0x18057B2DC (-FindTiles@-$consume_Windows_Internal_Tiles_ITileStore@UITileStore@Tiles@Internal@Windows@winrt@.c)
 *     ?GetAt@?$consume_Windows_Foundation_Collections_IVectorView@U?$IVectorView@UITile@Tiles@Internal@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UITile@Tiles@Internal@45@@impl@winrt@@QEBA?AUITile@Tiles@Internal@Windows@3@I@Z @ 0x18057B344 (-GetAt@-$consume_Windows_Foundation_Collections_IVectorView@U-$IVectorView@UITile@Tiles@Internal.c)
 *     ?WindowTabHostActivePinnedSite@WindowTabHostTelemetry@@SAXXZ @ 0x18057CED4 (-WindowTabHostActivePinnedSite@WindowTabHostTelemetry@@SAXXZ.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::UpdateTileGuid(
        winrt::Windows::Internal::Shell::implementation::TabProxyWindow *this)
{
  signed int v2; // eax
  unsigned int v3; // edi
  signed int v4; // eax
  struct winrt::impl::hstring_header *v5; // rdx
  char v6; // bl
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  signed int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // [rsp+20h] [rbp-40h] BYREF
  volatile signed __int32 *v18; // [rsp+28h] [rbp-38h] BYREF
  int v19; // [rsp+30h] [rbp-30h] BYREF
  __int64 v20; // [rsp+38h] [rbp-28h] BYREF
  __int128 v21; // [rsp+40h] [rbp-20h] BYREF

  *(_QWORD *)&v21 = 0LL;
  winrt::impl::consume_Windows_Internal_Tiles_ITileStore<winrt::Windows::Internal::Tiles::ITileStore>::FindTiles(
    (__int64 *)this + 15,
    &v20,
    *((_QWORD *)this + 16),
    &v21);
  v18 = 0LL;
  v2 = (*(__int64 (__fastcall **)(_QWORD, volatile signed __int32 **))(**((_QWORD **)this + 15) + 64LL))(
         *((_QWORD *)this + 15),
         &v18);
  if ( v2 < 0 )
    winrt::throw_hresult(v2);
  *((_QWORD *)this + 16) = v18;
  v3 = 0;
  v19 = 0;
  v4 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v20 + 56LL))(v20, &v19);
  if ( v4 < 0 )
    winrt::throw_hresult(v4);
  while ( v3 != v19 )
  {
    winrt::impl::consume_Windows_Foundation_Collections_IVectorView<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Internal::Tiles::ITile>,winrt::Windows::Internal::Tiles::ITile>::GetAt(
      &v20,
      &v17,
      v3);
    if ( (unsigned int)winrt::impl::consume_Windows_Internal_Tiles_ITile<winrt::Windows::Internal::Tiles::ITile>::Type(&v17) == 1 )
    {
      winrt::impl::consume_Windows_Internal_Tiles_ITile<winrt::Windows::Internal::Tiles::ITile>::AppSpecifiedId(
        &v17,
        &v18);
      *(_QWORD *)&v21 = winrt::impl::duplicate_hstring(*((winrt::impl **)this + 8), v5);
      v6 = winrt::operator==((__int64)&v18, (__int64)&v21);
      winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v21, v7, v8, v9);
      if ( v6 )
      {
        v21 = 0LL;
        v13 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v17 + 48LL))(v17, &v21);
        if ( v13 < 0 )
          winrt::throw_hresult(v13);
        *(_OWORD *)((char *)this + 72) = v21;
        WindowTabHostTelemetry::WindowTabHostActivePinnedSite();
        winrt::handle_type<winrt::impl::hstring_traits>::close(&v18, v14, v15, v16);
        if ( v17 )
          winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v17);
        break;
      }
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v18, v10, v11, v12);
    }
    if ( v17 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v17);
    ++v3;
  }
  winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v20);
}
