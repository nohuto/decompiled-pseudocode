/*
 * XREFs of ?NonDelegatingGetRuntimeClassName@?$root_implements@Uiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@winrt@@U?$IIterator@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@IEAAHPEAPEAX@Z @ 0x1804102E0
 * Callers:
 *     ?GetRuntimeClassName@?$produce_base@UXamlExplorerHostWindow@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIActivationFactory@Foundation@67@X@impl@winrt@@UEAAHPEAPEAX@Z @ 0x18040FC80 (-GetRuntimeClassName@-$produce_base@UXamlExplorerHostWindow@factory_implementation@XamlExplorerH.c)
 *     ?GetRuntimeClassName@?$produce_base@UXamlApplication_WASDK@factory_implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlApplication_WASDKStatics@345678@X@impl@winrt@@UEAAHPEAPEAX@Z @ 0x180467ED0 (-GetRuntimeClassName@-$produce_base@UXamlApplication_WASDK@factory_implementation@WASDK@XamlExpl.c)
 *     ?GetRuntimeClassName@?$produce_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IIterable@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@X@impl@winrt@@UEAAHPEAPEAX@Z @ 0x180467EF0 (-GetRuntimeClassName@-$produce_base@U-$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Win.c)
 *     ?GetRuntimeClassName@?$produce_base@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIApplicationOverrides@Xaml@UI@67@X@impl@winrt@@UEAAHPEAPEAX@Z @ 0x180467F10 (-GetRuntimeClassName@-$produce_base@UXamlApplication@implementation@XamlExplorerHost@Shell@Inter.c)
 *     ?GetRuntimeClassName@?$produce_base@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@UIActivatedEventArgsWithUser@Activation@ApplicationModel@Windows@6@X@impl@winrt@@UEAAHPEAPEAX@Z @ 0x18047F350 (-GetRuntimeClassName@-$produce_base@USearchAppActivatedEventArgs@implementation@Shell@UI@Windows.c)
 *     ?GetRuntimeClassName@?$produce_base@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@UILaunchActivatedEventArgs2@Activation@ApplicationModel@Windows@6@X@impl@winrt@@UEAAHPEAPEAX@Z @ 0x18047F370 (-GetRuntimeClassName@-$produce_base@USearchAppActivatedEventArgs@implementation@She_ea_18047F370.c)
 *     ?GetRuntimeClassName@?$produce_base@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIApplicationOverrides2@Xaml@UI@67@X@impl@winrt@@UEAAHPEAPEAX@Z @ 0x18047F390 (-GetRuntimeClassName@-$produce_base@UXamlApplication@implementation@XamlExplorerHos_ea_18047F390.c)
 *     ?GetRuntimeClassName@?$produce_base@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@UIPrelaunchActivatedEventArgs@Activation@ApplicationModel@Windows@6@X@impl@winrt@@UEAAHPEAPEAX@Z @ 0x18047F3B0 (-GetRuntimeClassName@-$produce_base@USearchAppActivatedEventArgs@implementation@She_ea_18047F3B0.c)
 *     ?abi_GetRuntimeClassName@?$root_implements@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@U134567@Ucomposable@7@Ucomposing@7@USnapLayoutManagerExtension@PlatformExtensions@4567@@impl@winrt@@IEAAHPEAPEAX@Z @ 0x180685E44 (-abi_GetRuntimeClassName@-$root_implements@UDesktopSnapLayoutManager@implementation@SnapComponen.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::iterable_base<winrt::impl::map_impl<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem,std::map<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>>>::NonDelegatingGetRuntimeClassName(
        __int64 a1,
        _QWORD *a2)
{
  __int64 *v3; // rax
  __int64 v4; // rcx
  __int64 result; // rax
  volatile signed __int32 *v6; // [rsp+30h] [rbp+8h] BYREF

  try
  {
    v3 = (__int64 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 40LL))(a1);
    v4 = *v3;
    *v3 = 0LL;
    *a2 = v4;
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v6);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v6);
  }
  return result;
}
