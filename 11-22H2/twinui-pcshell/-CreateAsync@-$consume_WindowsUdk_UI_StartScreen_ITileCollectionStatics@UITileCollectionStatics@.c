/*
 * XREFs of ?CreateAsync@?$consume_WindowsUdk_UI_StartScreen_ITileCollectionStatics@UITileCollectionStatics@StartScreen@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUTileCollectionCreateOptions@StartScreen@UI@WindowsUdk@3@@Z @ 0x1805E28D8
 * Callers:
 *     ??$call@AEAV_lambda_16971566875aad41a6f0fa0e27bb06ca_@@@?$factory_cache_entry@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@UITileCollectionStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_16971566875aad41a6f0fa0e27bb06ca_@@@Z @ 0x1805E0998 (--$call@AEAV_lambda_16971566875aad41a6f0fa0e27bb06ca_@@@-$factory_cache_entry@UTileCollection@St.c)
 *     ?CreateAsync@TileCollection@StartScreen@UI@WindowsUdk@winrt@@SA@AEBUTileCollectionCreateOptions@2345@@Z @ 0x1805E2930 (-CreateAsync@TileCollection@StartScreen@UI@WindowsUdk@winrt@@SA@AEBUTileCollectionCreateOptions@.c)
 *     ?RegisterUTMListeners@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1806F505C (-RegisterUTMListeners@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_WindowsUdk_UI_StartScreen_ITileCollectionStatics<winrt::WindowsUdk::UI::StartScreen::ITileCollectionStatics>::CreateAsync(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v3; // rcx
  signed int v5; // eax
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v3 = *a1;
  v7 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v3 + 56LL))(v3, *a3, &v7);
  if ( v5 < 0 )
    winrt::throw_hresult(v5);
  *a2 = v7;
  return a2;
}
