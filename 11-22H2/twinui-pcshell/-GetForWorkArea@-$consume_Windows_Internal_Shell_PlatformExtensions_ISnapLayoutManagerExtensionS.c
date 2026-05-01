/*
 * XREFs of ?GetForWorkArea@?$consume_Windows_Internal_Shell_PlatformExtensions_ISnapLayoutManagerExtensionStatics@UISnapLayoutManagerExtensionStatics@PlatformExtensions@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBURect@Foundation@Windows@3@@Z @ 0x180683838
 * Callers:
 *     ?GetForWorkArea@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@SA?AUSnapLayoutManagerExtension@PlatformExtensions@4567@AEBURect@Foundation@67@@Z @ 0x180683904 (-GetForWorkArea@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@win.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_Internal_Shell_PlatformExtensions_ISnapLayoutManagerExtensionStatics<winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtensionStatics>::GetForWorkArea(
        __int64 **a1,
        _QWORD *a2,
        __int128 *a3)
{
  __int64 *v3; // rcx
  __int128 v5; // xmm0
  __int64 v6; // rax
  signed int v7; // eax
  __int128 v9; // [rsp+30h] [rbp-18h] BYREF
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF

  v3 = *a1;
  v5 = *a3;
  v10 = 0LL;
  v6 = *v3;
  v9 = v5;
  v7 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, __int64 *))(v6 + 56))(v3, &v9, &v10);
  if ( v7 < 0 )
    winrt::throw_hresult(v7);
  *a2 = v10;
  return a2;
}
