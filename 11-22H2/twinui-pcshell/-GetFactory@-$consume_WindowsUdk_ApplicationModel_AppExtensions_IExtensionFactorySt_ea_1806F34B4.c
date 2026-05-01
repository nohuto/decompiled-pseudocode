/*
 * XREFs of ?GetFactory@?$consume_WindowsUdk_ApplicationModel_AppExtensions_IExtensionFactoryStatics@UIExtensionFactoryStatics@AppExtensions@ApplicationModel@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@0@Z @ 0x1806F34B4
 * Callers:
 *     ??$call@AEAV_lambda_7b7c9298bfeaa6f21443744179c3c395_@@@?$factory_cache_entry@UExtensionFactory@AppExtensions@ApplicationModel@WindowsUdk@winrt@@UIExtensionFactoryStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_7b7c9298bfeaa6f21443744179c3c395_@@@Z @ 0x1806EFDD8 (--$call@AEAV_lambda_7b7c9298bfeaa6f21443744179c3c395_@@@-$factory_cache_entry@UExtensionFactory@.c)
 *     ?BackupAppCompatInfoAsync@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1806F0FC8 (-BackupAppCompatInfoAsync@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXAE.c)
 *     ?BackupAppLevelTileAsync@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXUTileId@StartScreen@UI@WindowsUdk@6@Uhstring@6@@Z @ 0x1806F19C8 (-BackupAppLevelTileAsync@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXUTi.c)
 *     ?GetFactory@ExtensionFactory@AppExtensions@ApplicationModel@WindowsUdk@winrt@@SA@AEBUhstring@param@5@0@Z @ 0x1806F351C (-GetFactory@ExtensionFactory@AppExtensions@ApplicationModel@WindowsUdk@winrt@@SA@AE_ea_1806F351C.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_WindowsUdk_ApplicationModel_AppExtensions_IExtensionFactoryStatics<winrt::WindowsUdk::ApplicationModel::AppExtensions::IExtensionFactoryStatics>::GetFactory(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4)
{
  __int64 v4; // rcx
  signed int v6; // eax
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF

  v4 = *a1;
  v8 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v4 + 80LL))(v4, *a3, *a4, &v8);
  if ( v6 < 0 )
    winrt::throw_hresult(v6);
  *a2 = v8;
  return a2;
}
