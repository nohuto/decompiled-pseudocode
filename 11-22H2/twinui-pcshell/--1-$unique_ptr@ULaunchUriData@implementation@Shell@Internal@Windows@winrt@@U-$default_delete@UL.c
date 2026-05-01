/*
 * XREFs of ??1?$unique_ptr@ULaunchUriData@implementation@Shell@Internal@Windows@winrt@@U?$default_delete@ULaunchUriData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@QEAA@XZ @ 0x18070E98C
 * Callers:
 *     ?RegisterRemoteDesktopProcess@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAAXIAEBUUri@Foundation@56@_N@Z @ 0x180717244 (-RegisterRemoteDesktopProcess@RemoteSystemDataModel@factory_implementation@Shell@Internal@Window.c)
 *     _winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::RegisterRemoteDesktopProcess_::_1_::dtor$1 @ 0x180717737 (_winrt--Windows--Internal--Shell--factory_implementation--RemoteSystemDataModel--Re_ea_180717737.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::unique_ptr<winrt::Windows::Internal::Shell::implementation::LaunchUriData>::~unique_ptr<winrt::Windows::Internal::Shell::implementation::LaunchUriData>(
        volatile signed __int32 ***a1)
{
  volatile signed __int32 **v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    winrt::handle_type<winrt::impl::hstring_traits>::close(v1 + 1);
    winrt::handle_type<winrt::impl::hstring_traits>::close(v1);
    operator delete(v1);
  }
}
