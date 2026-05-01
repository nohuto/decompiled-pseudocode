/*
 * XREFs of ?TileStoreChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUITileStore@Tiles@456@AEBUITileStoreChangedEventArgs@8456@@Z @ 0x18003D290
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::TileStoreChanged(
        winrt::Windows::Internal::Shell::implementation::WindowTabHost *this,
        const struct winrt::Windows::Internal::Tiles::ITileStore *a2,
        const struct winrt::Windows::Internal::Tiles::ITileStoreChangedEventArgs *a3)
{
  int v4; // eax
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)a3 + 48LL))(*(_QWORD *)a3, &v5);
  if ( v4 < 0 )
    winrt::throw_hresult((unsigned int)v4);
  *((_QWORD *)this + 56) = v5;
  winrt::Windows::Internal::Shell::implementation::WindowTabHost::FindAllTileNotifications(this);
}
